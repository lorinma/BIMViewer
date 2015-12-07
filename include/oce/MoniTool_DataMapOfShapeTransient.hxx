// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MoniTool_DataMapOfShapeTransient_HeaderFile
#define _MoniTool_DataMapOfShapeTransient_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_MoniTool_DataMapNodeOfDataMapOfShapeTransient_HeaderFile
#include <Handle_MoniTool_DataMapNodeOfDataMapOfShapeTransient.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class Standard_Transient;
class TopTools_ShapeMapHasher;
class MoniTool_DataMapNodeOfDataMapOfShapeTransient;
class MoniTool_DataMapIteratorOfDataMapOfShapeTransient;



class MoniTool_DataMapOfShapeTransient  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   MoniTool_DataMapOfShapeTransient(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     MoniTool_DataMapOfShapeTransient& Assign(const MoniTool_DataMapOfShapeTransient& Other) ;
    MoniTool_DataMapOfShapeTransient& operator =(const MoniTool_DataMapOfShapeTransient& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~MoniTool_DataMapOfShapeTransient()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const TopoDS_Shape& K,const Handle(Standard_Transient)& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const TopoDS_Shape& K) ;
  
  Standard_EXPORT    const Handle_Standard_Transient& Find(const TopoDS_Shape& K) const;
   const Handle_Standard_Transient& operator()(const TopoDS_Shape& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Handle_Standard_Transient& ChangeFind(const TopoDS_Shape& K) ;
    Handle_Standard_Transient& operator()(const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const TopoDS_Shape& K) ;





protected:





private:

  
  Standard_EXPORT   MoniTool_DataMapOfShapeTransient(const MoniTool_DataMapOfShapeTransient& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
