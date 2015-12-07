// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger_HeaderFile
#define _TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger_HeaderFile

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
#ifndef _Handle_TopTools_DataMapNodeOfDataMapOfShapeListOfInteger_HeaderFile
#include <Handle_TopTools_DataMapNodeOfDataMapOfShapeListOfInteger.hxx>
#endif
class Standard_NoSuchObject;
class TopoDS_Shape;
class TColStd_ListOfInteger;
class TopTools_ShapeMapHasher;
class TopTools_DataMapOfShapeListOfInteger;
class TopTools_DataMapNodeOfDataMapOfShapeListOfInteger;



class TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger();
  
  Standard_EXPORT   TopTools_DataMapIteratorOfDataMapOfShapeListOfInteger(const TopTools_DataMapOfShapeListOfInteger& aMap);
  
  Standard_EXPORT     void Initialize(const TopTools_DataMapOfShapeListOfInteger& aMap) ;
  
  Standard_EXPORT    const TopoDS_Shape& Key() const;
  
  Standard_EXPORT    const TColStd_ListOfInteger& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif