// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Voxel_FastConverter_HeaderFile
#define _Voxel_FastConverter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Byte_HeaderFile
#include <Standard_Byte.hxx>
#endif
class TopoDS_Shape;
class Voxel_BoolDS;
class Voxel_ColorDS;
class Voxel_ROctBoolDS;
class gp_Pnt;
class gp_Pln;


//! Converts a shape to voxel representation. <br>
//!          It does it fast, but with less precision. <br>
//!          Also, it doesn't fill-in volumic part of the shape. <br>
class Voxel_FastConverter  {
public:

  DEFINE_STANDARD_ALLOC

  //! A constructor for conversion of a shape into a cube of boolean voxels. <br>
//!          It allocates the voxels in memory. <br>
//!          "nbthreads" defines the number of threads used to convert the shape. <br>
  Standard_EXPORT   Voxel_FastConverter(const TopoDS_Shape& shape,Voxel_BoolDS& voxels,const Standard_Real deflection = 0.1,const Standard_Integer nbx = 10,const Standard_Integer nby = 10,const Standard_Integer nbz = 10,const Standard_Integer nbthreads = 1,const Standard_Boolean useExistingTriangulation = Standard_False);
  //! A constructor for conversion of a shape into a cube of colored voxels. <br>
//!          It allocates the voxels in memory. <br>
//!          "nbthreads" defines the number of threads used to convert the shape. <br>
  Standard_EXPORT   Voxel_FastConverter(const TopoDS_Shape& shape,Voxel_ColorDS& voxels,const Standard_Real deflection = 0.1,const Standard_Integer nbx = 10,const Standard_Integer nby = 10,const Standard_Integer nbz = 10,const Standard_Integer nbthreads = 1,const Standard_Boolean useExistingTriangulation = Standard_False);
  //! A constructor for conversion of a shape into a cube of boolean voxels <br>
//!          split into 8 sub-voxels recursively. <br>
//!          It allocates the voxels in memory. <br>
//!          "nbthreads" defines the number of threads used to convert the shape. <br>
  Standard_EXPORT   Voxel_FastConverter(const TopoDS_Shape& shape,Voxel_ROctBoolDS& voxels,const Standard_Real deflection = 0.1,const Standard_Integer nbx = 10,const Standard_Integer nby = 10,const Standard_Integer nbz = 10,const Standard_Integer nbthreads = 1,const Standard_Boolean useExistingTriangulation = Standard_False);
  //! Converts a shape into a voxel representation. <br>
//!          It sets to 0 the outside volume of the shape and <br>
//!          1 for surfacic part of the shape. <br>
//!          "ithread" is the index of the thread for current call of ::Convert(). <br>
//!          Start numeration of "ithread" with 1, please. <br>
  Standard_EXPORT     Standard_Boolean Convert(Standard_Integer& progress,const Standard_Integer ithread = 1) ;
  //! Converts a shape into a voxel representation using separating axis theorem. <br>
//!          It sets to 0 the outside volume of the shape and <br>
//!          1 for surfacic part of the shape. <br>
//!          "ithread" is the index of the thread for current call of ::Convert(). <br>
//!          Start numeration of "ithread" with 1, please. <br>
  Standard_EXPORT     Standard_Boolean ConvertUsingSAT(Standard_Integer& progress,const Standard_Integer ithread = 1) ;
  //! Fills-in volume of the shape by a value. <br>
  Standard_EXPORT     Standard_Boolean FillInVolume(const Standard_Byte inner,const Standard_Integer ithread = 1) ;
  //! Fills-in volume of the shape by a value. <br>
//!          Uses the topological information from the provided shape <br>
//!          to judge whether points are inside the shape or not <br>
//!          (only when processing vertical faces). <br>
//!          The inner value has to be positive. <br>
  Standard_EXPORT     Standard_Boolean FillInVolume(const Standard_Byte inner,const TopoDS_Shape& shape,const Standard_Integer ithread = 1) ;
  //! A destructor. <br>
  Standard_EXPORT     void Destroy() ;
~Voxel_FastConverter()
{
  Destroy();
}





protected:





private:

  
  Standard_EXPORT     void Init() ;
  
  Standard_EXPORT     void GetBndBox(const gp_Pnt& p1,const gp_Pnt& p2,const gp_Pnt& p3,Standard_Real& xmin,Standard_Real& ymin,Standard_Real& zmin,Standard_Real& xmax,Standard_Real& ymax,Standard_Real& zmax) const;
  
  Standard_EXPORT     void ComputeVoxelsNearTriangle(const gp_Pln& plane,const gp_Pnt& p1,const gp_Pnt& p2,const gp_Pnt& p3,const Standard_Real hdiag,const Standard_Integer ixmin,const Standard_Integer iymin,const Standard_Integer izmin,const Standard_Integer ixmax,const Standard_Integer iymax,const Standard_Integer izmax) const;
  
  Standard_EXPORT     void ComputeVoxelsNearTriangle(const gp_Pnt& p1,const gp_Pnt& p2,const gp_Pnt& p3,const gp_Pnt& extents,const gp_Pnt& extents2,const gp_Pnt& extents4,const Standard_Integer ixmin,const Standard_Integer iymin,const Standard_Integer izmin,const Standard_Integer ixmax,const Standard_Integer iymax,const Standard_Integer izmax) const;


TopoDS_Shape myShape;
Standard_Address myVoxels;
Standard_Real myDeflection;
Standard_Integer myIsBool;
Standard_Integer myNbX;
Standard_Integer myNbY;
Standard_Integer myNbZ;
Standard_Integer myNbThreads;
Standard_Integer myNbTriangles;
Standard_Boolean myUseExistingTriangulation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
