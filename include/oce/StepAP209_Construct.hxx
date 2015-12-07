// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP209_Construct_HeaderFile
#define _StepAP209_Construct_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _STEPConstruct_Tool_HeaderFile
#include <STEPConstruct_Tool.hxx>
#endif
#ifndef _Handle_XSControl_WorkSession_HeaderFile
#include <Handle_XSControl_WorkSession.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinitionFormation_HeaderFile
#include <Handle_StepBasic_ProductDefinitionFormation.hxx>
#endif
#ifndef _Handle_StepFEA_FeaModel_HeaderFile
#include <Handle_StepFEA_FeaModel.hxx>
#endif
#ifndef _Handle_StepBasic_Product_HeaderFile
#include <Handle_StepBasic_Product.hxx>
#endif
#ifndef _Handle_StepFEA_FeaAxis2Placement3d_HeaderFile
#include <Handle_StepFEA_FeaAxis2Placement3d.hxx>
#endif
#ifndef _Handle_StepShape_ShapeRepresentation_HeaderFile
#include <Handle_StepShape_ShapeRepresentation.hxx>
#endif
#ifndef _Handle_StepElement_HSequenceOfElementMaterial_HeaderFile
#include <Handle_StepElement_HSequenceOfElementMaterial.hxx>
#endif
#ifndef _Handle_StepFEA_HSequenceOfElementGeometricRelationship_HeaderFile
#include <Handle_StepFEA_HSequenceOfElementGeometricRelationship.hxx>
#endif
#ifndef _Handle_StepFEA_HSequenceOfElementRepresentation_HeaderFile
#include <Handle_StepFEA_HSequenceOfElementRepresentation.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Handle_StepElement_HSequenceOfCurveElementSectionDefinition_HeaderFile
#include <Handle_StepElement_HSequenceOfCurveElementSectionDefinition.hxx>
#endif
#ifndef _Handle_StepFEA_Curve3dElementRepresentation_HeaderFile
#include <Handle_StepFEA_Curve3dElementRepresentation.hxx>
#endif
#ifndef _Handle_StepFEA_ElementRepresentation_HeaderFile
#include <Handle_StepFEA_ElementRepresentation.hxx>
#endif
#ifndef _Handle_StepBasic_ProductDefinition_HeaderFile
#include <Handle_StepBasic_ProductDefinition.hxx>
#endif
#ifndef _Handle_StepData_StepModel_HeaderFile
#include <Handle_StepData_StepModel.hxx>
#endif
#ifndef _Handle_StepRepr_ProductDefinitionShape_HeaderFile
#include <Handle_StepRepr_ProductDefinitionShape.hxx>
#endif
class XSControl_WorkSession;
class StepBasic_ProductDefinitionFormation;
class StepFEA_FeaModel;
class StepBasic_Product;
class StepFEA_FeaAxis2Placement3d;
class StepShape_ShapeRepresentation;
class StepElement_HSequenceOfElementMaterial;
class StepFEA_HSequenceOfElementGeometricRelationship;
class StepFEA_HSequenceOfElementRepresentation;
class Standard_Type;
class StepElement_HSequenceOfCurveElementSectionDefinition;
class StepFEA_Curve3dElementRepresentation;
class StepFEA_ElementRepresentation;
class StepBasic_ProductDefinition;
class StepData_StepModel;
class StepRepr_ProductDefinitionShape;


//! Basic tool for working with AP209 model <br>
class StepAP209_Construct  : public STEPConstruct_Tool {
public:

  DEFINE_STANDARD_ALLOC

  //! Creates an empty tool <br>
  Standard_EXPORT   StepAP209_Construct();
  //! Creates a tool and initializes it <br>
  Standard_EXPORT   StepAP209_Construct(const Handle(XSControl_WorkSession)& WS);
  //! Initializes tool; returns True if succeeded <br>
  Standard_EXPORT     Standard_Boolean Init(const Handle(XSControl_WorkSession)& WS) ;
  
  Standard_EXPORT     Standard_Boolean IsDesing(const Handle(StepBasic_ProductDefinitionFormation)& PD) const;
  
  Standard_EXPORT     Standard_Boolean IsAnalys(const Handle(StepBasic_ProductDefinitionFormation)& PD) const;
  
  Standard_EXPORT     Handle_StepFEA_FeaModel FeaModel(const Handle(StepBasic_Product)& Prod) const;
  
  Standard_EXPORT     Handle_StepFEA_FeaModel FeaModel(const Handle(StepBasic_ProductDefinitionFormation)& PDF) const;
  
  Standard_EXPORT     Handle_StepFEA_FeaAxis2Placement3d GetFeaAxis2Placement3d(const Handle(StepFEA_FeaModel)& theFeaModel) const;
  
  Standard_EXPORT     Handle_StepShape_ShapeRepresentation IdealShape(const Handle(StepBasic_Product)& Prod) const;
  
  Standard_EXPORT     Handle_StepShape_ShapeRepresentation IdealShape(const Handle(StepBasic_ProductDefinitionFormation)& PDF) const;
  
  Standard_EXPORT     Handle_StepShape_ShapeRepresentation NominShape(const Handle(StepBasic_Product)& Prod) const;
  
  Standard_EXPORT     Handle_StepShape_ShapeRepresentation NominShape(const Handle(StepBasic_ProductDefinitionFormation)& PDF) const;
  
  Standard_EXPORT     Handle_StepElement_HSequenceOfElementMaterial GetElementMaterial() const;
  
  Standard_EXPORT     Handle_StepFEA_HSequenceOfElementGeometricRelationship GetElemGeomRelat() const;
  
  Standard_EXPORT     Handle_StepFEA_HSequenceOfElementRepresentation GetElements1D(const Handle(StepFEA_FeaModel)& theFeaModel) const;
  
  Standard_EXPORT     Handle_StepFEA_HSequenceOfElementRepresentation GetElements2D(const Handle(StepFEA_FeaModel)& theFEAModel) const;
  
  Standard_EXPORT     Handle_StepFEA_HSequenceOfElementRepresentation GetElements3D(const Handle(StepFEA_FeaModel)& theFEAModel) const;
  //! Getting list of curve_element_section_definitions <br>
//!          for given element_representation <br>
  Standard_EXPORT     Handle_StepElement_HSequenceOfCurveElementSectionDefinition GetCurElemSection(const Handle(StepFEA_Curve3dElementRepresentation)& ElemRepr) const;
  
  Standard_EXPORT     Handle_StepShape_ShapeRepresentation GetShReprForElem(const Handle(StepFEA_ElementRepresentation)& ElemRepr) const;
  //! Create empty structure for idealized_analysis_shape <br>
  Standard_EXPORT     Standard_Boolean CreateAnalysStructure(const Handle(StepBasic_Product)& Prod) const;
  //! Create fea structure <br>
  Standard_EXPORT     Standard_Boolean CreateFeaStructure(const Handle(StepBasic_Product)& Prod) const;
  //! Put into model entities Applied... for AP209 instead of <br>
//!           entities CcDesing... from AP203. <br>
  Standard_EXPORT     Standard_Boolean ReplaceCcDesingToApplied() const;
  //! Create approval.. , date.. , time.. , person.. and <br>
//!           organization.. entities for analysis structure <br>
  Standard_EXPORT     Standard_Boolean CreateAddingEntities(const Handle(StepBasic_ProductDefinition)& AnaPD) const;
  //! Create AP203 structure from existing AP209 structure <br>
  Standard_EXPORT     Handle_StepData_StepModel CreateAP203Structure() const;
  //! Create approval.. , date.. , time.. , person.. and <br>
//!           organization.. entities for 203 structure <br>
  Standard_EXPORT     Standard_Boolean CreateAdding203Entities(const Handle(StepBasic_ProductDefinition)& PD,Handle(StepData_StepModel)& aModel) const;
  
  Standard_EXPORT     Handle_StepFEA_FeaModel FeaModel(const Handle(StepRepr_ProductDefinitionShape)& PDS) const;
  
  Standard_EXPORT     Handle_StepFEA_FeaModel FeaModel(const Handle(StepBasic_ProductDefinition)& PD) const;
  
  Standard_EXPORT     Handle_StepShape_ShapeRepresentation IdealShape(const Handle(StepBasic_ProductDefinition)& PD) const;
  
  Standard_EXPORT     Handle_StepShape_ShapeRepresentation IdealShape(const Handle(StepRepr_ProductDefinitionShape)& PDS) const;





protected:

  
  Standard_EXPORT     Handle_StepFEA_HSequenceOfElementRepresentation GetFeaElements(const Handle(StepFEA_FeaModel)& theFeaModel,const Handle(Standard_Type)& theType) const;




private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
