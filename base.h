#ifndef BASE_H
#define BASE_H
#include <iostream>
using namespace std;


class base
{
    static int count;
    static string name;
    public:
        //base();
        //virtual ~base();
        static base* getObject();
        void getObjectInfo();

    protected:

    private:

        static base *baseObj;
        base();
};

#endif // BASE_H
