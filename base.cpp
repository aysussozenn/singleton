#include "base.h"

//Singleton Design Pattern
/*
  Amacýmýz bir sýnýfýn sadece 1 adet nesnesinin oluþturulabildiðinden emin olmak ve bu nesneye global bir eriþim noktasý saðlamaktýr.

   A  a = A new();
   -Sýnýfa eriþimi kýsýtlayabiliriz. (Java package yapýsý kullanarak.) Ancak sýnýfa eriþemezsek objeyi kullanamayýz.
   - Eðer sýnýfýn parçasý olan bir nesne oluþturup bu nesneyi private yaparsak static bir fonksiyonla eriþebiliriz.

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

