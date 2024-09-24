#include "Cabeça.h"

inline void Functions::Reverse()
{
	string palavra = "vazio";
	SetConsoleTextAttribute(this->h, 4);
	cin >> palavra;
	system("cls");
	cout << palavra << "\n \n";
	SetConsoleTextAttribute(this->h, 10);
	for (size_t i = size(palavra); i > 0; i--)
	{
		this_thread::sleep_for(chrono::seconds(1));
		cout << palavra.at(i - 1) << " ";
	}
	SetConsoleTextAttribute(this->h, 7);
	Functions().ComeBack();
}