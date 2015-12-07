// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_RectangularCompositeSurface_HeaderFile
#define _StepGeom_RectangularCompositeSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepGeom_RectangularCompositeSurface_HeaderFile
#include <Handle_StepGeom_RectangularCompositeSurface.hxx>
#endif

#ifndef _Handle_StepGeom_HArray2OfSurfacePatch_HeaderFile
#include <Handle_StepGeom_HArray2OfSurfacePatch.hxx>
#endif
#ifndef _StepGeom_BoundedSurface_HeaderFile
#include <StepGeom_BoundedSurface.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepGeom_SurfacePatch_HeaderFile
#include <Handle_StepGeom_SurfacePatch.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class StepGeom_HArray2OfSurfacePatch;
class TCollection_HAsciiString;
class StepGeom_SurfacePatch;



class StepGeom_RectangularCompositeSurface : public StepGeom_BoundedSurface {

public:

  //! Returns a RectangularCompositeSurface <br>
  Standard_EXPORT   StepGeom_RectangularCompositeSurface();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepGeom_HArray2OfSurfacePatch)& aSegments) ;
  
  Standard_EXPORT     void SetSegments(const Handle(StepGeom_HArray2OfSurfacePatch)& aSegments) ;
  
  Standard_EXPORT     Handle_StepGeom_HArray2OfSurfacePatch Segments() const;
  
  Standard_EXPORT     Handle_StepGeom_SurfacePatch SegmentsValue(const Standard_Integer num1,const Standard_Integer num2) const;
  
  Standard_EXPORT     Standard_Integer NbSegmentsI() const;
  
  Standard_EXPORT     Standard_Integer NbSegmentsJ() const;




  DEFINE_STANDARD_RTTI(StepGeom_RectangularCompositeSurface)

protected:




private: 


Handle_StepGeom_HArray2OfSurfacePatch segments;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
