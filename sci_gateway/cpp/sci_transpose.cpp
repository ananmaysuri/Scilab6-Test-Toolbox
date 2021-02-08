extern "C"
{
#include<Scierror.h>
#include<api_scilab.h>
#include <stdio.h>
#include "localization.h"
#include "trans.h"

static const char fname[] = "transpose";
int sci_transpose(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out)

{
	int i = 0;
    int j = 0;
    int row = 0;
    int col = 0;
    double* in1 = NULL;
	double* out1 = NULL;
  
if (nin < 1)
    {
        Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 2);
        return 1;
    }

if (nout != 1)
    {
        Scierror(77, _("%s: Wrong number of output argument(s): %d expected.\n"), fname, 1);
        return 1;
    }
    
    // Getting dimension of the input nxm matrix
    scilab_getDim2d(env, in[0], &row, &col);

    // Input matrix
    scilab_getDoubleArray(env, in[0], &in1);
    
    double ar[col][row];

    // Transpose
    trans(row, col, in1, ar[0]);
	
    // Creating and assigning transpose matrix to output variable
    out[0] = scilab_createDoubleMatrix2d(env, col, row, 0);
    scilab_setDoubleArray(env, out[0], ar[0]);

    return 0;
}
}