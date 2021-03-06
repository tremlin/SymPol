// ---------------------------------------------------------------------------
//
// This file is part of SymPol
//
// Copyright (C) 2006-2012  Thomas Rehn <thomas@carmen76.de>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//
// ---------------------------------------------------------------------------

#include "graphconstruction.h"

#ifndef SYMPOL_GRAPHCONSTRUCTIONBLISS_H_
#define SYMPOL_GRAPHCONSTRUCTIONBLISS_H_

#if HAVE_BLISS

namespace sympol {

class GraphConstructionBliss : public GraphConstruction {
public:
	virtual boost::shared_ptr<PermutationGroup> compute(const MatrixConstruction* matrix) const;
};

} // end NS

#endif // HAVE_BLISS
#endif // SYMPOL_GRAPHCONSTRUCTIONBLISS_H_
