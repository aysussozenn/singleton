#ifndef LAZYSINGLETON_H
#define LAZYSINGLETON_H

#include <iostream>
using namespace std;


class lazySingleton
{
    static int count;
    static string name;
    public:
        //base();
        //virtual ~base();
        static lazySingleton* getObject();
        void getObjectInfo();

    protected:

    private:

        static lazySingleton *lazyObj;
        lazySingleton();
};

#endif // LAZYSINGLETON_H
