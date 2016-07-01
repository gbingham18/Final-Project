//
//  Final Project.cpp
//  Final Project
//
//  Created by Grant Bingham on 6/25/16.
//  Copyright (c) 2016 gbingham18. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "AlkiliMetals.h"
#include "AlkilineEarth.h"
#include "TransitionMetal.h"
#include "BasicMetals.h"
#include "SemiMetals.h"
#include "NonMetals.h"
#include "Halogen.h"
#include "NobleGases.h"
#include "RareEarth.h"
using namespace std;

void firstrow()
{
	string pe[2] = {"H", "He"};
	cout << "-------" << setw(102) << "-------" << endl;
	cout << "| " << pe[0] << "   |" << setw(97) << "| " << pe[1] << "  |" << endl;
}

void secondrow()
{
	string pe2[8] = {"Li", "Be", "B", "C", "N", "O", "F", "Ne"};
	cout << "-------------" << setw(95) << "-------------------------------------" << endl;
	cout << "| " << pe2[0] << "  | " << pe2[1] << "  |" << setw(61);
	for(int i = 2; i < 7; i++)
	{
		cout << "| " << pe2[i] << "   ";
	}
	cout << "| " << pe2[7] << "  |" << endl;
}

void thirdrow()
{
	string pe3[8] = {"Na", "Mg", "Al", "Si", "P ", "S ", "Cl", "Ar"};
	cout << "-------------" << setw(95) << "-------------------------------------" << endl;
	cout << "| " << pe3[0] << "  | " << pe3[1] << "  |" << setw(61);
	for(int i = 2; i < 8; i++)
	{
		cout << "| " << pe3[i] << "  ";
	}
	cout << "|" << endl;
}

void fourthrow()
{
	string pe4[18] = {"K ", "Ca", "Sc", "Ti", "V ", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr"}; 
	cout << "-------------------------------------------------------------------------------------------------------------" << endl;
	for(int i = 0; i < 18; i++)
	{
		cout << "| " << pe4[i] << "  ";
	}
	cout << "|" << endl;
}

void fifthrow()
{
	string pe5[18] = {"Rb", "Sr", "Y ", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb", "Te", "I ", "Xe"}; 
	cout << "-------------------------------------------------------------------------------------------------------------" << endl;
	for(int i = 0; i < 18; i++)
	{
		cout << "| " << pe5[i] << "  ";
	}
	cout << "|" << endl;
}

void sixthrow()
{
	string pe6[18] = {"Ca", "Ba", "Lu", "Hf", "Ta", "W ", "Re", "Os", "Ir", "Pt", "Au", "Hg", "Tl", "Pb", "Bi", "Po", "At", "Rn"}; 
	cout << "-------------------------------------------------------------------------------------------------------------" << endl;
	for(int i = 0; i < 18; i++)
	{
		cout << "| " << pe6[i] << "  ";
	}
	cout << "|" << endl;
}

void seventhrow()
{
	string pe7[13] = {"Fr ", "Ra ", "Lr ", "Rf ", "Db ", "Sg ", "Bh ", "Hs ", "Mt ", "Uun", "Uuu", "Uub", "Uuq"}; 
	cout << "-------------------------------------------------------------------------------------------------------------" << endl;
	for(int i = 0; i < 13; i++)
	{
		cout << "| " << pe7[i] << " ";
	}
	cout << "|" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
}

void eightthrow()
{
	cout << setw(30);
	string pe8[14] = {"La", "Ce", "Pr", "Nd", "Pm", "Sm", "Eu", "Gd", "Tb", "Dy", "Ho", "Er", "Tm", "Yb"}; 
	cout << "-------------------------------------------------------------------------------------" << endl;
	for(int i = 0; i < 14; i++)
	{
		cout << "| " << pe8[i] << "  ";
	}
	cout << "|" << endl;
}

void ninthrow()
{
	cout << setw(30);
	string pe9[14] = {"Ac", "Th", "Pa", "U ", "Np", "Pu", "Am", "Cm", "Bk", "Cf", "Es", "Fm", "Md", "No"}; 
	cout << "-------------------------------------------------------------------------------------" << endl;
	for(int i = 0; i < 14; i++)
	{
		cout << "| " << pe9[i] << "  ";
	}
	cout << "|" << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;
}

int main()
{
	firstrow();
	secondrow();
	thirdrow();
	fourthrow();
	fifthrow();
	sixthrow();
	seventhrow();
	cout << endl;
	eightthrow();
	ninthrow();

    string elements[119];
    int x = 0;

    ifstream input;
    input.open("elements.txt");
	if(input.fail())
	{
		cout << "File does not exist, exit program." << endl;
	}
    for(int i = 0; i < 118; i++)
    {
        input >> elements[i+1];
    }
    
	input.close();

    cout << "Enter the atomic number of an element: ";
    int elementChoice;
	cin >> elementChoice;
	AlkiliMetals a1(elements[elementChoice]);
    AlkilineEarth ae1(elements[elementChoice]);
    TransitionMetals t1(elements[elementChoice]);
    BasicMetals b1(elements[elementChoice]);
    SemiMetals s1(elements[elementChoice]);
    NonMetals n1(elements[elementChoice]);
    Halogen h1(elements[elementChoice]);
    NobleGases ng1(elements[elementChoice]);
    RareEarth re1(elements[elementChoice]);
	
    
    if (elementChoice == 3 || elementChoice == 11 || elementChoice == 19 || elementChoice == 37 || elementChoice == 55 || elementChoice == 87)
    {
		
        a1.changeProperties();
		cout << "Element Name: " << elements[elementChoice] << endl;
        cout << "State of Matter: " << a1.getStateOfMatter() << endl;
        cout << "Atomic Number: " << a1.getAtomicNumber() << endl;
        cout << "Molecular Weight: " << a1.getMolecularWeight() << endl;
        cout << "Electronegativity: " << a1.getElectronegativity() << endl;
		cout << "Lewis Dot Structure: " << endl;
		a1.getLewisDotStructure();
    }
    
    else if (elementChoice == 4 || elementChoice == 12 || elementChoice == 20 || elementChoice == 38 || elementChoice == 56 || elementChoice == 88)
    {
        ae1.changeProperties();
		cout << "Element Name: " << elements[elementChoice] << endl;
        cout << "State of Matter: " << ae1.getStateOfMatter() << endl;
        cout << "Atomic Number: " << ae1.getAtomicNumber() << endl;
        cout << "Molecular Weight: " << ae1.getMolecularWeight() << endl;
        cout << "Electronegativity: " << ae1.getElectronegativity() << endl;
		cout << "Lewis Dot Structure: " << endl;
		ae1.getLewisDotStructure();
    }
    
    else if (elementChoice == 21 || elementChoice == 22 || elementChoice == 23 || elementChoice == 24 || elementChoice == 25 || elementChoice == 26 || elementChoice == 27 || elementChoice == 28 || elementChoice == 29 || elementChoice == 30 || elementChoice == 39 || elementChoice == 40 || elementChoice == 41 || elementChoice == 42 || elementChoice == 43 || elementChoice == 44 || elementChoice == 45 || elementChoice == 46 || elementChoice == 47 || elementChoice == 48 || elementChoice == 72 || elementChoice == 73 || elementChoice == 74 || elementChoice == 75 || elementChoice == 76 || elementChoice == 77 || elementChoice == 78 || elementChoice == 79 || elementChoice == 80 || elementChoice == 104 || elementChoice == 105 || elementChoice == 106 || elementChoice == 107 || elementChoice == 108 || elementChoice == 109 || elementChoice == 110 || elementChoice == 111)
    {
        t1.changeProperties();
		cout << "Element Name: " << elements[elementChoice] << endl;
        cout << "State of Matter: " << t1.getStateOfMatter() << endl;
        cout << "Atomic Number: " << t1.getAtomicNumber() << endl;
        cout << "Molecular Weight: " << t1.getMolecularWeight() << endl;
        cout << "Electronegativity: " << t1.getElectronegativity() << endl;
		cout << "Lewis Dot Structure: " << endl;
		t1.getLewisDotStructure();
    }
    
    else if (elementChoice == 13 || elementChoice == 31 || elementChoice == 49 || elementChoice == 50 || elementChoice == 81 || elementChoice == 82 || elementChoice == 83)
    {
        b1.changeProperties();
		cout << "Element Name: " << elements[elementChoice] << endl;
        cout << "State of Matter: " << b1.getStateOfMatter() << endl;
        cout << "Atomic Number: " << b1.getAtomicNumber() << endl;
        cout << "Molecular Weight: " << b1.getMolecularWeight() << endl;
        cout << "Electronegativity: " << b1.getElectronegativity() << endl;
		cout << "Lewis Dot Structure: " << endl;
		b1.getLewisDotStructure();
    }
    
    else if (elementChoice == 5 || elementChoice == 14 || elementChoice == 32 || elementChoice == 33 || elementChoice == 51 || elementChoice == 52 || elementChoice == 84)
    {
        s1.changeProperties();
		cout << "Element Name: " << elements[elementChoice] << endl;
        cout << "State of Matter: " << s1.getStateOfMatter() << endl;
        cout << "Atomic Number: " << s1.getAtomicNumber() << endl;
        cout << "Molecular Weight: " << s1.getMolecularWeight() << endl;
        cout << "Electronegativity: " << s1.getElectronegativity() << endl;
		cout << "Lewis Dot Structure: " << endl;
		s1.getLewisDotStructure();
    }
    
    else if (elementChoice == 1 || elementChoice == 6 || elementChoice == 7 || elementChoice == 8 || elementChoice == 15 || elementChoice == 16 || elementChoice == 34)
    {
        n1.changeProperties();
		cout << "Element Name: " << elements[elementChoice] << endl;
        cout << "State of Matter: " << n1.getStateOfMatter() << endl;
        cout << "Atomic Number: " << n1.getAtomicNumber() << endl;
        cout << "Molecular Weight: " << n1.getMolecularWeight() << endl;
        cout << "Electronegativity: " << n1.getElectronegativity() << endl;
		cout << "Lewis Dot Structure: " << endl;
		n1.getLewisDotStructure();
    }
    
    else if (elementChoice == 9 || elementChoice == 17 || elementChoice == 35 || elementChoice == 53 || elementChoice == 85)
    {
        h1.changeProperties();
		cout << "Element Name: " << elements[elementChoice] << endl;
        cout << "State of Matter: " << h1.getStateOfMatter() << endl;
        cout << "Atomic Number: " << h1.getAtomicNumber() << endl;
        cout << "Molecular Weight: " << h1.getMolecularWeight() << endl;
        cout << "Electronegativity: " << h1.getElectronegativity() << endl;
		cout << "Lewis Dot Structure: " << endl;
		h1.getLewisDotStructure();
    }
    
    else if (elementChoice == 2 || elementChoice == 10 || elementChoice == 18 || elementChoice == 36 || elementChoice == 54 || elementChoice == 86)
    {
        ng1.changeProperties();
		cout << "Element Name: " << elements[elementChoice] << endl;
        cout << "State of Matter: " << ng1.getStateOfMatter() << endl;
        cout << "Atomic Number: " << ng1.getAtomicNumber() << endl;
        cout << "Molecular Weight: " << ng1.getMolecularWeight() << endl;
        cout << "Electronegativity: " << ng1.getElectronegativity() << endl;
		cout << "Lewis Dot Structure: " << endl;
		ng1.getLewisDotStructure();
    }
    
    else if (elementChoice == 57 || elementChoice == 58 || elementChoice == 59 || elementChoice == 60 || elementChoice == 61 || elementChoice == 62 || elementChoice == 63 || elementChoice == 64 || elementChoice == 65 || elementChoice == 66 || elementChoice == 67 || elementChoice == 68 || elementChoice == 69 || elementChoice == 70 || elementChoice == 71 || elementChoice == 89 || elementChoice == 90 || elementChoice == 91 || elementChoice == 92 || elementChoice == 93 || elementChoice == 94 || elementChoice == 95 || elementChoice == 96 || elementChoice == 97 || elementChoice == 98 || elementChoice == 99 || elementChoice == 100 || elementChoice == 101 || elementChoice == 102 || elementChoice == 103)
    {
        re1.changeProperties();
		cout << "Element Name: " << elements[elementChoice] << endl;
        cout << "State of Matter: " << re1.getStateOfMatter() << endl;
        cout << "Atomic Number: " << re1.getAtomicNumber() << endl;
        cout << "Molecular Weight: " << re1.getMolecularWeight() << endl;
        cout << "Electronegativity: " << re1.getElectronegativity() << endl;
		cout << "Lewis Dot Structure: " << endl;
		re1.getLewisDotStructure();
    }

	system("PAUSE");
    return 0;
}








