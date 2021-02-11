#include "Calculator.h"

float annulment::Сalculator::sum(float a, float b){
	__asm {
		mov eax, a;
		mov ebx, b;
		add eax, ebx;
		mov a, eax;
	}

	return a;
}

float annulment::Сalculator::difference(float a, float b) {
	__asm {
		mov eax, a;
		mov ebx, b;
		sub eax, ebx;
		mov a, eax;
	}

	return a;
}

float annulment::Сalculator::multiplication(float a, float b) {
	return a * b;
}

float annulment::Сalculator::division(float a, float b) {
	return a / b;
}