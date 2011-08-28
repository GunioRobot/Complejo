#include <iostream>
#include <math.h>
#include "Complejo.h"

template <class T>
Complejo<T>::Complejo(T real, T imag){
	this->real=real;
	this->imag=imag;
}

template <class T>
void Complejo<T>::pideleAlUsuarioTusDatos(){
	cout << "Dami mi real ";
	cin >> real;
	cout << "Dami mi imaginario ";
	cin >> imag;
}

template <class T>
void Complejo<T>::muestraTusDatos(){
	cout << real;
	if(imag<0)
		cout << imag << "i"<<endl;
	else
		cout << "+" << imag << "i"<<endl;
}

template <class T>
T Complejo<T>::dameTuImag(void){
	return imag;
}
template <class T>
T Complejo<T>::dameTuReal(void){
	return real;
}
template <class T>
void Complejo<T>::modifTuReal(T real){
	this->real = real;
}
template <class T>
void Complejo<T>::modifTuImag(T imag){
	this->imag = imag;
}

template <class T>
Complejo<T> operator+(Complejo<T>A, Complejo<T> B){
	Complejo<T> C;
	C.real=A.real+B.real;
	C.imag=A.imag+B.imag;
	return C;
}

template <class T>
Complejo<T> operator-(Complejo<T>A, Complejo<T> B){
	Complejo<T> C;
	C.real=A.real-B.real;
	C.imag=A.imag-B.imag;
	return C;
}

template <class T>
Complejo<T> operator*(Complejo<T>A, Complejo<T> B){
	Complejo<T> C;
	C.real=A.real*B.real-A.imag*B.imag;
	C.imag=A.real*B.imag+A.imag*B.real;
	return C;
}

template <class T>
Complejo<T> operator/(Complejo<T>A, Complejo<T> B){
	Complejo<T> C;
	C.real=(A.real*B.real+A.imag*B.imag)/(pow(B.real,2)+pow(B.imag,2));
	C.imag=(A.imag*B.real-A.real*B.imag)/(pow(B.real,2)+pow(B.imag,2));
	return C;
}

template <class T>
istream& operator >> (istream& teclado, Complejo<T>& X){
	X.pideleAlUsuarioTusDatos();
	return teclado;
}

template <class T>
ostream& operator << (ostream& monitor, Complejo<T> X){
	X.muestraTusDatos();
	return monitor;
}
