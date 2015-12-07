// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DrawTrSurf_Curve_HeaderFile
#define _DrawTrSurf_Curve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DrawTrSurf_Curve_HeaderFile
#include <Handle_DrawTrSurf_Curve.hxx>
#endif

#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Draw_Color_HeaderFile
#include <Draw_Color.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _DrawTrSurf_Drawable_HeaderFile
#include <DrawTrSurf_Drawable.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Draw_Drawable3D_HeaderFile
#include <Handle_Draw_Drawable3D.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Geom_Curve;
class Draw_Color;
class Draw_Display;
class Draw_Drawable3D;
class Draw_Interpretor;



//!  This class defines a drawable curve in 3d space. <br>
class DrawTrSurf_Curve : public DrawTrSurf_Drawable {

public:

  
//!  creates a drawable curve from a curve of package Geom. <br>
  Standard_EXPORT   DrawTrSurf_Curve(const Handle(Geom_Curve)& C,const Standard_Boolean DispOrigin = Standard_True);
  
  Standard_EXPORT   DrawTrSurf_Curve(const Handle(Geom_Curve)& C,const Draw_Color& aColor,const Standard_Integer Discret,const Standard_Real Deflection,const Standard_Integer DrawMode,const Standard_Boolean DispOrigin = Standard_True,const Standard_Boolean DispCurvRadius = Standard_False,const Standard_Real RadiusMax = 1.0e3,const Standard_Real RatioOfRadius = 0.1);
  
  Standard_EXPORT     void DrawOn(Draw_Display& dis) const;
  
        Handle_Geom_Curve GetCurve() const;
  
        void SetColor(const Draw_Color& aColor) ;
  
        Standard_Boolean DisplayOrigin() const;
  
        void DisplayOrigin(const Standard_Boolean V) ;
  
        void ShowCurvature() ;
  
        void ClearCurvature() ;
  
        void SetRadiusMax(const Standard_Real Radius) ;
  
        void SetRadiusRatio(const Standard_Real Ratio) ;
  
        Draw_Color Color() const;
  
        Standard_Real RadiusMax() const;
  
        Standard_Real RadiusRatio() const;
  //! For variable copy. <br>
  Standard_EXPORT   virtual  Handle_Draw_Drawable3D Copy() const;
  //! For variable dump. <br>
  Standard_EXPORT   virtual  void Dump(Standard_OStream& S) const;
  //! For variable whatis command. Set  as a result  the <br>
//!          type of the variable. <br>
  Standard_EXPORT   virtual  void Whatis(Draw_Interpretor& I) const;




  DEFINE_STANDARD_RTTI(DrawTrSurf_Curve)

protected:


Handle_Geom_Curve curv;
Draw_Color look;
Standard_Boolean disporigin;
Standard_Boolean dispcurvradius;
Standard_Real radiusmax;
Standard_Real radiusratio;


private: 




};


#include <DrawTrSurf_Curve.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
