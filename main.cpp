#include <iostream>

using namespace std;

const float GBP_Bendras = 0.8593;
const float GBP_Pirkti = 0.8450;
const float GBP_Parduoti = 0.9060;

const float USD_Bendras = 1.0713;
const float USD_Pirkti = 1.0547;
const float USD_Parduoti = 1.1309;

const float INR_Bendras = 88.8260;
const float INR_Pirkti = 85.2614;
const float INR_Parduoti = 92.8334;

int main()
{
    bool isRunning = true;
    int choice = 0;
    int balance_eur = 0;

    while (isRunning)
    {
        cout << "Pasirinkite funkcija:\n";
        cout << "[1] Palyginti valiutu kursus\n";
        cout << "[2] Pirkti valiuta\n";
        cout << "[3] Parduoti valiuta\n";
        cout << "[0] Iseiti is programos\n";

        cin >> choice;

        switch (choice)
        {
        case 1:

            break;
        case 2:

            break;

        case 3:

            break;

        case 0:
            isRunning = false;
            break;
        default:
            cout << "Neteisingas pasirinkimas. Bandykite is naujo.\n";
            break;
        }
    }

    return 0;
}
