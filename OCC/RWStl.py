# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.11
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (3,0,0):
    new_instancemethod = lambda func, inst, cls: _RWStl.SWIG_PyInstanceMethod_New(func)
else:
    from new import instancemethod as new_instancemethod
if version_info >= (2,6,0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_RWStl', [dirname(__file__)])
        except ImportError:
            import _RWStl
            return _RWStl
        if fp is not None:
            try:
                _mod = imp.load_module('_RWStl', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _RWStl = swig_import_helper()
    del swig_import_helper
else:
    import _RWStl
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
    __swig_destroy__ = _RWStl.delete_SwigPyIterator
    def __iter__(self): return self
SwigPyIterator.value = new_instancemethod(_RWStl.SwigPyIterator_value,None,SwigPyIterator)
SwigPyIterator.incr = new_instancemethod(_RWStl.SwigPyIterator_incr,None,SwigPyIterator)
SwigPyIterator.decr = new_instancemethod(_RWStl.SwigPyIterator_decr,None,SwigPyIterator)
SwigPyIterator.distance = new_instancemethod(_RWStl.SwigPyIterator_distance,None,SwigPyIterator)
SwigPyIterator.equal = new_instancemethod(_RWStl.SwigPyIterator_equal,None,SwigPyIterator)
SwigPyIterator.copy = new_instancemethod(_RWStl.SwigPyIterator_copy,None,SwigPyIterator)
SwigPyIterator.next = new_instancemethod(_RWStl.SwigPyIterator_next,None,SwigPyIterator)
SwigPyIterator.__next__ = new_instancemethod(_RWStl.SwigPyIterator___next__,None,SwigPyIterator)
SwigPyIterator.previous = new_instancemethod(_RWStl.SwigPyIterator_previous,None,SwigPyIterator)
SwigPyIterator.advance = new_instancemethod(_RWStl.SwigPyIterator_advance,None,SwigPyIterator)
SwigPyIterator.__eq__ = new_instancemethod(_RWStl.SwigPyIterator___eq__,None,SwigPyIterator)
SwigPyIterator.__ne__ = new_instancemethod(_RWStl.SwigPyIterator___ne__,None,SwigPyIterator)
SwigPyIterator.__iadd__ = new_instancemethod(_RWStl.SwigPyIterator___iadd__,None,SwigPyIterator)
SwigPyIterator.__isub__ = new_instancemethod(_RWStl.SwigPyIterator___isub__,None,SwigPyIterator)
SwigPyIterator.__add__ = new_instancemethod(_RWStl.SwigPyIterator___add__,None,SwigPyIterator)
SwigPyIterator.__sub__ = new_instancemethod(_RWStl.SwigPyIterator___sub__,None,SwigPyIterator)
SwigPyIterator_swigregister = _RWStl.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

import OCC.StlMesh
import OCC.MMgt
import OCC.Standard
import OCC.gp
import OCC.TColgp
import OCC.TCollection
import OCC.OSD
import OCC.Message
import OCC.TColStd
class rwstl(object):
    thisown = _swig_property(lambda x: x.this.own(), lambda x, v: x.this.own(v), doc='The membership flag')
    __repr__ = _swig_repr
    def WriteBinary(*args) -> "Standard_Boolean" :
        """
        * write the meshing in a file following the  binary format of an STL file.  Returns false if the cannot be opened;

        :param aMesh:
        :type aMesh: Handle_StlMesh_Mesh &
        :param aPath:
        :type aPath: OSD_Path &
        :param aProgInd: default value is NULL
        :type aProgInd: Handle_Message_ProgressIndicator &
        :rtype: bool

        """
        return _RWStl.rwstl_WriteBinary(*args)

    WriteBinary = staticmethod(WriteBinary)
    def WriteAscii(*args) -> "Standard_Boolean" :
        """
        * write the meshing in a file following the  Ascii format of an STL file.  Returns false if the cannot be opened;

        :param aMesh:
        :type aMesh: Handle_StlMesh_Mesh &
        :param aPath:
        :type aPath: OSD_Path &
        :param aProgInd: default value is NULL
        :type aProgInd: Handle_Message_ProgressIndicator &
        :rtype: bool

        """
        return _RWStl.rwstl_WriteAscii(*args)

    WriteAscii = staticmethod(WriteAscii)
    def ReadFile(*args) -> "Handle_StlMesh_Mesh" :
        """
        * This method will chwck if the file is a binary  file or an AsciiFile testing the 5 first  characters of the file wich are :'solid' in an  ascii file. If we do not find that word we assume  that it is a binary file.

        :param aPath:
        :type aPath: OSD_Path &
        :param aProgInd: default value is NULL
        :type aProgInd: Handle_Message_ProgressIndicator &
        :rtype: Handle_StlMesh_Mesh

        """
        return _RWStl.rwstl_ReadFile(*args)

    ReadFile = staticmethod(ReadFile)
    def ReadBinary(*args) -> "Handle_StlMesh_Mesh" :
        """
        * Read a meshing from a binary file Raises NoMoreObject from Standard if a statement does not contain the right number of tokens Raises TypeMisMatch if a token has not the good type (often real)

        :param aPath:
        :type aPath: OSD_Path &
        :param aProgInd: default value is NULL
        :type aProgInd: Handle_Message_ProgressIndicator &
        :rtype: Handle_StlMesh_Mesh

        """
        return _RWStl.rwstl_ReadBinary(*args)

    ReadBinary = staticmethod(ReadBinary)
    def ReadAscii(*args) -> "Handle_StlMesh_Mesh" :
        """
        * Read a meshing from a binary file Raises NoMoreObject from Standard if a statement does not contain the right number of tokens Raises TypeMisMatch if a token has not the good type (often real) Raises MoMoreObject if a file is finished before having found the word endsolid;

        :param aPath:
        :type aPath: OSD_Path &
        :param aProgInd: default value is NULL
        :type aProgInd: Handle_Message_ProgressIndicator &
        :rtype: Handle_StlMesh_Mesh

        """
        return _RWStl.rwstl_ReadAscii(*args)

    ReadAscii = staticmethod(ReadAscii)
    def __init__(self): 
        _RWStl.rwstl_swiginit(self,_RWStl.new_rwstl())
    def __del__(self):
    	try:
    		self.thisown = False
    		GarbageCollector.garbage.collect_object(self)
    	except:
    		pass


rwstl._kill_pointed = new_instancemethod(_RWStl.rwstl__kill_pointed,None,rwstl)
rwstl_swigregister = _RWStl.rwstl_swigregister
rwstl_swigregister(rwstl)

def rwstl_WriteBinary(*args) -> "Standard_Boolean" :
  """
    * write the meshing in a file following the  binary format of an STL file.  Returns false if the cannot be opened;

    :param aMesh:
    :type aMesh: Handle_StlMesh_Mesh &
    :param aPath:
    :type aPath: OSD_Path &
    :param aProgInd: default value is NULL
    :type aProgInd: Handle_Message_ProgressIndicator &
    :rtype: bool

    """
  return _RWStl.rwstl_WriteBinary(*args)

def rwstl_WriteAscii(*args) -> "Standard_Boolean" :
  """
    * write the meshing in a file following the  Ascii format of an STL file.  Returns false if the cannot be opened;

    :param aMesh:
    :type aMesh: Handle_StlMesh_Mesh &
    :param aPath:
    :type aPath: OSD_Path &
    :param aProgInd: default value is NULL
    :type aProgInd: Handle_Message_ProgressIndicator &
    :rtype: bool

    """
  return _RWStl.rwstl_WriteAscii(*args)

def rwstl_ReadFile(*args) -> "Handle_StlMesh_Mesh" :
  """
    * This method will chwck if the file is a binary  file or an AsciiFile testing the 5 first  characters of the file wich are :'solid' in an  ascii file. If we do not find that word we assume  that it is a binary file.

    :param aPath:
    :type aPath: OSD_Path &
    :param aProgInd: default value is NULL
    :type aProgInd: Handle_Message_ProgressIndicator &
    :rtype: Handle_StlMesh_Mesh

    """
  return _RWStl.rwstl_ReadFile(*args)

def rwstl_ReadBinary(*args) -> "Handle_StlMesh_Mesh" :
  """
    * Read a meshing from a binary file Raises NoMoreObject from Standard if a statement does not contain the right number of tokens Raises TypeMisMatch if a token has not the good type (often real)

    :param aPath:
    :type aPath: OSD_Path &
    :param aProgInd: default value is NULL
    :type aProgInd: Handle_Message_ProgressIndicator &
    :rtype: Handle_StlMesh_Mesh

    """
  return _RWStl.rwstl_ReadBinary(*args)

def rwstl_ReadAscii(*args) -> "Handle_StlMesh_Mesh" :
  """
    * Read a meshing from a binary file Raises NoMoreObject from Standard if a statement does not contain the right number of tokens Raises TypeMisMatch if a token has not the good type (often real) Raises MoMoreObject if a file is finished before having found the word endsolid;

    :param aPath:
    :type aPath: OSD_Path &
    :param aProgInd: default value is NULL
    :type aProgInd: Handle_Message_ProgressIndicator &
    :rtype: Handle_StlMesh_Mesh

    """
  return _RWStl.rwstl_ReadAscii(*args)



