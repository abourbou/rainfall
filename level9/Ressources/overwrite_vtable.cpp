#include <iostream>

class Base
{
public:
    virtual void foo()
    {
        std::cout << "Foo function\n"; //<< a;
    }

};

typedef void (*t_ptrFunction)();

struct FakeVirtualTable
{
    t_ptrFunction pFakeFunction;
};

void fakeFunction()
{
    std::cout << "Fake function" << std::endl;
}

int main()
{
    Base* pObj = new Base();

	pObj->foo();

    /* create our fake virtual table with pointers to our fake methods */
    FakeVirtualTable* pFakeVTable = new FakeVirtualTable();
    pFakeVTable->pFakeFunction = fakeFunction;

    memcpy(pObj, &pFakeVTable, sizeof(void*));

    pObj->foo();

    return 0;
}