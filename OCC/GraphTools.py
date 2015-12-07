# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.11
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (3,0,0):
    new_instancemethod = lambda func, inst, cls: _GraphTools.SWIG_PyInstanceMethod_New(func)
else:
    from new import instancemethod as new_instancemethod
if version_info >= (2,6,0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_GraphTools', [dirname(__file__)])
        except ImportError:
            import _GraphTools
            return _GraphTools
        if fp is not None:
            try:
                _mod = imp.load_module('_GraphTools', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _GraphTools = swig_import_helper()
    del swig_import_helper
else:
    import _GraphTools
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
    __swig_destroy__ = _GraphTools.delete_SwigPyIterator
    def __iter__(self): return self
SwigPyIterator.value = new_instancemethod(_GraphTools.SwigPyIterator_value,None,SwigPyIterator)
SwigPyIterator.incr = new_instancemethod(_GraphTools.SwigPyIterator_incr,None,SwigPyIterator)
SwigPyIterator.decr = new_instancemethod(_GraphTools.SwigPyIterator_decr,None,SwigPyIterator)
SwigPyIterator.distance = new_instancemethod(_GraphTools.SwigPyIterator_distance,None,SwigPyIterator)
SwigPyIterator.equal = new_instancemethod(_GraphTools.SwigPyIterator_equal,None,SwigPyIterator)
SwigPyIterator.copy = new_instancemethod(_GraphTools.SwigPyIterator_copy,None,SwigPyIterator)
SwigPyIterator.next = new_instancemethod(_GraphTools.SwigPyIterator_next,None,SwigPyIterator)
SwigPyIterator.__next__ = new_instancemethod(_GraphTools.SwigPyIterator___next__,None,SwigPyIterator)
SwigPyIterator.previous = new_instancemethod(_GraphTools.SwigPyIterator_previous,None,SwigPyIterator)
SwigPyIterator.advance = new_instancemethod(_GraphTools.SwigPyIterator_advance,None,SwigPyIterator)
SwigPyIterator.__eq__ = new_instancemethod(_GraphTools.SwigPyIterator___eq__,None,SwigPyIterator)
SwigPyIterator.__ne__ = new_instancemethod(_GraphTools.SwigPyIterator___ne__,None,SwigPyIterator)
SwigPyIterator.__iadd__ = new_instancemethod(_GraphTools.SwigPyIterator___iadd__,None,SwigPyIterator)
SwigPyIterator.__isub__ = new_instancemethod(_GraphTools.SwigPyIterator___isub__,None,SwigPyIterator)
SwigPyIterator.__add__ = new_instancemethod(_GraphTools.SwigPyIterator___add__,None,SwigPyIterator)
SwigPyIterator.__sub__ = new_instancemethod(_GraphTools.SwigPyIterator___sub__,None,SwigPyIterator)
SwigPyIterator_swigregister = _GraphTools.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

import OCC.Standard
import OCC.TColStd
import OCC.TCollection
import OCC.MMgt
class GraphTools_ListIteratorOfListOfSequenceOfInteger(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        :param L:
        :type L: GraphTools_ListOfSequenceOfInteger &
        :rtype: None

        """
        _GraphTools.GraphTools_ListIteratorOfListOfSequenceOfInteger_swiginit(self,_GraphTools.new_GraphTools_ListIteratorOfListOfSequenceOfInteger(*args))
    def Initialize(self, *args):
        """
        :param L:
        :type L: GraphTools_ListOfSequenceOfInteger &
        :rtype: None

        """
        return _GraphTools.GraphTools_ListIteratorOfListOfSequenceOfInteger_Initialize(self, *args)

    def More(self, *args):
        """
        :rtype: bool

        """
        return _GraphTools.GraphTools_ListIteratorOfListOfSequenceOfInteger_More(self, *args)

    def Next(self, *args):
        """
        :rtype: None

        """
        return _GraphTools.GraphTools_ListIteratorOfListOfSequenceOfInteger_Next(self, *args)

    def Value(self, *args):
        """
        :rtype: TColStd_SequenceOfInteger

        """
        return _GraphTools.GraphTools_ListIteratorOfListOfSequenceOfInteger_Value(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


GraphTools_ListIteratorOfListOfSequenceOfInteger.Initialize = new_instancemethod(_GraphTools.GraphTools_ListIteratorOfListOfSequenceOfInteger_Initialize,None,GraphTools_ListIteratorOfListOfSequenceOfInteger)
GraphTools_ListIteratorOfListOfSequenceOfInteger.More = new_instancemethod(_GraphTools.GraphTools_ListIteratorOfListOfSequenceOfInteger_More,None,GraphTools_ListIteratorOfListOfSequenceOfInteger)
GraphTools_ListIteratorOfListOfSequenceOfInteger.Next = new_instancemethod(_GraphTools.GraphTools_ListIteratorOfListOfSequenceOfInteger_Next,None,GraphTools_ListIteratorOfListOfSequenceOfInteger)
GraphTools_ListIteratorOfListOfSequenceOfInteger.Value = new_instancemethod(_GraphTools.GraphTools_ListIteratorOfListOfSequenceOfInteger_Value,None,GraphTools_ListIteratorOfListOfSequenceOfInteger)
GraphTools_ListIteratorOfListOfSequenceOfInteger._kill_pointed = new_instancemethod(_GraphTools.GraphTools_ListIteratorOfListOfSequenceOfInteger__kill_pointed,None,GraphTools_ListIteratorOfListOfSequenceOfInteger)
GraphTools_ListIteratorOfListOfSequenceOfInteger_swigregister = _GraphTools.GraphTools_ListIteratorOfListOfSequenceOfInteger_swigregister
GraphTools_ListIteratorOfListOfSequenceOfInteger_swigregister(GraphTools_ListIteratorOfListOfSequenceOfInteger)

class GraphTools_ListIteratorOfSCList(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        :param L:
        :type L: GraphTools_SCList &
        :rtype: None

        """
        _GraphTools.GraphTools_ListIteratorOfSCList_swiginit(self,_GraphTools.new_GraphTools_ListIteratorOfSCList(*args))
    def Initialize(self, *args):
        """
        :param L:
        :type L: GraphTools_SCList &
        :rtype: None

        """
        return _GraphTools.GraphTools_ListIteratorOfSCList_Initialize(self, *args)

    def More(self, *args):
        """
        :rtype: bool

        """
        return _GraphTools.GraphTools_ListIteratorOfSCList_More(self, *args)

    def Next(self, *args):
        """
        :rtype: None

        """
        return _GraphTools.GraphTools_ListIteratorOfSCList_Next(self, *args)

    def Value(self, *args):
        """
        :rtype: Handle_GraphTools_SC

        """
        return _GraphTools.GraphTools_ListIteratorOfSCList_Value(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


GraphTools_ListIteratorOfSCList.Initialize = new_instancemethod(_GraphTools.GraphTools_ListIteratorOfSCList_Initialize,None,GraphTools_ListIteratorOfSCList)
GraphTools_ListIteratorOfSCList.More = new_instancemethod(_GraphTools.GraphTools_ListIteratorOfSCList_More,None,GraphTools_ListIteratorOfSCList)
GraphTools_ListIteratorOfSCList.Next = new_instancemethod(_GraphTools.GraphTools_ListIteratorOfSCList_Next,None,GraphTools_ListIteratorOfSCList)
GraphTools_ListIteratorOfSCList.Value = new_instancemethod(_GraphTools.GraphTools_ListIteratorOfSCList_Value,None,GraphTools_ListIteratorOfSCList)
GraphTools_ListIteratorOfSCList._kill_pointed = new_instancemethod(_GraphTools.GraphTools_ListIteratorOfSCList__kill_pointed,None,GraphTools_ListIteratorOfSCList)
GraphTools_ListIteratorOfSCList_swigregister = _GraphTools.GraphTools_ListIteratorOfSCList_swigregister
GraphTools_ListIteratorOfSCList_swigregister(GraphTools_ListIteratorOfSCList)

class GraphTools_ListNodeOfListOfSequenceOfInteger(OCC.TCollection.TCollection_MapNode):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :param I:
        :type I: TColStd_SequenceOfInteger &
        :param n:
        :type n: TCollection_MapNodePtr &
        :rtype: None

        """
        _GraphTools.GraphTools_ListNodeOfListOfSequenceOfInteger_swiginit(self,_GraphTools.new_GraphTools_ListNodeOfListOfSequenceOfInteger(*args))
    def Value(self, *args):
        """
        :rtype: TColStd_SequenceOfInteger

        """
        return _GraphTools.GraphTools_ListNodeOfListOfSequenceOfInteger_Value(self, *args)

    def _kill_pointed(self):
        """_kill_pointed(GraphTools_ListNodeOfListOfSequenceOfInteger self)"""
        return _GraphTools.GraphTools_ListNodeOfListOfSequenceOfInteger__kill_pointed(self)

    def GetHandle(self):
        """GetHandle(GraphTools_ListNodeOfListOfSequenceOfInteger self) -> Handle_GraphTools_ListNodeOfListOfSequenceOfInteger"""
        return _GraphTools.GraphTools_ListNodeOfListOfSequenceOfInteger_GetHandle(self)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


GraphTools_ListNodeOfListOfSequenceOfInteger.Value = new_instancemethod(_GraphTools.GraphTools_ListNodeOfListOfSequenceOfInteger_Value,None,GraphTools_ListNodeOfListOfSequenceOfInteger)
GraphTools_ListNodeOfListOfSequenceOfInteger._kill_pointed = new_instancemethod(_GraphTools.GraphTools_ListNodeOfListOfSequenceOfInteger__kill_pointed,None,GraphTools_ListNodeOfListOfSequenceOfInteger)
GraphTools_ListNodeOfListOfSequenceOfInteger.GetHandle = new_instancemethod(_GraphTools.GraphTools_ListNodeOfListOfSequenceOfInteger_GetHandle,None,GraphTools_ListNodeOfListOfSequenceOfInteger)
GraphTools_ListNodeOfListOfSequenceOfInteger_swigregister = _GraphTools.GraphTools_ListNodeOfListOfSequenceOfInteger_swigregister
GraphTools_ListNodeOfListOfSequenceOfInteger_swigregister(GraphTools_ListNodeOfListOfSequenceOfInteger)

class Handle_GraphTools_ListNodeOfListOfSequenceOfInteger(OCC.TCollection.Handle_TCollection_MapNode):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        _GraphTools.Handle_GraphTools_ListNodeOfListOfSequenceOfInteger_swiginit(self,_GraphTools.new_Handle_GraphTools_ListNodeOfListOfSequenceOfInteger(*args))
    DownCast = staticmethod(_GraphTools.Handle_GraphTools_ListNodeOfListOfSequenceOfInteger_DownCast)
    def __del__(self):
        try:
            self.thisown = False
            GarbageCollector.garbage.collect_object(self)
        except:
            pass


Handle_GraphTools_ListNodeOfListOfSequenceOfInteger.Nullify = new_instancemethod(_GraphTools.Handle_GraphTools_ListNodeOfListOfSequenceOfInteger_Nullify,None,Handle_GraphTools_ListNodeOfListOfSequenceOfInteger)
Handle_GraphTools_ListNodeOfListOfSequenceOfInteger.IsNull = new_instancemethod(_GraphTools.Handle_GraphTools_ListNodeOfListOfSequenceOfInteger_IsNull,None,Handle_GraphTools_ListNodeOfListOfSequenceOfInteger)
Handle_GraphTools_ListNodeOfListOfSequenceOfInteger.GetObject = new_instancemethod(_GraphTools.Handle_GraphTools_ListNodeOfListOfSequenceOfInteger_GetObject,None,Handle_GraphTools_ListNodeOfListOfSequenceOfInteger)
Handle_GraphTools_ListNodeOfListOfSequenceOfInteger._kill_pointed = new_instancemethod(_GraphTools.Handle_GraphTools_ListNodeOfListOfSequenceOfInteger__kill_pointed,None,Handle_GraphTools_ListNodeOfListOfSequenceOfInteger)
Handle_GraphTools_ListNodeOfListOfSequenceOfInteger_swigregister = _GraphTools.Handle_GraphTools_ListNodeOfListOfSequenceOfInteger_swigregister
Handle_GraphTools_ListNodeOfListOfSequenceOfInteger_swigregister(Handle_GraphTools_ListNodeOfListOfSequenceOfInteger)

def Handle_GraphTools_ListNodeOfListOfSequenceOfInteger_DownCast(*args):
  return _GraphTools.Handle_GraphTools_ListNodeOfListOfSequenceOfInteger_DownCast(*args)
Handle_GraphTools_ListNodeOfListOfSequenceOfInteger_DownCast = _GraphTools.Handle_GraphTools_ListNodeOfListOfSequenceOfInteger_DownCast

class GraphTools_ListNodeOfSCList(OCC.TCollection.TCollection_MapNode):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :param I:
        :type I: Handle_GraphTools_SC &
        :param n:
        :type n: TCollection_MapNodePtr &
        :rtype: None

        """
        _GraphTools.GraphTools_ListNodeOfSCList_swiginit(self,_GraphTools.new_GraphTools_ListNodeOfSCList(*args))
    def Value(self, *args):
        """
        :rtype: Handle_GraphTools_SC

        """
        return _GraphTools.GraphTools_ListNodeOfSCList_Value(self, *args)

    def _kill_pointed(self):
        """_kill_pointed(GraphTools_ListNodeOfSCList self)"""
        return _GraphTools.GraphTools_ListNodeOfSCList__kill_pointed(self)

    def GetHandle(self):
        """GetHandle(GraphTools_ListNodeOfSCList self) -> Handle_GraphTools_ListNodeOfSCList"""
        return _GraphTools.GraphTools_ListNodeOfSCList_GetHandle(self)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


GraphTools_ListNodeOfSCList.Value = new_instancemethod(_GraphTools.GraphTools_ListNodeOfSCList_Value,None,GraphTools_ListNodeOfSCList)
GraphTools_ListNodeOfSCList._kill_pointed = new_instancemethod(_GraphTools.GraphTools_ListNodeOfSCList__kill_pointed,None,GraphTools_ListNodeOfSCList)
GraphTools_ListNodeOfSCList.GetHandle = new_instancemethod(_GraphTools.GraphTools_ListNodeOfSCList_GetHandle,None,GraphTools_ListNodeOfSCList)
GraphTools_ListNodeOfSCList_swigregister = _GraphTools.GraphTools_ListNodeOfSCList_swigregister
GraphTools_ListNodeOfSCList_swigregister(GraphTools_ListNodeOfSCList)

class Handle_GraphTools_ListNodeOfSCList(OCC.TCollection.Handle_TCollection_MapNode):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        _GraphTools.Handle_GraphTools_ListNodeOfSCList_swiginit(self,_GraphTools.new_Handle_GraphTools_ListNodeOfSCList(*args))
    DownCast = staticmethod(_GraphTools.Handle_GraphTools_ListNodeOfSCList_DownCast)
    def __del__(self):
        try:
            self.thisown = False
            GarbageCollector.garbage.collect_object(self)
        except:
            pass


Handle_GraphTools_ListNodeOfSCList.Nullify = new_instancemethod(_GraphTools.Handle_GraphTools_ListNodeOfSCList_Nullify,None,Handle_GraphTools_ListNodeOfSCList)
Handle_GraphTools_ListNodeOfSCList.IsNull = new_instancemethod(_GraphTools.Handle_GraphTools_ListNodeOfSCList_IsNull,None,Handle_GraphTools_ListNodeOfSCList)
Handle_GraphTools_ListNodeOfSCList.GetObject = new_instancemethod(_GraphTools.Handle_GraphTools_ListNodeOfSCList_GetObject,None,Handle_GraphTools_ListNodeOfSCList)
Handle_GraphTools_ListNodeOfSCList._kill_pointed = new_instancemethod(_GraphTools.Handle_GraphTools_ListNodeOfSCList__kill_pointed,None,Handle_GraphTools_ListNodeOfSCList)
Handle_GraphTools_ListNodeOfSCList_swigregister = _GraphTools.Handle_GraphTools_ListNodeOfSCList_swigregister
Handle_GraphTools_ListNodeOfSCList_swigregister(Handle_GraphTools_ListNodeOfSCList)

def Handle_GraphTools_ListNodeOfSCList_DownCast(*args):
  return _GraphTools.Handle_GraphTools_ListNodeOfSCList_DownCast(*args)
Handle_GraphTools_ListNodeOfSCList_DownCast = _GraphTools.Handle_GraphTools_ListNodeOfSCList_DownCast

class GraphTools_ListOfSequenceOfInteger(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        """
        _GraphTools.GraphTools_ListOfSequenceOfInteger_swiginit(self,_GraphTools.new_GraphTools_ListOfSequenceOfInteger(*args))
    def Assign(self, *args):
        """
        :param Other:
        :type Other: GraphTools_ListOfSequenceOfInteger &
        :rtype: None

        """
        return _GraphTools.GraphTools_ListOfSequenceOfInteger_Assign(self, *args)

    def Set(self, *args):
        """
        :param Other:
        :type Other: GraphTools_ListOfSequenceOfInteger &
        :rtype: None

        """
        return _GraphTools.GraphTools_ListOfSequenceOfInteger_Set(self, *args)

    def Extent(self, *args):
        """
        :rtype: int

        """
        return _GraphTools.GraphTools_ListOfSequenceOfInteger_Extent(self, *args)

    def Clear(self, *args):
        """
        :rtype: None

        """
        return _GraphTools.GraphTools_ListOfSequenceOfInteger_Clear(self, *args)

    def IsEmpty(self, *args):
        """
        :rtype: bool

        """
        return _GraphTools.GraphTools_ListOfSequenceOfInteger_IsEmpty(self, *args)

    def Prepend(self, *args):
        """
        :param I:
        :type I: TColStd_SequenceOfInteger &
        :rtype: None

        :param I:
        :type I: TColStd_SequenceOfInteger &
        :param theIt:
        :type theIt: GraphTools_ListIteratorOfListOfSequenceOfInteger &
        :rtype: None

        :param Other:
        :type Other: GraphTools_ListOfSequenceOfInteger &
        :rtype: None

        """
        return _GraphTools.GraphTools_ListOfSequenceOfInteger_Prepend(self, *args)

    def Append(self, *args):
        """
        :param I:
        :type I: TColStd_SequenceOfInteger &
        :rtype: None

        :param I:
        :type I: TColStd_SequenceOfInteger &
        :param theIt:
        :type theIt: GraphTools_ListIteratorOfListOfSequenceOfInteger &
        :rtype: None

        :param Other:
        :type Other: GraphTools_ListOfSequenceOfInteger &
        :rtype: None

        """
        return _GraphTools.GraphTools_ListOfSequenceOfInteger_Append(self, *args)

    def First(self, *args):
        """
        :rtype: TColStd_SequenceOfInteger

        """
        return _GraphTools.GraphTools_ListOfSequenceOfInteger_First(self, *args)

    def Last(self, *args):
        """
        :rtype: TColStd_SequenceOfInteger

        """
        return _GraphTools.GraphTools_ListOfSequenceOfInteger_Last(self, *args)

    def RemoveFirst(self, *args):
        """
        :rtype: None

        """
        return _GraphTools.GraphTools_ListOfSequenceOfInteger_RemoveFirst(self, *args)

    def Remove(self, *args):
        """
        :param It:
        :type It: GraphTools_ListIteratorOfListOfSequenceOfInteger &
        :rtype: None

        """
        return _GraphTools.GraphTools_ListOfSequenceOfInteger_Remove(self, *args)

    def InsertBefore(self, *args):
        """
        :param I:
        :type I: TColStd_SequenceOfInteger &
        :param It:
        :type It: GraphTools_ListIteratorOfListOfSequenceOfInteger &
        :rtype: None

        :param Other:
        :type Other: GraphTools_ListOfSequenceOfInteger &
        :param It:
        :type It: GraphTools_ListIteratorOfListOfSequenceOfInteger &
        :rtype: None

        """
        return _GraphTools.GraphTools_ListOfSequenceOfInteger_InsertBefore(self, *args)

    def InsertAfter(self, *args):
        """
        :param I:
        :type I: TColStd_SequenceOfInteger &
        :param It:
        :type It: GraphTools_ListIteratorOfListOfSequenceOfInteger &
        :rtype: None

        :param Other:
        :type Other: GraphTools_ListOfSequenceOfInteger &
        :param It:
        :type It: GraphTools_ListIteratorOfListOfSequenceOfInteger &
        :rtype: None

        """
        return _GraphTools.GraphTools_ListOfSequenceOfInteger_InsertAfter(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


GraphTools_ListOfSequenceOfInteger.Assign = new_instancemethod(_GraphTools.GraphTools_ListOfSequenceOfInteger_Assign,None,GraphTools_ListOfSequenceOfInteger)
GraphTools_ListOfSequenceOfInteger.Set = new_instancemethod(_GraphTools.GraphTools_ListOfSequenceOfInteger_Set,None,GraphTools_ListOfSequenceOfInteger)
GraphTools_ListOfSequenceOfInteger.Extent = new_instancemethod(_GraphTools.GraphTools_ListOfSequenceOfInteger_Extent,None,GraphTools_ListOfSequenceOfInteger)
GraphTools_ListOfSequenceOfInteger.Clear = new_instancemethod(_GraphTools.GraphTools_ListOfSequenceOfInteger_Clear,None,GraphTools_ListOfSequenceOfInteger)
GraphTools_ListOfSequenceOfInteger.IsEmpty = new_instancemethod(_GraphTools.GraphTools_ListOfSequenceOfInteger_IsEmpty,None,GraphTools_ListOfSequenceOfInteger)
GraphTools_ListOfSequenceOfInteger.Prepend = new_instancemethod(_GraphTools.GraphTools_ListOfSequenceOfInteger_Prepend,None,GraphTools_ListOfSequenceOfInteger)
GraphTools_ListOfSequenceOfInteger.Append = new_instancemethod(_GraphTools.GraphTools_ListOfSequenceOfInteger_Append,None,GraphTools_ListOfSequenceOfInteger)
GraphTools_ListOfSequenceOfInteger.First = new_instancemethod(_GraphTools.GraphTools_ListOfSequenceOfInteger_First,None,GraphTools_ListOfSequenceOfInteger)
GraphTools_ListOfSequenceOfInteger.Last = new_instancemethod(_GraphTools.GraphTools_ListOfSequenceOfInteger_Last,None,GraphTools_ListOfSequenceOfInteger)
GraphTools_ListOfSequenceOfInteger.RemoveFirst = new_instancemethod(_GraphTools.GraphTools_ListOfSequenceOfInteger_RemoveFirst,None,GraphTools_ListOfSequenceOfInteger)
GraphTools_ListOfSequenceOfInteger.Remove = new_instancemethod(_GraphTools.GraphTools_ListOfSequenceOfInteger_Remove,None,GraphTools_ListOfSequenceOfInteger)
GraphTools_ListOfSequenceOfInteger.InsertBefore = new_instancemethod(_GraphTools.GraphTools_ListOfSequenceOfInteger_InsertBefore,None,GraphTools_ListOfSequenceOfInteger)
GraphTools_ListOfSequenceOfInteger.InsertAfter = new_instancemethod(_GraphTools.GraphTools_ListOfSequenceOfInteger_InsertAfter,None,GraphTools_ListOfSequenceOfInteger)
GraphTools_ListOfSequenceOfInteger._kill_pointed = new_instancemethod(_GraphTools.GraphTools_ListOfSequenceOfInteger__kill_pointed,None,GraphTools_ListOfSequenceOfInteger)
GraphTools_ListOfSequenceOfInteger_swigregister = _GraphTools.GraphTools_ListOfSequenceOfInteger_swigregister
GraphTools_ListOfSequenceOfInteger_swigregister(GraphTools_ListOfSequenceOfInteger)

class GraphTools_RGNode(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        """
        _GraphTools.GraphTools_RGNode_swiginit(self,_GraphTools.new_GraphTools_RGNode(*args))
    def Reset(self, *args):
        """
        :rtype: None

        """
        return _GraphTools.GraphTools_RGNode_Reset(self, *args)

    def SetVisited(self, *args):
        """
        :param v:
        :type v: int
        :rtype: None

        """
        return _GraphTools.GraphTools_RGNode_SetVisited(self, *args)

    def GetVisited(self, *args):
        """
        :rtype: int

        """
        return _GraphTools.GraphTools_RGNode_GetVisited(self, *args)

    def AddAdj(self, *args):
        """
        :param adj:
        :type adj: int
        :rtype: None

        """
        return _GraphTools.GraphTools_RGNode_AddAdj(self, *args)

    def NbAdj(self, *args):
        """
        :rtype: int

        """
        return _GraphTools.GraphTools_RGNode_NbAdj(self, *args)

    def GetAdj(self, *args):
        """
        :param index:
        :type index: int
        :rtype: int

        """
        return _GraphTools.GraphTools_RGNode_GetAdj(self, *args)

    def SetSC(self, *args):
        """
        :param SC:
        :type SC: Handle_GraphTools_SC &
        :rtype: None

        """
        return _GraphTools.GraphTools_RGNode_SetSC(self, *args)

    def GetSC(self, *args):
        """
        :rtype: Handle_GraphTools_SC

        """
        return _GraphTools.GraphTools_RGNode_GetSC(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


GraphTools_RGNode.Reset = new_instancemethod(_GraphTools.GraphTools_RGNode_Reset,None,GraphTools_RGNode)
GraphTools_RGNode.SetVisited = new_instancemethod(_GraphTools.GraphTools_RGNode_SetVisited,None,GraphTools_RGNode)
GraphTools_RGNode.GetVisited = new_instancemethod(_GraphTools.GraphTools_RGNode_GetVisited,None,GraphTools_RGNode)
GraphTools_RGNode.AddAdj = new_instancemethod(_GraphTools.GraphTools_RGNode_AddAdj,None,GraphTools_RGNode)
GraphTools_RGNode.NbAdj = new_instancemethod(_GraphTools.GraphTools_RGNode_NbAdj,None,GraphTools_RGNode)
GraphTools_RGNode.GetAdj = new_instancemethod(_GraphTools.GraphTools_RGNode_GetAdj,None,GraphTools_RGNode)
GraphTools_RGNode.SetSC = new_instancemethod(_GraphTools.GraphTools_RGNode_SetSC,None,GraphTools_RGNode)
GraphTools_RGNode.GetSC = new_instancemethod(_GraphTools.GraphTools_RGNode_GetSC,None,GraphTools_RGNode)
GraphTools_RGNode._kill_pointed = new_instancemethod(_GraphTools.GraphTools_RGNode__kill_pointed,None,GraphTools_RGNode)
GraphTools_RGNode_swigregister = _GraphTools.GraphTools_RGNode_swigregister
GraphTools_RGNode_swigregister(GraphTools_RGNode)

class GraphTools_SC(OCC.MMgt.MMgt_TShared):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        """
        _GraphTools.GraphTools_SC_swiginit(self,_GraphTools.new_GraphTools_SC(*args))
    def Reset(self, *args):
        """
        :rtype: None

        """
        return _GraphTools.GraphTools_SC_Reset(self, *args)

    def AddVertex(self, *args):
        """
        :param V:
        :type V: int
        :rtype: None

        """
        return _GraphTools.GraphTools_SC_AddVertex(self, *args)

    def NbVertices(self, *args):
        """
        :rtype: int

        """
        return _GraphTools.GraphTools_SC_NbVertices(self, *args)

    def GetVertex(self, *args):
        """
        :param index:
        :type index: int
        :rtype: int

        """
        return _GraphTools.GraphTools_SC_GetVertex(self, *args)

    def AddFrontSC(self, *args):
        """
        :param SC:
        :type SC: Handle_GraphTools_SC &
        :rtype: None

        """
        return _GraphTools.GraphTools_SC_AddFrontSC(self, *args)

    def GetFrontSC(self, *args):
        """
        :rtype: GraphTools_SCList

        """
        return _GraphTools.GraphTools_SC_GetFrontSC(self, *args)

    def AddBackSC(self, *args):
        """
        :param SC:
        :type SC: Handle_GraphTools_SC &
        :rtype: None

        """
        return _GraphTools.GraphTools_SC_AddBackSC(self, *args)

    def GetBackSC(self, *args):
        """
        :rtype: GraphTools_SCList

        """
        return _GraphTools.GraphTools_SC_GetBackSC(self, *args)

    def _kill_pointed(self):
        """_kill_pointed(GraphTools_SC self)"""
        return _GraphTools.GraphTools_SC__kill_pointed(self)

    def GetHandle(self):
        """GetHandle(GraphTools_SC self) -> Handle_GraphTools_SC"""
        return _GraphTools.GraphTools_SC_GetHandle(self)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


GraphTools_SC.Reset = new_instancemethod(_GraphTools.GraphTools_SC_Reset,None,GraphTools_SC)
GraphTools_SC.AddVertex = new_instancemethod(_GraphTools.GraphTools_SC_AddVertex,None,GraphTools_SC)
GraphTools_SC.NbVertices = new_instancemethod(_GraphTools.GraphTools_SC_NbVertices,None,GraphTools_SC)
GraphTools_SC.GetVertex = new_instancemethod(_GraphTools.GraphTools_SC_GetVertex,None,GraphTools_SC)
GraphTools_SC.AddFrontSC = new_instancemethod(_GraphTools.GraphTools_SC_AddFrontSC,None,GraphTools_SC)
GraphTools_SC.GetFrontSC = new_instancemethod(_GraphTools.GraphTools_SC_GetFrontSC,None,GraphTools_SC)
GraphTools_SC.AddBackSC = new_instancemethod(_GraphTools.GraphTools_SC_AddBackSC,None,GraphTools_SC)
GraphTools_SC.GetBackSC = new_instancemethod(_GraphTools.GraphTools_SC_GetBackSC,None,GraphTools_SC)
GraphTools_SC._kill_pointed = new_instancemethod(_GraphTools.GraphTools_SC__kill_pointed,None,GraphTools_SC)
GraphTools_SC.GetHandle = new_instancemethod(_GraphTools.GraphTools_SC_GetHandle,None,GraphTools_SC)
GraphTools_SC_swigregister = _GraphTools.GraphTools_SC_swigregister
GraphTools_SC_swigregister(GraphTools_SC)

class Handle_GraphTools_SC(OCC.MMgt.Handle_MMgt_TShared):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        _GraphTools.Handle_GraphTools_SC_swiginit(self,_GraphTools.new_Handle_GraphTools_SC(*args))
    DownCast = staticmethod(_GraphTools.Handle_GraphTools_SC_DownCast)
    def __del__(self):
        try:
            self.thisown = False
            GarbageCollector.garbage.collect_object(self)
        except:
            pass


Handle_GraphTools_SC.Nullify = new_instancemethod(_GraphTools.Handle_GraphTools_SC_Nullify,None,Handle_GraphTools_SC)
Handle_GraphTools_SC.IsNull = new_instancemethod(_GraphTools.Handle_GraphTools_SC_IsNull,None,Handle_GraphTools_SC)
Handle_GraphTools_SC.GetObject = new_instancemethod(_GraphTools.Handle_GraphTools_SC_GetObject,None,Handle_GraphTools_SC)
Handle_GraphTools_SC._kill_pointed = new_instancemethod(_GraphTools.Handle_GraphTools_SC__kill_pointed,None,Handle_GraphTools_SC)
Handle_GraphTools_SC_swigregister = _GraphTools.Handle_GraphTools_SC_swigregister
Handle_GraphTools_SC_swigregister(Handle_GraphTools_SC)

def Handle_GraphTools_SC_DownCast(*args):
  return _GraphTools.Handle_GraphTools_SC_DownCast(*args)
Handle_GraphTools_SC_DownCast = _GraphTools.Handle_GraphTools_SC_DownCast

class GraphTools_SCList(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        """
        _GraphTools.GraphTools_SCList_swiginit(self,_GraphTools.new_GraphTools_SCList(*args))
    def Assign(self, *args):
        """
        :param Other:
        :type Other: GraphTools_SCList &
        :rtype: None

        """
        return _GraphTools.GraphTools_SCList_Assign(self, *args)

    def Set(self, *args):
        """
        :param Other:
        :type Other: GraphTools_SCList &
        :rtype: None

        """
        return _GraphTools.GraphTools_SCList_Set(self, *args)

    def Extent(self, *args):
        """
        :rtype: int

        """
        return _GraphTools.GraphTools_SCList_Extent(self, *args)

    def Clear(self, *args):
        """
        :rtype: None

        """
        return _GraphTools.GraphTools_SCList_Clear(self, *args)

    def IsEmpty(self, *args):
        """
        :rtype: bool

        """
        return _GraphTools.GraphTools_SCList_IsEmpty(self, *args)

    def Prepend(self, *args):
        """
        :param I:
        :type I: Handle_GraphTools_SC &
        :rtype: None

        :param I:
        :type I: Handle_GraphTools_SC &
        :param theIt:
        :type theIt: GraphTools_ListIteratorOfSCList &
        :rtype: None

        :param Other:
        :type Other: GraphTools_SCList &
        :rtype: None

        """
        return _GraphTools.GraphTools_SCList_Prepend(self, *args)

    def Append(self, *args):
        """
        :param I:
        :type I: Handle_GraphTools_SC &
        :rtype: None

        :param I:
        :type I: Handle_GraphTools_SC &
        :param theIt:
        :type theIt: GraphTools_ListIteratorOfSCList &
        :rtype: None

        :param Other:
        :type Other: GraphTools_SCList &
        :rtype: None

        """
        return _GraphTools.GraphTools_SCList_Append(self, *args)

    def First(self, *args):
        """
        :rtype: Handle_GraphTools_SC

        """
        return _GraphTools.GraphTools_SCList_First(self, *args)

    def Last(self, *args):
        """
        :rtype: Handle_GraphTools_SC

        """
        return _GraphTools.GraphTools_SCList_Last(self, *args)

    def RemoveFirst(self, *args):
        """
        :rtype: None

        """
        return _GraphTools.GraphTools_SCList_RemoveFirst(self, *args)

    def Remove(self, *args):
        """
        :param It:
        :type It: GraphTools_ListIteratorOfSCList &
        :rtype: None

        """
        return _GraphTools.GraphTools_SCList_Remove(self, *args)

    def InsertBefore(self, *args):
        """
        :param I:
        :type I: Handle_GraphTools_SC &
        :param It:
        :type It: GraphTools_ListIteratorOfSCList &
        :rtype: None

        :param Other:
        :type Other: GraphTools_SCList &
        :param It:
        :type It: GraphTools_ListIteratorOfSCList &
        :rtype: None

        """
        return _GraphTools.GraphTools_SCList_InsertBefore(self, *args)

    def InsertAfter(self, *args):
        """
        :param I:
        :type I: Handle_GraphTools_SC &
        :param It:
        :type It: GraphTools_ListIteratorOfSCList &
        :rtype: None

        :param Other:
        :type Other: GraphTools_SCList &
        :param It:
        :type It: GraphTools_ListIteratorOfSCList &
        :rtype: None

        """
        return _GraphTools.GraphTools_SCList_InsertAfter(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


GraphTools_SCList.Assign = new_instancemethod(_GraphTools.GraphTools_SCList_Assign,None,GraphTools_SCList)
GraphTools_SCList.Set = new_instancemethod(_GraphTools.GraphTools_SCList_Set,None,GraphTools_SCList)
GraphTools_SCList.Extent = new_instancemethod(_GraphTools.GraphTools_SCList_Extent,None,GraphTools_SCList)
GraphTools_SCList.Clear = new_instancemethod(_GraphTools.GraphTools_SCList_Clear,None,GraphTools_SCList)
GraphTools_SCList.IsEmpty = new_instancemethod(_GraphTools.GraphTools_SCList_IsEmpty,None,GraphTools_SCList)
GraphTools_SCList.Prepend = new_instancemethod(_GraphTools.GraphTools_SCList_Prepend,None,GraphTools_SCList)
GraphTools_SCList.Append = new_instancemethod(_GraphTools.GraphTools_SCList_Append,None,GraphTools_SCList)
GraphTools_SCList.First = new_instancemethod(_GraphTools.GraphTools_SCList_First,None,GraphTools_SCList)
GraphTools_SCList.Last = new_instancemethod(_GraphTools.GraphTools_SCList_Last,None,GraphTools_SCList)
GraphTools_SCList.RemoveFirst = new_instancemethod(_GraphTools.GraphTools_SCList_RemoveFirst,None,GraphTools_SCList)
GraphTools_SCList.Remove = new_instancemethod(_GraphTools.GraphTools_SCList_Remove,None,GraphTools_SCList)
GraphTools_SCList.InsertBefore = new_instancemethod(_GraphTools.GraphTools_SCList_InsertBefore,None,GraphTools_SCList)
GraphTools_SCList.InsertAfter = new_instancemethod(_GraphTools.GraphTools_SCList_InsertAfter,None,GraphTools_SCList)
GraphTools_SCList._kill_pointed = new_instancemethod(_GraphTools.GraphTools_SCList__kill_pointed,None,GraphTools_SCList)
GraphTools_SCList_swigregister = _GraphTools.GraphTools_SCList_swigregister
GraphTools_SCList_swigregister(GraphTools_SCList)

class GraphTools_TSNode(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def __init__(self, *args): 
        """
        :rtype: None

        """
        _GraphTools.GraphTools_TSNode_swiginit(self,_GraphTools.new_GraphTools_TSNode(*args))
    def Reset(self, *args):
        """
        :rtype: None

        """
        return _GraphTools.GraphTools_TSNode_Reset(self, *args)

    def IncreaseRef(self, *args):
        """
        :rtype: None

        """
        return _GraphTools.GraphTools_TSNode_IncreaseRef(self, *args)

    def DecreaseRef(self, *args):
        """
        :rtype: None

        """
        return _GraphTools.GraphTools_TSNode_DecreaseRef(self, *args)

    def NbRef(self, *args):
        """
        :rtype: int

        """
        return _GraphTools.GraphTools_TSNode_NbRef(self, *args)

    def AddSuccessor(self, *args):
        """
        :param s:
        :type s: int
        :rtype: None

        """
        return _GraphTools.GraphTools_TSNode_AddSuccessor(self, *args)

    def NbSuccessors(self, *args):
        """
        :rtype: int

        """
        return _GraphTools.GraphTools_TSNode_NbSuccessors(self, *args)

    def GetSuccessor(self, *args):
        """
        :param index:
        :type index: int
        :rtype: int

        """
        return _GraphTools.GraphTools_TSNode_GetSuccessor(self, *args)

    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


GraphTools_TSNode.Reset = new_instancemethod(_GraphTools.GraphTools_TSNode_Reset,None,GraphTools_TSNode)
GraphTools_TSNode.IncreaseRef = new_instancemethod(_GraphTools.GraphTools_TSNode_IncreaseRef,None,GraphTools_TSNode)
GraphTools_TSNode.DecreaseRef = new_instancemethod(_GraphTools.GraphTools_TSNode_DecreaseRef,None,GraphTools_TSNode)
GraphTools_TSNode.NbRef = new_instancemethod(_GraphTools.GraphTools_TSNode_NbRef,None,GraphTools_TSNode)
GraphTools_TSNode.AddSuccessor = new_instancemethod(_GraphTools.GraphTools_TSNode_AddSuccessor,None,GraphTools_TSNode)
GraphTools_TSNode.NbSuccessors = new_instancemethod(_GraphTools.GraphTools_TSNode_NbSuccessors,None,GraphTools_TSNode)
GraphTools_TSNode.GetSuccessor = new_instancemethod(_GraphTools.GraphTools_TSNode_GetSuccessor,None,GraphTools_TSNode)
GraphTools_TSNode._kill_pointed = new_instancemethod(_GraphTools.GraphTools_TSNode__kill_pointed,None,GraphTools_TSNode)
GraphTools_TSNode_swigregister = _GraphTools.GraphTools_TSNode_swigregister
GraphTools_TSNode_swigregister(GraphTools_TSNode)


