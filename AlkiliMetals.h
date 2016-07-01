#include <iostream>
#include <string>
using namespace std;
#ifndef AlkiliMetals_H
#define AlkiliMetals_H

//Each class has the same purposes
class AlkiliMetals
{
public:
	AlkiliMetals();
	AlkiliMetals(string setElementName)//Construct object based on what array slot was selected
    {
        elementName = setElementName;
    }
	void changeProperties()
    {
        if(elementName == "Lithium")//Alters properties of selected element
        {
            stateOfMatter = "solid";
            atomicNumber = 3;
            molecularWeight = 6.941;
            electronegativity = 1.0;
        }
        
        else if(elementName == "Sodium")
        {
            stateOfMatter = "solid";
            atomicNumber = 11;
            molecularWeight = 22.99;
            electronegativity = 0.9;
        }
        
        else if(elementName == "Potassium")
        {
            stateOfMatter = "solid";
            atomicNumber = 19;
            molecularWeight = 39.098;
            electronegativity = 0.8;
        }
        
        else if(elementName == "Rubidium")
        {
            stateOfMatter = "solid";
            atomicNumber = 37;
            molecularWeight = 85.468;
            electronegativity = 0.8;
        }
        
        else if(elementName == "Cesium")
        {
            stateOfMatter = "solid";
            atomicNumber = 55;
            molecularWeight = 132.91;
            electronegativity = 0.7;
        }
        
        else if(elementName == "Francium")
        {
            stateOfMatter = "solid";
            atomicNumber = 87;
            molecularWeight = 223.02;
            electronegativity = 0.7;
        }
    }
	void getLewisDotStructure()//Returns Lewis Dot Structure to give a visual of how many valence electrons the selected element has.
    {
		if(elementName == "Lithium")
		{
		    cout << "* Li" << endl;
		}
		else if (elementName == "Sodium")
		{
		 cout << "* Na" << endl;
		}
		else if (elementName == "Potassium")
		{
			cout << "* K" << endl;
		}
		else if (elementName == "Rubidium")
		{
			cout << "* Rb" << endl;
		}
		else if (elementName == "Cesium")
		{
			cout << "* Cs" << endl;
		}
		else if (elementName == "Francium")
		{
			cout << "* Fr" << endl;
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
