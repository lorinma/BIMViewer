# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.11
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (3,0,0):
    new_instancemethod = lambda func, inst, cls: _BiTgte.SWIG_PyInstanceMethod_New(func)
else:
    from new import instancemethod as new_instancemethod
if version_info >= (2,6,0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_BiTgte', [dirname(__file__)])
        except ImportError:
            import _BiTgte
            return _BiTgte
        if fp is not None:
            try:
                _mod = imp.load_module('_BiTgte', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _BiTgte = swig_import_helper()
    del swig_import_helper
else:
    import _BiTgte
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
    __swig_destroy__ = _BiTgte.delete_SwigPyIterator
    def __iter__(self): return self
SwigPyIterator.value = new_instancemethod(_BiTgte.SwigPyIterator_value,None,SwigPyIterator)
SwigPyIterator.incr = new_instancemethod(_BiTgte.SwigPyIterator_incr,None,SwigPyIterator)
SwigPyIterator.decr = new_instancemethod(_BiTgte.SwigPyIterator_decr,None,SwigPyIterator)
SwigPyIterator.distance = new_instancemethod(_BiTgte.SwigPyIterator_distance,None,SwigPyIterator)
SwigPyIterator.equal = new_instancemethod(_BiTgte.SwigPyIterator_equal,None,SwigPyIterator)
SwigPyIterator.copy = new_instancemethod(_BiTgte.SwigPyIterator_copy,None,SwigPyIterator)
SwigPyIterator.next = new_instancemethod(_BiTgte.SwigPyIterator_next,None,SwigPyIterator)
SwigPyIterator.__next__ = new_instancemethod(_BiTgte.SwigPyIterator___next__,None,SwigPyIterator)
SwigPyIterator.previous = new_instancemethod(_BiTgte.SwigPyIterator_previous,None,SwigPyIterator)
SwigPyIterator.advance = new_instancemethod(_BiTgte.SwigPyIterator_advance,None,SwigPyIterator)
SwigPyIterator.__eq__ = new_instancemethod(_BiTgte.SwigPyIterator___eq__,None,SwigPyIterator)
SwigPyIterator.__ne__ = new_instancemethod(_BiTgte.SwigPyIterator___ne__,None,SwigPyIterator)
SwigPyIterator.__iadd__ = new_instancemethod(_BiTgte.SwigPyIterator___iadd__,None,SwigPyIterator)
SwigPyIterator.__isub__ = new_instancemethod(_BiTgte.SwigPyIterator___isub__,None,SwigPyIterator)
SwigPyIterator.__add__ = new_instancemethod(_BiTgte.SwigPyIterator___add__,None,SwigPyIterator)
SwigPyIterator.__sub__ = new_instancemethod(_BiTgte.SwigPyIterator___sub__,None,SwigPyIterator)
SwigPyIterator_swigregister = _BiTgte.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

import OCC.TopoDS
import OCC.MMgt
import OCC.Standard
import OCC.TCollection
import OCC.TopLoc
import OCC.gp
import OCC.TopAbs
import OCC.Geom
import OCC.GeomAbs
import OCC.TColgp
import OCC.TColStd
import OCC.TopTools
import OCC.Message
import OCC.Geom2d
import OCC.Adaptor3d
import OCC.Adaptor2d
import OCC.math
import OCC.Bnd
BiTgte_FaceFace = _BiTgte.BiTgte_FaceFace
BiTgte_FaceEdge = _BiTgte.BiTgte_FaceEdge
BiTgte_FaceVertex = _BiTgte.BiTgte_FaceVertex
BiTgte_EdgeEdge = _BiTgte.BiTgte_EdgeEdge
BiTgte_EdgeVertex = _BiTgte.BiTgte_EdgeVertex
BiTgte_VertexVertex = _BiTgte.BiTgte_VertexVertex
class BiTgte_Blend(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        * <S>: Shape to be rounded <Radius>: radius of the fillet <Tol>: Tol3d used in approximations <NUBS>: if true, generate only NUBS surfaces,  if false, generate analytical surfaces if possible

        :param S:
        :type S: TopoDS_Shape &
        :param Radius:
        :type Radius: float
        :param Tol:
        :type Tol: float
        :param NUBS:
        :type NUBS: bool
        :rtype: None

        """
        _BiTgte.BiTgte_Blend_swiginit(self,_BiTgte.new_BiTgte_Blend(*args))
    def Init(self, *args):
        """
        :param S:
        :type S: TopoDS_Shape &
        :param Radius:
        :type Radius: float
        :param Tol:
        :type Tol: float
        :param NUBS:
        :type NUBS: bool
        :rtype: None

        """
        return _BiTgte.BiTgte_Blend_Init(self, *args)

    def Clear(self, *args):
        """
        * Clear all the Fields.

        :rtype: None

        """
        return _BiTgte.BiTgte_Blend_Clear(self, *args)

    def SetFaces(self, *args):
        """
        * Set two faces of <myShape> on which the Sphere  must roll.

        :param F1:
        :type F1: TopoDS_Face &
        :param F2:
        :type F2: TopoDS_Face &
        :rtype: None

        """
        return _BiTgte.BiTgte_Blend_SetFaces(self, *args)

    def SetEdge(self, *args):
        """
        * Set an edge of <myShape> to be rounded.

        :param Edge:
        :type Edge: TopoDS_Edge &
        :rtype: None

        """
        return _BiTgte.BiTgte_Blend_SetEdge(self, *args)

    def SetStoppingFace(self, *args):
        """
        * Set a face on which the fillet must stop.

        :param Face:
        :type Face: TopoDS_Face &
        :rtype: None

        """
        return _BiTgte.BiTgte_Blend_SetStoppingFace(self, *args)

    def Perform(self, *args):
        """
        * Compute the generated surfaces. If <BuildShape> is true, compute the resulting Shape. If false, only the blending surfaces are computed.

        :param BuildShape: default value is Standard_True
        :type BuildShape: bool
        :rtype: None

        """
        return _BiTgte.BiTgte_Blend_Perform(self, *args)

    def IsDone(self, *args):
        """
        :rtype: bool

        """
        return _BiTgte.BiTgte_Blend_IsDone(self, *args)

    def Shape(self, *args):
        """
        * returns the result

        :rtype: TopoDS_Shape

        """
        return _BiTgte.BiTgte_Blend_Shape(self, *args)

    def NbSurfaces(self, *args):
        """
        * returns the Number of generated surfaces.

        :rtype: int

        """
        return _BiTgte.BiTgte_Blend_NbSurfaces(self, *args)

    def CenterLines(self, *args):
        """
        * set in <LC> all the center lines

        :param LC:
        :type LC: TopTools_ListOfShape &
        :rtype: None

        """
        return _BiTgte.BiTgte_Blend_CenterLines(self, *args)

    def Surface(self, *args):
        """
        * returns the surface of range Index

        :param Index:
        :type Index: int
        :rtype: Handle_Geom_Surface

        * returns the surface generated by the centerline. <CenterLine> may be - an edge : generate a pipe. - a vertex : generate a sphere. Warning: returns a Null Handle if <CenterLine> generates no surface.

        :param CenterLine:
        :type CenterLine: TopoDS_Shape &
        :rtype: Handle_Geom_Surface

        """
        return _BiTgte.BiTgte_Blend_Surface(self, *args)

    def Face(self, *args):
        """
        * returns the surface of range Index

        :param Index:
        :type Index: int
        :rtype: TopoDS_Face

        * returns the face generated by the centerline. <CenterLine> may be - an edge : generate a pipe. - a vertex : generate a sphere. Warning: returns a Null Shape if <CenterLine> generates no surface.

        :param CenterLine:
        :type CenterLine: TopoDS_Shape &
        :rtype: TopoDS_Face

        """
        return _BiTgte.BiTgte_Blend_Face(self, *args)

    def ContactType(self, *args):
        """
        * returns the type of contact

        :param Index:
        :type Index: int
        :rtype: BiTgte_ContactType

        """
        return _BiTgte.BiTgte_Blend_ContactType(self, *args)

    def SupportShape1(self, *args):
        """
        * gives the first support shape relative to SurfaceFillet(Index);

        :param Index:
        :type Index: int
        :rtype: TopoDS_Shape

        """
        return _BiTgte.BiTgte_Blend_SupportShape1(self, *args)

    def SupportShape2(self, *args):
        """
        * gives the second support shape relative to SurfaceFillet(Index);

        :param Index:
        :type Index: int
        :rtype: TopoDS_Shape

        """
        return _BiTgte.BiTgte_Blend_SupportShape2(self, *args)

    def CurveOnShape1(self, *args):
        """
        * gives the 3d curve of SurfaceFillet(Index) on SupportShape1(Index)

        :param Index:
        :type Index: int
        :rtype: Handle_Geom_Curve

        """
        return _BiTgte.BiTgte_Blend_CurveOnShape1(self, *args)

    def CurveOnShape2(self, *args):
        """
        * gives the 3d curve of SurfaceFillet(Index) on SupportShape2(Index)

        :param Index:
        :type Index: int
        :rtype: Handle_Geom_Curve

        """
        return _BiTgte.BiTgte_Blend_CurveOnShape2(self, *args)

    def PCurveOnFace1(self, *args):
        """
        * gives the PCurve associated to CurvOnShape1(Index) on the support face Warning: returns a Null Handle if SupportShape1 is not a Face

        :param Index:
        :type Index: int
        :rtype: Handle_Geom2d_Curve

        """
        return _BiTgte.BiTgte_Blend_PCurveOnFace1(self, *args)

    def PCurve1OnFillet(self, *args):
        """
        * gives the PCurve associated to CurveOnShape1(Index) on the Fillet

        :param Index:
        :type Index: int
        :rtype: Handle_Geom2d_Curve

        """
        return _BiTgte.BiTgte_Blend_PCurve1OnFillet(self, *args)

    def PCurveOnFace2(self, *args):
        """
        * gives the PCurve associated to CurveOnShape2(Index) on the support face Warning: returns a Null Handle if SupportShape2 is not a Face

        :param Index:
        :type Index: int
        :rtype: Handle_Geom2d_Curve

        """
        return _BiTgte.BiTgte_Blend_PCurveOnFace2(self, *args)

    def PCurve2OnFillet(self, *args):
        """
        * gives the PCurve associated to CurveOnShape2(Index) on the fillet

        :param Index:
        :type Index: int
        :rtype: Handle_Geom2d_Curve

        """
        return _BiTgte.BiTgte_Blend_PCurve2OnFillet(self, *args)

    def NbBranches(self, *args):
        """
        :rtype: int

        """
        return _BiTgte.BiTgte_Blend_NbBranches(self, *args)

    def IndicesOfBranche(self, *args):
        """
        * Set in <From>,<To> the indices of the faces of the branche <Index>. i.e: Branche<Index> = Face(From) + Face(From+1) + ..+ Face(To)

        :param Index:
        :type Index: int
        :param From:
        :type From: int &
        :param To:
        :type To: int &
        :rtype: None

        """
        return _BiTgte.BiTgte_Blend_IndicesOfBranche(self, *args)

    def ComputeCenters(self, *args):
        """
        * Computes the center lines

        :rtype: None

        """
        return _BiTgte.BiTgte_Blend_ComputeCenters(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


BiTgte_Blend.Init = new_instancemethod(_BiTgte.BiTgte_Blend_Init,None,BiTgte_Blend)
BiTgte_Blend.Clear = new_instancemethod(_BiTgte.BiTgte_Blend_Clear,None,BiTgte_Blend)
BiTgte_Blend.SetFaces = new_instancemethod(_BiTgte.BiTgte_Blend_SetFaces,None,BiTgte_Blend)
BiTgte_Blend.SetEdge = new_instancemethod(_BiTgte.BiTgte_Blend_SetEdge,None,BiTgte_Blend)
BiTgte_Blend.SetStoppingFace = new_instancemethod(_BiTgte.BiTgte_Blend_SetStoppingFace,None,BiTgte_Blend)
BiTgte_Blend.Perform = new_instancemethod(_BiTgte.BiTgte_Blend_Perform,None,BiTgte_Blend)
BiTgte_Blend.IsDone = new_instancemethod(_BiTgte.BiTgte_Blend_IsDone,None,BiTgte_Blend)
BiTgte_Blend.Shape = new_instancemethod(_BiTgte.BiTgte_Blend_Shape,None,BiTgte_Blend)
BiTgte_Blend.NbSurfaces = new_instancemethod(_BiTgte.BiTgte_Blend_NbSurfaces,None,BiTgte_Blend)
BiTgte_Blend.CenterLines = new_instancemethod(_BiTgte.BiTgte_Blend_CenterLines,None,BiTgte_Blend)
BiTgte_Blend.Surface = new_instancemethod(_BiTgte.BiTgte_Blend_Surface,None,BiTgte_Blend)
BiTgte_Blend.Face = new_instancemethod(_BiTgte.BiTgte_Blend_Face,None,BiTgte_Blend)
BiTgte_Blend.ContactType = new_instancemethod(_BiTgte.BiTgte_Blend_ContactType,None,BiTgte_Blend)
BiTgte_Blend.SupportShape1 = new_instancemethod(_BiTgte.BiTgte_Blend_SupportShape1,None,BiTgte_Blend)
BiTgte_Blend.SupportShape2 = new_instancemethod(_BiTgte.BiTgte_Blend_SupportShape2,None,BiTgte_Blend)
BiTgte_Blend.CurveOnShape1 = new_instancemethod(_BiTgte.BiTgte_Blend_CurveOnShape1,None,BiTgte_Blend)
BiTgte_Blend.CurveOnShape2 = new_instancemethod(_BiTgte.BiTgte_Blend_CurveOnShape2,None,BiTgte_Blend)
BiTgte_Blend.PCurveOnFace1 = new_instancemethod(_BiTgte.BiTgte_Blend_PCurveOnFace1,None,BiTgte_Blend)
BiTgte_Blend.PCurve1OnFillet = new_instancemethod(_BiTgte.BiTgte_Blend_PCurve1OnFillet,None,BiTgte_Blend)
BiTgte_Blend.PCurveOnFace2 = new_instancemethod(_BiTgte.BiTgte_Blend_PCurveOnFace2,None,BiTgte_Blend)
BiTgte_Blend.PCurve2OnFillet = new_instancemethod(_BiTgte.BiTgte_Blend_PCurve2OnFillet,None,BiTgte_Blend)
BiTgte_Blend.NbBranches = new_instancemethod(_BiTgte.BiTgte_Blend_NbBranches,None,BiTgte_Blend)
BiTgte_Blend.IndicesOfBranche = new_instancemethod(_BiTgte.BiTgte_Blend_IndicesOfBranche,None,BiTgte_Blend)
BiTgte_Blend.ComputeCenters = new_instancemethod(_BiTgte.BiTgte_Blend_ComputeCenters,None,BiTgte_Blend)
BiTgte_Blend._kill_pointed = new_instancemethod(_BiTgte.BiTgte_Blend__kill_pointed,None,BiTgte_Blend)
BiTgte_Blend_swigregister = _BiTgte.BiTgte_Blend_swigregister
BiTgte_Blend_swigregister(BiTgte_Blend)

class BiTgte_CurveOnEdge(OCC.Adaptor3d.Adaptor3d_Curve):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        :param EonF:
        :type EonF: TopoDS_Edge &
        :param Edge:
        :type Edge: TopoDS_Edge &
        :rtype: None

        """
        _BiTgte.BiTgte_CurveOnEdge_swiginit(self,_BiTgte.new_BiTgte_CurveOnEdge(*args))
    def Init(self, *args):
        """
        :param EonF:
        :type EonF: TopoDS_Edge &
        :param Edge:
        :type Edge: TopoDS_Edge &
        :rtype: None

        """
        return _BiTgte.BiTgte_CurveOnEdge_Init(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


BiTgte_CurveOnEdge.Init = new_instancemethod(_BiTgte.BiTgte_CurveOnEdge_Init,None,BiTgte_CurveOnEdge)
BiTgte_CurveOnEdge._kill_pointed = new_instancemethod(_BiTgte.BiTgte_CurveOnEdge__kill_pointed,None,BiTgte_CurveOnEdge)
BiTgte_CurveOnEdge_swigregister = _BiTgte.BiTgte_CurveOnEdge_swigregister
BiTgte_CurveOnEdge_swigregister(BiTgte_CurveOnEdge)

class BiTgte_CurveOnVertex(OCC.Adaptor3d.Adaptor3d_Curve):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        :param EonF:
        :type EonF: TopoDS_Edge &
        :param V:
        :type V: TopoDS_Vertex &
        :rtype: None

        """
        _BiTgte.BiTgte_CurveOnVertex_swiginit(self,_BiTgte.new_BiTgte_CurveOnVertex(*args))
    def Init(self, *args):
        """
        :param EonF:
        :type EonF: TopoDS_Edge &
        :param V:
        :type V: TopoDS_Vertex &
        :rtype: None

        """
        return _BiTgte.BiTgte_CurveOnVertex_Init(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


BiTgte_CurveOnVertex.Init = new_instancemethod(_BiTgte.BiTgte_CurveOnVertex_Init,None,BiTgte_CurveOnVertex)
BiTgte_CurveOnVertex._kill_pointed = new_instancemethod(_BiTgte.BiTgte_CurveOnVertex__kill_pointed,None,BiTgte_CurveOnVertex)
BiTgte_CurveOnVertex_swigregister = _BiTgte.BiTgte_CurveOnVertex_swigregister
BiTgte_CurveOnVertex_swigregister(BiTgte_CurveOnVertex)

class BiTgte_DataMapIteratorOfDataMapOfShapeBox(OCC.TCollection.TCollection_BasicMapIterator):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        :param aMap:
        :type aMap: BiTgte_DataMapOfShapeBox &
        :rtype: None

        """
        _BiTgte.BiTgte_DataMapIteratorOfDataMapOfShapeBox_swiginit(self,_BiTgte.new_BiTgte_DataMapIteratorOfDataMapOfShapeBox(*args))
    def Initialize(self, *args):
        """
        :param aMap:
        :type aMap: BiTgte_DataMapOfShapeBox &
        :rtype: None

        """
        return _BiTgte.BiTgte_DataMapIteratorOfDataMapOfShapeBox_Initialize(self, *args)

    def Key(self, *args):
        """
        :rtype: TopoDS_Shape

        """
        return _BiTgte.BiTgte_DataMapIteratorOfDataMapOfShapeBox_Key(self, *args)

    def Value(self, *args):
        """
        :rtype: Bnd_Box

        """
        return _BiTgte.BiTgte_DataMapIteratorOfDataMapOfShapeBox_Value(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


BiTgte_DataMapIteratorOfDataMapOfShapeBox.Initialize = new_instancemethod(_BiTgte.BiTgte_DataMapIteratorOfDataMapOfShapeBox_Initialize,None,BiTgte_DataMapIteratorOfDataMapOfShapeBox)
BiTgte_DataMapIteratorOfDataMapOfShapeBox.Key = new_instancemethod(_BiTgte.BiTgte_DataMapIteratorOfDataMapOfShapeBox_Key,None,BiTgte_DataMapIteratorOfDataMapOfShapeBox)
BiTgte_DataMapIteratorOfDataMapOfShapeBox.Value = new_instancemethod(_BiTgte.BiTgte_DataMapIteratorOfDataMapOfShapeBox_Value,None,BiTgte_DataMapIteratorOfDataMapOfShapeBox)
BiTgte_DataMapIteratorOfDataMapOfShapeBox._kill_pointed = new_instancemethod(_BiTgte.BiTgte_DataMapIteratorOfDataMapOfShapeBox__kill_pointed,None,BiTgte_DataMapIteratorOfDataMapOfShapeBox)
BiTgte_DataMapIteratorOfDataMapOfShapeBox_swigregister = _BiTgte.BiTgte_DataMapIteratorOfDataMapOfShapeBox_swigregister
BiTgte_DataMapIteratorOfDataMapOfShapeBox_swigregister(BiTgte_DataMapIteratorOfDataMapOfShapeBox)

class BiTgte_DataMapNodeOfDataMapOfShapeBox(OCC.TCollection.TCollection_MapNode):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :param K:
        :type K: TopoDS_Shape &
        :param I:
        :type I: Bnd_Box &
        :param n:
        :type n: TCollection_MapNodePtr &
        :rtype: None

        """
        _BiTgte.BiTgte_DataMapNodeOfDataMapOfShapeBox_swiginit(self,_BiTgte.new_BiTgte_DataMapNodeOfDataMapOfShapeBox(*args))
    def Key(self, *args):
        """
        :rtype: TopoDS_Shape

        """
        return _BiTgte.BiTgte_DataMapNodeOfDataMapOfShapeBox_Key(self, *args)

    def Value(self, *args):
        """
        :rtype: Bnd_Box

        """
        return _BiTgte.BiTgte_DataMapNodeOfDataMapOfShapeBox_Value(self, *args)

    def _kill_pointed(self):
        """_kill_pointed(BiTgte_DataMapNodeOfDataMapOfShapeBox self)"""
        return _BiTgte.BiTgte_DataMapNodeOfDataMapOfShapeBox__kill_pointed(self)

    def GetHandle(self):
        """GetHandle(BiTgte_DataMapNodeOfDataMapOfShapeBox self) -> Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox"""
        return _BiTgte.BiTgte_DataMapNodeOfDataMapOfShapeBox_GetHandle(self)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


BiTgte_DataMapNodeOfDataMapOfShapeBox.Key = new_instancemethod(_BiTgte.BiTgte_DataMapNodeOfDataMapOfShapeBox_Key,None,BiTgte_DataMapNodeOfDataMapOfShapeBox)
BiTgte_DataMapNodeOfDataMapOfShapeBox.Value = new_instancemethod(_BiTgte.BiTgte_DataMapNodeOfDataMapOfShapeBox_Value,None,BiTgte_DataMapNodeOfDataMapOfShapeBox)
BiTgte_DataMapNodeOfDataMapOfShapeBox._kill_pointed = new_instancemethod(_BiTgte.BiTgte_DataMapNodeOfDataMapOfShapeBox__kill_pointed,None,BiTgte_DataMapNodeOfDataMapOfShapeBox)
BiTgte_DataMapNodeOfDataMapOfShapeBox.GetHandle = new_instancemethod(_BiTgte.BiTgte_DataMapNodeOfDataMapOfShapeBox_GetHandle,None,BiTgte_DataMapNodeOfDataMapOfShapeBox)
BiTgte_DataMapNodeOfDataMapOfShapeBox_swigregister = _BiTgte.BiTgte_DataMapNodeOfDataMapOfShapeBox_swigregister
BiTgte_DataMapNodeOfDataMapOfShapeBox_swigregister(BiTgte_DataMapNodeOfDataMapOfShapeBox)

class Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox(OCC.TCollection.Handle_TCollection_MapNode):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        _BiTgte.Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox_swiginit(self,_BiTgte.new_Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox(*args))
    DownCast = staticmethod(_BiTgte.Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox_DownCast)
    def __del__(self):
        try:
            self.thisown = False
            GarbageCollector.garbage.collect_object(self)
        except:
            pass


Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox.Nullify = new_instancemethod(_BiTgte.Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox_Nullify,None,Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox)
Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox.IsNull = new_instancemethod(_BiTgte.Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox_IsNull,None,Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox)
Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox.GetObject = new_instancemethod(_BiTgte.Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox_GetObject,None,Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox)
Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox._kill_pointed = new_instancemethod(_BiTgte.Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox__kill_pointed,None,Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox)
Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox_swigregister = _BiTgte.Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox_swigregister
Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox_swigregister(Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox)

def Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox_DownCast(*args):
  return _BiTgte.Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox_DownCast(*args)
Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox_DownCast = _BiTgte.Handle_BiTgte_DataMapNodeOfDataMapOfShapeBox_DownCast

class BiTgte_DataMapOfShapeBox(OCC.TCollection.TCollection_BasicMap):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :param NbBuckets: default value is 1
        :type NbBuckets: int
        :rtype: None

        """
        _BiTgte.BiTgte_DataMapOfShapeBox_swiginit(self,_BiTgte.new_BiTgte_DataMapOfShapeBox(*args))
    def Assign(self, *args):
        """
        :param Other:
        :type Other: BiTgte_DataMapOfShapeBox &
        :rtype: BiTgte_DataMapOfShapeBox

        """
        return _BiTgte.BiTgte_DataMapOfShapeBox_Assign(self, *args)

    def Set(self, *args):
        """
        :param Other:
        :type Other: BiTgte_DataMapOfShapeBox &
        :rtype: BiTgte_DataMapOfShapeBox

        """
        return _BiTgte.BiTgte_DataMapOfShapeBox_Set(self, *args)

    def ReSize(self, *args):
        """
        :param NbBuckets:
        :type NbBuckets: int
        :rtype: None

        """
        return _BiTgte.BiTgte_DataMapOfShapeBox_ReSize(self, *args)

    def Clear(self, *args):
        """
        :rtype: None

        """
        return _BiTgte.BiTgte_DataMapOfShapeBox_Clear(self, *args)

    def Bind(self, *args):
        """
        :param K:
        :type K: TopoDS_Shape &
        :param I:
        :type I: Bnd_Box &
        :rtype: bool

        """
        return _BiTgte.BiTgte_DataMapOfShapeBox_Bind(self, *args)

    def IsBound(self, *args):
        """
        :param K:
        :type K: TopoDS_Shape &
        :rtype: bool

        """
        return _BiTgte.BiTgte_DataMapOfShapeBox_IsBound(self, *args)

    def UnBind(self, *args):
        """
        :param K:
        :type K: TopoDS_Shape &
        :rtype: bool

        """
        return _BiTgte.BiTgte_DataMapOfShapeBox_UnBind(self, *args)

    def Find(self, *args):
        """
        :param K:
        :type K: TopoDS_Shape &
        :rtype: Bnd_Box

        """
        return _BiTgte.BiTgte_DataMapOfShapeBox_Find(self, *args)

    def ChangeFind(self, *args):
        """
        :param K:
        :type K: TopoDS_Shape &
        :rtype: Bnd_Box

        """
        return _BiTgte.BiTgte_DataMapOfShapeBox_ChangeFind(self, *args)

    def Find1(self, *args):
        """
        :param K:
        :type K: TopoDS_Shape &
        :rtype: Standard_Address

        """
        return _BiTgte.BiTgte_DataMapOfShapeBox_Find1(self, *args)

    def ChangeFind1(self, *args):
        """
        :param K:
        :type K: TopoDS_Shape &
        :rtype: Standard_Address

        """
        return _BiTgte.BiTgte_DataMapOfShapeBox_ChangeFind1(self, *args)

    def _kill_pointed(self):
        """_kill_pointed(BiTgte_DataMapOfShapeBox self)"""
        return _BiTgte.BiTgte_DataMapOfShapeBox__kill_pointed(self)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


BiTgte_DataMapOfShapeBox.Assign = new_instancemethod(_BiTgte.BiTgte_DataMapOfShapeBox_Assign,None,BiTgte_DataMapOfShapeBox)
BiTgte_DataMapOfShapeBox.Set = new_instancemethod(_BiTgte.BiTgte_DataMapOfShapeBox_Set,None,BiTgte_DataMapOfShapeBox)
BiTgte_DataMapOfShapeBox.ReSize = new_instancemethod(_BiTgte.BiTgte_DataMapOfShapeBox_ReSize,None,BiTgte_DataMapOfShapeBox)
BiTgte_DataMapOfShapeBox.Clear = new_instancemethod(_BiTgte.BiTgte_DataMapOfShapeBox_Clear,None,BiTgte_DataMapOfShapeBox)
BiTgte_DataMapOfShapeBox.Bind = new_instancemethod(_BiTgte.BiTgte_DataMapOfShapeBox_Bind,None,BiTgte_DataMapOfShapeBox)
BiTgte_DataMapOfShapeBox.IsBound = new_instancemethod(_BiTgte.BiTgte_DataMapOfShapeBox_IsBound,None,BiTgte_DataMapOfShapeBox)
BiTgte_DataMapOfShapeBox.UnBind = new_instancemethod(_BiTgte.BiTgte_DataMapOfShapeBox_UnBind,None,BiTgte_DataMapOfShapeBox)
BiTgte_DataMapOfShapeBox.Find = new_instancemethod(_BiTgte.BiTgte_DataMapOfShapeBox_Find,None,BiTgte_DataMapOfShapeBox)
BiTgte_DataMapOfShapeBox.ChangeFind = new_instancemethod(_BiTgte.BiTgte_DataMapOfShapeBox_ChangeFind,None,BiTgte_DataMapOfShapeBox)
BiTgte_DataMapOfShapeBox.Find1 = new_instancemethod(_BiTgte.BiTgte_DataMapOfShapeBox_Find1,None,BiTgte_DataMapOfShapeBox)
BiTgte_DataMapOfShapeBox.ChangeFind1 = new_instancemethod(_BiTgte.BiTgte_DataMapOfShapeBox_ChangeFind1,None,BiTgte_DataMapOfShapeBox)
BiTgte_DataMapOfShapeBox._kill_pointed = new_instancemethod(_BiTgte.BiTgte_DataMapOfShapeBox__kill_pointed,None,BiTgte_DataMapOfShapeBox)
BiTgte_DataMapOfShapeBox_swigregister = _BiTgte.BiTgte_DataMapOfShapeBox_swigregister
BiTgte_DataMapOfShapeBox_swigregister(BiTgte_DataMapOfShapeBox)

class BiTgte_HCurveOnEdge(OCC.Adaptor3d.Adaptor3d_HCurve):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        :param C:
        :type C: BiTgte_CurveOnEdge &
        :rtype: None

        """
        _BiTgte.BiTgte_HCurveOnEdge_swiginit(self,_BiTgte.new_BiTgte_HCurveOnEdge(*args))
    def Set(self, *args):
        """
        :param C:
        :type C: BiTgte_CurveOnEdge &
        :rtype: None

        """
        return _BiTgte.BiTgte_HCurveOnEdge_Set(self, *args)

    def ChangeCurve(self, *args):
        """
        :rtype: BiTgte_CurveOnEdge

        """
        return _BiTgte.BiTgte_HCurveOnEdge_ChangeCurve(self, *args)

    def _kill_pointed(self):
        """_kill_pointed(BiTgte_HCurveOnEdge self)"""
        return _BiTgte.BiTgte_HCurveOnEdge__kill_pointed(self)

    def GetHandle(self):
        """GetHandle(BiTgte_HCurveOnEdge self) -> Handle_BiTgte_HCurveOnEdge"""
        return _BiTgte.BiTgte_HCurveOnEdge_GetHandle(self)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


BiTgte_HCurveOnEdge.Set = new_instancemethod(_BiTgte.BiTgte_HCurveOnEdge_Set,None,BiTgte_HCurveOnEdge)
BiTgte_HCurveOnEdge.ChangeCurve = new_instancemethod(_BiTgte.BiTgte_HCurveOnEdge_ChangeCurve,None,BiTgte_HCurveOnEdge)
BiTgte_HCurveOnEdge._kill_pointed = new_instancemethod(_BiTgte.BiTgte_HCurveOnEdge__kill_pointed,None,BiTgte_HCurveOnEdge)
BiTgte_HCurveOnEdge.GetHandle = new_instancemethod(_BiTgte.BiTgte_HCurveOnEdge_GetHandle,None,BiTgte_HCurveOnEdge)
BiTgte_HCurveOnEdge_swigregister = _BiTgte.BiTgte_HCurveOnEdge_swigregister
BiTgte_HCurveOnEdge_swigregister(BiTgte_HCurveOnEdge)

class Handle_BiTgte_HCurveOnEdge(OCC.Adaptor3d.Handle_Adaptor3d_HCurve):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        _BiTgte.Handle_BiTgte_HCurveOnEdge_swiginit(self,_BiTgte.new_Handle_BiTgte_HCurveOnEdge(*args))
    DownCast = staticmethod(_BiTgte.Handle_BiTgte_HCurveOnEdge_DownCast)
    def __del__(self):
        try:
            self.thisown = False
            GarbageCollector.garbage.collect_object(self)
        except:
            pass


Handle_BiTgte_HCurveOnEdge.Nullify = new_instancemethod(_BiTgte.Handle_BiTgte_HCurveOnEdge_Nullify,None,Handle_BiTgte_HCurveOnEdge)
Handle_BiTgte_HCurveOnEdge.IsNull = new_instancemethod(_BiTgte.Handle_BiTgte_HCurveOnEdge_IsNull,None,Handle_BiTgte_HCurveOnEdge)
Handle_BiTgte_HCurveOnEdge.GetObject = new_instancemethod(_BiTgte.Handle_BiTgte_HCurveOnEdge_GetObject,None,Handle_BiTgte_HCurveOnEdge)
Handle_BiTgte_HCurveOnEdge._kill_pointed = new_instancemethod(_BiTgte.Handle_BiTgte_HCurveOnEdge__kill_pointed,None,Handle_BiTgte_HCurveOnEdge)
Handle_BiTgte_HCurveOnEdge_swigregister = _BiTgte.Handle_BiTgte_HCurveOnEdge_swigregister
Handle_BiTgte_HCurveOnEdge_swigregister(Handle_BiTgte_HCurveOnEdge)

def Handle_BiTgte_HCurveOnEdge_DownCast(*args):
  return _BiTgte.Handle_BiTgte_HCurveOnEdge_DownCast(*args)
Handle_BiTgte_HCurveOnEdge_DownCast = _BiTgte.Handle_BiTgte_HCurveOnEdge_DownCast

class BiTgte_HCurveOnVertex(OCC.Adaptor3d.Adaptor3d_HCurve):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        :param C:
        :type C: BiTgte_CurveOnVertex &
        :rtype: None

        """
        _BiTgte.BiTgte_HCurveOnVertex_swiginit(self,_BiTgte.new_BiTgte_HCurveOnVertex(*args))
    def Set(self, *args):
        """
        :param C:
        :type C: BiTgte_CurveOnVertex &
        :rtype: None

        """
        return _BiTgte.BiTgte_HCurveOnVertex_Set(self, *args)

    def ChangeCurve(self, *args):
        """
        :rtype: BiTgte_CurveOnVertex

        """
        return _BiTgte.BiTgte_HCurveOnVertex_ChangeCurve(self, *args)

    def _kill_pointed(self):
        """_kill_pointed(BiTgte_HCurveOnVertex self)"""
        return _BiTgte.BiTgte_HCurveOnVertex__kill_pointed(self)

    def GetHandle(self):
        """GetHandle(BiTgte_HCurveOnVertex self) -> Handle_BiTgte_HCurveOnVertex"""
        return _BiTgte.BiTgte_HCurveOnVertex_GetHandle(self)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


BiTgte_HCurveOnVertex.Set = new_instancemethod(_BiTgte.BiTgte_HCurveOnVertex_Set,None,BiTgte_HCurveOnVertex)
BiTgte_HCurveOnVertex.ChangeCurve = new_instancemethod(_BiTgte.BiTgte_HCurveOnVertex_ChangeCurve,None,BiTgte_HCurveOnVertex)
BiTgte_HCurveOnVertex._kill_pointed = new_instancemethod(_BiTgte.BiTgte_HCurveOnVertex__kill_pointed,None,BiTgte_HCurveOnVertex)
BiTgte_HCurveOnVertex.GetHandle = new_instancemethod(_BiTgte.BiTgte_HCurveOnVertex_GetHandle,None,BiTgte_HCurveOnVertex)
BiTgte_HCurveOnVertex_swigregister = _BiTgte.BiTgte_HCurveOnVertex_swigregister
BiTgte_HCurveOnVertex_swigregister(BiTgte_HCurveOnVertex)

class Handle_BiTgte_HCurveOnVertex(OCC.Adaptor3d.Handle_Adaptor3d_HCurve):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        _BiTgte.Handle_BiTgte_HCurveOnVertex_swiginit(self,_BiTgte.new_Handle_BiTgte_HCurveOnVertex(*args))
    DownCast = staticmethod(_BiTgte.Handle_BiTgte_HCurveOnVertex_DownCast)
    def __del__(self):
        try:
            self.thisown = False
            GarbageCollector.garbage.collect_object(self)
        except:
            pass


Handle_BiTgte_HCurveOnVertex.Nullify = new_instancemethod(_BiTgte.Handle_BiTgte_HCurveOnVertex_Nullify,None,Handle_BiTgte_HCurveOnVertex)
Handle_BiTgte_HCurveOnVertex.IsNull = new_instancemethod(_BiTgte.Handle_BiTgte_HCurveOnVertex_IsNull,None,Handle_BiTgte_HCurveOnVertex)
Handle_BiTgte_HCurveOnVertex.GetObject = new_instancemethod(_BiTgte.Handle_BiTgte_HCurveOnVertex_GetObject,None,Handle_BiTgte_HCurveOnVertex)
Handle_BiTgte_HCurveOnVertex._kill_pointed = new_instancemethod(_BiTgte.Handle_BiTgte_HCurveOnVertex__kill_pointed,None,Handle_BiTgte_HCurveOnVertex)
Handle_BiTgte_HCurveOnVertex_swigregister = _BiTgte.Handle_BiTgte_HCurveOnVertex_swigregister
Handle_BiTgte_HCurveOnVertex_swigregister(Handle_BiTgte_HCurveOnVertex)

def Handle_BiTgte_HCurveOnVertex_DownCast(*args):
  return _BiTgte.Handle_BiTgte_HCurveOnVertex_DownCast(*args)
Handle_BiTgte_HCurveOnVertex_DownCast = _BiTgte.Handle_BiTgte_HCurveOnVertex_DownCast


