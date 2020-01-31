#ifndef ACTIVITE_H 
#define ACTIVITE_H

#include "..\screen\screen.h"
#include <string>
#include <iostream>
using namespace std;

class Activite
{
private:
	string codeActivite;
	string titre;
	string responsable;
public:
	Activite();
	Activite(string, string, string);
	void InitialiserActivite(string, string);
	void AssignerResponsable(string);
	string getCodeActivite() const;
	string getTitre() const;
	string getResponsable() const;
};

#endif