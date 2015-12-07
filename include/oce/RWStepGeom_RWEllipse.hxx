// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepGeom_RWEllipse_HeaderFile
#define _RWStepGeom_RWEllipse_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepData_StepReaderData_HeaderFile
#include <Handle_StepData_StepReaderData.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Handle_StepGeom_Ellipse_HeaderFile
#include <Handle_StepGeom_Ellipse.hxx>
#endif
class StepData_StepReaderData;
class Interface_Check;
class StepGeom_Ellipse;
class StepData_StepWriter;
class Interface_EntityIterator;
class Interface_ShareTool;


//! Read & Write Module for Ellipse <br>
//!           Check added by CKY , 7-OCT-1996 <br>
class RWStepGeom_RWEllipse  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   RWStepGeom_RWEllipse();
  
  Standard_EXPORT     void ReadStep(const Handle(StepData_StepReaderData)& data,const Standard_Integer num,Handle(Interface_Check)& ach,const Handle(StepGeom_Ellipse)& ent) const;
  
  Standard_EXPORT     void WriteStep(StepData_StepWriter& SW,const Handle(StepGeom_Ellipse)& ent) const;
  
  Standard_EXPORT     void Share(const Handle(StepGeom_Ellipse)& ent,Interface_EntityIterator& iter) const;
  
  Standard_EXPORT     void Check(const Handle(StepGeom_Ellipse)& ent,const Interface_ShareTool& shares,Handle(Interface_Check)& ach) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
