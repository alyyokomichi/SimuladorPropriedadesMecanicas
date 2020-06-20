#ifndef TENACIDADEAFRATRURA_H
#define TENACIDADEAFRATRURA_H
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include <vector>
#include<fstream>
#include<math.h>

using namespace std;


class TenacidadeAFratrura
{
	float C, D;
	fstream f, fp;
public:
	TenacidadeAFratrura();
	virtual ~TenacidadeAFratrura();
	void inicializa(double c, double d);
	void Calculo(vector<double> N, vector<double> T, vector<double> MD);
protected:
private:
};

#endif // TENACIDADEAFRATRURA_H
