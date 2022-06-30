#ifndef THREADEDLAZYLOADING_H
#define THREADEDLAZYLOADING_H
#include <iostream>
#include <mutex>
using namespace std;

class threadedLazyLoading
{
    static int count;
    static string name;
    public:
        static threadedLazyLoading* getObject();
        void getObjectInfo();
        void getAll();
        static mutex mtx;


    protected:

    private:

        static threadedLazyLoading *lazyThreadObj;
        threadedLazyLoading();
};

#endif // THREADEDLAZYLOADING_H
