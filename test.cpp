#include <iostream>
#include "matrix.hpp"
using namespace std;

int main(){
	Mat A(3,2);
	Mat B; B.size(2,1);
	A(0,0) = 1; A(0,1) = 2; A(1,0) = 3; A(1,1) = 4; A(2,0) = 5; A(2,1) = 6;
	B(0,0) = 12; B(1,0) = 5;
	Mat C(1,2);
	C = A;
// 	A.data[0] = 2;
	(A).print();
	C.print();
	A(2,1) = 4000;
	A.print();
	C.print();
// 	C = 2.0*C*(~A);
	C.trans();
	C = 0.5*A*C;
	C.p();
	B.p();
	B = A[0];
	B.p();
	A(0,0) = 90;
	B.p();
	B =A[0];
	C = B;
	cout << "af" <<endl;
	A.p();
	B.p();
	C.p();
	B = -B;
	A.p();
	B.p();
	C.p();
	cout << "==========" <<endl;
// 	A[0] = B[0];
	A(0,0) = B(0,0);
	A(0,1) = B(1,0);
	B.p();
	A.p();
	B &= A[0];
	Mat D;
	D = A+A;


	cout << A(2,1) << endl;

}
