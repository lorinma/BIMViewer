from flask import Flask, render_template, request
import requests
import os
from OCC.BRepTools import breptools_Read
from OCC.TopoDS import TopoDS_Shape
from OCC.BRep import BRep_Builder
from OCC.Visualization import Tesselator
import json

app = Flask(__name__)
app.config['APP_TEMP_FILE'] = os.path.join(os.path.dirname(os.path.abspath(__file__)), 'static')

#parse the ifc file and render it
@app.route('/<entity_id>')
def brep_viewer(entity_id):
  if entity_id=="home":
    return render_template('viewer.html');
  r = requests.get('http://restfulifc.herokuapp.com/geometry?where={"entity_id": "'+entity_id+'"}')
  response=r.json()
  
  brep=''
  if '_items' in response.keys():
      items=response['_items']
      item=items[0]
      brep=item['occ_brep'].encode('ascii')
  else:
      brep=response['occ_brep'].encode('ascii')
  
  path_brep = os.path.join(app.config['APP_TEMP_FILE'], entity_id+".brep")
  path_js = os.path.join(app.config['APP_TEMP_FILE'], entity_id+".js")
  with open(path_brep, 'wb') as f:
      f.write(brep)
  f.close()
  get_tess(path_brep,path_js)
  
  return render_template('viewer.html',js_filename=entity_id+".js")

def get_tess(brep_filename,js_filename):
  shape = TopoDS_Shape()
  builder = BRep_Builder()
  breptools_Read(shape, str(brep_filename), builder)
  tess = Tesselator(shape)
  tess.ExportShapeToJSON(str(js_filename))

#parse the ifc file and render it
@app.route('/pcd/<filename>')
def pcd_viewer(filename):
  return render_template('pcd.html',filename=filename+".pcd")
  
if __name__ == "__main__":
    # app.run()
    app.run(host=os.environ['IP'],port=int(os.environ['PORT']),debug=True)