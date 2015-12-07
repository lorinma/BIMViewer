// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dynamic_BooleanParameter_HeaderFile
#define _Dynamic_BooleanParameter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Dynamic_BooleanParameter_HeaderFile
#include <Handle_Dynamic_BooleanParameter.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Dynamic_Parameter_HeaderFile
#include <Dynamic_Parameter.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif


//! This class describes a parameter with a boolean <br>
//!          as value. <br>
class Dynamic_BooleanParameter : public Dynamic_Parameter {

public:

  //! Creates a boolean parameter with <aparameter> as name. <br>
  Standard_EXPORT   Dynamic_BooleanParameter(const Standard_CString aparameter);
  //! Creates a boolean parameter with <aparameter> and <avalue> <br>
//!          respectively as name and value. <br>
  Standard_EXPORT   Dynamic_BooleanParameter(const Standard_CString aparameter,const Standard_Boolean avalue);
  //! Creates a boolean parameter with <aparameter> as name <br>
//!          and <avalue> as value. <avalue> is a CString with two possible <br>
//!          values which are : "Standard_True" and "Standard_False". <br>
  Standard_EXPORT   Dynamic_BooleanParameter(const Standard_CString aparameter,const Standard_CString avalue);
  //! Returns the boolean value <thevalue>. <br>
  Standard_EXPORT     Standard_Boolean Value() const;
  //! Sets the field <thevalue> with the boolean value <avalue> <br>
  Standard_EXPORT     void Value(const Standard_Boolean avalue) ;
  //! Useful for debugging. <br>
  Standard_EXPORT   virtual  void Dump(Standard_OStream& astream) const;




  DEFINE_STANDARD_RTTI(Dynamic_BooleanParameter)

protected:




private: 


Standard_Boolean thevalue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
