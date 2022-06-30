#include "lazySingleton.h"


/*

  Statik deðiþkenler en baþtan create edildiði için bazý durumlarda maliyetli olabilir. Bu maliyeti azaltmak içinse Lazy Loading yöntemi kullanýlýr.
  Lazy Loading objenin ihtiyacýmýz olan zamanlarda oluþturulmasýdýr.

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
