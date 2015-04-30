//////////////////////////////////////////////////////////////
// plik progr.cpp 										////
//////////////////////////////////////////////////////////////
#include <iostream>
using namespace std; 

#include "osoba.h"										//  
void prezentacja(osoba); 							//  
/*************************************************************/
int main() 
{ 
	osoba kompozytor("Fryderyk Chopin", 36), 	autor("Marcel Proust", 34);  						 // 
 
	 

 
	// wywołujemy funkcje, wysyłając obiekty 
	prezentacja(kompozytor);							 //  
	prezentacja(autor); 		
    
    system("pause");	 					 //  
} 
/*************************************************************/

