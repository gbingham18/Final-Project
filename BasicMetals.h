#include <iostream>
#include <string>
using namespace std;
#ifndef BasicMetals_H
#define BasicMetals_H

class BasicMetals
{
public:
	BasicMetals();
	BasicMetals(string setElementName)
    {
        elementName = setElementName;
    }
	void changeProperties()
    {
        if(elementName == "Aluminum")
        {
            stateOfMatter = "solid";
            atomicNumber = 13;
            molecularWeight = 26.982;
            electronegativity = 1.6;
            
        }
        else if(elementName == "Gallium")
        {
            stateOfMatter = "solid";
            atomicNumber = 31;
            molecularWeight = 69.723;
            electronegativity = 1.6;
        }
        else if(elementName == "Indium")
        {
            stateOfMatter = "solid";
            atomicNumber = 49;
            molecularWeight = 114.82;
            electronegativity = 1.8;
        }
        else if(elementName == "Tin")
        {
            stateOfMatter = "solid";
            atomicNumber = 50;
            molecularWeight = 118.71;
            electronegativity = 2.0;
        }
        else if(elementName == "Thallium")
        {
            stateOfMatter = "solid";
            atomicNumber = 81;
            molecularWeight = 204.38;
            electronegativity = 2.0;
        }
        else if(elementName == "Lead")
        {
            stateOfMatter = "solid";
            atomicNumber = 82;
            molecularWeight = 207.2;
            electronegativity = 2.3;
        }
        else if(elementName == "Bismuth")
        {
            stateOfMatter = "solid";
            atomicNumber = 83;
            molecularWeight = 208.98;
            electronegativity = 2.0;
        }
    }
	void getLewisDotStructure()
    {
        if( elementName == "Aluminum")
    {
        cout << "   **" << endl;
        cout << " * Cu  " << endl;
    }
    else if( elementName == "Gallium")
    {
        cout << "   **" << endl;
        cout << " * Ga  " << endl;
    }
    else if( elementName == "Indium")
    {
        cout << "   **" << endl;
        cout << " * In  " << endl;
    }
    else if( elementName == "Thallium")
    {
        cout << "   **" << endl;
        cout << " * Tl  " << endl;
    }
    else if( elementName == "Tin")
    {
        cout << "   **" << endl;
        cout << "** Sn  " << endl;
    }
    else if( elementName == "Lead")
    {
        cout << "   **" << endl;
        cout << "** Pb  " << endl;
    }
    else if( elementName == "Bismuth")
    {
        cout << "   **" << endl;
        cout << "** Tl  " << endl;
        cout << "   *" << endl;
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