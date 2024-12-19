#include "TestScurt.h"
#include <assert.h>
#include "Multime.h"
#include "IteratorMultime.h"
void test_submultime() {
    Multime m1, m2;

    m1.adauga(1);
    m1.adauga(2);
    m1.adauga(3);

    m2.adauga(1);
    m2.adauga(2);
    m2.adauga(3);
    m2.adauga(4);

    assert(m1.submultime(m2) == true);

    m1.adauga(6);

    assert(m1.submultime(m2) == false);
}
void testAll() { //apelam fiecare functie sa vedem daca exista
    test_submultime();
    Multime m;
    assert(m.vida() == true);
    assert(m.dim() == 0); //adaug niste elemente
    assert(m.adauga(5)==true);
    assert(m.adauga(1)==true);
    assert(m.adauga(10)==true);
    assert(m.adauga(7)==true);
    assert(m.adauga(1)==false);
    assert(m.adauga(10)==false);
    assert(m.adauga(-3)==true);
    assert(m.dim() == 5);
    assert(m.cauta(10) == true);
    assert(m.cauta(16) == false);
    assert(m.sterge(1) == true);
    assert(m.sterge(6) == false);
    assert(m.dim() == 4);


    IteratorMultime im = m.iterator();
    im.prim();
    int s = 0;
    while (im.valid()) {
        TElem e = im.element();
        s += e;
        im.urmator();
    }
    assert(s == 19);

}