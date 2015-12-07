// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_HeaderFile
#define _GeomFill_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Convert_ParameterisationType_HeaderFile
#include <Convert_ParameterisationType.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Geom_Surface;
class Geom_Curve;
class gp_Vec;
class gp_Pnt;
class TColgp_Array1OfPnt;
class TColStd_Array1OfReal;
class TColgp_Array1OfVec;
class TColStd_Array1OfInteger;
class GeomFill_Filling;
class GeomFill_Stretch;
class GeomFill_Coons;
class GeomFill_Curved;
class GeomFill_BezierCurves;
class GeomFill_BSplineCurves;
class GeomFill_Profiler;
class GeomFill_SectionGenerator;
class GeomFill_Line;
class GeomFill_AppSurf;
class GeomFill_SweepSectionGenerator;
class GeomFill_AppSweep;
class GeomFill_Generator;
class GeomFill_Pipe;
class GeomFill_Tensor;
class GeomFill_ConstrainedFilling;
class GeomFill_Boundary;
class GeomFill_DegeneratedBound;
class GeomFill_SimpleBound;
class GeomFill_BoundWithSurf;
class GeomFill_CoonsAlgPatch;
class GeomFill_TgtField;
class GeomFill_TgtOnCoons;
class GeomFill_CornerState;
class GeomFill_SequenceOfTrsf;
class GeomFill_SequenceOfAx2;
class GeomFill_HSequenceOfAx2;
class GeomFill_CircularBlendFunc;
class GeomFill_SweepFunction;
class GeomFill_LocFunction;
class GeomFill_PolynomialConvertor;
class GeomFill_QuasiAngularConvertor;
class GeomFill_SnglrFunc;
class GeomFill_FunctionDraft;
class GeomFill_PlanFunc;
class GeomFill_FunctionGuide;
class GeomFill_SectionLaw;
class GeomFill_UniformSection;
class GeomFill_EvolvedSection;
class GeomFill_NSections;
class GeomFill_LocationLaw;
class GeomFill_CurveAndTrihedron;
class GeomFill_LocationDraft;
class GeomFill_LocationGuide;
class GeomFill_TrihedronLaw;
class GeomFill_Fixed;
class GeomFill_Frenet;
class GeomFill_CorrectedFrenet;
class GeomFill_DiscreteTrihedron;
class GeomFill_ConstantBiNormal;
class GeomFill_Darboux;
class GeomFill_DraftTrihedron;
class GeomFill_TrihedronWithGuide;
class GeomFill_GuideTrihedronAC;
class GeomFill_GuideTrihedronPlan;
class GeomFill_Sweep;
class GeomFill_SectionPlacement;
class GeomFill_Array1OfSectionLaw;
class GeomFill_HArray1OfSectionLaw;
class GeomFill_Array1OfLocationLaw;
class GeomFill_HArray1OfLocationLaw;
class GeomFill_SequenceNodeOfSequenceOfTrsf;
class GeomFill_SequenceNodeOfSequenceOfAx2;


//! Tools and Data to filling Surface and Sweep Surfaces <br>
class GeomFill  {
public:

  DEFINE_STANDARD_ALLOC

  
//! Builds a ruled surface between the two curves, Curve1 and Curve2. <br>
  Standard_EXPORT   static  Handle_Geom_Surface Surface(const Handle(Geom_Curve)& Curve1,const Handle(Geom_Curve)& Curve2) ;
  
  Standard_EXPORT   static  void GetCircle(const Convert_ParameterisationType TConv,const gp_Vec& ns1,const gp_Vec& ns2,const gp_Vec& nplan,const gp_Pnt& pt1,const gp_Pnt& pt2,const Standard_Real Rayon,const gp_Pnt& Center,TColgp_Array1OfPnt& Poles,TColStd_Array1OfReal& Weigths) ;
  
  Standard_EXPORT   static  Standard_Boolean GetCircle(const Convert_ParameterisationType TConv,const gp_Vec& ns1,const gp_Vec& ns2,const gp_Vec& dn1w,const gp_Vec& dn2w,const gp_Vec& nplan,const gp_Vec& dnplan,const gp_Pnt& pts1,const gp_Pnt& pts2,const gp_Vec& tang1,const gp_Vec& tang2,const Standard_Real Rayon,const Standard_Real DRayon,const gp_Pnt& Center,const gp_Vec& DCenter,TColgp_Array1OfPnt& Poles,TColgp_Array1OfVec& DPoles,TColStd_Array1OfReal& Weigths,TColStd_Array1OfReal& DWeigths) ;
  
  Standard_EXPORT   static  Standard_Boolean GetCircle(const Convert_ParameterisationType TConv,const gp_Vec& ns1,const gp_Vec& ns2,const gp_Vec& dn1w,const gp_Vec& dn2w,const gp_Vec& d2n1w,const gp_Vec& d2n2w,const gp_Vec& nplan,const gp_Vec& dnplan,const gp_Vec& d2nplan,const gp_Pnt& pts1,const gp_Pnt& pts2,const gp_Vec& tang1,const gp_Vec& tang2,const gp_Vec& Dtang1,const gp_Vec& Dtang2,const Standard_Real Rayon,const Standard_Real DRayon,const Standard_Real D2Rayon,const gp_Pnt& Center,const gp_Vec& DCenter,const gp_Vec& D2Center,TColgp_Array1OfPnt& Poles,TColgp_Array1OfVec& DPoles,TColgp_Array1OfVec& D2Poles,TColStd_Array1OfReal& Weigths,TColStd_Array1OfReal& DWeigths,TColStd_Array1OfReal& D2Weigths) ;
  
  Standard_EXPORT   static  void GetShape(const Standard_Real MaxAng,Standard_Integer& NbPoles,Standard_Integer& NbKnots,Standard_Integer& Degree,Convert_ParameterisationType& TypeConv) ;
  
  Standard_EXPORT   static  void Knots(const Convert_ParameterisationType TypeConv,TColStd_Array1OfReal& TKnots) ;
  
  Standard_EXPORT   static  void Mults(const Convert_ParameterisationType TypeConv,TColStd_Array1OfInteger& TMults) ;
  
  Standard_EXPORT   static  void GetMinimalWeights(const Convert_ParameterisationType TConv,const Standard_Real AngleMin,const Standard_Real AngleMax,TColStd_Array1OfReal& Weigths) ;
  //! Used  by  the  generical classes to determine <br>
//!          Tolerance for approximation <br>
  Standard_EXPORT   static  Standard_Real GetTolerance(const Convert_ParameterisationType TConv,const Standard_Real AngleMin,const Standard_Real Radius,const Standard_Real AngularTol,const Standard_Real SpatialTol) ;





protected:





private:




friend class GeomFill_Filling;
friend class GeomFill_Stretch;
friend class GeomFill_Coons;
friend class GeomFill_Curved;
friend class GeomFill_BezierCurves;
friend class GeomFill_BSplineCurves;
friend class GeomFill_Profiler;
friend class GeomFill_SectionGenerator;
friend class GeomFill_Line;
friend class GeomFill_AppSurf;
friend class GeomFill_SweepSectionGenerator;
friend class GeomFill_AppSweep;
friend class GeomFill_Generator;
friend class GeomFill_Pipe;
friend class GeomFill_Tensor;
friend class GeomFill_ConstrainedFilling;
friend class GeomFill_Boundary;
friend class GeomFill_DegeneratedBound;
friend class GeomFill_SimpleBound;
friend class GeomFill_BoundWithSurf;
friend class GeomFill_CoonsAlgPatch;
friend class GeomFill_TgtField;
friend class GeomFill_TgtOnCoons;
friend class GeomFill_CornerState;
friend class GeomFill_SequenceOfTrsf;
friend class GeomFill_SequenceOfAx2;
friend class GeomFill_HSequenceOfAx2;
friend class GeomFill_CircularBlendFunc;
friend class GeomFill_SweepFunction;
friend class GeomFill_LocFunction;
friend class GeomFill_PolynomialConvertor;
friend class GeomFill_QuasiAngularConvertor;
friend class GeomFill_SnglrFunc;
friend class GeomFill_FunctionDraft;
friend class GeomFill_PlanFunc;
friend class GeomFill_FunctionGuide;
friend class GeomFill_SectionLaw;
friend class GeomFill_UniformSection;
friend class GeomFill_EvolvedSection;
friend class GeomFill_NSections;
friend class GeomFill_LocationLaw;
friend class GeomFill_CurveAndTrihedron;
friend class GeomFill_LocationDraft;
friend class GeomFill_LocationGuide;
friend class GeomFill_TrihedronLaw;
friend class GeomFill_Fixed;
friend class GeomFill_Frenet;
friend class GeomFill_CorrectedFrenet;
friend class GeomFill_DiscreteTrihedron;
friend class GeomFill_ConstantBiNormal;
friend class GeomFill_Darboux;
friend class GeomFill_DraftTrihedron;
friend class GeomFill_TrihedronWithGuide;
friend class GeomFill_GuideTrihedronAC;
friend class GeomFill_GuideTrihedronPlan;
friend class GeomFill_Sweep;
friend class GeomFill_SectionPlacement;
friend class GeomFill_Array1OfSectionLaw;
friend class GeomFill_HArray1OfSectionLaw;
friend class GeomFill_Array1OfLocationLaw;
friend class GeomFill_HArray1OfLocationLaw;
friend class GeomFill_SequenceNodeOfSequenceOfTrsf;
friend class GeomFill_SequenceNodeOfSequenceOfAx2;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
