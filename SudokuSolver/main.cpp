//
//  main.cpp
//  SudokuSolver
//
//  Created by Aykut René Inan on 15.10.13.
//  Copyright (c) 2013 Aykut René Inan. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
	//       Y  X  V
	int feld[9][9][9];

	feld[1][2][3] = 0;

	std::cout << feld[1][2][3] << "\n";



	//// possible values der Felder
	//int ap[9];
	//int bp[9];
	//int cp[9];

	//int dp[9];
	//int ep[9];
	//int fp[9];

	//int gp[9];
	//int hp[9];
	//int ip[9];

	//// values der bereits eindeutig belegten Felder
	//int av[9];
	//int bv[9];
	//int cv[9];

	//int dv[9];
	//int ev[9];
	//int fv[9];

	//int gv[9];
	//int hv[9];
	//int iv[9];


    #ifdef _WIN32
        system("PAUSE");
    #endif


    return 0;
	
}

