// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSolid_PlaneSurface_HeaderFile
#define _IGESSolid_PlaneSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSolid_PlaneSurface_HeaderFile
#include <Handle_IGESSolid_PlaneSurface.hxx>
#endif

#ifndef _Handle_IGESGeom_Point_HeaderFile
#include <Handle_IGESGeom_Point.hxx>
#endif
#ifndef _Handle_IGESGeom_Direction_HeaderFile
#include <Handle_IGESGeom_Direction.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class IGESGeom_Point;
class IGESGeom_Direction;


//! defines PlaneSurface, Type <190> Form Number <0,1> <br>
//!          in package IGESSolid <br>
//!          A plane surface entity is defined by a point on the <br>
//!          surface and a normal to it. <br>
class IGESSolid_PlaneSurface : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESSolid_PlaneSurface();
  //! This method is used to set the fields of the class <br>
//!           PlaneSurface <br>
//!       - aLocation : the point on the surface <br>
//!       - aNormal   : the surface normal direction <br>
//!       - refdir    : the reference direction (default NULL) for <br>
//!                    unparameterised curves <br>
  Standard_EXPORT     void Init(const Handle(IGESGeom_Point)& aLocation,const Handle(IGESGeom_Direction)& aNormal,const Handle(IGESGeom_Direction)& refdir) ;
  //! returns the point on the surface <br>
  Standard_EXPORT     Handle_IGESGeom_Point LocationPoint() const;
  //! returns the normal to the surface <br>
  Standard_EXPORT     Handle_IGESGeom_Direction Normal() const;
  //! returns the reference direction (for parameterised curve) <br>
//! returns NULL for unparameterised curve <br>
  Standard_EXPORT     Handle_IGESGeom_Direction ReferenceDir() const;
  //! returns True if parameterised, else False <br>
  Standard_EXPORT     Standard_Boolean IsParametrised() const;




  DEFINE_STANDARD_RTTI(IGESSolid_PlaneSurface)

protected:




private: 


Handle_IGESGeom_Point theLocationPoint;
Handle_IGESGeom_Direction theNormal;
Handle_IGESGeom_Direction theRefDir;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
