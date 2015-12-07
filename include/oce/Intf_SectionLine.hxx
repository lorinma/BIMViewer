// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Intf_SectionLine_HeaderFile
#define _Intf_SectionLine_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Intf_SeqOfSectionPoint_HeaderFile
#include <Intf_SeqOfSectionPoint.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_OutOfRange;
class Intf_SectionPoint;


//! Describe    a  polyline  of   intersection  between two <br>
//!          polyhedra as a sequence of points of intersection. <br>
class Intf_SectionLine  {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns number of points in this SectionLine. <br>
        Standard_Integer NumberOfPoints() const;
  //! Gives the point of intersection of  address <Index>  in the <br>
//!          SectionLine. <br>
//! <br>
  Standard_EXPORT    const Intf_SectionPoint& GetPoint(const Standard_Integer Index) const;
  //! Returns True if the SectionLine is closed. <br>
  Standard_EXPORT     Standard_Boolean IsClosed() const;
  //! Returns True if ThePI is in the SectionLine <me>. <br>
  Standard_EXPORT     Standard_Boolean Contains(const Intf_SectionPoint& ThePI) const;
  //! Checks if <ThePI>  is an end of  the SectionLine. Returns 1 <br>
//!          for the beginning, 2 for the end, otherwise 0. <br>
  Standard_EXPORT     Standard_Integer IsEnd(const Intf_SectionPoint& ThePI) const;
  //! Compares two SectionLines. <br>
//! <br>
  Standard_EXPORT     Standard_Boolean IsEqual(const Intf_SectionLine& Other) const;
    Standard_Boolean operator ==(const Intf_SectionLine& Other) const
{
  return IsEqual(Other);
}
  //! Constructs an empty SectionLine. <br>
  Standard_EXPORT   Intf_SectionLine();
  //! Copies a SectionLine. <br>
  Standard_EXPORT   Intf_SectionLine(const Intf_SectionLine& Other);
  //! Adds a point at the end of the SectionLine. <br>
  Standard_EXPORT     void Append(const Intf_SectionPoint& Pi) ;
  //! Concatenates   the SectionLine  <LS>  at  the  end  of  the <br>
//!          SectionLine <me>. <br>
  Standard_EXPORT     void Append(Intf_SectionLine& LS) ;
  //! Adds a point to the beginning of the SectionLine <me>. <br>
  Standard_EXPORT     void Prepend(const Intf_SectionPoint& Pi) ;
  //! Concatenates a SectionLine  <LS>  at the  beginning  of the <br>
//!          SectionLine <me>. <br>
  Standard_EXPORT     void Prepend(Intf_SectionLine& LS) ;
  //! Reverses the order of the elements of the SectionLine. <br>
  Standard_EXPORT     void Reverse() ;
  //! Closes the SectionLine. <br>
  Standard_EXPORT     void Close() ;
  
  Standard_EXPORT     void Dump(const Standard_Integer Indent) const;





protected:





private:



Intf_SeqOfSectionPoint myPoints;
Standard_Boolean closed;


};


#include <Intf_SectionLine.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
