// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_HArray1OfTransient_HeaderFile
#define _TColStd_HArray1OfTransient_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfTransient_HeaderFile
#include <Handle_TColStd_HArray1OfTransient.hxx>
#endif

#ifndef _TColStd_Array1OfTransient_HeaderFile
#include <TColStd_Array1OfTransient.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_Transient;
class TColStd_Array1OfTransient;



class TColStd_HArray1OfTransient : public MMgt_TShared {

public:

  
      TColStd_HArray1OfTransient(const Standard_Integer Low,const Standard_Integer Up);
  
      TColStd_HArray1OfTransient(const Standard_Integer Low,const Standard_Integer Up,const Handle(Standard_Transient)& V);
  
        void Init(const Handle(Standard_Transient)& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(Standard_Transient)& Value) ;
  
       const Handle_Standard_Transient& Value(const Standard_Integer Index) const;
  
        Handle_Standard_Transient& ChangeValue(const Standard_Integer Index) ;
  
       const TColStd_Array1OfTransient& Array1() const;
  
        TColStd_Array1OfTransient& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TColStd_HArray1OfTransient)

protected:




private: 


TColStd_Array1OfTransient myArray;


};

#define ItemHArray1 Handle_Standard_Transient
#define ItemHArray1_hxx <Standard_Transient.hxx>
#define TheArray1 TColStd_Array1OfTransient
#define TheArray1_hxx <TColStd_Array1OfTransient.hxx>
#define TCollection_HArray1 TColStd_HArray1OfTransient
#define TCollection_HArray1_hxx <TColStd_HArray1OfTransient.hxx>
#define Handle_TCollection_HArray1 Handle_TColStd_HArray1OfTransient
#define TCollection_HArray1_Type_() TColStd_HArray1OfTransient_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
