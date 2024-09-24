#include "Cabeça.h"
#include "Random.cpp"

inline void Functions::Fibonacci(int valor, int primeiro, int segundo) {
	if (primeiro + segundo == valor)
	{
		SetConsoleTextAttribute(this->h, 10);
		printf("O valor %i, pertence a sequencia. \n\n", valor);
		SetConsoleTextAttribute(this->h, 7);
		Functions().ComeBack();
	}
	else if (primeiro + segundo > valor)
	{
		SetConsoleTextAttribute(this->h, 4);
		printf("O valor %i, nao pertence a sequencia. \n\n", valor);
		SetConsoleTextAttribute(this->h, 7);
		Functions().ComeBack();
	}
	else {
		this->Fibonacci(valor, segundo, primeiro + segundo);
	}
}

