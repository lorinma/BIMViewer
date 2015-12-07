// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_MapIteratorOfMapOfTransient_HeaderFile
#define _TColStd_MapIteratorOfMapOfTransient_HeaderFile

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
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_TColStd_StdMapNodeOfMapOfTransient_HeaderFile
#include <Handle_TColStd_StdMapNodeOfMapOfTransient.hxx>
#endif
class Standard_NoSuchObject;
class Standard_Transient;
class TColStd_MapTransientHasher;
class TColStd_MapOfTransient;
class TColStd_StdMapNodeOfMapOfTransient;



class TColStd_MapIteratorOfMapOfTransient  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TColStd_MapIteratorOfMapOfTransient();
  
  Standard_EXPORT   TColStd_MapIteratorOfMapOfTransient(const TColStd_MapOfTransient& aMap);
  
  Standard_EXPORT     void Initialize(const TColStd_MapOfTransient& aMap) ;
  
  Standard_EXPORT    const Handle_Standard_Transient& Key() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
