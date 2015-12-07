// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _VrmlConverter_HLRShape_HeaderFile
#define _VrmlConverter_HLRShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Handle_VrmlConverter_Drawer_HeaderFile
#include <Handle_VrmlConverter_Drawer.hxx>
#endif
#ifndef _Handle_VrmlConverter_Projector_HeaderFile
#include <Handle_VrmlConverter_Projector.hxx>
#endif
class TopoDS_Shape;
class VrmlConverter_Drawer;
class VrmlConverter_Projector;


//! HLRShape  -  computes the presentation  of objects <br>
//!           with removal of their hidden  lines for a specific <br>
//!           projector, converts them into VRML  objects  and <br>
//!           writes (adds) them into anOStream.  All requested <br>
//!           properties of  the representation  are  specify in <br>
//!           aDrawer of Drawer class.  This kind  of the presentation <br>
//!           is  converted  into  IndexedLineSet  and   if  they  are  defined <br>
//!           in  Projector into : <br>
//!                PerspectiveCamera, <br>
//!                OrthographicCamera, <br>
//!                DirectionLight, <br>
//!                PointLight, <br>
//!                SpotLight <br>
//!           from  Vrml  package. <br>
class VrmlConverter_HLRShape  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  void Add(Standard_OStream& anOStream,const TopoDS_Shape& aShape,const Handle(VrmlConverter_Drawer)& aDrawer,const Handle(VrmlConverter_Projector)& aProjector) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
