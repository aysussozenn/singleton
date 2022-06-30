#include "lazySingleton.h"


/*

  Statik de�i�kenler en ba�tan create edildi�i i�in baz� durumlarda maliyetli olabilir. Bu maliyeti azaltmak i�inse Lazy Loading y�ntemi kullan�l�r.
  Lazy Loading objenin ihtiyac�m�z olan zamanlarda olu�turulmas�d�r.

*/
int lazySingleton::count=0;
string lazySingleton::name = "";
lazySingleton *lazySingleton::lazyObj=nullptr;
lazySingleton::lazySingleton()
{

    count++;
    name = "Lazy Object ";

}
lazySingleton *lazySingleton ::getObject()
{

    if(lazyObj==nullptr)
    {
        lazyObj = new lazySingleton();
    }

    return lazyObj;


}

void lazySingleton::getObjectInfo()
{
   cout<< name << count;
}
