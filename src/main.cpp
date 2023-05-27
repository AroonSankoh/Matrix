#include "matrix.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

void fillArray(double * arr, int size){
	for(int i = 0; i < size; ++i){
		arr[i] = rand() % 5;
	}
}

//bool testMatrixMult(){
//	srand(time(nullptr));
//	int count = 0;
//	while(true){
//		//determine dimensions
//		int row = rand() % 16;
//		int shared_dim = rand() % 16;
//		int col = rand() % 16;
//
//		//create arrays
//		double * arr1 = new double[row * shared_dim];
//		double * arr2 = new double[shared_dim * col];
//		fillArray(arr1, row * shared_dim);
//		fillArray(arr2, col * shared_dim);
//
//		//create matrices
//		Matrix m1 = Matrix(row, shared_dim, arr1);
//		Matrix m2 = Matrix(shared_dim, col, arr2);
//		Matrix re = m1.inefficientMatrixMult(m2);
//		Matrix re2 = m1 * m2;
//
//		delete[] arr1;
//		delete[] arr2;
//		if(!(re == re2)){
//			cout << m1 << endl;
//			cout << m2 << endl;
//			cout << re << endl;
//			cout << re2 << endl;
//			cout << count << endl;
//			return false;
//		}
//
//		if(count % 1000 == 0){
//			cout << count << endl;
//		}
//		++count;
//
//	}
//}


int main()
{
//	if(!testMatrixMult()){
//		cout << "ERROR" << endl;
//	}

    string lineBreak = "------------------------------------------";

    //Checking the Print Function and constructor 1
    Matrix m1 = Matrix(2, 3);
    m1.printMatrix();
    cout << endl;
    Matrix m2 = Matrix(2, 2);
    m2.printMatrix();
    cout << endl;
    Matrix m3 = m1 + m2;
    m3.printMatrix();
    cout << lineBreak << endl;

    //Checking the Addition Function and constructor 2
    double arr[4] = {-1, 4, 3, -2};
    Matrix test = Matrix(2, 2, arr);

    cout << "Matrix 1: " << endl;

    test.printMatrix();

    cout << endl;

    double arr2[4] = {2, -1, -4, +4};
    Matrix test2 = Matrix(2, 2, arr2);

    cout << "Matrix 2: " << endl;

    test2.printMatrix();

    cout << endl;

    Matrix test3 = test + test2;

    cout << "Matrix 3: " << endl;

    test3.printMatrix();

    cout << lineBreak << endl;

    //Checking the rref function

    cout << "Matrix 2: " << endl;
    test2.printMatrix();

    Matrix m = test2.rref();

    cout << "Row Reduced Form" << endl;
    m.printMatrix();
    cout << endl;

    cout << "Matrix 4: " << endl;

    double arr4[9] = {6, 3, 2, -4, 9, 6, -1, 1, -2};
    Matrix test4 = Matrix(3, 3, arr4);

    test4.printMatrix();

    Matrix n = test4.rref();

    cout << "Row Reduced Form" << endl;

    n.printMatrix();

    cout << endl;

    cout << "Matrix 5: " << endl;

    double arr5[12] = {6, 3, 2, -4, 9, 6, -1, 1, -2, 0, 3, 1};
    Matrix test5 = Matrix(3, 4, arr4);

    test5.printMatrix();

    Matrix p = test5.rref();

    cout << "Row Reduced Form" << endl;

    p.printMatrix();

    cout << lineBreak << endl;

    test4.printMatrix();

    cout << "Complete Row Reduced Form" << endl;

    test4.rrefComplete().printMatrix();

    cout << endl;

    test5.printMatrix();

    cout << "Complete Row Reduced Form" << endl;

    test5.rrefComplete().printMatrix(); //Causing problems (something with non-square matrices)

    cout << lineBreak << endl;

    cout << "Matrix:" << endl;
    test4.printMatrix();

    cout << "determinant: " << endl;

    cout << test4.determinant(test4) << endl;

    return 0;
}





