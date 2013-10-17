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
    
    
    // Schleifen um x y und z immer zu erhöhen, damit immer ein feld weiter gerückt wird nach einer eingabe
    // printfs um das feld mit # anzuzeigen und nach printf ein scanf um den wert aufzunehmen der vom user kommt.
    // Im printf feld aber variablen nutzen, die mt jeder neuen eingabe ergänzt werden.
    // Wenn noch keine eingabe, dann ist wert nicht 00, sondern "" damit nichts in dem feld angezeigt wird
    
    do {
        
		do {
            
			do {
                
                
                {
                  
                    
                    unsigned  int mac_4, mac_5, mac_6;
                    
                    mac_4 = i;
                    mac_5 = j;
                    mac_6 = k;
                    
                    
                    
                    
                    
                    
                    dump << "EasyBox-" << m7 << m8 << m9 << m10 << s6 << s10 << " " << std::uppercase << std::hex << x1 << std::hex << y1 << std::hex << z1 << std::hex << x2 << std::hex << y2 << std::hex << z2 << std::hex << x3 << std::hex << y3 << std::hex << z3 << "\n";
                    
                    printf("###################\n");
                    printf("#%d#%d#%d#%d#%d#%d#%d#%d#%d#\n", wuerfel[x][y][z])
                    wuerfel[x][y][z]
                };
                
                z++;
                
                
            } while(z<=0xFF);
            
            y++;
            z = 0x00;
            
        } while(y<=0xFF);
        
        x++;
        y = 0x00;
        
    } while(x<=0xFF);
    

    
    
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

