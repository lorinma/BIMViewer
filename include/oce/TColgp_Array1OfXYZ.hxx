// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_Array1OfXYZ_HeaderFile
#define _TColgp_Array1OfXYZ_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class gp_XYZ;



class TColgp_Array1OfXYZ  {
public:

  DEFINE_STANDARD_ALLOC

  
      TColgp_Array1OfXYZ(const Standard_Integer Low,const Standard_Integer Up);
  
      TColgp_Array1OfXYZ(const gp_XYZ& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const gp_XYZ& V) ;
  
        void Destroy() ;
~TColgp_Array1OfXYZ()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const TColgp_Array1OfXYZ& Assign(const TColgp_Array1OfXYZ& Other) ;
   const TColgp_Array1OfXYZ& operator =(const TColgp_Array1OfXYZ& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const gp_XYZ& Value) ;
  
       const gp_XYZ& Value(const Standard_Integer Index) const;
     const gp_XYZ& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        gp_XYZ& ChangeValue(const Standard_Integer Index) ;
      gp_XYZ& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   TColgp_Array1OfXYZ(const TColgp_Array1OfXYZ& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item gp_XYZ
#define Array1Item_hxx <gp_XYZ.hxx>
#define TCollection_Array1 TColgp_Array1OfXYZ
#define TCollection_Array1_hxx <TColgp_Array1OfXYZ.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
