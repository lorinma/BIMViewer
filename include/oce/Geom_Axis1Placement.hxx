// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom_Axis1Placement_HeaderFile
#define _Geom_Axis1Placement_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom_Axis1Placement_HeaderFile
#include <Handle_Geom_Axis1Placement.hxx>
#endif

#ifndef _Geom_AxisPlacement_HeaderFile
#include <Geom_AxisPlacement.hxx>
#endif
#ifndef _Handle_Geom_Geometry_HeaderFile
#include <Handle_Geom_Geometry.hxx>
#endif
class gp_Ax1;
class gp_Pnt;
class gp_Dir;
class gp_Trsf;
class Geom_Geometry;


//! Describes an axis in 3D space. <br>
//! An axis is defined by: <br>
//! - its origin, also termed the "Location point" of the axis, <br>
//! - its unit vector, termed the "Direction" of the axis. <br>
//! Note: Geom_Axis1Placement axes provide the <br>
//! same kind of "geometric" services as gp_Ax1 axes <br>
//! but have more complex data structures. The <br>
//! geometric objects provided by the Geom package <br>
//! use gp_Ax1 objects to include axes in their data <br>
//! structures, or to define an axis of symmetry or axis of rotation. <br>
//! Geom_Axis1Placement axes are used in a context <br>
//! where they can be shared by several objects <br>
//! contained inside a common data structure. <br>
class Geom_Axis1Placement : public Geom_AxisPlacement {

public:

  //! Returns a transient copy of A1. <br>
  Standard_EXPORT   Geom_Axis1Placement(const gp_Ax1& A1);
  
//!  P is the origin of the axis placement and V is the direction <br>
//!  of the axis placement. <br>
  Standard_EXPORT   Geom_Axis1Placement(const gp_Pnt& P,const gp_Dir& V);
  //! Returns a non transient copy of <me>. <br>
  Standard_EXPORT    const gp_Ax1& Ax1() const;
  //! Reverses the direction of the axis placement. <br>
  Standard_EXPORT     void Reverse() ;
  //!  Returns a copy of <me> reversed. <br>
  Standard_EXPORT     Handle_Geom_Axis1Placement Reversed() const;
  //! Assigns V to the unit vector of this axis. <br>
  Standard_EXPORT     void SetDirection(const gp_Dir& V) ;
  //! Applies the transformation T to this axis. <br>
  Standard_EXPORT     void Transform(const gp_Trsf& T) ;
  //! Creates a new object, which is a copy of this axis. <br>
  Standard_EXPORT     Handle_Geom_Geometry Copy() const;




  DEFINE_STANDARD_RTTI(Geom_Axis1Placement)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
