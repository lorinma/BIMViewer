// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_Hctxee2d_HeaderFile
#define _TopOpeBRep_Hctxee2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopOpeBRep_Hctxee2d_HeaderFile
#include <Handle_TopOpeBRep_Hctxee2d.hxx>
#endif

#ifndef _TopoDS_Edge_HeaderFile
#include <TopoDS_Edge.hxx>
#endif
#ifndef _Geom2dAdaptor_Curve_HeaderFile
#include <Geom2dAdaptor_Curve.hxx>
#endif
#ifndef _IntRes2d_Domain_HeaderFile
#include <IntRes2d_Domain.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TopoDS_Edge;
class BRepAdaptor_Surface;
class TopoDS_Shape;
class Geom2dAdaptor_Curve;
class IntRes2d_Domain;



class TopOpeBRep_Hctxee2d : public MMgt_TShared {

public:

  
  Standard_EXPORT   TopOpeBRep_Hctxee2d();
  
  Standard_EXPORT     void SetEdges(const TopoDS_Edge& E1,const TopoDS_Edge& E2,const BRepAdaptor_Surface& BAS1,const BRepAdaptor_Surface& BAS2) ;
  
  Standard_EXPORT    const TopoDS_Shape& Edge(const Standard_Integer I) const;
  
  Standard_EXPORT    const Geom2dAdaptor_Curve& Curve(const Standard_Integer I) const;
  
  Standard_EXPORT    const IntRes2d_Domain& Domain(const Standard_Integer I) const;




  DEFINE_STANDARD_RTTI(TopOpeBRep_Hctxee2d)

protected:




private: 


TopoDS_Edge myEdge1;
Geom2dAdaptor_Curve myCurve1;
IntRes2d_Domain myDomain1;
TopoDS_Edge myEdge2;
Geom2dAdaptor_Curve myCurve2;
IntRes2d_Domain myDomain2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
