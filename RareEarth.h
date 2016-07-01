#include <iostream>
#include <string>
using namespace std;
#ifndef RareEarth_H
#define RareEarth_H

class RareEarth
{
public:
	RareEarth();
	RareEarth(string setElementName)
    {
        elementName = setElementName;
    }
	void changeProperties()
    {
        if(elementName == "Lanthanum")
        {
            stateOfMatter = "solid";
            atomicNumber = 57;
            molecularWeight = 138.91;
            electronegativity = 1.1;
        }
        else if(elementName == "Cerium")
        {
            stateOfMatter = "solid";
            atomicNumber = 58;
            molecularWeight = 140.12;
            electronegativity = 1.1;
        }
        else if(elementName == "Praseodymium")
        {
            stateOfMatter = "solid";
            atomicNumber = 59;
            molecularWeight = 140.91;
            electronegativity = 1.1;
        }
        else if(elementName == "Neodymium")
        {
            stateOfMatter = "solid";
            atomicNumber = 60;
            molecularWeight = 144.24;
            electronegativity = 1.1;
        }
        else if(elementName == "Promethium")
        {
            stateOfMatter = "solid";
            atomicNumber = 61;
            molecularWeight = 144.91;
            electronegativity = 1.1;
        }
        else if(elementName == "Samarium")
        {
            stateOfMatter = "solid";
            atomicNumber = 62;
            molecularWeight = 150.36;
            electronegativity = 1.2;
        }
        else if(elementName == "Europium")
        {
            stateOfMatter = "solid";
            atomicNumber = 63;
            molecularWeight = 151.96;
            electronegativity = 1.2;
        }
        else if(elementName == "Gadolinium")
        {
            stateOfMatter = "solid";
            atomicNumber = 64;
            molecularWeight = 157.25;
            electronegativity = 1.2;
        }
        else if(elementName == "Terbium")
        {
            stateOfMatter = "solid";
            atomicNumber = 65;
            molecularWeight = 158.925;
            electronegativity = 1.1;
        }
        else if(elementName == "Dysprosium")
        {
            stateOfMatter = "solid";
            atomicNumber = 66;
            molecularWeight = 162.5;
            electronegativity = 1.0;
        }
        else if(elementName == "Holmium")
        {
            stateOfMatter = "solid";
            atomicNumber = 67;
            molecularWeight = 164.93;
            electronegativity = 1.2;
        }
        else if(elementName == "Erbium")
        {
            stateOfMatter = "solid";
            atomicNumber = 68;
            molecularWeight = 167.26;
            electronegativity = 1.0;
        }
        else if(elementName == "Thulium")
        {
            stateOfMatter = "solid";
            atomicNumber = 69;
            molecularWeight = 168.93;
            electronegativity = 1.2;
        }
        else if(elementName == "Ytterbium")
        {
            stateOfMatter = "solid";
            atomicNumber = 70;
            molecularWeight = 173.06;
            electronegativity = 1.2;
        }
        else if(elementName == "Lutetium")
        {
            stateOfMatter = "solid";
            atomicNumber = 71;
            molecularWeight = 174.97;
            electronegativity = 1.1;
        }
        else if(elementName == "Actinium")
        {
            stateOfMatter = "solid";
            atomicNumber = 89;
            molecularWeight = 227.03;
            electronegativity = 1.1;
        }
        else if(elementName == "Thorium")
        {
            stateOfMatter = "solid";
            atomicNumber = 90;
            molecularWeight = 232.04;
            electronegativity = 1.3;
        }
        else if(elementName == "Protactinium")
        {
            stateOfMatter = "solid";
            atomicNumber = 91;
            molecularWeight = 231.04;
            electronegativity = 1.4;
        }
        else if(elementName == "Uranium")
        {
            stateOfMatter = "solid";
            atomicNumber = 92;
            molecularWeight = 228.03;
            electronegativity = 1.4;
        }
        else if(elementName == "Neptunium")
        {
            stateOfMatter = "solid";
            atomicNumber = 93;
            molecularWeight = 237.05;
            electronegativity = 1.3;
        }
        else if(elementName == "Plutonium")
        {
            stateOfMatter = "solid";
            atomicNumber = 94;
            molecularWeight = 244.06;
            electronegativity = 1.1;
        }
        else if(elementName == "Americium")
        {
            stateOfMatter = "solid";
            atomicNumber = 95;
            molecularWeight = 243.06;
            electronegativity = 1.3;
        }
        else if(elementName == "Curium")
        {
            stateOfMatter = "solid";
            atomicNumber = 96;
            molecularWeight = 247.07;
            electronegativity = 1.3;
        }
        else if(elementName == "Berkelium")
        {
            stateOfMatter = "solid";
            atomicNumber = 97;
            molecularWeight = 247.07;
            electronegativity = 1.3;
        }
        else if(elementName == "Californium")
        {
            stateOfMatter = "solid";
            atomicNumber = 98;
            molecularWeight = 251.08;
            electronegativity = 1.3;
        }
        else if(elementName == "Einsteinium")
        {
            stateOfMatter = "solid";
            atomicNumber = 99;
            molecularWeight = 254.0;
            electronegativity = 1.3;
        }
        else if(elementName == "Fermium")
        {
            stateOfMatter = "solid";
            atomicNumber = 100;
            molecularWeight = 257.1;
            electronegativity = 1.3;
        }
        else if(elementName == "Mendelevium")
        {
            stateOfMatter = "solid";
            atomicNumber = 101;
            molecularWeight = 258.1;
            electronegativity = 1.3;
        }
        else if(elementName == "Nobelium")
        {
            stateOfMatter = "solid";
            atomicNumber = 102;
            molecularWeight = 259.1;
            electronegativity = 1.3;
        }
        else if(elementName == "Lawrencium")
        {
            stateOfMatter = "solid";
            atomicNumber = 103;
            molecularWeight = 262.0;
            electronegativity = 1.3;
        }
    }
	void getLewisDotStructure()
    {
        if( elementName == "Lanthanum")
    {
        cout << "   **" << endl;
        cout << " * La" << endl;
    }
    else if( elementName == "Cerium")
    {
        cout << "   **" << endl;
        cout << " * Ce" << endl;
    }
    else if( elementName == "Praseodymium")
    {
        cout << "   **" << endl;
        cout << " * Pr" << endl;
    }
    else if( elementName == "Neodymium")
    {
        cout << "   **" << endl;
        cout << " * Nd" << endl;
    }
    else if( elementName == "Samarium")
    {
        cout << "   **" << endl;
        cout << " * Sm" << endl;
    }
    else if( elementName == "Europium")
    {
        cout << "   **" << endl;
        cout << " * Eu" << endl;
    }
    else if( elementName == "Gadolinium")
    {
        cout << "   **" << endl;
        cout << " * Gd" << endl;
    }
    else if( elementName == "Terbium")
    {
        cout << "   **" << endl;
        cout << " * Tb" << endl;
    }
    else if( elementName == "Dysprosium")
    {
        cout << "   **" << endl;
        cout << " * Dy" << endl;
    }
    else if( elementName == "Holmium")
    {
        cout << "   **" << endl;
        cout << " * Ho" << endl;
    }
    else if( elementName == "Erbium")
    {
        cout << "   **" << endl;
        cout << " * Er" << endl;
    }
    else if( elementName == "Thulium")
    {
        cout << "   **" << endl;
        cout << " * Tm" << endl;
    }
    else if( elementName == "Ytterbium")
    {
        cout << "   **" << endl;
        cout << " * Yb" << endl;
    }
    else if( elementName == "Lutetium")
    {
        cout << "   **" << endl;
        cout << " * Lu" << endl;
    }
    else if( elementName == "Actinium")
    {
        cout << "   **" << endl;
        cout << " * Ac" << endl;
    }
    else if( elementName == "Thorium")
    {
        cout << "   **" << endl;
        cout << " * Th" << endl;
    }
    else if( elementName == "Protactinium")
    {
        cout << "   **" << endl;
        cout << " * Pa" << endl;
    }
    else if( elementName == "Uranium")
    {
        cout << "   **" << endl;
        cout << " * U" << endl;
    }
    else if( elementName == "Neptunium")
    {
        cout << "   **" << endl;
        cout << " * Np" << endl;
    }
    else if( elementName == "Plutonium")
    {
        cout << "   **" << endl;
        cout << " * Pu" << endl;
    }
    else if( elementName == "Americium")
    {
        cout << "   **" << endl;
        cout << " * Am" << endl;
    }
    else if( elementName == "Curium")
    {
        cout << "   **" << endl;
        cout << " * Cm" << endl;
    }
    else if( elementName == "Berkelium")
    {
        cout << "   **" << endl;
        cout << " * Bk" << endl;
    }
    else if( elementName == "Californium")
    {
        cout << "   **" << endl;
        cout << " * Cf" << endl;
    }
    else if( elementName == "Einsteinium")
    {
        cout << "   **" << endl;
        cout << " * Es" << endl;
    }
    else if( elementName == "Fermium")
    {
        cout << "   **" << endl;
        cout << " * Fm" << endl;
    }
    else if( elementName == "Mendelevium")
    {
        cout << "   **" << endl;
        cout << " * Md" << endl;
    }
    else if( elementName == "Nobelium")
    {
        cout << "   **" << endl;
        cout << " * No" << endl;
    }
    else if( elementName == "Lawrencium")
    {
        cout << "   **" << endl;
        cout << " * Lr" << endl;
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