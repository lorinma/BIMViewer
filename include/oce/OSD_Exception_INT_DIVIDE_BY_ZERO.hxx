// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_Exception_INT_DIVIDE_BY_ZERO_HeaderFile
#define _OSD_Exception_INT_DIVIDE_BY_ZERO_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_DefineException_HeaderFile
#include <Standard_DefineException.hxx>
#endif
#ifndef _Standard_SStream_HeaderFile
#include <Standard_SStream.hxx>
#endif

#ifndef _OSD_Exception_HeaderFile
#include <OSD_Exception.hxx>
#endif
#ifndef _Handle_OSD_Exception_INT_DIVIDE_BY_ZERO_HeaderFile
#include <Handle_OSD_Exception_INT_DIVIDE_BY_ZERO.hxx>
#endif

#if !defined No_Exception && !defined No_OSD_Exception_INT_DIVIDE_BY_ZERO
#define OSD_Exception_INT_DIVIDE_BY_ZERO_Raise_if(CONDITION,MESSAGE) \
  if (CONDITION) OSD_Exception_INT_DIVIDE_BY_ZERO::Raise(MESSAGE);
#else
#define OSD_Exception_INT_DIVIDE_BY_ZERO_Raise_if(CONDITION,MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(OSD_Exception_INT_DIVIDE_BY_ZERO,OSD_Exception)

#endif
