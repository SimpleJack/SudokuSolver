//
//  main.cpp
//  SudokuSolver
//
//  Created by Aykut René Inan on 15.10.13.
//  Copyright (c) 2013 Aykut René Inan & Dix Goerlich All rights reserved.
//
//

#include <iostream>

void wait() 
{ 
       // Setzte Puffergröße auf 0 (=> leere Puffer) 
    setvbuf(stdin, NULL, _IONBF, 0); 
    // Setze Puffergröße wieder auf die ursprüngliche Größe zurück 
    setvbuf(stdin, NULL, _IOFBF, BUFSIZ); 
    // Füge alle eingelesenen Zeichen in den Puffer bis ein Enter gedrückt wird 
    // getchar() liefert dann das erste Zeichen aus dem Puffer zurück, welches wir aber ignorieren (interessiert uns ja nicht) 
    getchar();

} 









int main(int argc, const char * argv[])
{
	//       x  y  z
	int feld[9][9][9] = {0};
	printf("Please enter the known numbers in this scheme:\n\n1A=9 5B=4 2F=3 \n\nand confirm your input with Enter.\n");





	
	/*
	std::cout << feld[1][2][3] << "\n";
	
	Eine Testausgabe um zu sehen ob das Array auf 0 initalisiert wurde

	*/


	


	wait();

    return 0;
	
}

