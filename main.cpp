#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string fileToStr;
    int latCount=0, number=0, allSymb=0;
    ifstream fin("C:\\ClionProjects\\String.File.Lab\\file.txt");
    if (!fin.is_open())
    {
        cout << "Something went wrong";
    }
    ofstream flout("C:\\ClionProjects\\String.File.Lab\\Latletters.txt");
    ofstream fnout("C:\\ClionProjects\\String.File.Lab\\Numbers.txt");
    while (getline(fin, fileToStr)) {
        for (int i=0; i < fileToStr.length(); i++){
            allSymb++;
            if (isalpha(fileToStr[i])){
                latCount++;

            }
            if (isdigit(fileToStr[i])){
                number++;
            }
        }
        if (allSymb == latCount){
            flout << fileToStr << endl;
        }
        if (allSymb == number){
            fnout << fileToStr << endl;
        }
        allSymb=0;
        latCount=0;
        number=0;
    }
    flout.close();
    fnout.close();
    fin.close();
    return 0;
}
