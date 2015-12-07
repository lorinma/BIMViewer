// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_SphericalSurface_HeaderFile
#define _PGeom_SphericalSurface_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PGeom_SphericalSurface_HeaderFile
#include <Handle_PGeom_SphericalSurface.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _PGeom_ElementarySurface_HeaderFile
#include <PGeom_ElementarySurface.hxx>
#endif
class gp_Ax3;


class PGeom_SphericalSurface : public PGeom_ElementarySurface {

public:

  //! Creates a SphericalSurface with default values. <br>
  Standard_EXPORT   PGeom_SphericalSurface();
  //! Creates a SphericalSurface with these values. <br>
  Standard_EXPORT   PGeom_SphericalSurface(const gp_Ax3& aPosition,const Standard_Real aRadius);
  //! Set the field radius with <aRadius>. <br>
  Standard_EXPORT     void Radius(const Standard_Real aRadius) ;
  //! Returns the value of the field radius. <br>
  Standard_EXPORT     Standard_Real Radius() const;

PGeom_SphericalSurface(const Storage_stCONSTclCOM& a) : PGeom_ElementarySurface(a)
{
  
}
    Standard_Real _CSFDB_GetPGeom_SphericalSurfaceradius() const { return radius; }
    void _CSFDB_SetPGeom_SphericalSurfaceradius(const Standard_Real p) { radius = p; }



  DEFINE_STANDARD_RTTI(PGeom_SphericalSurface)

protected:




private: 


Standard_Real radius;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
