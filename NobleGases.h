#include <iostream>
#include <string>
using namespace std;
#ifndef NobleGases_H
#define NobleGases_H

class NobleGases
{
public:
	NobleGases();
	NobleGases(string setElementName)
    {
        elementName = setElementName;
    }
	void changeProperties()
    {
		if (elementName == "Hydrogen")
		{
			stateOfMatter = "gas";
            atomicNumber = 1;
            molecularWeight = 1.008;
            electronegativity = 2.2;
		}
        else if(elementName == "Helium")
        {
            stateOfMatter = "gas";
            atomicNumber = 2;
            molecularWeight = 4.003;
            electronegativity = NULL;
        }
        else if(elementName == "Neon")
        {
            stateOfMatter = "gas";
            atomicNumber = 10;
            molecularWeight = 20.18;
            electronegativity = NULL;
        }
        else if(elementName == "Argon")
        {
            stateOfMatter = "gas";
            atomicNumber = 18;
            molecularWeight = 39.948;
            electronegativity = NULL;
        }
        else if(elementName == "Krypton")
        {
            stateOfMatter = "gas";
            atomicNumber = 36;
            molecularWeight = 84.8;
            electronegativity = NULL;
        }
        else if(elementName == "Xenon")
        {
            stateOfMatter = "gas";
            atomicNumber = 54;
            molecularWeight = 131.25;
            electronegativity = 2.6;
        }
        else if(elementName == "Radon")
        {
            stateOfMatter = "gas";
            atomicNumber = 86;
            molecularWeight = 222.02;
            electronegativity = NULL;
        }
    }
	void getLewisDotStructure()
    {
        if( elementName == "Helium")
    {
        cout << "   **" << endl;
        cout << "** He **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Neon")
    {
        cout << "   **" << endl;
        cout << "** Ne **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Argon")
    {
        cout << "   **" << endl;
        cout << "** Ar **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Krypton")
    {
        cout << "   **" << endl;
        cout << "** Kr **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Xenon")
    {
        cout << "   **" << endl;
        cout << "** Xe **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Radon")
    {
        cout << "   **" << endl;
        cout << "** Rn **" << endl;
        cout << "   **" << endl;
    }
    }
    string getStateOfMatter()
    {
        return stateOfMatter;
    }
	int getAtomicNumber()
    {
        return atomicNumber;
    }
	double getMolecularWeight()
    {
        return molecularWeight;
    }
	double getElectronegativity()
    {
        return electronegativity;
    }
    
private:
	string elementName;
	string stateOfMatter;
	int atomicNumber;
	double molecularWeight;
	double electronegativity;
};

#endif