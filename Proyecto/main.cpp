#include <iostream>
#include "login.h"
#include "menu.h"

using namespace std;

int main(int argc, char const *argv[])
{
    bool rsp = login() ;

    if (rsp == true)
    {
       system ("cls");
      menu();


    }
    return 0;
}
