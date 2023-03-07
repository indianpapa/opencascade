// Created on: 1997-09-03
// Created by: Christian CAILLET
// Copyright (c) 1997-1999 Matra Datavision
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

#ifndef _MoniTool_RealVal_HeaderFile
#define _MoniTool_RealVal_HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <Standard_Real.hxx>
#include <Standard_Transient.hxx>


class MoniTool_RealVal;
DEFINE_STANDARD_HANDLE(MoniTool_RealVal, Standard_Transient)

//! A Real through a Handle (i.e. managed as TShared)
class MoniTool_RealVal : public Standard_Transient
{

public:

  
  Standard_EXPORT MoniTool_RealVal(const Standard_Real val = 0.0);
  
  Standard_EXPORT Standard_Real Value() const;
  
  Standard_EXPORT Standard_Real& CValue();




  DEFINE_STANDARD_RTTIEXT(MoniTool_RealVal,Standard_Transient)

protected:




private:


  Standard_Real theval;


};







#endif // _MoniTool_RealVal_HeaderFile
