// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ''AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Copyright (c) 2008-2024 NVIDIA Corporation. All rights reserved.
// Copyright (c) 2004-2008 AGEIA Technologies, Inc. All rights reserved.
// Copyright (c) 2001-2004 NovodeX AG. All rights reserved.  

#ifndef DY_PGS_H
#define DY_PGS_H

#include "foundation/PxPreprocessor.h"
#include "foundation/PxSimpleTypes.h"

namespace physx
{
	struct PxSolverConstraintDesc;

	namespace Dy
	{
		struct SolverContext;

		// PT: using defines like we did in Gu (GU_OVERLAP_FUNC_PARAMS, etc). Additionally this gives a
		// convenient way to find the PGS solver methods, which are scattered in different files and use
		// the same function names as other functions (with a different signature).

		#define DY_PGS_SOLVE_METHOD_PARAMS		const PxSolverConstraintDesc* desc, PxU32 constraintCount, SolverContext& cache

		typedef void (*SolveBlockMethod)			(DY_PGS_SOLVE_METHOD_PARAMS);
		typedef void (*SolveWriteBackBlockMethod)	(DY_PGS_SOLVE_METHOD_PARAMS);
		typedef void (*WriteBackBlockMethod)		(DY_PGS_SOLVE_METHOD_PARAMS);
	}
}

#endif
