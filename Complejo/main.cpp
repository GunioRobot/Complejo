#include <iostream>
#include <math.h>
#include "Complejo.cpp"

using namespace std;

int main (int argc, char * const argv[]) {
	Complejo<float> A,B,C,D,E,F;
	cin>>A>>B;
	C=A+B;
	D=A-B;
	E=A*B;
	F=A/B;
	cout<<"A"<<endl<<A
    <<"B"<<endl<<B
    <<"Suma"<<endl<<C
    <<"Resta"<<endl<<D
    <<"Multiplicaion"<<endl<<E
    <<"Division"<<endl<<F;
    return 0;
}