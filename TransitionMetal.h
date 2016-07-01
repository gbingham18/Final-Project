#include <iostream>
#include <string>
using namespace std;
#ifndef TansitionMetals_H
#define TransitionMetals_H

class TransitionMetals
{
public:
	TransitionMetals();
	TransitionMetals(string setElementName)
    {
        elementName = setElementName;
    }
	void changeProperties()
    {
        if (elementName == "Scadium")
        {
            stateOfMatter = "solid";
            atomicNumber = 21;
            molecularWeight = 44.956;
            electronegativity = 1.4;
        }
        else if(elementName == "Titanium")
        {
            stateOfMatter = "solid";
            atomicNumber = 22;
            molecularWeight = 47.867;
            electronegativity = 1.5;
        }
        else if(elementName == "Vanadium")
        {
            stateOfMatter = "solid";
            atomicNumber = 23;
            molecularWeight = 50.942;
            electronegativity = 1.6;
        }
        else if(elementName == "Chromium")
        {
            stateOfMatter = "solid";
            atomicNumber = 24;
            molecularWeight = 51.996;
            electronegativity = 1.7;
        }
        else if(elementName == "Manganese")
        {
            stateOfMatter = "solid";
            atomicNumber = 25;
            molecularWeight = 54.938;
            electronegativity = 1.6;
        }
        else if(elementName == "Iron")
        {
            stateOfMatter = "solid";
            atomicNumber = 26;
            molecularWeight = 55.845;
            electronegativity = 1.8;
        }
        else if(elementName == "Cobalt")
        {
            stateOfMatter = "solid";
            atomicNumber = 27;
            molecularWeight = 58.933;
            electronegativity = 1.9;
        }
        else if(elementName == "Nickel")
        {
            stateOfMatter = "solid";
            atomicNumber = 28;
            molecularWeight = 58.693;
            electronegativity = 1.9;
        }
        else if(elementName == "Copper")
        {
            stateOfMatter = "solid";
            atomicNumber = 29;
            molecularWeight = 63.546;
            electronegativity = 1.9;
        }
        else if(elementName == "Zinc")
        {
            stateOfMatter = "solid";
            atomicNumber = 30;
            molecularWeight = 65.39;
            electronegativity = 1.7;
        }
        else if(elementName == "Yttrium")
        {
            stateOfMatter = "solid";
            atomicNumber = 39;
            molecularWeight = 88.906;
            electronegativity = 1.2;
        }
        else if(elementName == "Zirconium")
        {
            stateOfMatter = "solid";
            atomicNumber = 40;
            molecularWeight = 91.224;
            electronegativity = 1.3;
        }
        else if(elementName == "Nobium")
        {
            stateOfMatter = "solid";
            atomicNumber = 41;
            molecularWeight = 92.906;
            electronegativity = 1.6;
        }
        else if(elementName == "Molybdenum")
        {
            stateOfMatter = "solid";
            atomicNumber = 42;
            molecularWeight = 95.94;
            electronegativity = 2.2;
        }
        else if(elementName == "Technetium")
        {
            stateOfMatter = "solid";
            atomicNumber = 43;
            molecularWeight = 98.906;
            electronegativity = 2.1;
        }
        else if(elementName == "Ruthenium")
        {
            stateOfMatter = "solid";
            atomicNumber = 44;
            molecularWeight = 101.07;
            electronegativity = 2.2;
        }
        else if(elementName == "Rhodium")
        {
            stateOfMatter = "solid";
            atomicNumber = 45;
            molecularWeight = 102.91;
            electronegativity = 2.3;
        }
        else if(elementName == "Paladium")
        {
            stateOfMatter = "solid";
            atomicNumber = 46;
            molecularWeight = 106.42;
            electronegativity = 2.2;
        }
        else if(elementName == "Silver")
        {
            stateOfMatter = "solid";
            atomicNumber = 47;
            molecularWeight = 107.87;
            electronegativity = 1.9;
        }
        else if(elementName == "Cadmium")
        {
            stateOfMatter = "solid";
            atomicNumber = 48;
            molecularWeight = 112.41;
            electronegativity = 1.7;
        }
        else if(elementName == "Hafnium")
        {
            stateOfMatter = "solid";
            atomicNumber = 72;
            molecularWeight = 178.49;
            electronegativity = 1.3;
        }
        else if(elementName == "Tantalum")
        {
            stateOfMatter = "solid";
            atomicNumber = 73;
            molecularWeight = 180.948;
            electronegativity = 1.5;
        }
        else if(elementName == "Tungsten")
        {
            stateOfMatter = "solid";
            atomicNumber = 74;
            molecularWeight = 183.84;
            electronegativity = 1.7;
        }
        else if(elementName == "Rhenium")
        {
            stateOfMatter = "solid";
            atomicNumber = 75;
            molecularWeight = 186.21;
            electronegativity = 1.9;
        }
        else if(elementName == "Osmium")
        {
            stateOfMatter = "solid";
            atomicNumber = 76;
            molecularWeight = 190.23;
            electronegativity = 2.2;
        }
        else if(elementName == "Iridium")
        {
            stateOfMatter = "solid";
            atomicNumber = 77;
            molecularWeight = 192.217;
            electronegativity = 2.2;
        }
        else if(elementName == "Platinum")
        {
            stateOfMatter = "solid";
            atomicNumber = 78;
            molecularWeight = 195.09;
            electronegativity = 2.2;
        }
        else if(elementName == "Gold")
        {
            stateOfMatter = "solid";
            atomicNumber = 79;
            molecularWeight = 196.97;
            electronegativity = 2.4;
        }
        else if(elementName == "Mercury")
        {
            stateOfMatter = "solid";
            atomicNumber = 80;
            molecularWeight = 200.59;
            electronegativity = 1.9;
        }
        else if(elementName == "Rutherfordium")
        {
            stateOfMatter = "solid";
            atomicNumber = 104;
            molecularWeight = 261.0;
            electronegativity = NULL;
        }
        else if(elementName == "Dubnium")
        {
            stateOfMatter = "solid";
            atomicNumber = 105;
            molecularWeight = 262.0;
            electronegativity = NULL;
        }
        else if(elementName == "Seaborgium")
        {
            stateOfMatter = "solid";
            atomicNumber = 106;
            molecularWeight = 266.0;
            electronegativity = NULL;
        }
        else if(elementName == "Bohrium")
        {
            stateOfMatter = "solid";
            atomicNumber = 107;
            molecularWeight = 264.0;
            electronegativity = NULL;
        }
        else if(elementName == "Hassium")
        {
            stateOfMatter = "solid";
            atomicNumber = 108;
            molecularWeight = 269.0;
            electronegativity = NULL;
        }
        else if(elementName == "Meitnerium")
        {
            stateOfMatter = "solid";
            atomicNumber = 109;
            molecularWeight = 268.0;
            electronegativity = NULL;
        }
        else if(elementName == "Darmstadtium")
        {
            stateOfMatter = "solid";
            atomicNumber = 110;
            molecularWeight = 269.0;
            electronegativity = NULL;
        }
        else if(elementName == "Roentgenium")
        {
            stateOfMatter = "solid";
            atomicNumber = 111;
            molecularWeight = 272.0;
            electronegativity = NULL;
        }
    }
    
	void getLewisDotStructure()
    {
         if( elementName == "Scadium")
    {
        cout << "   **" << endl;
        cout << " * Sc" << endl;
    }
    else if( elementName == "Yttrium")
    {
        cout << "   **" << endl;
        cout << " * Y" << endl;
    }
    else if( elementName == "Titanium")
    {
        cout << "   **" << endl;
        cout << "** Sc" << endl;
    }
    else if( elementName == "Zirconium")
    {
        cout << "   **" << endl;
        cout << "** Zr" << endl;
    }
    else if( elementName == "Hafnium")
    {
        cout << "   **" << endl;
        cout << "** Hf" << endl;
    }
    else if( elementName == "Rutherfordium")
    {
        cout << "   **" << endl;
        cout << "** Rf" << endl;
    }
    else if( elementName == "Vanadium")
    {
        cout << "   **" << endl;
        cout << "** V" << endl;
        cout << "   *" << endl;
    }
    else if( elementName == "Nobium")
    {
        cout << "   **" << endl;
        cout << "** Nb" << endl;
        cout << "   *" << endl;
    }
    else if( elementName == "Tantalum")
    {
        cout << "   **" << endl;
        cout << "** Ta" << endl;
        cout << "   *" << endl;
    }
    else if( elementName == "Dubnium")
    {
        cout << "   **" << endl;
        cout << "** Db" << endl;
        cout << "   *" << endl;
    }
    else if( elementName == "Chromium")
    {
        cout << "   **" << endl;
        cout << "** Cr" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Molybdenum")
    {
        cout << "   **" << endl;
        cout << "** Mo" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Tungsten")
    {
        cout << "   **" << endl;
        cout << "** W" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Seaborgium")
    {
        cout << "   **" << endl;
        cout << "** Sg" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Manganese")
    {
        cout << "   **" << endl;
        cout << "** Mn *" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Technetium")
    {
        cout << "   **" << endl;
        cout << "** Te *" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Rhenium")
    {
        cout << "   **" << endl;
        cout << "** Re *" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Bohrium")
    {
        cout << "   **" << endl;
        cout << "** Bh *" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Iron")
    {
        cout << "   **" << endl;
        cout << "** Fe **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Ruthenium")
    {
        cout << "   **" << endl;
        cout << "** Ru **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Osmium")
    {
        cout << "   **" << endl;
        cout << "** Os **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Hassium")
    {
        cout << "   **" << endl;
        cout << "** Hs **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Cobalt")
    {
        cout << "   **" << endl;
        cout << "** Co **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Rhodium")
    {
        cout << "   **" << endl;
        cout << "** Rh **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Iridium")
    {
        cout << "   **" << endl;
        cout << "** Ir **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Meitnerium")
    {
        cout << "   **" << endl;
        cout << "** Mt **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Nickel")
    {
        cout << "   **" << endl;
        cout << "** Ni **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Paladium")
    {
        cout << "   **" << endl;
        cout << "** Pd **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Platinum")
    {
        cout << "   **" << endl;
        cout << "** Pt **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Darmstadtium")
    {
        cout << "   **" << endl;
        cout << "** Ds **" << endl;
        cout << "   **" << endl;
    }
    else if( elementName == "Copper")
    {
        cout << "  * " << endl;
        cout << "  Cu  " << endl;
    }
    else if( elementName == "Silver")
    {
        cout << "  * " << endl;
        cout << "  Ag  " << endl;
    }
    else if( elementName == "Gold")
    {
        cout << "  * " << endl;
        cout << "  Au  " << endl;
    }
    else if( elementName == "Roentgenium")
    {
        cout << "  * " << endl;
        cout << "  Rg  " << endl;
    }
    else if( elementName == "Zinc")
    {
        cout << "  **" << endl;
        cout << "  Zn  " << endl;
    }
    else if( elementName == "Cadmium")
    {
        cout << "  **" << endl;
        cout << "  Cd  " << endl;
    }
    else if( elementName == "Mercury")
    {
        cout << "  **" << endl;
        cout << "  Hg  " << endl;
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