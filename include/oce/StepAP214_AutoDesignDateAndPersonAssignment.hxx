// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AutoDesignDateAndPersonAssignment_HeaderFile
#define _StepAP214_AutoDesignDateAndPersonAssignment_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepAP214_AutoDesignDateAndPersonAssignment_HeaderFile
#include <Handle_StepAP214_AutoDesignDateAndPersonAssignment.hxx>
#endif

#ifndef _Handle_StepAP214_HArray1OfAutoDesignDateAndPersonItem_HeaderFile
#include <Handle_StepAP214_HArray1OfAutoDesignDateAndPersonItem.hxx>
#endif
#ifndef _StepBasic_PersonAndOrganizationAssignment_HeaderFile
#include <StepBasic_PersonAndOrganizationAssignment.hxx>
#endif
#ifndef _Handle_StepBasic_PersonAndOrganization_HeaderFile
#include <Handle_StepBasic_PersonAndOrganization.hxx>
#endif
#ifndef _Handle_StepBasic_PersonAndOrganizationRole_HeaderFile
#include <Handle_StepBasic_PersonAndOrganizationRole.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class StepAP214_HArray1OfAutoDesignDateAndPersonItem;
class StepBasic_PersonAndOrganization;
class StepBasic_PersonAndOrganizationRole;
class StepAP214_AutoDesignDateAndPersonItem;



class StepAP214_AutoDesignDateAndPersonAssignment : public StepBasic_PersonAndOrganizationAssignment {

public:

  //! Returns a AutoDesignDateAndPersonAssignment <br>
  Standard_EXPORT   StepAP214_AutoDesignDateAndPersonAssignment();
  
  Standard_EXPORT   virtual  void Init(const Handle(StepBasic_PersonAndOrganization)& aAssignedPersonAndOrganization,const Handle(StepBasic_PersonAndOrganizationRole)& aRole) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(StepBasic_PersonAndOrganization)& aAssignedPersonAndOrganization,const Handle(StepBasic_PersonAndOrganizationRole)& aRole,const Handle(StepAP214_HArray1OfAutoDesignDateAndPersonItem)& aItems) ;
  
  Standard_EXPORT     void SetItems(const Handle(StepAP214_HArray1OfAutoDesignDateAndPersonItem)& aItems) ;
  
  Standard_EXPORT     Handle_StepAP214_HArray1OfAutoDesignDateAndPersonItem Items() const;
  
  Standard_EXPORT     StepAP214_AutoDesignDateAndPersonItem ItemsValue(const Standard_Integer num) const;
  
  Standard_EXPORT     Standard_Integer NbItems() const;




  DEFINE_STANDARD_RTTI(StepAP214_AutoDesignDateAndPersonAssignment)

protected:




private: 


Handle_StepAP214_HArray1OfAutoDesignDateAndPersonItem items;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
