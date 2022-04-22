#include <iostream>
#include "login.h"
#include "menu.h"

using namespace std;

int main(int argc, char const *argv[])
{
    login rp ;

    Menu menu ; 
   
    if (rp.logIn() == true)
    {
       system ("cls");
        menu.menu();

    }
    return 0;
}
