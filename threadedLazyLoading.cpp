#include "threadedLazyLoading.h"


mutex threadedLazyLoading::mtx;
int threadedLazyLoading::count=0;
string threadedLazyLoading::name = "";
threadedLazyLoading *threadedLazyLoading::lazyThreadObj=nullptr;

threadedLazyLoading::threadedLazyLoading()
{
    count++;
    name = "Lazy Thread Object ";
}

threadedLazyLoading *threadedLazyLoading ::getObject()
{
    mtx.lock();

    if(lazyThreadObj==nullptr)
    {
        lazyThreadObj = new threadedLazyLoading();
    }
    mtx.unlock();
    return lazyThreadObj;


}

void threadedLazyLoading::getObjectInfo()
{
   cout<< name << count;
}

void getAll(){

    threadedLazyLoading *lazyThreadObj = threadedLazyLoading::getObject();
    lazyThreadObj->getObjectInfo();
}


