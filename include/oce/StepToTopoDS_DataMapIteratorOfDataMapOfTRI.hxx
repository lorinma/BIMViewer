// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_DataMapIteratorOfDataMapOfTRI_HeaderFile
#define _StepToTopoDS_DataMapIteratorOfDataMapOfTRI_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_StepShape_TopologicalRepresentationItem_HeaderFile
#include <Handle_StepShape_TopologicalRepresentationItem.hxx>
#endif
#ifndef _Handle_StepToTopoDS_DataMapNodeOfDataMapOfTRI_HeaderFile
#include <Handle_StepToTopoDS_DataMapNodeOfDataMapOfTRI.hxx>
#endif
class Standard_NoSuchObject;
class StepShape_TopologicalRepresentationItem;
class TopoDS_Shape;
class TColStd_MapTransientHasher;
class StepToTopoDS_DataMapOfTRI;
class StepToTopoDS_DataMapNodeOfDataMapOfTRI;



class StepToTopoDS_DataMapIteratorOfDataMapOfTRI  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   StepToTopoDS_DataMapIteratorOfDataMapOfTRI();
  
  Standard_EXPORT   StepToTopoDS_DataMapIteratorOfDataMapOfTRI(const StepToTopoDS_DataMapOfTRI& aMap);
  
  Standard_EXPORT     void Initialize(const StepToTopoDS_DataMapOfTRI& aMap) ;
  
  Standard_EXPORT    const Handle_StepShape_TopologicalRepresentationItem& Key() const;
  
  Standard_EXPORT    const TopoDS_Shape& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
