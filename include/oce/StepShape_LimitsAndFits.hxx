// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_LimitsAndFits_HeaderFile
#define _StepShape_LimitsAndFits_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepShape_LimitsAndFits_HeaderFile
#include <Handle_StepShape_LimitsAndFits.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TCollection_HAsciiString;


//! Added for Dimensional Tolerances <br>
class StepShape_LimitsAndFits : public MMgt_TShared {

public:

  
  Standard_EXPORT   StepShape_LimitsAndFits();
  
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& form_variance,const Handle(TCollection_HAsciiString)& zone_variance,const Handle(TCollection_HAsciiString)& grade,const Handle(TCollection_HAsciiString)& source) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString FormVariance() const;
  
  Standard_EXPORT     void SetFormVariance(const Handle(TCollection_HAsciiString)& form_variance) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString ZoneVariance() const;
  
  Standard_EXPORT     void SetZoneVariance(const Handle(TCollection_HAsciiString)& zone_variance) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Grade() const;
  
  Standard_EXPORT     void SetGrade(const Handle(TCollection_HAsciiString)& grade) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Source() const;
  
  Standard_EXPORT     void SetSource(const Handle(TCollection_HAsciiString)& source) ;




  DEFINE_STANDARD_RTTI(StepShape_LimitsAndFits)

protected:




private: 


Handle_TCollection_HAsciiString theFormVariance;
Handle_TCollection_HAsciiString theZoneVariance;
Handle_TCollection_HAsciiString theGrade;
Handle_TCollection_HAsciiString theSource;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
