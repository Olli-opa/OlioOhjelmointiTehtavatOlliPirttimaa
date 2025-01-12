#include <iostream>
#include <ctime>

using namespace std;

int game(int maxNum);


int main()
{
    int quessCount = 0;
    int maxNum = 40;
    quessCount = game(maxNum);
    cout << "Sinun arvauksesi: " << quessCount << endl;
    return 0;
}

int game(int maxNum) {
    int quessCount = 0;
    int randNum = 0;
    int quess = 0;
    srand(time(NULL));
    randNum = rand() % maxNum;
    while(quess != randNum){
        quessCount++;
        cout << "Anna arvaus: " << endl;
        cin >> quess;

        if (quess < randNum){
            cout << "Luku on suurempi" << endl;
        }else if (quess > randNum){
            cout << "Luku on pienempi" << endl;
        }else if (quess == randNum){
            cout << "Luku on oikein" << endl;
        }
    }
    return quessCount;
}
