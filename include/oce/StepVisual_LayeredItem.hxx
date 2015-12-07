// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_LayeredItem_HeaderFile
#define _StepVisual_LayeredItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepVisual_PresentationRepresentation_HeaderFile
#include <Handle_StepVisual_PresentationRepresentation.hxx>
#endif
#ifndef _Handle_StepRepr_RepresentationItem_HeaderFile
#include <Handle_StepRepr_RepresentationItem.hxx>
#endif
class Standard_Transient;
class StepVisual_PresentationRepresentation;
class StepRepr_RepresentationItem;



class StepVisual_LayeredItem  : public StepData_SelectType {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns a LayeredItem SelectType <br>
  Standard_EXPORT   StepVisual_LayeredItem();
  //! Recognizes a LayeredItem Kind Entity that is : <br>
//!        1 -> PresentationRepresentation <br>
//!        2 -> RepresentationItem <br>
//!        0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a PresentationRepresentation (Null if another type) <br>
  Standard_EXPORT     Handle_StepVisual_PresentationRepresentation PresentationRepresentation() const;
  //! returns Value as a RepresentationItem (Null if another type) <br>
  Standard_EXPORT     Handle_StepRepr_RepresentationItem RepresentationItem() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
