#define _CRT_SECURE_NO_WARNINGS 1
#include "Fun.h"

//Complex

void assign(Complex* A, float  r, float i)
{
	A->real = r;
	A->imag = i;
}
void length(Complex A, float *len)
{
	*len = sqrt(A.imag * A.imag + A.real * A.real);
}
void add(Complex* C, Complex A, Complex B)
{
	C->real = A.real + B.real;
	C->imag = A.imag + B.imag;
}
void minus(Complex* C, Complex A, Complex B)
{
	C->real = A.real - B.real;
	C->imag = A.imag - B.imag;

}
void mul(Complex* C, Complex A, Complex B)
{
	C->real = A.real * B.real - A.imag * B.imag;
	C->imag = A.real * B.imag + A.imag * B.real;
}
void div(Complex* C, Complex A, Complex B)
{
	B.imag = -B.imag; 
	mul(C, A, B);
	float len = 0;
	length(B , &len);
	len *= len;
	C->real /= len;
	C->imag /= len;
}




