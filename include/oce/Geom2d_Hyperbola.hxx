// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2d_Hyperbola_HeaderFile
#define _Geom2d_Hyperbola_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom2d_Hyperbola_HeaderFile
#include <Handle_Geom2d_Hyperbola.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Geom2d_Conic_HeaderFile
#include <Geom2d_Conic.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Geom2d_Geometry_HeaderFile
#include <Handle_Geom2d_Geometry.hxx>
#endif
class Standard_ConstructionError;
class Standard_DomainError;
class Standard_RangeError;
class gp_Hypr2d;
class gp_Ax2d;
class gp_Ax22d;
class gp_Pnt2d;
class gp_Vec2d;
class gp_Trsf2d;
class Geom2d_Geometry;


//! Describes a branch of a hyperbola in the plane (2D space). <br>
//! A hyperbola is defined by its major and minor radii <br>
//! and, as with any conic curve, is positioned in the <br>
//! plane with a coordinate system (gp_Ax22d object) where: <br>
//! - the origin is the center of the hyperbola, <br>
//! - the "X Direction" defines the major axis, and <br>
//! - the "Y Direction" defines the minor axis. <br>
//!   This coordinate system is the local coordinate <br>
//! system of the hyperbola. <br>
//! The branch of the hyperbola described is the one <br>
//! located on the positive side of the major axis. <br>
//! The orientation (direct or indirect) of the local <br>
//! coordinate system gives an explicit orientation to the <br>
//! hyperbola, determining the direction in which the <br>
//! parameter increases along the hyperbola. <br>
//! The Geom2d_Hyperbola hyperbola is parameterized as follows: <br>
//! P(U) = O + MajRad*Cosh(U)*XDir + MinRad*Sinh(U)*YDir <br>
//! where: <br>
//! - P is the point of parameter U, <br>
//! - O, XDir and YDir are respectively the origin, "X <br>
//!   Direction" and "Y Direction" of its local coordinate system, <br>
//! - MajRad and MinRad are the major and minor radii of the hyperbola. <br>
//! The "X Axis" of the local coordinate system therefore <br>
//! defines the origin of the parameter of the hyperbola. <br>
//! The parameter range is ] -infinite,+infinite [. <br>
//! The following diagram illustrates the respective <br>
//! positions, in the plane of the hyperbola, of the three <br>
//! branches of hyperbolas constructed using the <br>
//! functions OtherBranch, ConjugateBranch1 and <br>
//! ConjugateBranch2: <br>
//!                 ^YAxis <br>
//!                 | <br>
//!           FirstConjugateBranch <br>
//!                 | <br>
//!     Other         |          Main <br>
//! --------------------- C <br>
//! --------------------->XAxis <br>
//!     Branch       | <br>
//! Branch <br>
//!                 | <br>
//!           SecondConjugateBranch <br>
//!                 | <br>
//! Warning <br>
//! The value of the major radius (on the major axis) can <br>
//! be less than the value of the minor radius (on the minor axis). <br>
//! See Also <br>
//! GCE2d_MakeHyperbola which provides functions for <br>
//! more complex hyperbola constructions <br>
//! gp_Ax22d <br>
//! gp_Hypr2d for an equivalent, non-parameterized data structure <br>
class Geom2d_Hyperbola : public Geom2d_Conic {

public:

  //! Creates  an Hyperbola from a non persistent one from package gp <br>
  Standard_EXPORT   Geom2d_Hyperbola(const gp_Hypr2d& H);
  
//!  MajorAxis is the "XAxis" of the hyperbola. <br>
//!  The YAxis is in the direct sense if "Sense" is True; <br>
//!  The major radius of the hyperbola is on this "XAxis" and <br>
//!  the minor radius is on the "YAxis" of the hyperbola. <br>//! Raised if MajorRadius < 0.0 or if MinorRadius < 0.0 <br>
  Standard_EXPORT   Geom2d_Hyperbola(const gp_Ax2d& MajorAxis,const Standard_Real MajorRadius,const Standard_Real MinorRadius,const Standard_Boolean Sense = Standard_True);
  
//!  The XDirection of "Axis" is the "XAxis" of the hyperbola and <br>
//!  the YDirection of "Axis" is the "YAxis". <br>
//!  The major radius of the hyperbola is on this "XAxis" and <br>
//!  the minor radius is on the "YAxis" of the hyperbola. <br>//! Raised if MajorRadius < 0.0 or if MinorRadius < 0.0 <br>
  Standard_EXPORT   Geom2d_Hyperbola(const gp_Ax22d& Axis,const Standard_Real MajorRadius,const Standard_Real MinorRadius);
  //! Converts the gp_Hypr2d hyperbola H into this hyperbola. <br>
  Standard_EXPORT     void SetHypr2d(const gp_Hypr2d& H) ;
  //! Assigns a value to the major or minor radius of this hyperbola. <br>
//!  Exceptions <br>
//! Standard_ConstructionError if: <br>
//! - MajorRadius is less than 0.0, <br>
//! - MinorRadius is less than 0.0. <br>
  Standard_EXPORT     void SetMajorRadius(const Standard_Real MajorRadius) ;
  //! Assigns a value to the major or minor radius of this hyperbola. <br>
//!  Exceptions <br>
//! Standard_ConstructionError if: <br>
//! - MajorRadius is less than 0.0, <br>
//! - MinorRadius is less than 0.0. <br>
  Standard_EXPORT     void SetMinorRadius(const Standard_Real MinorRadius) ;
  //! Converts this hyperbola into a gp_Hypr2d one. <br>
  Standard_EXPORT     gp_Hypr2d Hypr2d() const;
  //! Computes the parameter on the reversed hyperbola, <br>
//! for the point of parameter U on this hyperbola. <br>
//! For a hyperbola, the returned value is -U. <br>
  Standard_EXPORT     Standard_Real ReversedParameter(const Standard_Real U) const;
  //! Returns RealFirst from Standard. <br>
  Standard_EXPORT     Standard_Real FirstParameter() const;
  //! returns RealLast from Standard. <br>
  Standard_EXPORT     Standard_Real LastParameter() const;
  //! Returns False. <br>
  Standard_EXPORT     Standard_Boolean IsClosed() const;
  //! return False for an hyperbola. <br>
  Standard_EXPORT     Standard_Boolean IsPeriodic() const;
  
//!  In the local coordinate system of the hyperbola the <br>
//!  equation of the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 <br>
//!  and the equation of the first asymptote is Y = (B/A)*X <br>
//!  where A is the major radius of the hyperbola and B is the <br>
//!  minor radius of the hyperbola. <br>//! Raised if MajorRadius = 0.0 <br>
  Standard_EXPORT     gp_Ax2d Asymptote1() const;
  
//!  In the local coordinate system of the hyperbola the <br>
//!  equation of the hyperbola is (X*X)/(A*A) - (Y*Y)/(B*B) = 1.0 <br>
//!  and the equation of the first asymptote is Y = -(B/A)*X. <br>
//!  where A is the major radius of the hyperbola and B is the <br>
//!  minor radius of the hyperbola. <br>//! raised if MajorRadius = 0.0 <br>
  Standard_EXPORT     gp_Ax2d Asymptote2() const;
  //! Computes the first conjugate branch relative to this hyperbola. <br>
//! Note: The diagram given under the class purpose <br>
//! indicates where these two branches of hyperbola are <br>
//! positioned in relation to this branch of hyperbola. <br>
  Standard_EXPORT     gp_Hypr2d ConjugateBranch1() const;
  //! Computes the second conjugate branch relative to this hyperbola. <br>
//! Note: The diagram given under the class purpose <br>
//! indicates where these two branches of hyperbola are <br>
//! positioned in relation to this branch of hyperbola. <br>
  Standard_EXPORT     gp_Hypr2d ConjugateBranch2() const;
  
//!  This directrix is the line normal to the XAxis of the hyperbola <br>
//!  in the local plane (Z = 0) at a distance d = MajorRadius / e <br>
//!  from the center of the hyperbola, where e is the eccentricity of <br>
//!  the hyperbola. <br>
//!  This line is parallel to the "YAxis". The intersection point <br>
//!  between directrix1 and the "XAxis" is the location point of the <br>
//!  directrix1. This point is on the positive side of the "XAxis". <br>
  Standard_EXPORT     gp_Ax2d Directrix1() const;
  
//!  This line is obtained by the symmetrical transformation <br>
//!  of "Directrix1" with respect to the "YAxis" of the hyperbola. <br>
  Standard_EXPORT     gp_Ax2d Directrix2() const;
  
//!  Returns the excentricity of the hyperbola (e > 1). <br>
//!  If f is the distance between the location of the hyperbola <br>
//!  and the Focus1 then the eccentricity e = f / MajorRadius. <br>//! raised if MajorRadius = 0.0 <br>
  Standard_EXPORT     Standard_Real Eccentricity() const;
  
//!  Computes the focal distance. It is the distance between the <br>
//!  two focus of the hyperbola. <br>
  Standard_EXPORT     Standard_Real Focal() const;
  
//!  Returns the first focus of the hyperbola. This focus is on the <br>
//!  positive side of the "XAxis" of the hyperbola. <br>
  Standard_EXPORT     gp_Pnt2d Focus1() const;
  
//!  Returns the second focus of the hyperbola. This focus is on the <br>
//!  negative side of the "XAxis" of the hyperbola. <br>
  Standard_EXPORT     gp_Pnt2d Focus2() const;
  //! Returns the major or minor radius of this hyperbola. <br>
//! The major radius is also the distance between the <br>
//! center of the hyperbola and the apex of the main <br>
//! branch (located on the "X Axis" of the hyperbola). <br>
  Standard_EXPORT     Standard_Real MajorRadius() const;
  //! Returns the major or minor radius of this hyperbola. <br>
//! The minor radius is also the distance between the <br>
//! center of the hyperbola and the apex of a conjugate <br>
//! branch (located on the "Y Axis" of the hyperbola). <br>
  Standard_EXPORT     Standard_Real MinorRadius() const;
  
//!  Computes the "other" branch of this hyperbola. This <br>
//! is a symmetrical branch with respect to the center of this hyperbola. <br>
//! Note: The diagram given under the class purpose <br>
//! indicates where the "other" branch is positioned in <br>
//! relation to this branch of the hyperbola. <br>
//!   ^ YAxis <br>
//! | <br>
//! FirstConjugateBranch <br>
//!   | <br>
//! Other   | Main <br>
//! ---------------------------- C <br>
//! ------------------------------------------&gtXAxis <br>
//! Branch |  Branch <br>
//!   | <br>
//! | <br>
//! SecondConjugateBranch <br>
//!   | <br>
//! Warning <br>
//! The major radius can be less than the minor radius. <br>
  Standard_EXPORT     gp_Hypr2d OtherBranch() const;
  //! Computes the parameter of this hyperbola. <br>
//! The parameter is: <br>
//! p = (e*e - 1) * MajorRadius <br>
//! where e is the eccentricity of this hyperbola and <br>
//! MajorRadius its major radius. <br>
//! Exceptions <br>
//! Standard_DomainError if the major radius of this <br>
//! hyperbola is null. <br>
  Standard_EXPORT     Standard_Real Parameter() const;
  //! Returns in P the point of parameter U. <br>
//!  P = C + MajorRadius * Cosh (U) * XDir + <br>
//!          MinorRadius * Sinh (U) * YDir <br>
//!  where C is the center of the hyperbola , XDir the XDirection and <br>
//!  YDir the YDirection of the hyperbola's local coordinate system. <br>
  Standard_EXPORT     void D0(const Standard_Real U,gp_Pnt2d& P) const;
  
//!  Returns the point P of parameter U and the first derivative V1. <br>
  Standard_EXPORT     void D1(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1) const;
  
//!  Returns the point P of parameter U, the first and second <br>
//!  derivatives V1 and V2. <br>
  Standard_EXPORT     void D2(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) const;
  
//!  Returns the point P of parameter U, the first second and <br>
//!  third derivatives V1 V2 and V3. <br>
  Standard_EXPORT     void D3(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V3) const;
  //! For the point of parameter U of this hyperbola, <br>
//! computes the vector corresponding to the Nth derivative. <br>
//! Exceptions Standard_RangeError if N is less than 1. <br>
  Standard_EXPORT     gp_Vec2d DN(const Standard_Real U,const Standard_Integer N) const;
  //! Applies the transformation T to this hyperbola. <br>
  Standard_EXPORT     void Transform(const gp_Trsf2d& T) ;
  //! Creates a new object which is a copy of this hyperbola. <br>
  Standard_EXPORT     Handle_Geom2d_Geometry Copy() const;




  DEFINE_STANDARD_RTTI(Geom2d_Hyperbola)

protected:




private: 


Standard_Real majorRadius;
Standard_Real minorRadius;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
