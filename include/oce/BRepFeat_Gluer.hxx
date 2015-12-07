// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFeat_Gluer_HeaderFile
#define _BRepFeat_Gluer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _LocOpe_Gluer_HeaderFile
#include <LocOpe_Gluer.hxx>
#endif
#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
#ifndef _LocOpe_Operation_HeaderFile
#include <LocOpe_Operation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopoDS_Shape;
class TopoDS_Face;
class TopoDS_Edge;
class TopTools_ListOfShape;


//! One of the most significant aspects <br>
//! of BRepFeat functionality is the use of local operations as opposed <br>
//! to global ones. In a global operation, you would first <br>
//! construct a form of the type you wanted in your final feature, and <br>
//! then remove matter so that it could fit into your initial basis object. <br>
//! In a local operation, however, you specify the domain of the feature <br>
//! construction with aspects of the shape on which the feature is being <br>
//! created. These semantics are expressed in terms of a member <br>
//! shape of the basis shape from which - or up to which - matter will be <br>
//! added or removed. As a result, local operations make calculations <br>
//! simpler and faster than global operations. <br>
//! Glueing uses wires or edges of a face in the basis shape. These are <br>
//! to become a part of the feature. They are first cut out and then <br>
//! projected to a plane outside or inside the basis shape. By <br>
//! rebuilding the initial shape incorporating the edges and the <br>
//! faces of the tool, protrusion features can be constructed. <br>
class BRepFeat_Gluer  : public BRepBuilderAPI_MakeShape {
public:

  DEFINE_STANDARD_ALLOC

  //! Initializes an empty constructor <br>
      BRepFeat_Gluer();
  //! Initializes the shapes to be glued, the new shape <br>
//! Snew and the basis shape Sbase. <br>
      BRepFeat_Gluer(const TopoDS_Shape& Snew,const TopoDS_Shape& Sbase);
  //! Initializes the new shape Snew and the basis shape <br>
//! Sbase for the local glueing operation. <br>
        void Init(const TopoDS_Shape& Snew,const TopoDS_Shape& Sbase) ;
  //! Defines a contact between Fnew on the new shape <br>
//! Snew and Fbase on the basis shape Sbase. Informs <br>
//! other methods that Fnew in the new shape Snew is <br>
//! connected to the face Fbase in the basis shape Sbase. <br>
//! The contact faces of the glued shape must not have <br>
//! parts outside the contact faces of the basis shape. <br>
//! This indicates that glueing is possible. <br>
        void Bind(const TopoDS_Face& Fnew,const TopoDS_Face& Fbase) ;
  //! nforms other methods that the edge Enew in the new <br>
//! shape is the same as the edge Ebase in the basis <br>
//! shape and is therefore attached to the basis shape. This <br>
//! indicates that glueing is possible. <br>
        void Bind(const TopoDS_Edge& Enew,const TopoDS_Edge& Ebase) ;
  //! Determine which operation type to use glueing or sliding. <br>
        LocOpe_Operation OpeType() const;
  //! Returns the basis shape of the compound shape. <br>
       const TopoDS_Shape& BasisShape() const;
  //! Returns the resulting compound shape. <br>
       const TopoDS_Shape& GluedShape() const;
  //! This is  called by  Shape().  It does  nothing but <br>
//!          may be redefined. <br>
  Standard_EXPORT   virtual  void Build() ;
  //! returns the status of the Face after <br>
//!          the shape creation. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsDeleted(const TopoDS_Shape& F) ;
  //! returns the list of generated Faces. <br>
  Standard_EXPORT   virtual const TopTools_ListOfShape& Modified(const TopoDS_Shape& F) ;





protected:





private:



LocOpe_Gluer myGluer;


};


#include <BRepFeat_Gluer.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif