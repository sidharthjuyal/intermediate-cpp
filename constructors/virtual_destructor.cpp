#include <iostream>
using namespace std;

class A
{
    int *a;

public:
    A()
    {
        a = new int;
    }
    virtual ~A()
    {
        delete a;
    }

    void f1()
    {
    }
};

class B : public A
{
    int *b;

public:
    B()
    {
        b = new int;
    }
    ~B()
    {
        delete b;
    }
};

int main()
{
    A *p = new B;
    p->f1();
    delete p;
}

/*
early binding me compiler pointer ka type dekhta hai naki content.

A *p=new B;
p->f1();

virtual keyword likhne par late binding hoti hai or else early binding.

the problem is that...
early binding me delete p krne par sirf class A pointer p delete hoga lekin hame pata hai, ki B class ka object bana hai usme B and A ka constructor invoke hua hai(inheritance). or int a or b kisi memory location ko point karre hain.
hame unhe bhi to delete krna hai...

isiliye we use virtual keyword with a destructor so that late binding ho.
ab compiler decide nahi krega ki konsa function bind hona chaiye but runtime me virtual function ka mechanism decide krta hai, ki pointer p ke andar ka content kya hai,

pointer ko adhaar nhi pointer kis objectko point krra hai usko adhaar mana jaega(inverse of early B.). so yaha pe B ka destructor bind hoke chlega or uske dwara A ka destructor call kia jaega. simple.

 */