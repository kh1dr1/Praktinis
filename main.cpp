#include <iostream>
#include <iomanip>

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
    cout << fixed << setprecision(2);

    bool isRunning = true;
    int mainChoice = 0;

    while (isRunning)
    {
        cout << "\nPasirinkite funkcija:\n";
        cout << "[1] Palyginti valiutu kursus\n";
        cout << "[2] Pirkti valiuta\n";
        cout << "[3] Parduoti valiuta\n";
        cout << "[0] Iseiti is programos\n";

        cin >> mainChoice;

        switch (mainChoice)
        {
        case 1:
            cout << "\nValiutu kursai (1 euro kaina):\n";
            cout << "Didziosios Britanijos svaras (GBP): " << GBP_Bendras << '\n';
            cout << "JAV Doleris (USD): " << USD_Bendras << '\n';
            cout << "Indijos rupija (INR): " << INR_Bendras << "\n\n";
            break;
        case 2:
        {
            int choice = 0;
            int amount = 0;

            cout << "\nPasirinkite valiuta, kuri norite pirkti:\n";
            cout << "[1] Didziosios Britanijos svaras (GBP)\n";
            cout << "[2] JAV doleris (USD)\n";
            cout << "[3] Indijos rupija (INR)\n";

            cout << "\nJusu pasirinkimas:";
            cin >> choice;

            cout << "Iveskite valiutos kieki:";
            cin >> amount;

            cout << '\n';

            switch (choice)
            {
            case 1:
                cout << "Jus galite nusipirkti " << amount << " Didziosios Britanijos svaru (GBP) uz " 
                     << amount / GBP_Pirkti << " euru\n";
                break;
            case 2:
                cout << "Jus galite nusipirkti " << amount << " JAV doleriu (USD) uz " 
                     << amount / USD_Pirkti << " euru\n";
                break;
            case 3:
                cout << "Jus galite nusipirkti " << amount << " Indijos rupiju (INR) uz " 
                     << amount / INR_Pirkti << " euru\n";
                break;
            default:
                cout << "Klaida: Neteisingas valiutos pasirinkimas.\n";
                break;
            }

            break;
        }
        case 3:
        {
            int choice = 0;
            int amount = 0;

            cout << "\nPasirinkite valiuta, kuri norite parduoti:\n";
            cout << "[1] Didziosios Britanijos svaras (GBP)\n";
            cout << "[2] JAV doleris (USD)\n";
            cout << "[3] Indijos rupija (INR)\n";

            cout << "\nJusu pasirinkimas:";
            cin >> choice;

            cout << "Iveskite valiutos kieki:";
            cin >> amount;

            cout << '\n';

            switch (choice)
            {
            case 1:
                cout << "Jus galite parduoti " << amount << " Didziosios Britanijos svaru (GBP) uz "
                     << amount / GBP_Parduoti << " euru\n";
                break;
            case 2:
                cout << "Jus galite parduoti " << amount << " JAV doleriu (USD) uz "
                     << amount / USD_Parduoti << " euru\n";
                break;
            case 3:
                cout << "Jus galite parduoti " << amount << " Indijos rupiju (INR) uz "
                     << amount / INR_Parduoti << " euru\n";
                break;
            default:
                cout << "Klaida: Neteisingas valiutos pasirinkimas.\n";
                break;
            }

            break;
        }
        case 0:
            isRunning = false;
            break;
        default:
            cout << "Klaida: Neteisingas pasirinkimas.\n";
            break;
        }
    }

    return 0;
}
