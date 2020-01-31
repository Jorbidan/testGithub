#ifndef EleveH 
#define EleveH
//---------------------------------------------------------------------------
#include <string>
#include <iostream>
#include "activite.h"
using namespace std;

class Eleve
{
private:
	string codeEleve;
	string nom;
	string prenom;
	Activite* activiteChoisie;

public:
	Eleve();
	Eleve(string, string, string);
	string getCodeEleve() const;
	string getnom() const;
	string getPrenom() const;
	void InscrireEleve(string, string, string);
	void InscrireAUneActivite(Activite*);
	Activite* getActivite() const;


};

#endif

