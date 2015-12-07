# This file was automatically generated by SWIG (http://www.swig.org).
# Version 2.0.11
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (3,0,0):
    new_instancemethod = lambda func, inst, cls: _OSD.SWIG_PyInstanceMethod_New(func)
else:
    from new import instancemethod as new_instancemethod
if version_info >= (2,6,0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_OSD', [dirname(__file__)])
        except ImportError:
            import _OSD
            return _OSD
        if fp is not None:
            try:
                _mod = imp.load_module('_OSD', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _OSD = swig_import_helper()
    del swig_import_helper
else:
    import _OSD
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
    __swig_destroy__ = _OSD.delete_SwigPyIterator
    def __iter__(self): return self
SwigPyIterator.value = new_instancemethod(_OSD.SwigPyIterator_value,None,SwigPyIterator)
SwigPyIterator.incr = new_instancemethod(_OSD.SwigPyIterator_incr,None,SwigPyIterator)
SwigPyIterator.decr = new_instancemethod(_OSD.SwigPyIterator_decr,None,SwigPyIterator)
SwigPyIterator.distance = new_instancemethod(_OSD.SwigPyIterator_distance,None,SwigPyIterator)
SwigPyIterator.equal = new_instancemethod(_OSD.SwigPyIterator_equal,None,SwigPyIterator)
SwigPyIterator.copy = new_instancemethod(_OSD.SwigPyIterator_copy,None,SwigPyIterator)
SwigPyIterator.next = new_instancemethod(_OSD.SwigPyIterator_next,None,SwigPyIterator)
SwigPyIterator.__next__ = new_instancemethod(_OSD.SwigPyIterator___next__,None,SwigPyIterator)
SwigPyIterator.previous = new_instancemethod(_OSD.SwigPyIterator_previous,None,SwigPyIterator)
SwigPyIterator.advance = new_instancemethod(_OSD.SwigPyIterator_advance,None,SwigPyIterator)
SwigPyIterator.__eq__ = new_instancemethod(_OSD.SwigPyIterator___eq__,None,SwigPyIterator)
SwigPyIterator.__ne__ = new_instancemethod(_OSD.SwigPyIterator___ne__,None,SwigPyIterator)
SwigPyIterator.__iadd__ = new_instancemethod(_OSD.SwigPyIterator___iadd__,None,SwigPyIterator)
SwigPyIterator.__isub__ = new_instancemethod(_OSD.SwigPyIterator___isub__,None,SwigPyIterator)
SwigPyIterator.__add__ = new_instancemethod(_OSD.SwigPyIterator___add__,None,SwigPyIterator)
SwigPyIterator.__sub__ = new_instancemethod(_OSD.SwigPyIterator___sub__,None,SwigPyIterator)
SwigPyIterator_swigregister = _OSD.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)

import OCC.Standard
OSD_FromBeginning = _OSD.OSD_FromBeginning
OSD_FromHere = _OSD.OSD_FromHere
OSD_FromEnd = _OSD.OSD_FromEnd
OSD_FILE = _OSD.OSD_FILE
OSD_DIRECTORY = _OSD.OSD_DIRECTORY
OSD_LINK = _OSD.OSD_LINK
OSD_SOCKET = _OSD.OSD_SOCKET
OSD_UNKNOWN = _OSD.OSD_UNKNOWN
OSD_RTLD_LAZY = _OSD.OSD_RTLD_LAZY
OSD_RTLD_NOW = _OSD.OSD_RTLD_NOW
OSD_NoLock = _OSD.OSD_NoLock
OSD_ReadLock = _OSD.OSD_ReadLock
OSD_WriteLock = _OSD.OSD_WriteLock
OSD_ExclusiveLock = _OSD.OSD_ExclusiveLock
OSD_Unavailable = _OSD.OSD_Unavailable
OSD_SUN = _OSD.OSD_SUN
OSD_DEC = _OSD.OSD_DEC
OSD_SGI = _OSD.OSD_SGI
OSD_NEC = _OSD.OSD_NEC
OSD_MAC = _OSD.OSD_MAC
OSD_PC = _OSD.OSD_PC
OSD_HP = _OSD.OSD_HP
OSD_IBM = _OSD.OSD_IBM
OSD_VAX = _OSD.OSD_VAX
OSD_LIN = _OSD.OSD_LIN
OSD_AIX = _OSD.OSD_AIX
OSD_ReadOnly = _OSD.OSD_ReadOnly
OSD_WriteOnly = _OSD.OSD_WriteOnly
OSD_ReadWrite = _OSD.OSD_ReadWrite
OSD_None = _OSD.OSD_None
OSD_R = _OSD.OSD_R
OSD_W = _OSD.OSD_W
OSD_RW = _OSD.OSD_RW
OSD_X = _OSD.OSD_X
OSD_RX = _OSD.OSD_RX
OSD_WX = _OSD.OSD_WX
OSD_RWX = _OSD.OSD_RWX
OSD_D = _OSD.OSD_D
OSD_RD = _OSD.OSD_RD
OSD_WD = _OSD.OSD_WD
OSD_RWD = _OSD.OSD_RWD
OSD_XD = _OSD.OSD_XD
OSD_RXD = _OSD.OSD_RXD
OSD_WXD = _OSD.OSD_WXD
OSD_RWXD = _OSD.OSD_RWXD
OSD_Unknown = _OSD.OSD_Unknown
OSD_Default = _OSD.OSD_Default
OSD_UnixBSD = _OSD.OSD_UnixBSD
OSD_UnixSystemV = _OSD.OSD_UnixSystemV
OSD_VMS = _OSD.OSD_VMS
OSD_OS2 = _OSD.OSD_OS2
OSD_OSF = _OSD.OSD_OSF
OSD_MacOs = _OSD.OSD_MacOs
OSD_Taligent = _OSD.OSD_Taligent
OSD_WindowsNT = _OSD.OSD_WindowsNT
OSD_LinuxREDHAT = _OSD.OSD_LinuxREDHAT
OSD_Aix = _OSD.OSD_Aix
OSD_WDirectory = _OSD.OSD_WDirectory
OSD_WDirectoryIterator = _OSD.OSD_WDirectoryIterator
OSD_WEnvironment = _OSD.OSD_WEnvironment
OSD_WFile = _OSD.OSD_WFile
OSD_WFileNode = _OSD.OSD_WFileNode
OSD_WFileIterator = _OSD.OSD_WFileIterator
OSD_WPath = _OSD.OSD_WPath
OSD_WProcess = _OSD.OSD_WProcess
OSD_WProtection = _OSD.OSD_WProtection
OSD_WHost = _OSD.OSD_WHost
OSD_WDisk = _OSD.OSD_WDisk
OSD_WChronometer = _OSD.OSD_WChronometer
OSD_WTimer = _OSD.OSD_WTimer
OSD_WPackage = _OSD.OSD_WPackage
OSD_WPrinter = _OSD.OSD_WPrinter
OSD_WEnvironmentIterator = _OSD.OSD_WEnvironmentIterator

