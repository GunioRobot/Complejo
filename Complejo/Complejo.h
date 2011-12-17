using namespace std;

template <class T>
class Complejo;
template <class T>
istream& operator >> (istream&, Complejo<T>&);
template <class T>
ostream& operator << (ostream&, Complejo<T>);
template <class T>
Complejo<T> operator+(Complejo<T>,Complejo<T>);
template <class T>
Complejo<T> operator-(Complejo<T>,Complejo<T>);
template <class T>
Complejo<T> operator*(Complejo<T>,Complejo<T>);
template <class T>
Complejo<T> operator/(Complejo<T>,Complejo<T>);

template <class T>
class Complejo{
	friend istream& operator >> <>(istream&, Complejo<T>&);
	friend ostream& operator << <>(ostream&, Complejo<T>);
	friend Complejo<T> operator + <>(Complejo<T>,Complejo<T>);
	friend Complejo<T> operator - <>(Complejo<T>,Complejo<T>);
	friend Complejo<T> operator * <>(Complejo<T>,Complejo<T>);
	friend Complejo<T> operator / <>(Complejo<T>,Complejo<T>);

protected:
	T real, imag;
public:
	Complejo(T=0, T=0);
	void pideleAlUsuarioTusDatos();
	void muestraTusDatos();
	T dameTuImag(void);
	T dameTuReal(void);
	void modifTuReal(T);
	void modifTuImag(T);
};