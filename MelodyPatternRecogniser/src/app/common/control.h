#ifndef CONTROL_H
#define CONTROL_H

#include <QWidget>
#include <vector>
#include <iostream>
#include <algorithm>
//#include "icontrol.h"

/**
 *@brief: Control class compares user input to music file
 */

using namespace std;

class Control
{
public:
    Control();
    ~Control();

    void setUserInput(QString userInput);
    vector<string> seperateString(string str);
    void compareVectors(vector<string> userInputVec, vector<string> sheetMusicInput);
    void drawMarking(vector<string> subvec);

private:
    vector<string> m_userInput;
    vector<string> m_indexMarkings;
};

#endif // CONTROL_H
