#include <iostream>
#include <string>
using namespace std;
#ifndef Halogen_H
#define Halogen_H

class Halogen
{
public:
	Halogen();
	Halogen(string setElementName)
    {
        elementName = setElementName;
    }
	void changeProperties()
    {
        if (elementName == "Fluorine")
        {
            stateOfMatter = "gas";
            atomicNumber = 9;
            molecularWeight = 18.998;
            electronegativity =4.0;
        }
        else if(elementName == "Chlorine")
        {
            stateOfMatter = "gas";
            atomicNumber = 17;
            molecularWeight = 35.453;
            electronegativity = 3.0;
        }
        else if(elementName == "Bromine")
        {
            stateOfMatter = "liquid";
            atomicNumber = 35;
            molecularWeight = 79.904;
            electronegativity = 2.8;
        }
        else if(elementName == "Iodine")
        {
            stateOfMatter = "solid";
            atomicNumber = 53;
            molecularWeight = 126.904;
            electronegativity = 2.7;
        }
        else if(elementName == "Astatine")
        {
            stateOfMatter = "solid";
            atomicNumber = 85;
            molecularWeight = 209.99;
            electronegativity = 2.2;
        }
    }
	void getLewisDotStructure()
    {
        if( elementName == "Flourine")
    {
        cout << "   **" << endl;
        cout << "** F * " << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Chlorine")
    {
        cout << "   **" << endl;
        cout << "** Cl * " << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Bromine")
    {
        cout << "   **" << endl;
        cout << "** Br * " << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Iodine")
    {
        cout << "   **" << endl;
        cout << "** I * " << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Astatine")
    {
        cout << "   **" << endl;
        cout << "** At * " << endl;
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