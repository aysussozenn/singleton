#include <iostream>
#include "base.h"
#include "lazySingleton.h"
#include "threadedLazyLoading.h"
#include <thread>
using namespace std;


#include <iostream>
#include <thread>

void getAll(){

    threadedLazyLoading *lazyThreadObj = threadedLazyLoading::getObject();
    lazyThreadObj->getObjectInfo();
}

int main()
{

    for(int i=0 ;i<10 ; i++){

            std::thread t1(getAll);
            t1.join();

            cout<<"\n";
   }

    for(int i=0 ;i<10 ; i++){
//            base *obj = base::getObject();
//            obj->getObjectInfo();

//            lazySingleton *lazyObj = lazySingleton::getObject();
//            lazyObj->getObjectInfo();

              std::thread t1(getAll);
              t1.join();

              cout<<"\n";
   }
    return 0;
}
