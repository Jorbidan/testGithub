#include "eleve.h"
#include <conio.h>


Eleve::Eleve()
{
	codeEleve = "";
	nom = "";
	prenom = "";
	activiteChoisie = NULL;
}

Eleve::Eleve(string aCodeEleve, string aNom, string aPrenom)
{
	codeEleve = aCodeEleve;
	nom = aNom;
	prenom = aPrenom;
	activiteChoisie = NULL;
}
string Eleve::getCodeEleve() const
{
	return codeEleve;
}

string Eleve::getnom() const
{
	return nom;
}

string Eleve::getPrenom() const
{ 
	return prenom;
}

void Eleve::InscrireEleve(string aCode, string aNom, string aPrenom)
{
	codeEleve = aCode;
	nom = aNom;
	prenom = aPrenom;
}

void Eleve::InscrireAUneActivite(Activite* aActivite)
{
	activiteChoisie = aActivite;

}

Activite *Eleve::getActivite() const
{
	return activiteChoisie;
}
