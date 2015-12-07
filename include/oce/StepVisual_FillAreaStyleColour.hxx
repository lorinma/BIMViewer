// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_FillAreaStyleColour_HeaderFile
#define _StepVisual_FillAreaStyleColour_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepVisual_FillAreaStyleColour_HeaderFile
#include <Handle_StepVisual_FillAreaStyleColour.hxx>
#endif

#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepVisual_Colour_HeaderFile
#include <Handle_StepVisual_Colour.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class TCollection_HAsciiString;
class StepVisual_Colour;



class StepVisual_FillAreaStyleColour : public MMgt_TShared {

public:

  //! Returns a FillAreaStyleColour <br>
  Standard_EXPORT   StepVisual_FillAreaStyleColour();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepVisual_Colour)& aFillColour) ;
  
  Standard_EXPORT     void SetName(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT     Handle_TCollection_HAsciiString Name() const;
  
  Standard_EXPORT     void SetFillColour(const Handle(StepVisual_Colour)& aFillColour) ;
  
  Standard_EXPORT     Handle_StepVisual_Colour FillColour() const;




  DEFINE_STANDARD_RTTI(StepVisual_FillAreaStyleColour)

protected:




private: 


Handle_TCollection_HAsciiString name;
Handle_StepVisual_Colour fillColour;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
