#include <iostream>
#include <vector>

#include <cblas.h>

using namespace std;

//======================================
void print(double *v, int n) {
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
}
//======================================

void demoDot(){
    cout << "\nDot product demo : cblas_ddot !\n" << endl;

    vector<double> a{2., 3., 7., 2.}; // We can use vector
    double b[] = {1., -1., 1., -2.};

    cout << "a = ";
    print(a.data(), 4);
    cout << endl;

    cout << "b = ";
    print(b, 4);
    cout << endl;

    // Blas always works with pointers !
    double result = cblas_ddot(4, a.data(), 1, b, 1);
    cout << "a.dot(b) = " << result << " , expecting 2" << endl;
}
//======================================

void demoAmax(){
    cout << "\nMax absolute demo : cblas_idamax !\n" << endl;

    double c[] = {1., -1., 3., 99., -17.0, 100.500, 4., -8., 21. };

    cout << "c = ";
    print(c, 4);
    cout << endl;

    size_t index = cblas_idamax(9, c, 1);
    cout << "index = " << index << endl;
}

//======================================
int main () {
    
    cout << "blas_fun ! " << endl;

    demoDot();

    demoAmax();
    
    return 0;
}
