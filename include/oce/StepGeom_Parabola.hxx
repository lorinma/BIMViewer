// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Parabola_HeaderFile
#define _StepGeom_Parabola_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepGeom_Parabola_HeaderFile
#include <Handle_StepGeom_Parabola.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _StepGeom_Conic_HeaderFile
#include <StepGeom_Conic.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class TCollection_HAsciiString;
class StepGeom_Axis2Placement;



class StepGeom_Parabola : public StepGeom_Conic {

public:

  //! Returns a Parabola <br>
  Standard_EXPORT   StepGeom_Parabola();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const StepGeom_Axis2Placement& aPosition) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const StepGeom_Axis2Placement& aPosition,const Standard_Real aFocalDist) ;
  
  Standard_EXPORT     void SetFocalDist(const Standard_Real aFocalDist) ;
  
  Standard_EXPORT     Standard_Real FocalDist() const;




  DEFINE_STANDARD_RTTI(StepGeom_Parabola)

protected:




private: 


Standard_Real focalDist;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
