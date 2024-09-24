#include "Cabeça.h"
#include <random>

inline int Functions::Aleatorio(int min, int max)
{
	random_device rng;
	mt19937 gen(rng());
	uniform_int_distribution<> dist(min, max);
	return dist(gen);
}