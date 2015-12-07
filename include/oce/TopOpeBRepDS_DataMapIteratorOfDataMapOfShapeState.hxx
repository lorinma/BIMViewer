// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapIteratorOfDataMapOfShapeState_HeaderFile
#define _TopOpeBRepDS_DataMapIteratorOfDataMapOfShapeState_HeaderFile

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
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfShapeState_HeaderFile
#include <Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfShapeState.hxx>
#endif
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopOpeBRepDS_DataMapOfShapeState;
class TopOpeBRepDS_DataMapNodeOfDataMapOfShapeState;



class TopOpeBRepDS_DataMapIteratorOfDataMapOfShapeState  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRepDS_DataMapIteratorOfDataMapOfShapeState();
  
  Standard_EXPORT   TopOpeBRepDS_DataMapIteratorOfDataMapOfShapeState(const TopOpeBRepDS_DataMapOfShapeState& aMap);
  
  Standard_EXPORT     void Initialize(const TopOpeBRepDS_DataMapOfShapeState& aMap) ;
  
  Standard_EXPORT    const TopoDS_Shape& Key() const;
  
  Standard_EXPORT    const TopAbs_State& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif