// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ChFiDS_Stripe_HeaderFile
#define _ChFiDS_Stripe_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ChFiDS_Stripe_HeaderFile
#include <Handle_ChFiDS_Stripe.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_ChFiDS_Spine_HeaderFile
#include <Handle_ChFiDS_Spine.hxx>
#endif
#ifndef _Handle_ChFiDS_HData_HeaderFile
#include <Handle_ChFiDS_HData.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class ChFiDS_Spine;
class ChFiDS_HData;
class Geom2d_Curve;


//! data structure associe au coin <br>
class ChFiDS_Stripe : public MMgt_TShared {

public:

  
  Standard_EXPORT   ChFiDS_Stripe();
  //! Reset everything except Spine. <br>
  Standard_EXPORT     void Reset() ;
  
       const Handle_ChFiDS_HData& SetOfSurfData() const;
  
       const Handle_ChFiDS_Spine& Spine() const;
  
        TopAbs_Orientation OrientationOnFace1() const;
  
        TopAbs_Orientation OrientationOnFace2() const;
  
        Standard_Integer Choix() const;
  
        Handle_ChFiDS_HData& ChangeSetOfSurfData() ;
  
        Handle_ChFiDS_Spine& ChangeSpine() ;
  
        void OrientationOnFace1(const TopAbs_Orientation Or1) ;
  
        void OrientationOnFace2(const TopAbs_Orientation Or2) ;
  
        void Choix(const Standard_Integer C) ;
  
        void FirstParameters(Standard_Real& Pdeb,Standard_Real& Pfin) const;
  
        void LastParameters(Standard_Real& Pdeb,Standard_Real& Pfin) const;
  
        void ChangeFirstParameters(const Standard_Real Pdeb,const Standard_Real Pfin) ;
  
        void ChangeLastParameters(const Standard_Real Pdeb,const Standard_Real Pfin) ;
  
        Standard_Integer FirstCurve() const;
  
        Standard_Integer LastCurve() const;
  
        void ChangeFirstCurve(const Standard_Integer Index) ;
  
        void ChangeLastCurve(const Standard_Integer Index) ;
  
       const Handle_Geom2d_Curve& FirstPCurve() const;
  
       const Handle_Geom2d_Curve& LastPCurve() const;
  
        Handle_Geom2d_Curve& ChangeFirstPCurve() ;
  
        Handle_Geom2d_Curve& ChangeLastPCurve() ;
  
        TopAbs_Orientation FirstPCurveOrientation() const;
  
        TopAbs_Orientation LastPCurveOrientation() const;
  
        void FirstPCurveOrientation(const TopAbs_Orientation O) ;
  
        void LastPCurveOrientation(const TopAbs_Orientation O) ;
  
        Standard_Integer IndexFirstPointOnS1() const;
  
        Standard_Integer IndexFirstPointOnS2() const;
  
        Standard_Integer IndexLastPointOnS1() const;
  
        Standard_Integer IndexLastPointOnS2() const;
  
        void ChangeIndexFirstPointOnS1(const Standard_Integer Index) ;
  
        void ChangeIndexFirstPointOnS2(const Standard_Integer Index) ;
  
        void ChangeIndexLastPointOnS1(const Standard_Integer Index) ;
  
        void ChangeIndexLastPointOnS2(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Parameters(const Standard_Boolean First,Standard_Real& Pdeb,Standard_Real& Pfin) const;
  
  Standard_EXPORT     void SetParameters(const Standard_Boolean First,const Standard_Real Pdeb,const Standard_Real Pfin) ;
  
  Standard_EXPORT     Standard_Integer Curve(const Standard_Boolean First) const;
  
  Standard_EXPORT     void SetCurve(const Standard_Integer Index,const Standard_Boolean First) ;
  
  Standard_EXPORT    const Handle_Geom2d_Curve& PCurve(const Standard_Boolean First) const;
  
  Standard_EXPORT     Handle_Geom2d_Curve& ChangePCurve(const Standard_Boolean First) ;
  
  Standard_EXPORT     TopAbs_Orientation Orientation(const Standard_Integer OnS) const;
  
  Standard_EXPORT     void SetOrientation(const TopAbs_Orientation Or,const Standard_Integer OnS) ;
  
  Standard_EXPORT     TopAbs_Orientation Orientation(const Standard_Boolean First) const;
  
  Standard_EXPORT     void SetOrientation(const TopAbs_Orientation Or,const Standard_Boolean First) ;
  
  Standard_EXPORT     Standard_Integer IndexPoint(const Standard_Boolean First,const Standard_Integer OnS) const;
  
  Standard_EXPORT     void SetIndexPoint(const Standard_Integer Index,const Standard_Boolean First,const Standard_Integer OnS) ;
  
  Standard_EXPORT     Standard_Integer SolidIndex() const;
  
  Standard_EXPORT     void SetSolidIndex(const Standard_Integer Index) ;
  //! Set nb of SurfData's at end put in DS <br>
  Standard_EXPORT     void InDS(const Standard_Boolean First,const Standard_Integer Nb = 1) ;
  //! Returns nb of SurfData's at end being in DS <br>
  Standard_EXPORT     Standard_Integer IsInDS(const Standard_Boolean First) const;




  DEFINE_STANDARD_RTTI(ChFiDS_Stripe)

protected:




private: 


Standard_Real pardeb1;
Standard_Real parfin1;
Standard_Real pardeb2;
Standard_Real parfin2;
Handle_ChFiDS_Spine mySpine;
Handle_ChFiDS_HData myHdata;
Handle_Geom2d_Curve pcrv1;
Handle_Geom2d_Curve pcrv2;
Standard_Integer myChoix;
Standard_Integer indexOfSolid;
Standard_Integer indexOfcurve1;
Standard_Integer indexOfcurve2;
Standard_Integer indexfirstPOnS1;
Standard_Integer indexlastPOnS1;
Standard_Integer indexfirstPOnS2;
Standard_Integer indexlastPOnS2;
Standard_Integer begfilled;
Standard_Integer endfilled;
TopAbs_Orientation myOr1;
TopAbs_Orientation myOr2;
TopAbs_Orientation orcurv1;
TopAbs_Orientation orcurv2;


};


#include <ChFiDS_Stripe.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
