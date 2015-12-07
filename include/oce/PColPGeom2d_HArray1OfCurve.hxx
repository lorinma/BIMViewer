// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColPGeom2d_HArray1OfCurve_HeaderFile
#define _PColPGeom2d_HArray1OfCurve_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PColPGeom2d_HArray1OfCurve_HeaderFile
#include <Handle_PColPGeom2d_HArray1OfCurve.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_PGeom2d_Curve_HeaderFile
#include <Handle_PGeom2d_Curve.hxx>
#endif
#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _PColPGeom2d_FieldOfHArray1OfCurve_HeaderFile
#include <PColPGeom2d_FieldOfHArray1OfCurve.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Persistent_HeaderFile
#include <Standard_Persistent.hxx>
#endif
#ifndef _Handle_PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve_HeaderFile
#include <Handle_PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class PGeom2d_Curve;
class Standard_Persistent;
class Standard_OutOfRange;
class Standard_RangeError;
class PColPGeom2d_FieldOfHArray1OfCurve;
class PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve;
class PColPGeom2d_VArrayTNodeOfFieldOfHArray1OfCurve;


class PColPGeom2d_HArray1OfCurve : public Standard_Persistent {

public:

  
  Standard_EXPORT   PColPGeom2d_HArray1OfCurve(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   PColPGeom2d_HArray1OfCurve(const Standard_Integer Low,const Standard_Integer Up,const Handle(PGeom2d_Curve)& V);
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(PGeom2d_Curve)& Value) ;
  
        Standard_Integer Upper() const;
  
  Standard_EXPORT     Handle_PGeom2d_Curve Value(const Standard_Integer Index) const;
  
  Standard_EXPORT   virtual  Handle_Standard_Persistent ShallowCopy() const;
  
  Standard_EXPORT   virtual  void ShallowDump(Standard_OStream& s) const;

  PColPGeom2d_HArray1OfCurve( )
{
  
}
PColPGeom2d_HArray1OfCurve(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPColPGeom2d_HArray1OfCurveLowerBound() const { return LowerBound; }
    void _CSFDB_SetPColPGeom2d_HArray1OfCurveLowerBound(const Standard_Integer p) { LowerBound = p; }
    Standard_Integer _CSFDB_GetPColPGeom2d_HArray1OfCurveUpperBound() const { return UpperBound; }
    void _CSFDB_SetPColPGeom2d_HArray1OfCurveUpperBound(const Standard_Integer p) { UpperBound = p; }
    const PColPGeom2d_FieldOfHArray1OfCurve& _CSFDB_GetPColPGeom2d_HArray1OfCurveData() const { return Data; }



  DEFINE_STANDARD_RTTI(PColPGeom2d_HArray1OfCurve)

protected:




private: 

  
  Standard_EXPORT     PColPGeom2d_FieldOfHArray1OfCurve Field() const;
  
  Standard_EXPORT     Standard_Address Datas() const;

Standard_Integer LowerBound;
Standard_Integer UpperBound;
PColPGeom2d_FieldOfHArray1OfCurve Data;


};

#define Item Handle_PGeom2d_Curve
#define Item_hxx <PGeom2d_Curve.hxx>
#define PCollection_FieldOfHArray1 PColPGeom2d_FieldOfHArray1OfCurve
#define PCollection_FieldOfHArray1_hxx <PColPGeom2d_FieldOfHArray1OfCurve.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PColPGeom2d_VArrayTNodeOfFieldOfHArray1OfCurve
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PColPGeom2d_VArrayTNodeOfFieldOfHArray1OfCurve.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PColPGeom2d_VArrayTNodeOfFieldOfHArray1OfCurve
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PColPGeom2d_VArrayTNodeOfFieldOfHArray1OfCurve.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PColPGeom2d_VArrayNodeOfFieldOfHArray1OfCurve_Type_()
#define PCollection_HArray1 PColPGeom2d_HArray1OfCurve
#define PCollection_HArray1_hxx <PColPGeom2d_HArray1OfCurve.hxx>
#define Handle_PCollection_HArray1 Handle_PColPGeom2d_HArray1OfCurve
#define PCollection_HArray1_Type_() PColPGeom2d_HArray1OfCurve_Type_()

#include <PCollection_HArray1.lxx>

#undef Item
#undef Item_hxx
#undef PCollection_FieldOfHArray1
#undef PCollection_FieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef PCollection_HArray1
#undef PCollection_HArray1_hxx
#undef Handle_PCollection_HArray1
#undef PCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline void ShallowDump(const Handle_PColPGeom2d_HArray1OfCurve& me,Standard_OStream& s) {
 me->ShallowDump(s);
}



#endif
