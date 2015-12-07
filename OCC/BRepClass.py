# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.11
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (3,0,0):
    new_instancemethod = lambda func, inst, cls: _BRepClass.SWIG_PyInstanceMethod_New(func)
else:
    from new import instancemethod as new_instancemethod
if version_info >= (2,6,0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_BRepClass', [dirname(__file__)])
        except ImportError:
            import _BRepClass
            return _BRepClass
        if fp is not None:
            try:
                _mod = imp.load_module('_BRepClass', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _BRepClass = swig_import_helper()
    del swig_import_helper
else:
    import _BRepClass
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
    __swig_destroy__ = _BRepClass.delete_SwigPyIterator
    def __iter__(self): return self
SwigPyIterator.value = new_instancemethod(_BRepClass.SwigPyIterator_value,None,SwigPyIterator)
SwigPyIterator.incr = new_instancemethod(_BRepClass.SwigPyIterator_incr,None,SwigPyIterator)
SwigPyIterator.decr = new_instancemethod(_BRepClass.SwigPyIterator_decr,None,SwigPyIterator)
SwigPyIterator.distance = new_instancemethod(_BRepClass.SwigPyIterator_distance,None,SwigPyIterator)
SwigPyIterator.equal = new_instancemethod(_BRepClass.SwigPyIterator_equal,None,SwigPyIterator)
SwigPyIterator.copy = new_instancemethod(_BRepClass.SwigPyIterator_copy,None,SwigPyIterator)
SwigPyIterator.next = new_instancemethod(_BRepClass.SwigPyIterator_next,None,SwigPyIterator)
SwigPyIterator.__next__ = new_instancemethod(_BRepClass.SwigPyIterator___next__,None,SwigPyIterator)
SwigPyIterator.previous = new_instancemethod(_BRepClass.SwigPyIterator_previous,None,SwigPyIterator)
SwigPyIterator.advance = new_instancemethod(_BRepClass.SwigPyIterator_advance,None,SwigPyIterator)
SwigPyIterator.__eq__ = new_instancemethod(_BRepClass.SwigPyIterator___eq__,None,SwigPyIterator)
SwigPyIterator.__ne__ = new_instancemethod(_BRepClass.SwigPyIterator___ne__,None,SwigPyIterator)
SwigPyIterator.__iadd__ = new_instancemethod(_BRepClass.SwigPyIterator___iadd__,None,SwigPyIterator)
SwigPyIterator.__isub__ = new_instancemethod(_BRepClass.SwigPyIterator___isub__,None,SwigPyIterator)
SwigPyIterator.__add__ = new_instancemethod(_BRepClass.SwigPyIterator___add__,None,SwigPyIterator)
SwigPyIterator.__sub__ = new_instancemethod(_BRepClass.SwigPyIterator___sub__,None,SwigPyIterator)
SwigPyIterator_swigregister = _BRepClass.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

import OCC.TopoDS
import OCC.MMgt
import OCC.Standard
import OCC.TCollection
import OCC.TopLoc
import OCC.gp
import OCC.TopAbs
import OCC.IntRes2d
import OCC.Geom2dInt
import OCC.Adaptor2d
import OCC.GeomAbs
import OCC.TColStd
import OCC.Geom2d
import OCC.TColgp
import OCC.math
import OCC.IntCurve
import OCC.Extrema
import OCC.Adaptor3d
import OCC.Geom
import OCC.Intf
import OCC.Bnd
class BRepClass_Edge(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        :param E:
        :type E: TopoDS_Edge &
        :param F:
        :type F: TopoDS_Face &
        :rtype: None

        """
        _BRepClass.BRepClass_Edge_swiginit(self,_BRepClass.new_BRepClass_Edge(*args))
    def Edge(self, *args) -> "TopoDS_Edge" :
        """
        :rtype: TopoDS_Edge

        """
        return _BRepClass.BRepClass_Edge_Edge(self, *args)

    def Face(self, *args) -> "TopoDS_Face" :
        """
        :rtype: TopoDS_Face

        """
        return _BRepClass.BRepClass_Edge_Face(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


BRepClass_Edge.Edge = new_instancemethod(_BRepClass.BRepClass_Edge_Edge,None,BRepClass_Edge)
BRepClass_Edge.Face = new_instancemethod(_BRepClass.BRepClass_Edge_Face,None,BRepClass_Edge)
BRepClass_Edge._kill_pointed = new_instancemethod(_BRepClass.BRepClass_Edge__kill_pointed,None,BRepClass_Edge)
BRepClass_Edge_swigregister = _BRepClass.BRepClass_Edge_swigregister
BRepClass_Edge_swigregister(BRepClass_Edge)

class BRepClass_FClass2dOfFClassifier(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        """
        _BRepClass.BRepClass_FClass2dOfFClassifier_swiginit(self,_BRepClass.new_BRepClass_FClass2dOfFClassifier(*args))
    def Reset(self, *args) -> "void" :
        """
        :param L:
        :type L: gp_Lin2d
        :param P:
        :type P: float
        :param Tol:
        :type Tol: float
        :rtype: None

        """
        return _BRepClass.BRepClass_FClass2dOfFClassifier_Reset(self, *args)

    def Compare(self, *args) -> "void" :
        """
        :param E:
        :type E: BRepClass_Edge &
        :param Or:
        :type Or: TopAbs_Orientation
        :rtype: None

        """
        return _BRepClass.BRepClass_FClass2dOfFClassifier_Compare(self, *args)

    def Parameter(self, *args) -> "Standard_Real" :
        """
        :rtype: float

        """
        return _BRepClass.BRepClass_FClass2dOfFClassifier_Parameter(self, *args)

    def Intersector(self, *args) -> "BRepClass_Intersector &" :
        """
        :rtype: BRepClass_Intersector

        """
        return _BRepClass.BRepClass_FClass2dOfFClassifier_Intersector(self, *args)

    def ClosestIntersection(self, *args) -> "Standard_Integer" :
        """
        :rtype: int

        """
        return _BRepClass.BRepClass_FClass2dOfFClassifier_ClosestIntersection(self, *args)

    def State(self, *args) -> "TopAbs_State" :
        """
        :rtype: TopAbs_State

        """
        return _BRepClass.BRepClass_FClass2dOfFClassifier_State(self, *args)

    def IsHeadOrEnd(self, *args) -> "Standard_Boolean" :
        """
        :rtype: bool

        """
        return _BRepClass.BRepClass_FClass2dOfFClassifier_IsHeadOrEnd(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


BRepClass_FClass2dOfFClassifier.Reset = new_instancemethod(_BRepClass.BRepClass_FClass2dOfFClassifier_Reset,None,BRepClass_FClass2dOfFClassifier)
BRepClass_FClass2dOfFClassifier.Compare = new_instancemethod(_BRepClass.BRepClass_FClass2dOfFClassifier_Compare,None,BRepClass_FClass2dOfFClassifier)
BRepClass_FClass2dOfFClassifier.Parameter = new_instancemethod(_BRepClass.BRepClass_FClass2dOfFClassifier_Parameter,None,BRepClass_FClass2dOfFClassifier)
BRepClass_FClass2dOfFClassifier.Intersector = new_instancemethod(_BRepClass.BRepClass_FClass2dOfFClassifier_Intersector,None,BRepClass_FClass2dOfFClassifier)
BRepClass_FClass2dOfFClassifier.ClosestIntersection = new_instancemethod(_BRepClass.BRepClass_FClass2dOfFClassifier_ClosestIntersection,None,BRepClass_FClass2dOfFClassifier)
BRepClass_FClass2dOfFClassifier.State = new_instancemethod(_BRepClass.BRepClass_FClass2dOfFClassifier_State,None,BRepClass_FClass2dOfFClassifier)
BRepClass_FClass2dOfFClassifier.IsHeadOrEnd = new_instancemethod(_BRepClass.BRepClass_FClass2dOfFClassifier_IsHeadOrEnd,None,BRepClass_FClass2dOfFClassifier)
BRepClass_FClass2dOfFClassifier._kill_pointed = new_instancemethod(_BRepClass.BRepClass_FClass2dOfFClassifier__kill_pointed,None,BRepClass_FClass2dOfFClassifier)
BRepClass_FClass2dOfFClassifier_swigregister = _BRepClass.BRepClass_FClass2dOfFClassifier_swigregister
BRepClass_FClass2dOfFClassifier_swigregister(BRepClass_FClass2dOfFClassifier)

class BRepClass_FClassifier(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        :param F:
        :type F: BRepClass_FaceExplorer &
        :param P:
        :type P: gp_Pnt2d
        :param Tol:
        :type Tol: float
        :rtype: None

        """
        _BRepClass.BRepClass_FClassifier_swiginit(self,_BRepClass.new_BRepClass_FClassifier(*args))
    def Perform(self, *args) -> "void" :
        """
        :param F:
        :type F: BRepClass_FaceExplorer &
        :param P:
        :type P: gp_Pnt2d
        :param Tol:
        :type Tol: float
        :rtype: None

        """
        return _BRepClass.BRepClass_FClassifier_Perform(self, *args)

    def State(self, *args) -> "TopAbs_State" :
        """
        :rtype: TopAbs_State

        """
        return _BRepClass.BRepClass_FClassifier_State(self, *args)

    def Rejected(self, *args) -> "Standard_Boolean" :
        """
        :rtype: bool

        """
        return _BRepClass.BRepClass_FClassifier_Rejected(self, *args)

    def NoWires(self, *args) -> "Standard_Boolean" :
        """
        :rtype: bool

        """
        return _BRepClass.BRepClass_FClassifier_NoWires(self, *args)

    def Edge(self, *args) -> "BRepClass_Edge const &" :
        """
        :rtype: BRepClass_Edge

        """
        return _BRepClass.BRepClass_FClassifier_Edge(self, *args)

    def EdgeParameter(self, *args) -> "Standard_Real" :
        """
        :rtype: float

        """
        return _BRepClass.BRepClass_FClassifier_EdgeParameter(self, *args)

    def Position(self, *args) -> "IntRes2d_Position" :
        """
        :rtype: IntRes2d_Position

        """
        return _BRepClass.BRepClass_FClassifier_Position(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


BRepClass_FClassifier.Perform = new_instancemethod(_BRepClass.BRepClass_FClassifier_Perform,None,BRepClass_FClassifier)
BRepClass_FClassifier.State = new_instancemethod(_BRepClass.BRepClass_FClassifier_State,None,BRepClass_FClassifier)
BRepClass_FClassifier.Rejected = new_instancemethod(_BRepClass.BRepClass_FClassifier_Rejected,None,BRepClass_FClassifier)
BRepClass_FClassifier.NoWires = new_instancemethod(_BRepClass.BRepClass_FClassifier_NoWires,None,BRepClass_FClassifier)
BRepClass_FClassifier.Edge = new_instancemethod(_BRepClass.BRepClass_FClassifier_Edge,None,BRepClass_FClassifier)
BRepClass_FClassifier.EdgeParameter = new_instancemethod(_BRepClass.BRepClass_FClassifier_EdgeParameter,None,BRepClass_FClassifier)
BRepClass_FClassifier.Position = new_instancemethod(_BRepClass.BRepClass_FClassifier_Position,None,BRepClass_FClassifier)
BRepClass_FClassifier._kill_pointed = new_instancemethod(_BRepClass.BRepClass_FClassifier__kill_pointed,None,BRepClass_FClassifier)
BRepClass_FClassifier_swigregister = _BRepClass.BRepClass_FClassifier_swigregister
BRepClass_FClassifier_swigregister(BRepClass_FClassifier)

class BRepClass_FaceExplorer(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :param F:
        :type F: TopoDS_Face &
        :rtype: None

        """
        _BRepClass.BRepClass_FaceExplorer_swiginit(self,_BRepClass.new_BRepClass_FaceExplorer(*args))
    def Reject(self, *args) -> "Standard_Boolean" :
        """
        * Should return True if the point is outside a bounding volume of the face.

        :param P:
        :type P: gp_Pnt2d
        :rtype: bool

        """
        return _BRepClass.BRepClass_FaceExplorer_Reject(self, *args)

    def Segment(self, *args) -> "Standard_Boolean" :
        """
        * Returns in <L>, <Par> a segment having at least one intersection with the face boundary to compute intersections.

        :param P:
        :type P: gp_Pnt2d
        :param L:
        :type L: gp_Lin2d
        :param Par:
        :type Par: float &
        :rtype: bool

        """
        return _BRepClass.BRepClass_FaceExplorer_Segment(self, *args)

    def OtherSegment(self, *args) -> "Standard_Boolean" :
        """
        * Returns in <L>, <Par> a segment having at least one intersection with the face boundary to compute intersections. Each call gives another segment.

        :param P:
        :type P: gp_Pnt2d
        :param L:
        :type L: gp_Lin2d
        :param Par:
        :type Par: float &
        :rtype: bool

        """
        return _BRepClass.BRepClass_FaceExplorer_OtherSegment(self, *args)

    def InitWires(self, *args) -> "void" :
        """
        * Starts an exploration of the wires.

        :rtype: None

        """
        return _BRepClass.BRepClass_FaceExplorer_InitWires(self, *args)

    def MoreWires(self, *args) -> "Standard_Boolean" :
        """
        * Returns True if there is a current wire.

        :rtype: bool

        """
        return _BRepClass.BRepClass_FaceExplorer_MoreWires(self, *args)

    def NextWire(self, *args) -> "void" :
        """
        * Sets the explorer to the next wire.

        :rtype: None

        """
        return _BRepClass.BRepClass_FaceExplorer_NextWire(self, *args)

    def RejectWire(self, *args) -> "Standard_Boolean" :
        """
        * Returns True if the wire bounding volume does not intersect the segment.

        :param L:
        :type L: gp_Lin2d
        :param Par:
        :type Par: float
        :rtype: bool

        """
        return _BRepClass.BRepClass_FaceExplorer_RejectWire(self, *args)

    def InitEdges(self, *args) -> "void" :
        """
        * Starts an exploration of the edges of the current wire.

        :rtype: None

        """
        return _BRepClass.BRepClass_FaceExplorer_InitEdges(self, *args)

    def MoreEdges(self, *args) -> "Standard_Boolean" :
        """
        * Returns True if there is a current edge.

        :rtype: bool

        """
        return _BRepClass.BRepClass_FaceExplorer_MoreEdges(self, *args)

    def NextEdge(self, *args) -> "void" :
        """
        * Sets the explorer to the next edge.

        :rtype: None

        """
        return _BRepClass.BRepClass_FaceExplorer_NextEdge(self, *args)

    def RejectEdge(self, *args) -> "Standard_Boolean" :
        """
        * Returns True if the edge bounding volume does not intersect the segment.

        :param L:
        :type L: gp_Lin2d
        :param Par:
        :type Par: float
        :rtype: bool

        """
        return _BRepClass.BRepClass_FaceExplorer_RejectEdge(self, *args)

    def CurrentEdge(self, *args) -> "void" :
        """
        * Current edge in current wire and its orientation.

        :param E:
        :type E: BRepClass_Edge &
        :param Or:
        :type Or: TopAbs_Orientation &
        :rtype: None

        """
        return _BRepClass.BRepClass_FaceExplorer_CurrentEdge(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


BRepClass_FaceExplorer.Reject = new_instancemethod(_BRepClass.BRepClass_FaceExplorer_Reject,None,BRepClass_FaceExplorer)
BRepClass_FaceExplorer.Segment = new_instancemethod(_BRepClass.BRepClass_FaceExplorer_Segment,None,BRepClass_FaceExplorer)
BRepClass_FaceExplorer.OtherSegment = new_instancemethod(_BRepClass.BRepClass_FaceExplorer_OtherSegment,None,BRepClass_FaceExplorer)
BRepClass_FaceExplorer.InitWires = new_instancemethod(_BRepClass.BRepClass_FaceExplorer_InitWires,None,BRepClass_FaceExplorer)
BRepClass_FaceExplorer.MoreWires = new_instancemethod(_BRepClass.BRepClass_FaceExplorer_MoreWires,None,BRepClass_FaceExplorer)
BRepClass_FaceExplorer.NextWire = new_instancemethod(_BRepClass.BRepClass_FaceExplorer_NextWire,None,BRepClass_FaceExplorer)
BRepClass_FaceExplorer.RejectWire = new_instancemethod(_BRepClass.BRepClass_FaceExplorer_RejectWire,None,BRepClass_FaceExplorer)
BRepClass_FaceExplorer.InitEdges = new_instancemethod(_BRepClass.BRepClass_FaceExplorer_InitEdges,None,BRepClass_FaceExplorer)
BRepClass_FaceExplorer.MoreEdges = new_instancemethod(_BRepClass.BRepClass_FaceExplorer_MoreEdges,None,BRepClass_FaceExplorer)
BRepClass_FaceExplorer.NextEdge = new_instancemethod(_BRepClass.BRepClass_FaceExplorer_NextEdge,None,BRepClass_FaceExplorer)
BRepClass_FaceExplorer.RejectEdge = new_instancemethod(_BRepClass.BRepClass_FaceExplorer_RejectEdge,None,BRepClass_FaceExplorer)
BRepClass_FaceExplorer.CurrentEdge = new_instancemethod(_BRepClass.BRepClass_FaceExplorer_CurrentEdge,None,BRepClass_FaceExplorer)
BRepClass_FaceExplorer._kill_pointed = new_instancemethod(_BRepClass.BRepClass_FaceExplorer__kill_pointed,None,BRepClass_FaceExplorer)
BRepClass_FaceExplorer_swigregister = _BRepClass.BRepClass_FaceExplorer_swigregister
BRepClass_FaceExplorer_swigregister(BRepClass_FaceExplorer)

class BRepClass_FacePassiveClassifier(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        """
        _BRepClass.BRepClass_FacePassiveClassifier_swiginit(self,_BRepClass.new_BRepClass_FacePassiveClassifier(*args))
    def Reset(self, *args) -> "void" :
        """
        :param L:
        :type L: gp_Lin2d
        :param P:
        :type P: float
        :param Tol:
        :type Tol: float
        :rtype: None

        """
        return _BRepClass.BRepClass_FacePassiveClassifier_Reset(self, *args)

    def Compare(self, *args) -> "void" :
        """
        :param E:
        :type E: BRepClass_Edge &
        :param Or:
        :type Or: TopAbs_Orientation
        :rtype: None

        """
        return _BRepClass.BRepClass_FacePassiveClassifier_Compare(self, *args)

    def Parameter(self, *args) -> "Standard_Real" :
        """
        :rtype: float

        """
        return _BRepClass.BRepClass_FacePassiveClassifier_Parameter(self, *args)

    def Intersector(self, *args) -> "BRepClass_Intersector &" :
        """
        :rtype: BRepClass_Intersector

        """
        return _BRepClass.BRepClass_FacePassiveClassifier_Intersector(self, *args)

    def ClosestIntersection(self, *args) -> "Standard_Integer" :
        """
        :rtype: int

        """
        return _BRepClass.BRepClass_FacePassiveClassifier_ClosestIntersection(self, *args)

    def State(self, *args) -> "TopAbs_State" :
        """
        :rtype: TopAbs_State

        """
        return _BRepClass.BRepClass_FacePassiveClassifier_State(self, *args)

    def IsHeadOrEnd(self, *args) -> "Standard_Boolean" :
        """
        :rtype: bool

        """
        return _BRepClass.BRepClass_FacePassiveClassifier_IsHeadOrEnd(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


BRepClass_FacePassiveClassifier.Reset = new_instancemethod(_BRepClass.BRepClass_FacePassiveClassifier_Reset,None,BRepClass_FacePassiveClassifier)
BRepClass_FacePassiveClassifier.Compare = new_instancemethod(_BRepClass.BRepClass_FacePassiveClassifier_Compare,None,BRepClass_FacePassiveClassifier)
BRepClass_FacePassiveClassifier.Parameter = new_instancemethod(_BRepClass.BRepClass_FacePassiveClassifier_Parameter,None,BRepClass_FacePassiveClassifier)
BRepClass_FacePassiveClassifier.Intersector = new_instancemethod(_BRepClass.BRepClass_FacePassiveClassifier_Intersector,None,BRepClass_FacePassiveClassifier)
BRepClass_FacePassiveClassifier.ClosestIntersection = new_instancemethod(_BRepClass.BRepClass_FacePassiveClassifier_ClosestIntersection,None,BRepClass_FacePassiveClassifier)
BRepClass_FacePassiveClassifier.State = new_instancemethod(_BRepClass.BRepClass_FacePassiveClassifier_State,None,BRepClass_FacePassiveClassifier)
BRepClass_FacePassiveClassifier.IsHeadOrEnd = new_instancemethod(_BRepClass.BRepClass_FacePassiveClassifier_IsHeadOrEnd,None,BRepClass_FacePassiveClassifier)
BRepClass_FacePassiveClassifier._kill_pointed = new_instancemethod(_BRepClass.BRepClass_FacePassiveClassifier__kill_pointed,None,BRepClass_FacePassiveClassifier)
BRepClass_FacePassiveClassifier_swigregister = _BRepClass.BRepClass_FacePassiveClassifier_swigregister
BRepClass_FacePassiveClassifier_swigregister(BRepClass_FacePassiveClassifier)

class BRepClass_Intersector(OCC.Geom2dInt.Geom2dInt_IntConicCurveOfGInter):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        """
        _BRepClass.BRepClass_Intersector_swiginit(self,_BRepClass.new_BRepClass_Intersector(*args))
    def Perform(self, *args) -> "void" :
        """
        * Intersect the line segment and the edge.

        :param L:
        :type L: gp_Lin2d
        :param P:
        :type P: float
        :param Tol:
        :type Tol: float
        :param E:
        :type E: BRepClass_Edge &
        :rtype: None

        """
        return _BRepClass.BRepClass_Intersector_Perform(self, *args)

    def LocalGeometry(self, *args) -> "void" :
        """
        * Returns in <T>, <N> and <C> the tangent, normal and curvature of the edge <E> at parameter value <U>.

        :param E:
        :type E: BRepClass_Edge &
        :param U:
        :type U: float
        :param T:
        :type T: gp_Dir2d
        :param N:
        :type N: gp_Dir2d
        :param C:
        :type C: float &
        :rtype: None

        """
        return _BRepClass.BRepClass_Intersector_LocalGeometry(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


BRepClass_Intersector.Perform = new_instancemethod(_BRepClass.BRepClass_Intersector_Perform,None,BRepClass_Intersector)
BRepClass_Intersector.LocalGeometry = new_instancemethod(_BRepClass.BRepClass_Intersector_LocalGeometry,None,BRepClass_Intersector)
BRepClass_Intersector._kill_pointed = new_instancemethod(_BRepClass.BRepClass_Intersector__kill_pointed,None,BRepClass_Intersector)
BRepClass_Intersector_swigregister = _BRepClass.BRepClass_Intersector_swigregister
BRepClass_Intersector_swigregister(BRepClass_Intersector)



