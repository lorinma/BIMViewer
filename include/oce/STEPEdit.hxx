// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPEdit_HeaderFile
#define _STEPEdit_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Interface_Protocol_HeaderFile
#include <Handle_Interface_Protocol.hxx>
#endif
#ifndef _Handle_StepData_StepModel_HeaderFile
#include <Handle_StepData_StepModel.hxx>
#endif
#ifndef _Handle_IFSelect_Signature_HeaderFile
#include <Handle_IFSelect_Signature.hxx>
#endif
#ifndef _Handle_IFSelect_SelectSignature_HeaderFile
#include <Handle_IFSelect_SelectSignature.hxx>
#endif
class Interface_Protocol;
class StepData_StepModel;
class IFSelect_Signature;
class IFSelect_SelectSignature;
class STEPEdit_EditContext;
class STEPEdit_EditSDR;


//! Provides tools to exploit and edit a set of STEP data : <br>
//!           editors, selections .. <br>
class STEPEdit  {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns a Protocol fit for STEP (creates the first time) <br>
  Standard_EXPORT   static  Handle_Interface_Protocol Protocol() ;
  //! Returns a new empty StepModel fit for STEP <br>
//!           i.e. with its header determined from Protocol <br>
  Standard_EXPORT   static  Handle_StepData_StepModel NewModel() ;
  //! Returns a SignType fit for STEP (creates the first time) <br>
  Standard_EXPORT   static  Handle_IFSelect_Signature SignType() ;
  //! Creates a Selection for ShapeDefinitionRepresentation <br>
//!           By default searches among root entities <br>
  Standard_EXPORT   static  Handle_IFSelect_SelectSignature NewSelectSDR() ;
  //! Creates a Selection for Placed Items, i.e. MappedItem or <br>
//!           ContextDependentShapeRepresentation, which itself refers to a <br>
//!           RepresentationRelationship with possible subtypes (Shape... <br>
//!           and/or ...WithTransformation) <br>
//!           By default in the whole StepModel <br>
  Standard_EXPORT   static  Handle_IFSelect_SelectSignature NewSelectPlacedItem() ;
  //! Creates a Selection for ShapeRepresentation and its sub-types, <br>
//!           plus ContextDependentShapeRepresentation (which is not a <br>
//!           sub-type of ShapeRepresentation) <br>
//!           By default in the whole StepModel <br>
  Standard_EXPORT   static  Handle_IFSelect_SelectSignature NewSelectShapeRepr() ;





protected:





private:




friend class STEPEdit_EditContext;
friend class STEPEdit_EditSDR;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
