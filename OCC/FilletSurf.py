# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.11
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (3,0,0):
    new_instancemethod = lambda func, inst, cls: _FilletSurf.SWIG_PyInstanceMethod_New(func)
else:
    from new import instancemethod as new_instancemethod
if version_info >= (2,6,0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_FilletSurf', [dirname(__file__)])
        except ImportError:
            import _FilletSurf
            return _FilletSurf
        if fp is not None:
            try:
                _mod = imp.load_module('_FilletSurf', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _FilletSurf = swig_import_helper()
    del swig_import_helper
else:
    import _FilletSurf
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
    __swig_destroy__ = _FilletSurf.delete_SwigPyIterator
    def __iter__(self): return self
SwigPyIterator.value = new_instancemethod(_FilletSurf.SwigPyIterator_value,None,SwigPyIterator)
SwigPyIterator.incr = new_instancemethod(_FilletSurf.SwigPyIterator_incr,None,SwigPyIterator)
SwigPyIterator.decr = new_instancemethod(_FilletSurf.SwigPyIterator_decr,None,SwigPyIterator)
SwigPyIterator.distance = new_instancemethod(_FilletSurf.SwigPyIterator_distance,None,SwigPyIterator)
SwigPyIterator.equal = new_instancemethod(_FilletSurf.SwigPyIterator_equal,None,SwigPyIterator)
SwigPyIterator.copy = new_instancemethod(_FilletSurf.SwigPyIterator_copy,None,SwigPyIterator)
SwigPyIterator.next = new_instancemethod(_FilletSurf.SwigPyIterator_next,None,SwigPyIterator)
SwigPyIterator.__next__ = new_instancemethod(_FilletSurf.SwigPyIterator___next__,None,SwigPyIterator)
SwigPyIterator.previous = new_instancemethod(_FilletSurf.SwigPyIterator_previous,None,SwigPyIterator)
SwigPyIterator.advance = new_instancemethod(_FilletSurf.SwigPyIterator_advance,None,SwigPyIterator)
SwigPyIterator.__eq__ = new_instancemethod(_FilletSurf.SwigPyIterator___eq__,None,SwigPyIterator)
SwigPyIterator.__ne__ = new_instancemethod(_FilletSurf.SwigPyIterator___ne__,None,SwigPyIterator)
SwigPyIterator.__iadd__ = new_instancemethod(_FilletSurf.SwigPyIterator___iadd__,None,SwigPyIterator)
SwigPyIterator.__isub__ = new_instancemethod(_FilletSurf.SwigPyIterator___isub__,None,SwigPyIterator)
SwigPyIterator.__add__ = new_instancemethod(_FilletSurf.SwigPyIterator___add__,None,SwigPyIterator)
SwigPyIterator.__sub__ = new_instancemethod(_FilletSurf.SwigPyIterator___sub__,None,SwigPyIterator)
SwigPyIterator_swigregister = _FilletSurf.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

import OCC.TopoDS
import OCC.MMgt
import OCC.Standard
import OCC.TCollection
import OCC.TopLoc
import OCC.gp
import OCC.TopAbs
import OCC.TopTools
import OCC.TColStd
import OCC.Message
import OCC.Geom
import OCC.GeomAbs
import OCC.TColgp
import OCC.Geom2d
import OCC.ChFi3d
import OCC.BRepAdaptor
import OCC.Adaptor3d
import OCC.Adaptor2d
import OCC.math
import OCC.GeomAdaptor
import OCC.Geom2dAdaptor
import OCC.ChFiDS
import OCC.Law
import OCC.TopOpeBRepBuild
import OCC.TopOpeBRepTool
import OCC.Bnd
import OCC.BRepClass3d
import OCC.IntCurveSurface
import OCC.Intf
import OCC.IntSurf
import OCC.IntCurvesFace
import OCC.Extrema
import OCC.TopOpeBRepDS
import OCC.GeomFill
import OCC.Convert
import OCC.AppBlend
import OCC.Approx
import OCC.AppCont
import OCC.AppParCurves
import OCC.TColGeom
import OCC.BRepBlend
import OCC.Blend
import OCC.BlendFunc
FilletSurf_EmptyList = _FilletSurf.FilletSurf_EmptyList
FilletSurf_EdgeNotG1 = _FilletSurf.FilletSurf_EdgeNotG1
FilletSurf_FacesNotG1 = _FilletSurf.FilletSurf_FacesNotG1
FilletSurf_EdgeNotOnShape = _FilletSurf.FilletSurf_EdgeNotOnShape
FilletSurf_NotSharpEdge = _FilletSurf.FilletSurf_NotSharpEdge
FilletSurf_PbFilletCompute = _FilletSurf.FilletSurf_PbFilletCompute
FilletSurf_IsOk = _FilletSurf.FilletSurf_IsOk
FilletSurf_IsNotOk = _FilletSurf.FilletSurf_IsNotOk
FilletSurf_IsPartial = _FilletSurf.FilletSurf_IsPartial
FilletSurf_TwoExtremityOnEdge = _FilletSurf.FilletSurf_TwoExtremityOnEdge
FilletSurf_OneExtremityOnEdge = _FilletSurf.FilletSurf_OneExtremityOnEdge
FilletSurf_NoExtremityOnEdge = _FilletSurf.FilletSurf_NoExtremityOnEdge
class FilletSurf_Builder(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        * initialize of the informations necessary for the computation of the fillet on the Shape S from a list of edges E and a radius R. Ta is the angular tolerance //!		 Tapp3d is the 3d approximation tolerance //!		 Tapp2d is the 2d approximation tolerance

        :param S:
        :type S: TopoDS_Shape &
        :param E:
        :type E: TopTools_ListOfShape &
        :param R:
        :type R: float
        :param Ta: default value is 1.0e-2
        :type Ta: float
        :param Tapp3d: default value is 1.0e-4
        :type Tapp3d: float
        :param Tapp2d: default value is 1.0e-5
        :type Tapp2d: float
        :rtype: None

        """
        _FilletSurf.FilletSurf_Builder_swiginit(self,_FilletSurf.new_FilletSurf_Builder(*args))
    def Perform(self, *args) -> "void" :
        """
        * //!---Purpose computation of the fillet (list of NUBS)

        :rtype: None

        """
        return _FilletSurf.FilletSurf_Builder_Perform(self, *args)

    def Simulate(self, *args) -> "void" :
        """
        :rtype: None

        """
        return _FilletSurf.FilletSurf_Builder_Simulate(self, *args)

    def IsDone(self, *args) -> "FilletSurf_StatusDone" :
        """
        * gives the status about the computation of the fillet returns: IsOK :no problem during the computation IsNotOk: no result is produced IsPartial: the result is partial

        :rtype: FilletSurf_StatusDone

        """
        return _FilletSurf.FilletSurf_Builder_IsDone(self, *args)

    def StatusError(self, *args) -> "FilletSurf_ErrorTypeStatus" :
        """
        * gives informations about error status if IsDone=IsNotOk returns EdgeNotG1: the edges are not G1 FacesNotG1 : two connected faces on a same support are not G1 EdgeNotOnShape: the edge is not on shape NotSharpEdge: the edge is not sharp PbFilletCompute: problem during the computation of the fillet

        :rtype: FilletSurf_ErrorTypeStatus

        """
        return _FilletSurf.FilletSurf_Builder_StatusError(self, *args)

    def NbSurface(self, *args) -> "Standard_Integer" :
        """
        * gives the number of NUBS surfaces of the Fillet.

        :rtype: int

        """
        return _FilletSurf.FilletSurf_Builder_NbSurface(self, *args)

    def SurfaceFillet(self, *args) -> "Handle_Geom_Surface const &" :
        """
        * gives the NUBS surface of index Index.

        :param Index:
        :type Index: int
        :rtype: Handle_Geom_Surface

        """
        return _FilletSurf.FilletSurf_Builder_SurfaceFillet(self, *args)

    def TolApp3d(self, *args) -> "Standard_Real" :
        """
        * gives the 3d tolerance reached during approximation of surface of index Index

        :param Index:
        :type Index: int
        :rtype: float

        """
        return _FilletSurf.FilletSurf_Builder_TolApp3d(self, *args)

    def SupportFace1(self, *args) -> "TopoDS_Face const" :
        """
        * //!gives the first support face relative to SurfaceFillet(Index);

        :param Index:
        :type Index: int
        :rtype: TopoDS_Face

        """
        return _FilletSurf.FilletSurf_Builder_SupportFace1(self, *args)

    def SupportFace2(self, *args) -> "TopoDS_Face const" :
        """
        * //!gives the second support face relative to SurfaceFillet(Index);

        :param Index:
        :type Index: int
        :rtype: TopoDS_Face

        """
        return _FilletSurf.FilletSurf_Builder_SupportFace2(self, *args)

    def CurveOnFace1(self, *args) -> "Handle_Geom_Curve const &" :
        """
        * gives the 3d curve of SurfaceFillet(Index) on SupportFace1(Index)

        :param Index:
        :type Index: int
        :rtype: Handle_Geom_Curve

        """
        return _FilletSurf.FilletSurf_Builder_CurveOnFace1(self, *args)

    def CurveOnFace2(self, *args) -> "Handle_Geom_Curve const &" :
        """
        * gives the 3d curve of SurfaceFillet(Index) on SupportFace2(Index)

        :param Index:
        :type Index: int
        :rtype: Handle_Geom_Curve

        """
        return _FilletSurf.FilletSurf_Builder_CurveOnFace2(self, *args)

    def PCurveOnFace1(self, *args) -> "Handle_Geom2d_Curve const &" :
        """
        * //!gives the PCurve associated to CurvOnSup1(Index) on the support face

        :param Index:
        :type Index: int
        :rtype: Handle_Geom2d_Curve

        """
        return _FilletSurf.FilletSurf_Builder_PCurveOnFace1(self, *args)

    def PCurve1OnFillet(self, *args) -> "Handle_Geom2d_Curve const &" :
        """
        * gives the PCurve associated to CurveOnFace1(Index) on the Fillet

        :param Index:
        :type Index: int
        :rtype: Handle_Geom2d_Curve

        """
        return _FilletSurf.FilletSurf_Builder_PCurve1OnFillet(self, *args)

    def PCurveOnFace2(self, *args) -> "Handle_Geom2d_Curve const &" :
        """
        * gives the PCurve associated to CurveOnSup2(Index) on the support face

        :param Index:
        :type Index: int
        :rtype: Handle_Geom2d_Curve

        """
        return _FilletSurf.FilletSurf_Builder_PCurveOnFace2(self, *args)

    def PCurve2OnFillet(self, *args) -> "Handle_Geom2d_Curve const &" :
        """
        * gives the PCurve associated to CurveOnSup2(Index) on the fillet

        :param Index:
        :type Index: int
        :rtype: Handle_Geom2d_Curve

        """
        return _FilletSurf.FilletSurf_Builder_PCurve2OnFillet(self, *args)

    def FirstParameter(self, *args) -> "Standard_Real" :
        """
        * //!gives the parameter of the fillet on the first edge.

        :rtype: float

        """
        return _FilletSurf.FilletSurf_Builder_FirstParameter(self, *args)

    def LastParameter(self, *args) -> "Standard_Real" :
        """
        * gives the parameter of the fillet on the last edge

        :rtype: float

        """
        return _FilletSurf.FilletSurf_Builder_LastParameter(self, *args)

    def StartSectionStatus(self, *args) -> "FilletSurf_StatusType" :
        """
        :rtype: FilletSurf_StatusType

        """
        return _FilletSurf.FilletSurf_Builder_StartSectionStatus(self, *args)

    def EndSectionStatus(self, *args) -> "FilletSurf_StatusType" :
        """
        :rtype: FilletSurf_StatusType

        """
        return _FilletSurf.FilletSurf_Builder_EndSectionStatus(self, *args)

    def NbSection(self, *args) -> "Standard_Integer" :
        """
        :param IndexSurf:
        :type IndexSurf: int
        :rtype: int

        """
        return _FilletSurf.FilletSurf_Builder_NbSection(self, *args)

    def Section(self, *args) -> "void" :
        """
        :param IndexSurf:
        :type IndexSurf: int
        :param IndexSec:
        :type IndexSec: int
        :param Circ:
        :type Circ: Handle_Geom_TrimmedCurve &
        :rtype: None

        """
        return _FilletSurf.FilletSurf_Builder_Section(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


FilletSurf_Builder.Perform = new_instancemethod(_FilletSurf.FilletSurf_Builder_Perform,None,FilletSurf_Builder)
FilletSurf_Builder.Simulate = new_instancemethod(_FilletSurf.FilletSurf_Builder_Simulate,None,FilletSurf_Builder)
FilletSurf_Builder.IsDone = new_instancemethod(_FilletSurf.FilletSurf_Builder_IsDone,None,FilletSurf_Builder)
FilletSurf_Builder.StatusError = new_instancemethod(_FilletSurf.FilletSurf_Builder_StatusError,None,FilletSurf_Builder)
FilletSurf_Builder.NbSurface = new_instancemethod(_FilletSurf.FilletSurf_Builder_NbSurface,None,FilletSurf_Builder)
FilletSurf_Builder.SurfaceFillet = new_instancemethod(_FilletSurf.FilletSurf_Builder_SurfaceFillet,None,FilletSurf_Builder)
FilletSurf_Builder.TolApp3d = new_instancemethod(_FilletSurf.FilletSurf_Builder_TolApp3d,None,FilletSurf_Builder)
FilletSurf_Builder.SupportFace1 = new_instancemethod(_FilletSurf.FilletSurf_Builder_SupportFace1,None,FilletSurf_Builder)
FilletSurf_Builder.SupportFace2 = new_instancemethod(_FilletSurf.FilletSurf_Builder_SupportFace2,None,FilletSurf_Builder)
FilletSurf_Builder.CurveOnFace1 = new_instancemethod(_FilletSurf.FilletSurf_Builder_CurveOnFace1,None,FilletSurf_Builder)
FilletSurf_Builder.CurveOnFace2 = new_instancemethod(_FilletSurf.FilletSurf_Builder_CurveOnFace2,None,FilletSurf_Builder)
FilletSurf_Builder.PCurveOnFace1 = new_instancemethod(_FilletSurf.FilletSurf_Builder_PCurveOnFace1,None,FilletSurf_Builder)
FilletSurf_Builder.PCurve1OnFillet = new_instancemethod(_FilletSurf.FilletSurf_Builder_PCurve1OnFillet,None,FilletSurf_Builder)
FilletSurf_Builder.PCurveOnFace2 = new_instancemethod(_FilletSurf.FilletSurf_Builder_PCurveOnFace2,None,FilletSurf_Builder)
FilletSurf_Builder.PCurve2OnFillet = new_instancemethod(_FilletSurf.FilletSurf_Builder_PCurve2OnFillet,None,FilletSurf_Builder)
FilletSurf_Builder.FirstParameter = new_instancemethod(_FilletSurf.FilletSurf_Builder_FirstParameter,None,FilletSurf_Builder)
FilletSurf_Builder.LastParameter = new_instancemethod(_FilletSurf.FilletSurf_Builder_LastParameter,None,FilletSurf_Builder)
FilletSurf_Builder.StartSectionStatus = new_instancemethod(_FilletSurf.FilletSurf_Builder_StartSectionStatus,None,FilletSurf_Builder)
FilletSurf_Builder.EndSectionStatus = new_instancemethod(_FilletSurf.FilletSurf_Builder_EndSectionStatus,None,FilletSurf_Builder)
FilletSurf_Builder.NbSection = new_instancemethod(_FilletSurf.FilletSurf_Builder_NbSection,None,FilletSurf_Builder)
FilletSurf_Builder.Section = new_instancemethod(_FilletSurf.FilletSurf_Builder_Section,None,FilletSurf_Builder)
FilletSurf_Builder._kill_pointed = new_instancemethod(_FilletSurf.FilletSurf_Builder__kill_pointed,None,FilletSurf_Builder)
FilletSurf_Builder_swigregister = _FilletSurf.FilletSurf_Builder_swigregister
FilletSurf_Builder_swigregister(FilletSurf_Builder)

class FilletSurf_InternalBuilder(OCC.ChFi3d.ChFi3d_FilBuilder):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :param S:
        :type S: TopoDS_Shape &
        :param FShape: default value is ChFi3d_Polynomial
        :type FShape: ChFi3d_FilletShape
        :param Ta: default value is 1.0e-2
        :type Ta: float
        :param Tapp3d: default value is 1.0e-4
        :type Tapp3d: float
        :param Tapp2d: default value is 1.0e-5
        :type Tapp2d: float
        :rtype: None

        """
        _FilletSurf.FilletSurf_InternalBuilder_swiginit(self,_FilletSurf.new_FilletSurf_InternalBuilder(*args))
    def Add(self, *args) -> "Standard_Integer" :
        """
        * Initializes the contour with a list of Edges 0 : no problem 1 : empty list 2 : the edges are not G1 3 : two connected faces on a same support are not G1 4 : the edge is not on shape 5 : NotSharpEdge: the edge is not sharp

        :param E:
        :type E: TopTools_ListOfShape &
        :param R:
        :type R: float
        :rtype: int

        """
        return _FilletSurf.FilletSurf_InternalBuilder_Add(self, *args)

    def Perform(self, *args) -> "void" :
        """
        :rtype: None

        """
        return _FilletSurf.FilletSurf_InternalBuilder_Perform(self, *args)

    def Done(self, *args) -> "Standard_Boolean" :
        """
        :rtype: bool

        """
        return _FilletSurf.FilletSurf_InternalBuilder_Done(self, *args)

    def NbSurface(self, *args) -> "Standard_Integer" :
        """
        * gives the number of NUBS surfaces of the Fillet.

        :rtype: int

        """
        return _FilletSurf.FilletSurf_InternalBuilder_NbSurface(self, *args)

    def SurfaceFillet(self, *args) -> "Handle_Geom_Surface const &" :
        """
        * gives the NUBS surface of index Index.

        :param Index:
        :type Index: int
        :rtype: Handle_Geom_Surface

        """
        return _FilletSurf.FilletSurf_InternalBuilder_SurfaceFillet(self, *args)

    def TolApp3d(self, *args) -> "Standard_Real" :
        """
        * gives the 3d tolerance reached during approximation of the surface of index Index

        :param Index:
        :type Index: int
        :rtype: float

        """
        return _FilletSurf.FilletSurf_InternalBuilder_TolApp3d(self, *args)

    def SupportFace1(self, *args) -> "TopoDS_Face const" :
        """
        * //!gives the first support face relative to SurfaceFillet(Index);

        :param Index:
        :type Index: int
        :rtype: TopoDS_Face

        """
        return _FilletSurf.FilletSurf_InternalBuilder_SupportFace1(self, *args)

    def SupportFace2(self, *args) -> "TopoDS_Face const" :
        """
        * //!gives the second support face relative to SurfaceFillet(Index);

        :param Index:
        :type Index: int
        :rtype: TopoDS_Face

        """
        return _FilletSurf.FilletSurf_InternalBuilder_SupportFace2(self, *args)

    def CurveOnFace1(self, *args) -> "Handle_Geom_Curve const &" :
        """
        * gives the 3d curve of SurfaceFillet(Index) on SupportFace1(Index)

        :param Index:
        :type Index: int
        :rtype: Handle_Geom_Curve

        """
        return _FilletSurf.FilletSurf_InternalBuilder_CurveOnFace1(self, *args)

    def CurveOnFace2(self, *args) -> "Handle_Geom_Curve const &" :
        """
        * gives the 3d curve of SurfaceFillet(Index) on SupportFace2(Index)

        :param Index:
        :type Index: int
        :rtype: Handle_Geom_Curve

        """
        return _FilletSurf.FilletSurf_InternalBuilder_CurveOnFace2(self, *args)

    def PCurveOnFace1(self, *args) -> "Handle_Geom2d_Curve const &" :
        """
        * //!gives the PCurve associated to CurvOnSup1(Index) on the support face

        :param Index:
        :type Index: int
        :rtype: Handle_Geom2d_Curve

        """
        return _FilletSurf.FilletSurf_InternalBuilder_PCurveOnFace1(self, *args)

    def PCurve1OnFillet(self, *args) -> "Handle_Geom2d_Curve const &" :
        """
        * gives the PCurve associated to CurveOnFace1(Index) on the Fillet

        :param Index:
        :type Index: int
        :rtype: Handle_Geom2d_Curve

        """
        return _FilletSurf.FilletSurf_InternalBuilder_PCurve1OnFillet(self, *args)

    def PCurveOnFace2(self, *args) -> "Handle_Geom2d_Curve const &" :
        """
        * gives the PCurve associated to CurveOnSup2(Index) on the support face

        :param Index:
        :type Index: int
        :rtype: Handle_Geom2d_Curve

        """
        return _FilletSurf.FilletSurf_InternalBuilder_PCurveOnFace2(self, *args)

    def PCurve2OnFillet(self, *args) -> "Handle_Geom2d_Curve const &" :
        """
        * gives the PCurve associated to CurveOnSup2(Index) on the fillet

        :param Index:
        :type Index: int
        :rtype: Handle_Geom2d_Curve

        """
        return _FilletSurf.FilletSurf_InternalBuilder_PCurve2OnFillet(self, *args)

    def FirstParameter(self, *args) -> "Standard_Real" :
        """
        * //!gives the parameter of the fillet on the first edge.

        :rtype: float

        """
        return _FilletSurf.FilletSurf_InternalBuilder_FirstParameter(self, *args)

    def LastParameter(self, *args) -> "Standard_Real" :
        """
        * gives the parameter of the fillet on the last edge

        :rtype: float

        """
        return _FilletSurf.FilletSurf_InternalBuilder_LastParameter(self, *args)

    def StartSectionStatus(self, *args) -> "FilletSurf_StatusType" :
        """
        :rtype: FilletSurf_StatusType

        """
        return _FilletSurf.FilletSurf_InternalBuilder_StartSectionStatus(self, *args)

    def EndSectionStatus(self, *args) -> "FilletSurf_StatusType" :
        """
        :rtype: FilletSurf_StatusType

        """
        return _FilletSurf.FilletSurf_InternalBuilder_EndSectionStatus(self, *args)

    def Simulate(self, *args) -> "void" :
        """
        :rtype: None

        """
        return _FilletSurf.FilletSurf_InternalBuilder_Simulate(self, *args)

    def NbSection(self, *args) -> "Standard_Integer" :
        """
        :param IndexSurf:
        :type IndexSurf: int
        :rtype: int

        """
        return _FilletSurf.FilletSurf_InternalBuilder_NbSection(self, *args)

    def Section(self, *args) -> "void" :
        """
        :param IndexSurf:
        :type IndexSurf: int
        :param IndexSec:
        :type IndexSec: int
        :param Circ:
        :type Circ: Handle_Geom_TrimmedCurve &
        :rtype: None

        """
        return _FilletSurf.FilletSurf_InternalBuilder_Section(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


FilletSurf_InternalBuilder.Add = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_Add,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.Perform = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_Perform,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.Done = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_Done,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.NbSurface = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_NbSurface,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.SurfaceFillet = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_SurfaceFillet,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.TolApp3d = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_TolApp3d,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.SupportFace1 = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_SupportFace1,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.SupportFace2 = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_SupportFace2,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.CurveOnFace1 = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_CurveOnFace1,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.CurveOnFace2 = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_CurveOnFace2,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.PCurveOnFace1 = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_PCurveOnFace1,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.PCurve1OnFillet = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_PCurve1OnFillet,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.PCurveOnFace2 = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_PCurveOnFace2,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.PCurve2OnFillet = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_PCurve2OnFillet,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.FirstParameter = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_FirstParameter,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.LastParameter = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_LastParameter,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.StartSectionStatus = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_StartSectionStatus,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.EndSectionStatus = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_EndSectionStatus,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.Simulate = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_Simulate,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.NbSection = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_NbSection,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder.Section = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder_Section,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder._kill_pointed = new_instancemethod(_FilletSurf.FilletSurf_InternalBuilder__kill_pointed,None,FilletSurf_InternalBuilder)
FilletSurf_InternalBuilder_swigregister = _FilletSurf.FilletSurf_InternalBuilder_swigregister
FilletSurf_InternalBuilder_swigregister(FilletSurf_InternalBuilder)



