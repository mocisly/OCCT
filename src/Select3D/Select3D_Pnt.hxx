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

#ifndef _Select3D_Pnt_HeaderFile
#define _Select3D_Pnt_HeaderFile

#include <gp_Pnt.hxx>

struct Select3D_Pnt
{
  Standard_ShortReal x, y, z;

  operator gp_Pnt() const { return gp_Pnt(x, y, z); }

  operator gp_XYZ() const { return gp_XYZ(x, y, z); }

  gp_Pnt operator=(const gp_Pnt& thePnt)
  {
    x = RealToShortReal(thePnt.X());
    y = RealToShortReal(thePnt.Y());
    z = RealToShortReal(thePnt.Z());
    return *this;
  }
};

#endif
