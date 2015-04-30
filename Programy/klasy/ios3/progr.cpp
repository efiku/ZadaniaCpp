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
	osoba kompozytor, autor; 							 // 
 
	kompozytor.zapamietaj("Fryderyk Chopin", 36); 
	autor.zapamietaj("Marcel Proust", 34); 
 
	// wywołujemy funkcje, wysyłając obiekty 
	prezentacja(kompozytor);							 //  
	prezentacja(autor); 		
    
    system("pause");	 					 //  
} 
/*************************************************************/

