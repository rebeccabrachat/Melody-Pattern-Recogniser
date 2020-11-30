#ifndef CONVERT_H
#define CONVERT_H

// Include Music XML lib, once running

#include <fstream>
#include <string>
#include <iostream>
#include "GUIDOEngine.h"

using namespace std;


/**
 * @brief The Convert class: Converts Music XML into GMN files.
 * Additionally, it extracts the notes from the music file and pushes them into a vector
 */


class Convert
{
public:
    Convert(const string fileName); //Initilises Guido file...? Input is GMN file or .xml?
    ~Convert(); //Destructs Guido file...?

    void convertToGNM(const string xmlFile); //Input .xml file; Output .gnm file

private:
    ofstream m_musicFile; //Should it be a unique_ptr as it's changed?

};

#endif // CONVERT_H
