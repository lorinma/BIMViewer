// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CDM_ReferenceIterator_HeaderFile
#define _CDM_ReferenceIterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _CDM_ListIteratorOfListOfReferences_HeaderFile
#include <CDM_ListIteratorOfListOfReferences.hxx>
#endif
#ifndef _Handle_CDM_Document_HeaderFile
#include <Handle_CDM_Document.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class CDM_Document;



class CDM_ReferenceIterator  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   CDM_ReferenceIterator(const Handle(CDM_Document)& aDocument);
  
  Standard_EXPORT     Standard_Boolean More() const;
  
  Standard_EXPORT     void Next() ;
  
  Standard_EXPORT     Handle_CDM_Document Document() const;
  
  Standard_EXPORT     Standard_Integer ReferenceIdentifier() const;
  //! returns the Document Version in the reference. <br>
  Standard_EXPORT     Standard_Integer DocumentVersion() const;





protected:





private:



CDM_ListIteratorOfListOfReferences myIterator;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
