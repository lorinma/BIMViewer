// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_TypeMapEntry_HeaderFile
#define _Aspect_TypeMapEntry_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Aspect_LineStyle_HeaderFile
#include <Aspect_LineStyle.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Aspect_BadAccess;
class Aspect_LineStyle;


//! This class defines a typemap entry. <br>
//!	    A typemap entry is an association between <br>
//!	    a LineStyle object and an index in the typemap. <br>
class Aspect_TypeMapEntry  {
public:

  DEFINE_STANDARD_ALLOC

  //! Creates an unallocated typemap entry <br>
  Standard_EXPORT   Aspect_TypeMapEntry();
  //! Creates an allocated typemap entry <br>
  Standard_EXPORT   Aspect_TypeMapEntry(const Standard_Integer index,const Aspect_LineStyle& style);
  //! Creates an allocated typemap entry. <br>
//!  Warning: Raises error if the typemap entry <entry> <br>
//!	    is unallocated. <br>
  Standard_EXPORT   Aspect_TypeMapEntry(const Aspect_TypeMapEntry& entry);
  //! Sets typemap entry value and allocates it. <br>
  Standard_EXPORT     void SetValue(const Standard_Integer index,const Aspect_LineStyle& style) ;
  //! Sets typemap entry value and allocates it. <br>
  Standard_EXPORT     void SetValue(const Aspect_TypeMapEntry& entry) ;
    void operator =(const Aspect_TypeMapEntry& entry) 
{
  SetValue(entry);
}
  //! Sets the line style of typemap entry. <br>
  Standard_EXPORT     void SetType(const Aspect_LineStyle& Style) ;
  
  Standard_EXPORT    const Aspect_LineStyle& Type() const;
  //! Sets index value of a typemap entry. <br>
  Standard_EXPORT     void SetIndex(const Standard_Integer index) ;
  //! Returns index value of a typemap entry. <br>
//!  Warning: Raises error if the typemap entry is unallocated . <br>
  Standard_EXPORT     Standard_Integer Index() const;
  //! Unallocates the typemap entry. <br>
  Standard_EXPORT     void Free() ;
  //! Returns True if the typemap entry is allocated. <br>
//!  Warning: A typemap entry is allocated when the type and <br>
//!	    the index is defined. <br>
  Standard_EXPORT     Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT     void Dump() const;





protected:





private:



Aspect_LineStyle MyType;
Standard_Integer MyIndex;
Standard_Boolean MyTypeIsDef;
Standard_Boolean MyIndexIsDef;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
