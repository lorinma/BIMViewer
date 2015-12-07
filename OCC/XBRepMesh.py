# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.11
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (3,0,0):
    new_instancemethod = lambda func, inst, cls: _XBRepMesh.SWIG_PyInstanceMethod_New(func)
else:
    from new import instancemethod as new_instancemethod
if version_info >= (2,6,0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_XBRepMesh', [dirname(__file__)])
        except ImportError:
            import _XBRepMesh
            return _XBRepMesh
        if fp is not None:
            try:
                _mod = imp.load_module('_XBRepMesh', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _XBRepMesh = swig_import_helper()
    del swig_import_helper
else:
    import _XBRepMesh
del version_info
try:
    _swig_property = property
except NameError:
    pass # Python < 2.2 doesn't have 'property'.
def _swig_setattr_nondynamic(self,class_type,name,value,static=1):
    if (name == "thisown"): return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name,None)
    if method: return method(self,value)
    if (not static):
        self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)

def _swig_setattr(self,class_type,name,value):
    return _swig_setattr_nondynamic(self,class_type,name,value,0)

def _swig_getattr(self,class_type,name):
    if (name == "thisown"): return self.this.own()
    method = class_type.__swig_getmethods__.get(name,None)
    if method: return method(self)
    raise AttributeError(name)

def _swig_repr(self):
    try: strthis = "proxy of " + self.this.__repr__()
    except: strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object : pass
    _newclass = 0


def _swig_setattr_nondynamic_method(set):
    def set_attr(self,name,value):
        if (name == "thisown"): return self.this.own(value)
        if hasattr(self,name) or (name == "this"):
            set(self,name,value)
        else:
            raise AttributeError("You cannot add attributes to %s" % self)
    return set_attr


class SwigPyIterator(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    def __init__(self, *args, **kwargs): raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _XBRepMesh.delete_SwigPyIterator
    def __iter__(self): return self
SwigPyIterator.value = new_instancemethod(_XBRepMesh.SwigPyIterator_value,None,SwigPyIterator)
SwigPyIterator.incr = new_instancemethod(_XBRepMesh.SwigPyIterator_incr,None,SwigPyIterator)
SwigPyIterator.decr = new_instancemethod(_XBRepMesh.SwigPyIterator_decr,None,SwigPyIterator)
SwigPyIterator.distance = new_instancemethod(_XBRepMesh.SwigPyIterator_distance,None,SwigPyIterator)
SwigPyIterator.equal = new_instancemethod(_XBRepMesh.SwigPyIterator_equal,None,SwigPyIterator)
SwigPyIterator.copy = new_instancemethod(_XBRepMesh.SwigPyIterator_copy,None,SwigPyIterator)
SwigPyIterator.next = new_instancemethod(_XBRepMesh.SwigPyIterator_next,None,SwigPyIterator)
SwigPyIterator.__next__ = new_instancemethod(_XBRepMesh.SwigPyIterator___next__,None,SwigPyIterator)
SwigPyIterator.previous = new_instancemethod(_XBRepMesh.SwigPyIterator_previous,None,SwigPyIterator)
SwigPyIterator.advance = new_instancemethod(_XBRepMesh.SwigPyIterator_advance,None,SwigPyIterator)
SwigPyIterator.__eq__ = new_instancemethod(_XBRepMesh.SwigPyIterator___eq__,None,SwigPyIterator)
SwigPyIterator.__ne__ = new_instancemethod(_XBRepMesh.SwigPyIterator___ne__,None,SwigPyIterator)
SwigPyIterator.__iadd__ = new_instancemethod(_XBRepMesh.SwigPyIterator___iadd__,None,SwigPyIterator)
SwigPyIterator.__isub__ = new_instancemethod(_XBRepMesh.SwigPyIterator___isub__,None,SwigPyIterator)
SwigPyIterator.__add__ = new_instancemethod(_XBRepMesh.SwigPyIterator___add__,None,SwigPyIterator)
SwigPyIterator.__sub__ = new_instancemethod(_XBRepMesh.SwigPyIterator___sub__,None,SwigPyIterator)
SwigPyIterator_swigregister = _XBRepMesh.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

import OCC.TopoDS
import OCC.MMgt
import OCC.Standard
import OCC.TCollection
import OCC.TopLoc
import OCC.gp
import OCC.TopAbs
import OCC.BRepMesh
import OCC.NCollection
import OCC.TColStd
import OCC.Bnd
import OCC.TopTools
import OCC.Message
import OCC.BRepAdaptor
import OCC.Adaptor3d
import OCC.GeomAbs
import OCC.Geom
import OCC.TColgp
import OCC.Adaptor2d
import OCC.Geom2d
import OCC.math
import OCC.GeomAdaptor
import OCC.Geom2dAdaptor
import OCC.Poly
import OCC.TShort
class xbrepmesh(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def Discret(*args):
        """
        :param theShape:
        :type theShape: TopoDS_Shape &
        :param theDeflection:
        :type theDeflection: float
        :param theAngle:
        :type theAngle: float
        :param theAlgo:
        :type theAlgo: BRepMesh_PDiscretRoot &
        :rtype: int

        """
        return _XBRepMesh.xbrepmesh_Discret(*args)

    Discret = staticmethod(Discret)
    def __init__(self): 
        _XBRepMesh.xbrepmesh_swiginit(self,_XBRepMesh.new_xbrepmesh())
    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


xbrepmesh._kill_pointed = new_instancemethod(_XBRepMesh.xbrepmesh__kill_pointed,None,xbrepmesh)
xbrepmesh_swigregister = _XBRepMesh.xbrepmesh_swigregister
xbrepmesh_swigregister(xbrepmesh)

def xbrepmesh_Discret(*args):
  """
    :param theShape:
    :type theShape: TopoDS_Shape &
    :param theDeflection:
    :type theDeflection: float
    :param theAngle:
    :type theAngle: float
    :param theAlgo:
    :type theAlgo: BRepMesh_PDiscretRoot &
    :rtype: int

    """
  return _XBRepMesh.xbrepmesh_Discret(*args)



