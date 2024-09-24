#include "Cabeça.h"
#include <fstream>
using namespace nlohmann;

void Functions::FaturaDiaria()
{
	ifstream faturas("Faturas.json");
	json data = json::parse(faturas);

	int maior = 0, menor = 0, media = 0, count = 0;

	for (int i = 0; i < size(data["Faturas"]); i++)
	{
		if (data["Faturas"].at(i)["faturamento"] > maior)
		{
			maior = data["Faturas"].at(i)["faturamento"];
		}
		if (data["Faturas"].at(i)["faturamento"] < menor || menor == 0)
		{
			menor = data["Faturas"].at(i)["faturamento"];
		}
		if (data["Faturas"].at(i)["faturamento"] > 0)
		{
			media += data["Faturas"].at(i)["faturamento"];
			++count;
		}
	}

	media = media / count;
	SetConsoleTextAttribute(this->h, 10);
	this_thread::sleep_for(chrono::seconds(2));
	cout << "O maior valor faturado foi: R$" << fixed << maior << "." << endl;
	SetConsoleTextAttribute(this->h, 12);
	this_thread::sleep_for(chrono::seconds(2));
	cout << "O menor valor faturado foi: R$" << fixed << menor << "." << endl;
	SetConsoleTextAttribute(this->h, 14);
	this_thread::sleep_for(chrono::seconds(2));
	cout << "A media de renda mensal foi: R$" << fixed << media << "." << endl;
	SetConsoleTextAttribute(this->h, 15);
	this_thread::sleep_for(chrono::seconds(2));
	printf("Dias em que o faturameno foir maior que a media mensal. \n\n");

	for (int i = 0; i < size(data["Faturas"]); i++)
	{
		if (data["Faturas"].at(i)["faturamento"] > media)
		{
			this_thread::sleep_for(chrono::milliseconds(500));
			SetConsoleTextAttribute(this->h, 14);
			cout << left << "dia: ";
			SetConsoleTextAttribute(this->h, 15);
			cout << left << data["Faturas"].at(i)["dia"];
			cout.width(20);
			SetConsoleTextAttribute(this->h, 14);
			cout << right << "faturamento: ";
			SetConsoleTextAttribute(this->h, 10);
			cout << right << "R$";
			cout << fixed << right << data["Faturas"].at(i)["faturamento"] << "." << endl;
		}
	}
	SetConsoleTextAttribute(this->h, 7);
	cout << endl;
	Functions().ComeBack();
}
