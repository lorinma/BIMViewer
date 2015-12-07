# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.11
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (3,0,0):
    new_instancemethod = lambda func, inst, cls: _BRepProj.SWIG_PyInstanceMethod_New(func)
else:
    from new import instancemethod as new_instancemethod
if version_info >= (2,6,0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_BRepProj', [dirname(__file__)])
        except ImportError:
            import _BRepProj
            return _BRepProj
        if fp is not None:
            try:
                _mod = imp.load_module('_BRepProj', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _BRepProj = swig_import_helper()
    del swig_import_helper
else:
    import _BRepProj
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
    __swig_destroy__ = _BRepProj.delete_SwigPyIterator
    def __iter__(self): return self
SwigPyIterator.value = new_instancemethod(_BRepProj.SwigPyIterator_value,None,SwigPyIterator)
SwigPyIterator.incr = new_instancemethod(_BRepProj.SwigPyIterator_incr,None,SwigPyIterator)
SwigPyIterator.decr = new_instancemethod(_BRepProj.SwigPyIterator_decr,None,SwigPyIterator)
SwigPyIterator.distance = new_instancemethod(_BRepProj.SwigPyIterator_distance,None,SwigPyIterator)
SwigPyIterator.equal = new_instancemethod(_BRepProj.SwigPyIterator_equal,None,SwigPyIterator)
SwigPyIterator.copy = new_instancemethod(_BRepProj.SwigPyIterator_copy,None,SwigPyIterator)
SwigPyIterator.next = new_instancemethod(_BRepProj.SwigPyIterator_next,None,SwigPyIterator)
SwigPyIterator.__next__ = new_instancemethod(_BRepProj.SwigPyIterator___next__,None,SwigPyIterator)
SwigPyIterator.previous = new_instancemethod(_BRepProj.SwigPyIterator_previous,None,SwigPyIterator)
SwigPyIterator.advance = new_instancemethod(_BRepProj.SwigPyIterator_advance,None,SwigPyIterator)
SwigPyIterator.__eq__ = new_instancemethod(_BRepProj.SwigPyIterator___eq__,None,SwigPyIterator)
SwigPyIterator.__ne__ = new_instancemethod(_BRepProj.SwigPyIterator___ne__,None,SwigPyIterator)
SwigPyIterator.__iadd__ = new_instancemethod(_BRepProj.SwigPyIterator___iadd__,None,SwigPyIterator)
SwigPyIterator.__isub__ = new_instancemethod(_BRepProj.SwigPyIterator___isub__,None,SwigPyIterator)
SwigPyIterator.__add__ = new_instancemethod(_BRepProj.SwigPyIterator___add__,None,SwigPyIterator)
SwigPyIterator.__sub__ = new_instancemethod(_BRepProj.SwigPyIterator___sub__,None,SwigPyIterator)
SwigPyIterator_swigregister = _BRepProj.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

import OCC.TopoDS
import OCC.MMgt
import OCC.Standard
import OCC.TCollection
import OCC.TopLoc
import OCC.gp
import OCC.TopAbs
class BRepProj_Projection(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        * Makes a Cylindrical projection of Wire om Shape

        :param Wire:
        :type Wire: TopoDS_Shape &
        :param Shape:
        :type Shape: TopoDS_Shape &
        :param D:
        :type D: gp_Dir
        :rtype: None

        * Makes a Conical projection of Wire om Shape

        :param Wire:
        :type Wire: TopoDS_Shape &
        :param Shape:
        :type Shape: TopoDS_Shape &
        :param P:
        :type P: gp_Pnt
        :rtype: None

        """
        _BRepProj.BRepProj_Projection_swiginit(self,_BRepProj.new_BRepProj_Projection(*args))
    def IsDone(self, *args):
        """
        * returns False if the section failed

        :rtype: bool

        """
        return _BRepProj.BRepProj_Projection_IsDone(self, *args)

    def Init(self, *args):
        """
        * Resets the iterator by resulting wires.

        :rtype: None

        """
        return _BRepProj.BRepProj_Projection_Init(self, *args)

    def More(self, *args):
        """
        * Returns True if there is a current result wire

        :rtype: bool

        """
        return _BRepProj.BRepProj_Projection_More(self, *args)

    def Next(self, *args):
        """
        * Move to the next result wire.

        :rtype: None

        """
        return _BRepProj.BRepProj_Projection_Next(self, *args)

    def Current(self, *args):
        """
        * Returns the current result wire.

        :rtype: TopoDS_Wire

        """
        return _BRepProj.BRepProj_Projection_Current(self, *args)

    def Shape(self, *args):
        """
        * Returns the complete result as compound of wires.

        :rtype: TopoDS_Compound

        """
        return _BRepProj.BRepProj_Projection_Shape(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


BRepProj_Projection.IsDone = new_instancemethod(_BRepProj.BRepProj_Projection_IsDone,None,BRepProj_Projection)
BRepProj_Projection.Init = new_instancemethod(_BRepProj.BRepProj_Projection_Init,None,BRepProj_Projection)
BRepProj_Projection.More = new_instancemethod(_BRepProj.BRepProj_Projection_More,None,BRepProj_Projection)
BRepProj_Projection.Next = new_instancemethod(_BRepProj.BRepProj_Projection_Next,None,BRepProj_Projection)
BRepProj_Projection.Current = new_instancemethod(_BRepProj.BRepProj_Projection_Current,None,BRepProj_Projection)
BRepProj_Projection.Shape = new_instancemethod(_BRepProj.BRepProj_Projection_Shape,None,BRepProj_Projection)
BRepProj_Projection._kill_pointed = new_instancemethod(_BRepProj.BRepProj_Projection__kill_pointed,None,BRepProj_Projection)
BRepProj_Projection_swigregister = _BRepProj.BRepProj_Projection_swigregister
BRepProj_Projection_swigregister(BRepProj_Projection)


