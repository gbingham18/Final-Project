#include <iostream>
#include <string>
using namespace std;
#ifndef NonMetals_H
#define NonMetals_H


class NonMetals
{
public:
	NonMetals();
	NonMetals(string setElementName)
    {
        elementName = setElementName;
    }
	void changeProperties()
    {
        if(elementName == "Carbon")
        {
            stateOfMatter = "solid";
            atomicNumber = 6;
            molecularWeight = 12.01;
            electronegativity = 2.5;
        }
        else if(elementName == "Nitrogen")
        {
            stateOfMatter = "gas";
            atomicNumber = 7;
            molecularWeight = 14.007;
            electronegativity = 3.0;
        }
        else if(elementName == "Oxygen")
        {
            stateOfMatter = "gas";
            atomicNumber = 8;
            molecularWeight = 15.999;
            electronegativity = 3.5;
        }
        else if(elementName == "Phosphorus")
        {
            stateOfMatter = "solid";
            atomicNumber = 15;
            molecularWeight = 30.974;
            electronegativity = 2.2;
        }
        else if(elementName == "Sulfur")
        {
            stateOfMatter = "solid";
            atomicNumber = 16;
            molecularWeight = 32.066;
            electronegativity = 2.5;
        }
        else if(elementName == "Selenium")
        {
            stateOfMatter = "solid";
            atomicNumber = 34;
            molecularWeight = 78.971;
            electronegativity = 2.6;
        }
    }
	void getLewisDotStructure()
    {
        if( elementName == "Hydrogen")
    {
        cout << "   *" << endl;
        cout << "   H  " << endl;
    }
    else if( elementName == "Carbon")
    {
        cout << "   **" << endl;
        cout << "** As  " << endl;
    }
    else if( elementName == "Nitrogen")
    {
        cout << "   **" << endl;
        cout << "** N  " << endl;
        cout << "   *" << endl;
    }
    else if( elementName == "Phosphorus")
    {
        cout << "   **" << endl;
        cout << "** P  " << endl;
        cout << "   *" << endl;
    }
    else if( elementName == "Oxygen")
    {
        cout << "   **" << endl;
        cout << "** O  " << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Sulfur")
    {
        cout << "   **" << endl;
        cout << "** S  " << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Selenium")
    {
        cout << "   **" << endl;
        cout << "** Se  " << endl;
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