#include <iostream>
#include <chrono>
#include <thread>
#include <Windows.h>
#include <map>
#include "json.hpp"
using namespace std;

#pragma once

class Functions
{
public:
	inline Functions();
	inline ~Functions();

	inline void Selection(int time);

protected:
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	inline void Print(int time);
	inline void ComeBack();
	inline char Validar(string val);

	inline void Reverse();

	inline int Aleatorio(int min, int max);

	inline void Fibonacci(int valor, int primeiro, int segundo);

	inline void FaturaDiaria();
	
	inline void FaturaMensal();
	inline double Total(map<string, double> fatura);
	inline void Mostrar(map<string, double> fatura);

};

Functions::Functions()
{
}

inline Functions::~Functions()
{
}
