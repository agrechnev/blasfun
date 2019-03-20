//#include <cblas.h>

#include <iostream>
#include <lapacke.h>

using namespace std;

int main ()
{
    int m = 3; // Number of datas
    int n = 2; // Number of funcs

    double a[3][2] = {1., 0., 1., 1., 1., 2.};
    double b[3] = {3., 10., 17.};

    /*double * p = (double *) (*a);
    for (int j = 0; j < 6; ++j) {
        cout << p[j] << endl;
    }
*/

    int info = LAPACKE_dgels(LAPACK_ROW_MAJOR,'N',m,n,1,(double *)a,n,(double *)b,1);

    cout << "info = " << info << endl;

    for (int i = 0; i < 2; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}