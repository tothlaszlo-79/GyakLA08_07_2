#include <string>
#include <iostream>
#include <fstream>

using namespace std;

struct fordulo {
    int lott, kapott;
    string nev1, nev2;
};

int main()
{
    int i, db = 0;
    fordulo A[8];
    ifstream be("merkozes.txt");

    if (be.fail()) {
        cout << "Hiba a fajl megnyitasa soran!" << endl;
        system("pause");
        exit(1);
    }
                  
    for (i = 0; i < 8 && !be.eof(); i++)
    {
        be >> A[i].lott;
        be >> A[i].kapott;
        be >> A[i].nev1;
        be >> A[i].nev2;
        db++;
        cout << A[i].lott << " " << A[i].kapott << " " << A[i].nev1 << " " << A[i].nev2 << endl;
    }
    be.close();
    cout << "\n A forduloban " << db << " merkozest jatszottak." << endl;
    cout << endl;

}

