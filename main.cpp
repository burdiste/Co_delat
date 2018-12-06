#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

int main()
{
    string answer, line, buffer = "sth";
    vector <string> options;
    int r=0;
    srand(time(NULL));

    //Secteni celkoveho poctu radku
    ifstream myfile ("cinnosti.txt");
    if (myfile.is_open())
    {
        while (getline (myfile,line) )
        {
            options.push_back(line);
        }
        myfile.close();
    }
    else cout << "Unable to open file" << endl;

    do
    {
        //Vyber a vypis nahodneho radku
        r = rand()%options.size();

        cout<<"Navrhovana cinnost je :\n" << options[r] << endl;
        cout << "Dalsi? a/n" << endl;
        getline (cin,answer);
    }
    while (answer.compare("a")==0);

    return 0;
}
