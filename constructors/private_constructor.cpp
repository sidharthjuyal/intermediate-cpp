#include <iostream>
#include <stdio.h>
using namespace std;

class Admin
{
    string adminName;
    string password;
    static int adminCount;

    Admin()
    {
        adminName = "admin";
        password = "@dm!n";
    }

public:
    void showAdmin()
    {
        cout << "Admin: " << adminName << endl;
        cout << "password: " << password << endl;
    }
    static Admin *makeObject()
    {
        if (adminCount == 0)
        {
            Admin *p = new Admin;
            adminCount++;
            return (p);
        }
        else
            return (NULL);
    }
};

int Admin::adminCount = 0;

int main()
{
    Admin *admin1;
    admin1 = Admin::makeObject();
    if (admin1 != NULL)
        admin1->showAdmin();

    Admin *admin2;
    admin2 = Admin::makeObject();
    if (admin2 != NULL)
        admin2->showAdmin();
    else
        cout << "No more admins can be created.";
}

/*
Singleton class
only one object can be created.
*/