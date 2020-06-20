#ifndef TAXADECORROSAO_H
#define TAXADECORROSAO_H
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<vector>
#include<fstream>
#include<math.h>

using namespace std;


class TaxaDeCorrosao
{
	double W0, W1, T, P, S;
	fstream f, fp;
public:
	TaxaDeCorrosao();
	virtual ~TaxaDeCorrosao();
	void inicializa(double w0, double t, double p, double s);
	void Calculo(vector<double> W1, vector<double> Temp);
protected:
private:
};

#endif // TAXADECORROSAO_H
