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

#include <Interface_Macros.hxx>
#include <Standard_Transient.hxx>
#include <StepVisual_LayeredItem.hxx>
#include <StepVisual_PresentationRepresentation.hxx>

StepVisual_LayeredItem::StepVisual_LayeredItem() {}

Standard_Integer StepVisual_LayeredItem::CaseNum(const Handle(Standard_Transient)& ent) const
{
  if (ent.IsNull())
    return 0;
  if (ent->IsKind(STANDARD_TYPE(StepVisual_PresentationRepresentation)))
    return 1;
  if (ent->IsKind(STANDARD_TYPE(StepRepr_RepresentationItem)))
    return 2;
  return 0;
}

Handle(StepVisual_PresentationRepresentation) StepVisual_LayeredItem::PresentationRepresentation()
  const
{
  return GetCasted(StepVisual_PresentationRepresentation, Value());
}

Handle(StepRepr_RepresentationItem) StepVisual_LayeredItem::RepresentationItem() const
{
  return GetCasted(StepRepr_RepresentationItem, Value());
}
