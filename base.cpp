#include "base.h"

//Singleton Design Pattern
/*
  Amac�m�z bir s�n�f�n sadece 1 adet nesnesinin olu�turulabildi�inden emin olmak ve bu nesneye global bir eri�im noktas� sa�lamakt�r.

   A  a = A new();
   -S�n�fa eri�imi k�s�tlayabiliriz. (Java package yap�s� kullanarak.) Ancak s�n�fa eri�emezsek objeyi kullanamay�z.
   - E�er s�n�f�n par�as� olan bir nesne olu�turup bu nesneyi private yaparsak static bir fonksiyonla eri�ebiliriz.

*/


int base::count=0;
string base::name = "";
base *base::baseObj= new base();
base::base()
{
    //ctor
    count++;
    name = "Object ";
}

base *base ::getObject()
{


    return baseObj;


}

void base::getObjectInfo()
{
   cout<< name << count;
}

