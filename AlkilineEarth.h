#include <iostream>
#include <string>
using namespace std;
#ifndef AlkilineEarth_H
#define AlkilineEarth_H


class AlkilineEarth
{
public:
	AlkilineEarth();
	AlkilineEarth(string setElementName)
    {
        elementName = setElementName;
    }
	void changeProperties()
    {
        if(elementName == "Beryllium")
        {
            stateOfMatter = "solid";
            atomicNumber = 4;
            molecularWeight = 9.012;
            electronegativity = 1.5;
        }
        
        else if(elementName == "Magnesium")
        {
            stateOfMatter = "solid";
            atomicNumber = 12;
            molecularWeight = 24.305;
            electronegativity = 1.2;
        }
        
        else if(elementName == "Calcium")
        {
            stateOfMatter = "solid";
            atomicNumber = 20;
            molecularWeight = 40.078;
            electronegativity = 1.0;
        }
        
        else if(elementName == "Strontium")
        {
            stateOfMatter = "solid";
            atomicNumber = 38;
            molecularWeight = 87.62;
            electronegativity = 1.0;
        }
        
        else if(elementName == "Barium")
        {
            stateOfMatter = "solid";
            atomicNumber = 56;
            molecularWeight = 137.32;
            electronegativity = 0.9;
        }
        
        else if(elementName == "Radium")
        {
            stateOfMatter = "solid";
            atomicNumber = 12;
            molecularWeight = 226.03;
            electronegativity = 0.9;
        }
    }
	void getLewisDotStructure()
    {
        if(elementName == "Beryllium")
    {
        cout << "** Be" << endl;
    }
    else if(elementName == "Magnesium")
    {
        cout << "** Mg" << endl;
    }
    else if(elementName == "Calcium")
    {
        cout << "** Ca" << endl;
    }
    else if(elementName == "Strontium")
    {
        cout << "** Sr" << endl;
    }
    else if(elementName == "Barium")
    {
        cout << "** Ba" << endl;
    }
    else if(elementName == "Radium")
    {
        cout << "** Ra" << endl;
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