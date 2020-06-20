#ifndef ARQUIVO_H
#define ARQUIVO_H
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include <vector>


using namespace std;


class Arquivo
{
	string linha;
	double n, l, t;
	vector <double> N, L, T;
public:
	Arquivo();
	virtual ~Arquivo();
	int abrir(string nomearq);
	vector<double> getN();
	vector<double> getL();
	vector<double> getT();
protected:
private:
};

#endif // ARQUIVO_H
