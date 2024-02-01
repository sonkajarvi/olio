#include "kerros.h"

#include <iostream>


Kerros::Kerros()
{
    as1 = new Asunto();
    as2 = new Asunto();
    as3 = new Asunto();
    as4 = new Asunto();

    std::cout << "Kerros luotu" << std::endl;
}

Kerros::~Kerros()
{
    delete as1;
    delete as2;
    delete as3;
    delete as4;

    std::cout << "Kerros tuhottu" << std::endl;
}

void Kerros::maaritaAsunnot()
{
    std::cout << "Maaritetaan 4 kpl kerroksen asuntoja" << std::endl;

    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta)
{
    double kulutus = 0;
    kulutus += as1->laskeKulutus(hinta);
    kulutus += as2->laskeKulutus(hinta);
    kulutus += as3->laskeKulutus(hinta);
    kulutus += as4->laskeKulutus(hinta);
    return kulutus;
}
