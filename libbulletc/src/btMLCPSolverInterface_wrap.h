#include "main.h"

extern "C"
{
	//EXPORT bool btMLCPSolverInterface_solveMLCP(btMLCPSolverInterface* obj, const btMatrixX_float* A, const btVectorX_float* b, btVectorX_float* x, const btVectorX_float* lo, const btVectorX_float* hi, const btAlignedObjectArray_int* limitDependency, int numIterations);
	//EXPORT bool btMLCPSolverInterface_solveMLCP2(btMLCPSolverInterface* obj, const btMatrixX_float* A, const btVectorX_float* b, btVectorX_float* x, const btVectorX_float* lo, const btVectorX_float* hi, const btAlignedObjectArray_int* limitDependency, int numIterations, bool useSparsity);
	EXPORT void btMLCPSolverInterface_delete(btMLCPSolverInterface* obj);
}
