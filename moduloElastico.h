#ifndef MODULOELASTICO_H
#define MODULOELASTICO_H
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<vector>
#include<fstream>
#include<math.h>

using namespace std;

class moduloElastico
{
	double Area;
	double L0;
	vector<double> Tensao, Deformacao, MD;
	fstream f, fp;
public:
	moduloElastico();
	virtual ~moduloElastico();
	void inicializa(double area, double l0);
	void Calculo(vector<double> N, vector<double> L, vector<double> T);
	std::vector<double> getMD();
protected:
private:
};

#endif // MODULOELASTICO_H
