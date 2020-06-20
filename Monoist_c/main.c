#include<stdio.h>

// below part doesn't work 
//#define float UF 12.0 //1feet = 12inch
//#define float UCM 2.54 // 1inch = 2.54cm

float conv1(float a) {
	float feet;
	const float u_f = 12.0;
	feet = a / u_f;
	return feet;
}

float conv2(float b){
	float cm;
	const float u_cm = 2.54;
	cm = b * u_cm;
	return cm;
}

int main(void) {
	float input_i=0.0, cm=0.0, feet=0.0;
	printf("input inch length:");
	scanf_s("%f", &input_i);
	feet=conv1(input_i);
	cm=conv2(input_i);
	printf("=%f[feet]\n",feet);
	printf("=%f[cm]\n",cm);
	return 0;
}