// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_Layer_HeaderFile
#define _Visual3d_Layer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Visual3d_Layer_HeaderFile
#include <Handle_Visual3d_Layer.hxx>
#endif

#ifndef _Handle_Graphic3d_GraphicDriver_HeaderFile
#include <Handle_Graphic3d_GraphicDriver.hxx>
#endif
#ifndef _Aspect_CLayer2d_HeaderFile
#include <Aspect_CLayer2d.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Visual3d_NListOfLayerItem_HeaderFile
#include <Visual3d_NListOfLayerItem.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Visual3d_ViewManager_HeaderFile
#include <Handle_Visual3d_ViewManager.hxx>
#endif
#ifndef _Aspect_TypeOfLayer_HeaderFile
#include <Aspect_TypeOfLayer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Aspect_TypeOfLine_HeaderFile
#include <Aspect_TypeOfLine.hxx>
#endif
#ifndef _Aspect_TypeOfDisplayText_HeaderFile
#include <Aspect_TypeOfDisplayText.hxx>
#endif
#ifndef _Aspect_TypeOfConstraint_HeaderFile
#include <Aspect_TypeOfConstraint.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Visual3d_LayerItem_HeaderFile
#include <Handle_Visual3d_LayerItem.hxx>
#endif
class Graphic3d_GraphicDriver;
class Visual3d_LayerDefinitionError;
class Visual3d_ViewManager;
class Quantity_Color;
class Visual3d_LayerItem;


//! This class allows to manage 2d graphics. <br>
class Visual3d_Layer : public MMgt_TShared {

public:

  //! Creates a layer with the type <Atype>. <br>
//!      if <AFlag> == Standard_True then the layer is <br>
//!      "size dependent". <br>
//!      The mapping of the layer is dependent of each <br>
//!      window's size. <br>
//!      if <AFlag> == Standard_False then the mapping of the <br>
//!      layer is dependent of the highest window and the largest <br>
//!      window of all the views of the viewer <AViewer>. <br>
//!      When the viewer <AViewer> have only one view, the <br>
//!      result will be the same with <AFlag> == Standard_False <br>
//!      or <AFlag> == Standard_True. <br>
  Standard_EXPORT   Visual3d_Layer(const Handle(Visual3d_ViewManager)& AViewer,const Aspect_TypeOfLayer AType = Aspect_TOL_OVERLAY,const Standard_Boolean AFlag = Standard_False);
  //! Suppress the layer <me>. <br>
  Standard_EXPORT     void Destroy() ;
~Visual3d_Layer()
{
  Destroy();
}
  //! Begins the definition of the layer <me> <br>
//!  Warning: No default attributes <br>
  Standard_EXPORT     void Begin() ;
  //! Finishs the definition of the layer <me>. <br>
  Standard_EXPORT     void End() ;
  //! Clear all graphics managed by the layer <me>. <br>
  Standard_EXPORT     void Clear() ;
  //! After this call, <me> is ready to receive <br>
//!      a definition of a polyline with AddVertex(). <br>
  Standard_EXPORT     void BeginPolyline() ;
  //! After this call, <me> is ready to receive <br>
//!      a definition of a polygon with AddEdge(). <br>
  Standard_EXPORT     void BeginPolygon() ;
  //! Puts <X, Y> as a new point in the current primitive. <br>
//!      If <AFlag> then it is a draw between last point and <br>
//!      this point else it is a move between last point and <br>
//!      this point. <br>
  Standard_EXPORT     void AddVertex(const Standard_Real X,const Standard_Real Y,const Standard_Boolean AFlag = Standard_True) ;
  //! After this call, <me> stops the reception of <br>
//!      a definition of a Begin... primitive. <br>
  Standard_EXPORT     void ClosePrimitive() ;
  //! Draws the rectangle at position <X,Y>. <br>
  Standard_EXPORT     void DrawRectangle(const Standard_Real X,const Standard_Real Y,const Standard_Real Width,const Standard_Real Height) ;
  //! Draws the string <AText> at position <X,Y>. <br>
//!      The attributes are given with respect to the plane of <br>
//!      projection. <br>
//!      <AHeight>   : Height of text. <br>
//!            (Relative to the Normalized Projection <br>
//!          Coordinates (NPC) Space). <br>
  Standard_EXPORT     void DrawText(const Standard_CString AText,const Standard_Real X,const Standard_Real Y,const Standard_Real AHeight) ;
  //! Get the size of text. <br>
//!      The attributes are given with respect to the plane of <br>
//!      projection. <br>
//!      <AHeight>   : Height of text. <br>
//!            (Relative to the Normalized Projection <br>
//!          Coordinates (NPC) Space). <br>
  Standard_EXPORT     void TextSize(const Standard_CString AText,const Standard_Real AHeight,Standard_Real& AWidth,Standard_Real& AnAscent,Standard_Real& ADescent) const;
  //! Modifies the current color. <br>
//!  Warning: No default color <br>
  Standard_EXPORT     void SetColor(const Quantity_Color& AColor) ;
  //! Modifies the current transparency. <br>
//!  Warning: No default transparency <br>
  Standard_EXPORT     void SetTransparency(const Standard_ShortReal ATransparency) ;
  //! Unsets the transparency. <br>
  Standard_EXPORT     void UnsetTransparency() ;
  //! Modifies the current lines attributes. <br>
//!  Warning: No default attributes <br>
  Standard_EXPORT     void SetLineAttributes(const Aspect_TypeOfLine AType,const Standard_Real AWidth) ;
  //! Modifies the current texts attributes. <br>
//! <AFont> defines the name of the font to be used. <br>
//! <AType> defines the display type of the text. <br>
//! <AColor> defines the color of decal or subtitle background. <br>
//! To set the color of the text you can use the SetColor method. <br>
//! Warning: No default attributes <br>
  Standard_EXPORT     void SetTextAttributes(const Standard_CString AFont,const Aspect_TypeOfDisplayText AType,const Quantity_Color& AColor) ;
  //! Modifies the current coordinates system of the layer <me>. <br>
  Standard_EXPORT     void SetOrtho(const Standard_Real Left,const Standard_Real Right,const Standard_Real Bottom,const Standard_Real Top,const Aspect_TypeOfConstraint Attach = Aspect_TOC_BOTTOM_LEFT) ;
  //! Modifies the current viewport of the layer <me>. <br>
  Standard_EXPORT     void SetViewport(const Standard_Integer Width,const Standard_Integer Height) ;
  //! Returns the associated C structure. <br>
  Standard_EXPORT     Aspect_CLayer2d CLayer() const;
  //! Returns the type. <br>
  Standard_EXPORT     Aspect_TypeOfLayer Type() const;
  
  Standard_EXPORT     void AddLayerItem(const Handle(Visual3d_LayerItem)& Item) ;
  
  Standard_EXPORT     void RemoveLayerItem(const Handle(Visual3d_LayerItem)& Item) ;
  
  Standard_EXPORT     void RemoveAllLayerItems() ;
  
  Standard_EXPORT    const Visual3d_NListOfLayerItem& GetLayerItemList() const;
  
  Standard_EXPORT     void RenderLayerItems() const;



  DEFINE_STANDARD_RTTI(Visual3d_Layer)

protected:




private: 


Handle_Graphic3d_GraphicDriver MyGraphicDriver;
Aspect_CLayer2d MyCLayer;
Standard_Address MyPtrViewManager;
Visual3d_NListOfLayerItem MyListOfLayerItems;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
