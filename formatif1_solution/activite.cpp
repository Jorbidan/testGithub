#include "activite.h"

Activite::Activite()
{
	codeActivite = "";
	titre = "";
	responsable = "";
}
Activite::Activite(string aCodeactivite, string aTitre, string aResponsable)
{
	codeActivite = aCodeactivite;
	titre = aTitre;
	responsable = aResponsable;
}
void Activite::InitialiserActivite(string aCodeActivite, string aTitre)
{
	codeActivite = aCodeActivite;
	titre = aTitre;
}

void Activite::AssignerResponsable(string aResponsable)
{
	responsable = aResponsable;
}

string Activite::getCodeActivite() const
{
	
	return codeActivite;
}
string Activite::getResponsable() const
{

	return responsable;
}
string Activite::getTitre() const
{

	return titre;
}