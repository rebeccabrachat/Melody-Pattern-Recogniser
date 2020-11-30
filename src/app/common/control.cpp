#include "control.h"

Control::Control() //What needs to be constructed?
{

}

//NOTE: is it okay to define variables in function, if variables are not needed anywhere else? Or should they be defined in the Control class?
vector<string> Control::seperateString(string str)
{
    size_t stringPosition= 0;
    string delimiter = ",";
    string token;
    vector<string> result;

    while ((stringPosition = str.find(delimiter)) != std::string::npos)
    {
        token = str.substr(0, stringPosition);
        result.push_back(token);
        str.erase(0, stringPosition + delimiter.length());
    }

    result.push_back(str); //as the last token in string str is still in str and not in result

    return result;
}

void Control::setUserInput(QString userInput)
{
    string str = userInput.toStdString(); //convert QString to std::string
    m_userInput = seperateString(str);
}

void Control::compareVectors(vector<string> userInputVec, vector<string> sheetMusicInput)
{

    vector<string>::iterator i;
    vector<string> subvector(3);

    for(auto i = sheetMusicInput.begin(); i != sheetMusicInput.end(); ++i)
    {
        subvector = {i, i+3};
        for (const auto& s: subvector)
        {
            cout << s;
        }

        cout << endl;

        if (equal(subvector.begin(), subvector.end(), userInputVec.begin()))
        {
            cout << "Match found!"<< endl; //Draw onto img using subvector --> needs indices??
        }
    }
}
