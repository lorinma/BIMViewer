// Copyright (c) 1998-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef   _Standard_PrimitiveTypes_HeaderFile
#define   _Standard_PrimitiveTypes_HeaderFile

#include <stddef.h>
#include <stdlib.h>

class Standard_Type;
class Handle_Standard_Type;

class Handle_Standard_Transient;
class Standard_Transient;

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Character_HeaderFile
#include <Standard_Character.hxx>
#endif
#ifndef _Standard_ExtCharacter_HeaderFile
#include <Standard_ExtCharacter.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Standard_ExtString_HeaderFile
#include <Standard_ExtString.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif

__Standard_API Standard_Address ShallowCopy(const Standard_Address, 
		     const Handle_Standard_Type& );

__Standard_API Standard_Integer HashCode(const Standard_Address, 
			  const Standard_Integer,
			  const Handle_Standard_Type&);

#endif










