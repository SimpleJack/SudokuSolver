//
//  main.cpp
//  SudokuSolver
//
//  Created by Aykut René Inan on 15.10.13.
//  Copyright (c) 2013 Aykut René Inan & Dix Goerlich All rights reserved.
//
//

#include <iostream>
#include <stdio.h>


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
	//          x  y  z
	int wuerfel[9][9][9] = {0};
    int x = 0, y = 0, z = 0;

    
    // Schleifen um x y und z immer zu erhöhen, damit immer ein feld weiter gerückt wird nach einer eingabe
    // printfs um das feld mit # anzuzeigen und nach printf ein scanf um den wert aufzunehmen der vom user kommt.
    // Im printf feld aber variablen nutzen, die mt jeder neuen eingabe ergänzt werden.
    // Wenn noch keine eingabe, dann ist wert nicht 00, sondern "" damit nichts in dem feld angezeigt wird
    
    do {
        
		do {
            
			do {
                
                
                {
                    //std::cout << "" <<  "\n";
                    if (wuerfel[x][y][z]==""){
                        wuerfel[x][y][z] == "0";
                    }
                    printf("###################\n#");
                    scanf("%d", &wuerfel[x][y][z]);
                    printf("#%d#\n", wuerfel[x][y][z]);
                           //%d#%d#%d#%d#%d#%d
                    
                };
                
                z++;
                
                
            } while(z<=9);
            
            y++;
            z = 0;
            
        } while(y<=9);
        
        x++;
        y = 0;
        
    } while(x<=9);
    

    
    
    /*
        printf("╔═══╦═══╦═══╦═══╦═══╦═══╦═══╦═══╦═══╗\n");
        printf("║═══║═══║═══║═══║═══║═══║═══║═══║═══║\n");
        printf("╠═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╣\n");
        printf("║   ║   ║   ║   ║   ║   ║   ║   ║   ║\n");
        printf("╠═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╣\n");
        printf("║   ║   ║   ║   ║   ║   ║   ║   ║   ║\n");
        printf("╠═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╣\n");
        printf("║   ║   ║   ║   ║   ║   ║   ║   ║   ║\n");
        printf("╠═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╣\n");
        printf("║   ║   ║   ║   ║   ║   ║   ║   ║   ║\n");
        printf("╠═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╣\n");
        printf("║   ║   ║   ║   ║   ║   ║   ║   ║   ║\n");
        printf("╠═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╣\n");
        printf("║   ║   ║   ║   ║   ║   ║   ║   ║   ║\n");
        printf("╠═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╣\n");
        printf("║   ║   ║   ║   ║   ║   ║   ║   ║   ║\n");
        printf("╠═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╬═══╣\n");
        printf("║   ║   ║   ║   ║   ║   ║   ║   ║   ║\n");
        printf("╚═══╩═══╩═══╩═══╩═══╩═══╩═══╩═══╩═══╝\n");
       //NOT WORKING BECAUSE SPACES OR NUMBER IN TERMINAL DON'T HAVE SAME SIZE AS PIPES
       */
    
    printf("Please enter the known numbers in this scheme:\n\n1A=9 5B=4 2F=3 \n\nand confirm your input with Enter.\n");

//    0 0 0  0 0 0  0 0 0
//    0 0 0  0 0 0  0 0 0
//    0 0 0  0 0 0  0 0 0
//    
//    0 0 0  0 0 0  0 0 0
//    0 0 0  0 0 0  0 0 0
//    0 0 0  0 0 0  0 0 0
//    
//    0 0 0  0 0 0  0 0 0
//    0 0 0  0 0 0  0 0 0
//    0 0 0  0 0 0  0 0 0

    
    
	/*
     
	std::cout << wuerfel[1][2][3] << "\n";
	
	Eine Testausgabe um zu sehen ob das Array auf 0 initalisiert wurde

	*/


    
	
	wait();

    return 0;
	
}

