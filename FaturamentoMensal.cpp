#include "Cabeça.h"

void Functions::FaturaMensal()
{
	map<string, double> fatura = {{"  SP  ", 67836.43}, {"  RJ  ", 36678.66}, {"  MG  ", 29229.88}, {"  ES  ", 27165.48}, {"Outros", 19849.53}};
	Functions().Mostrar(fatura);
	double total = Functions().Total(fatura);
	for (auto& i : fatura)
	{
		SetConsoleTextAttribute(this->h, 15);
		this_thread::sleep_for(chrono::milliseconds(250));
		cout << "| ";
		SetConsoleTextAttribute(this->h, 9);
		this_thread::sleep_for(chrono::milliseconds(250));
		cout << fixed << i.first; 
		SetConsoleTextAttribute(this->h, 15);
		this_thread::sleep_for(chrono::milliseconds(250));
		cout << " -> ";
		SetConsoleTextAttribute(this->h, 10);
		cout.precision(2);
		this_thread::sleep_for(chrono::milliseconds(250));
		cout << "R$" << i.second;
		this_thread::sleep_for(chrono::milliseconds(250));
		SetConsoleTextAttribute(this->h, 15);
		cout << " -> ";
		SetConsoleTextAttribute(this->h, 13);
		cout.precision(0);
		this_thread::sleep_for(chrono::milliseconds(250));
		cout << fixed << (i.second * 100) / total << "%";
		SetConsoleTextAttribute(this->h, 15);
		this_thread::sleep_for(chrono::milliseconds(250));
		cout << " | \n";
	}
	SetConsoleTextAttribute(this->h, 7);
	Functions().ComeBack();
}

double Functions::Total(map<string, double> fatura)
{
	double total = 0.;
	for (auto& i : fatura)
	{
		total += i.second;
	}
	return total;
}

void Functions::Mostrar(map<string, double> fatura)
{
	for (auto& i : fatura)
	{
		cout.precision(2);
		SetConsoleTextAttribute(this->h, 15);
		this_thread::sleep_for(chrono::milliseconds(250));
		cout << "    | ";
		SetConsoleTextAttribute(this->h, 9);
		this_thread::sleep_for(chrono::milliseconds(250));
		cout << fixed << i.first;
		SetConsoleTextAttribute(this->h, 15);
		this_thread::sleep_for(chrono::milliseconds(250));
		cout << " -> ";
		SetConsoleTextAttribute(this->h, 10);
		this_thread::sleep_for(chrono::milliseconds(250));
		cout << "R$" << i.second;
		SetConsoleTextAttribute(this->h, 15);
		this_thread::sleep_for(chrono::milliseconds(250));
		cout << " |" << "\n";
	}
	SetConsoleTextAttribute(this->h, 11);
	cout << endl;
	cout << "---------------------------------";
	cout << endl << endl;
}