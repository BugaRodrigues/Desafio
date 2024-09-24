#include "Cabeça.h"
#include "Fibonacci.cpp"
#include "Reverse.cpp"
#include "FaturamentoDiario.cpp"
#include "FaturamentoMensal.cpp"

inline void Functions::Selection(int time)
{
	cin.precision(1);
	string var;

	Print(time * 10);

	cin >> fixed >> var;
	cout << "";
	system("cls");

	switch (this->Validar(var))
	{
	case '1':
		printf("Um valor aleatorio sera gerado. \n \n");
		this_thread::sleep_for(chrono::seconds(1));
		Functions().Fibonacci(Functions().Aleatorio(1, 100), 0, 1);
		break;
	case '2':
		printf("Ecreva uma palavra. \n \n");
		Functions().Reverse();
		break;
	case '3':
		printf("Faturamento Diario. \n \n");
		Functions().FaturaDiaria();
		break;
	case '4':
		printf("Faturamento Mensal. \n \n");
		Functions().FaturaMensal();
		break;
	case '5':
		system("exit");
		break;
	default:
		Functions().Selection(0);
		break;
	}
}

inline void Functions::Print(int time)
{
	SetConsoleTextAttribute(this->h, 10);
	this_thread::sleep_for(chrono::milliseconds(time));
	printf("| 1 - Fibonacci.         | \n");
	SetConsoleTextAttribute(this->h, 11);
	this_thread::sleep_for(chrono::milliseconds(time));
	printf("| 2 - String Reverse.    | \n");
	SetConsoleTextAttribute(this->h, 9);
	this_thread::sleep_for(chrono::milliseconds(time));
	printf("| 3 - Faturamento Diario.| \n");
	SetConsoleTextAttribute(this->h, 13);
	this_thread::sleep_for(chrono::milliseconds(time));
	printf("| 4 - Faturamento Mensal.| \n");
	SetConsoleTextAttribute(this->h, 12);
	this_thread::sleep_for(chrono::milliseconds(time));
	printf("| 5 - Sair.              | \n");
	SetConsoleTextAttribute(this->h, 15);
	this_thread::sleep_for(chrono::milliseconds(time));
	printf(" Qual funcao dseja usar ?  \n");
	SetConsoleTextAttribute(this->h, 7);
}

void Functions::ComeBack()
{
	cout << endl;
	system("pause");
	system("cls");
	return Functions().Selection(0);
}

char Functions::Validar(string val)
{
	char result = val.at(0);
	return result;
}
