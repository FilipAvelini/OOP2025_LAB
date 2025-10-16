
#ifndef VEKTOR
#define VEKTOR

struct Vektor
{
	int* elementi;
	int logickaVelicina;
	int fizickaVelicina;

	void vektor_new(Vektor& v);
	void vektor_delete(Vektor& v);
	void vektor_push_back(Vektor& v, int vrijednost);


};






#endif 
