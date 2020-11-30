#include "convert.h"

Convert::Convert(const string sheetMusic) :
    m_musicFile(sheetMusic)
{
    // Check whether file was opened successfully
    if(m_musicFile.is_open())
    {
        cout << "File is open!" << endl;
    }
    else
    {
        cout << "WARNING: File not open!" << endl;
    }

    //Convert from .xml --> .gnm
    //Initialise guido file
}


//or maybe all conversions outside of constructor and simply construct the guido file using guido engine...?!


void Convert::convertToGNM(const string xmlFile)
{
    // Requires MusicXML lib to work --> have problems with it
}
