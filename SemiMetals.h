#include <iostream>
#include <string>
using namespace std;
#ifndef SemiMetals_H
#define SemiMetals_H

class SemiMetals
{
public:
	SemiMetals();
	SemiMetals(string setElementName)
    {
        elementName = setElementName;
    }
	void changeProperties()
    {
        if(elementName == "Boron")
        {
            stateOfMatter = "solid";
            atomicNumber = 5;
            molecularWeight = 10.811;
            electronegativity = 2.0;
        }
        else if(elementName == "Silicon")
        {
            stateOfMatter = "solid";
            atomicNumber = 14;
            molecularWeight = 28.086;
            electronegativity = 1.9;
        }
        else if(elementName == "Germanium")
        {
            stateOfMatter = "solid";
            atomicNumber = 32;
            molecularWeight = 72.631;
            electronegativity = 2.0;
        }
        else if(elementName == "Arsenic")
        {
            stateOfMatter = "solid";
            atomicNumber = 33;
            molecularWeight = 74.922;
            electronegativity = 2.2;
        }
        else if(elementName == "Antimony")
        {
            stateOfMatter = "solid";
            atomicNumber = 51;
            molecularWeight = 121.76;
            electronegativity = 2.1;
        }
        else if(elementName == "Tellurium")
        {
            stateOfMatter = "solid";
            atomicNumber = 52;
            molecularWeight = 127.6;
            electronegativity = 2.1;
        }
        else if(elementName == "Polonium")
        {
            stateOfMatter = "solid";
            atomicNumber = 84;
            molecularWeight = 208.98;
            electronegativity = 2.0;
        }
    }
	void getLewisDotStructure()
    {
         if( elementName == "Boron")
    {
        cout << "   **" << endl;
        cout << " * B  " << endl;
    }
    else if( elementName == "Silicon")
    {
        cout << "   **" << endl;
        cout << "** Si  " << endl;
    }
    else if( elementName == "Germanium")
    {
        cout << "   **" << endl;
        cout << "** Ge  " << endl;
    }
    else if( elementName == "Arsenic")
    {
        cout << "   **" << endl;
        cout << "** As  " << endl;
        cout << "   *" << endl;
    }
    else if( elementName == "Antimony")
    {
        cout << "   **" << endl;
        cout << "** As  " << endl;
        cout << "   *" << endl;
    }
    else if( elementName == "Tellurium")
    {
        cout << "   **" << endl;
        cout << "** Te  " << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Polonium")
    {
        cout << "   **" << endl;
        cout << "** Po  " << endl;
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