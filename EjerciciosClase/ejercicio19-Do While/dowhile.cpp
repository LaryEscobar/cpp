#include <iostream> 
#include<stdio.h>

using namespace std;

int main (){
 
 int a = 2;
 int b = 10;
 
 while (a > b){
 	
 	cout <<" (while) a > b" << endl;
 	break;
 } 
 
 do {
 	cout << " (do while) a > b" << endl;
	 break;
 }while (a > b);
 

	    
		
system("pause");
return 0;
}