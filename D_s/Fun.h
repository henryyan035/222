#pragma once
#include <stdio.h>
#include <math.h>
//Complex
typedef struct {
	float real;
	float imag;
}Complex;
void assign(Complex* A, float r, float i);
void length(Complex A,float *len);
void add(Complex* C, Complex A , Complex B);
void minus(Complex* C, Complex A, Complex B);
void mul(Complex* C, Complex A, Complex B);
void div(Complex* C, Complex A, Complex B);

