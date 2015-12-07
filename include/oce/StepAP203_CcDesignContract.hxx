// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_CcDesignContract_HeaderFile
#define _StepAP203_CcDesignContract_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepAP203_CcDesignContract_HeaderFile
#include <Handle_StepAP203_CcDesignContract.hxx>
#endif

#ifndef _Handle_StepAP203_HArray1OfContractedItem_HeaderFile
#include <Handle_StepAP203_HArray1OfContractedItem.hxx>
#endif
#ifndef _StepBasic_ContractAssignment_HeaderFile
#include <StepBasic_ContractAssignment.hxx>
#endif
#ifndef _Handle_StepBasic_Contract_HeaderFile
#include <Handle_StepBasic_Contract.hxx>
#endif
class StepAP203_HArray1OfContractedItem;
class StepBasic_Contract;


//! Representation of STEP entity CcDesignContract <br>
class StepAP203_CcDesignContract : public StepBasic_ContractAssignment {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepAP203_CcDesignContract();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(StepBasic_Contract)& aContractAssignment_AssignedContract,const Handle(StepAP203_HArray1OfContractedItem)& aItems) ;
  //! Returns field Items <br>
  Standard_EXPORT     Handle_StepAP203_HArray1OfContractedItem Items() const;
  //! Set field Items <br>
  Standard_EXPORT     void SetItems(const Handle(StepAP203_HArray1OfContractedItem)& Items) ;




  DEFINE_STANDARD_RTTI(StepAP203_CcDesignContract)

protected:




private: 


Handle_StepAP203_HArray1OfContractedItem theItems;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
