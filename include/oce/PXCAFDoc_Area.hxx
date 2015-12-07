// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PXCAFDoc_Area_HeaderFile
#define _PXCAFDoc_Area_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PXCAFDoc_Area_HeaderFile
#include <Handle_PXCAFDoc_Area.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _PDF_Attribute_HeaderFile
#include <PDF_Attribute.hxx>
#endif


class PXCAFDoc_Area : public PDF_Attribute {

public:

  
  Standard_EXPORT   PXCAFDoc_Area();
  
  Standard_EXPORT   PXCAFDoc_Area(const Standard_Real Value);
  
  Standard_EXPORT     Standard_Real Get() const;
  
  Standard_EXPORT     void Set(const Standard_Real V) ;

PXCAFDoc_Area(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Standard_Real _CSFDB_GetPXCAFDoc_AreamyValue() const { return myValue; }
    void _CSFDB_SetPXCAFDoc_AreamyValue(const Standard_Real p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PXCAFDoc_Area)

protected:




private: 


Standard_Real myValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
