#pragma once
#include "MD.h"
#include <exception>

class MD;

class IteratorMD
{
	friend class MD;

private:

	//constructorul primeste o referinta catre Container
	//iteratorul va referi primul element din container
	explicit IteratorMD(MD& c);

	//contine o referinta catre containerul pe care il itereaza
	MD& md;

	/* aici e reprezentarea  specifica a iteratorului */
    int poz;

public:

		//reseteaza pozitia iteratorului la inceputul containerului
		void prim();

		//muta iteratorul in container
		// arunca exceptie daca iteratorul nu e valid
		void urmator();

		//verifica daca iteratorul e valid (indica un element al containerului)
		bool valid() const;

		//returneaza valoarea elementului din container referit de iterator
		//arunca exceptie daca iteratorul nu e valid
		TElem element() const;

        TElem elimina();
};

