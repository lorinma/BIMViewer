// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Poly_Polygon3D_HeaderFile
#define _Poly_Polygon3D_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Poly_Polygon3D_HeaderFile
#include <Handle_Poly_Polygon3D.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TColgp_Array1OfPnt_HeaderFile
#include <TColgp_Array1OfPnt.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TColStd_HArray1OfReal;
class Standard_NullObject;
class TColgp_Array1OfPnt;
class TColStd_Array1OfReal;


//! This class Provides a polygon in 3D space. It is generally an approximate representation of a curve. <br>
//! A Polygon3D is defined by a table of nodes. Each node is <br>
//! a 3D point. If the polygon is closed, the point of closure is <br>
//! repeated at the end of the table of nodes. <br>
//! If the polygon is an approximate representation of a curve, <br>
//! you can associate with each of its nodes the value of the <br>
//! parameter of the corresponding point on the curve. <br>
class Poly_Polygon3D : public MMgt_TShared {

public:

  //! onstructs a 3D polygon defined by the table of points, Nodes. <br>
  Standard_EXPORT   Poly_Polygon3D(const TColgp_Array1OfPnt& Nodes);
  //! Constructs a 3D polygon defined by <br>
//! the table of points, Nodes, and the parallel table of <br>
//!  parameters, Parameters, where each value of the table <br>
//!  Parameters is the parameter of the corresponding point <br>
//!  on the curve approximated by the constructed polygon. <br>
//! Warning <br>
//! Both the Nodes and Parameters tables must have the <br>
//! same bounds. This property is not checked at construction time. <br>
  Standard_EXPORT   Poly_Polygon3D(const TColgp_Array1OfPnt& Nodes,const TColStd_Array1OfReal& Parameters);
  //! Returns the deflection of this polygon <br>
  Standard_EXPORT     Standard_Real Deflection() const;
  //! Sets the deflection of this polygon to D. See more on deflection in Poly_Polygon2D <br>
  Standard_EXPORT     void Deflection(const Standard_Real D) ;
  //! Returns the number of nodes in this polygon. <br>
//! Note: If the polygon is closed, the point of closure is <br>
//! repeated at the end of its table of nodes. Thus, on a closed <br>
//! triangle the function NbNodes returns 4. <br>
        Standard_Integer NbNodes() const;
  //!  Returns the table of nodes for this polygon. <br>
  Standard_EXPORT    const TColgp_Array1OfPnt& Nodes() const;
  //! Returns the table of the parameters associated with each node in this polygon. <br>
//!  HasParameters function checks if   parameters are associated with the nodes of this polygon. <br>
  Standard_EXPORT     Standard_Boolean HasParameters() const;
  //! Returns true if parameters are associated with the nodes <br>
//! in this polygon. <br>
  Standard_EXPORT    const TColStd_Array1OfReal& Parameters() const;
  //! Returns the table of the parameters associated with each node in this polygon. <br>
//!        ChangeParameters function returnes the  array as shared. Therefore if the table is selected by <br>
//!   reference you can, by simply modifying it, directly modify <br>
//!   the data structure of this polygon. <br>
  Standard_EXPORT     TColStd_Array1OfReal& ChangeParameters() const;




  DEFINE_STANDARD_RTTI(Poly_Polygon3D)

protected:




private: 


Standard_Real myDeflection;
TColgp_Array1OfPnt myNodes;
Handle_TColStd_HArray1OfReal myParameters;


};


#include <Poly_Polygon3D.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
