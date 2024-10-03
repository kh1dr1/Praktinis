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

int getCurrencyInput(float& amount_var)
{
    int choice = 0;

    cout << "\nPasirinkite valiutą:\n";
    cout << "[1] Didžiosios Britanijos svaras (GBP)\n";
    cout << "[2] JAV doleris (USD)\n";
    cout << "[3] Indijos rupija (INR)\n";

    cout << "\nJūsų pasirinkimas:";
    cin >> choice;

    cout << "Įveskite valiutos kiekį:";
    cin >> amount_var;

    return choice;
}

int main()
{
    cout << fixed << setprecision(2);

    bool isRunning = true;
    int mainChoice = 0;

    while (isRunning)
    {
        cout << "\nPasirinkite funkciją:\n";
        cout << "[1] Palyginti valiutų kursus\n";
        cout << "[2] Pirkti valiutą\n";
        cout << "[3] Parduoti valiutą\n";
        cout << "[0] Išeiti is programos\n";

        cout << ">> ";
        cin >> mainChoice;

        switch (mainChoice)
        {
        case 1:
            cout << "\n--------------------- VALIUTŲ KURSAI ---------------------\n";
            cout << "Didžiosios Britanijos svaras (GBP): " << GBP_Bendras << " svarų už 1 eurą\n";
            cout << "JAV doleris (USD):                  " << USD_Bendras << " dolerių už 1 eurą\n";
            cout << "Indijos rupija (INR):               " << INR_Bendras << " rupijų už 1 eurą\n";
            cout << "----------------------------------------------------------\n";
            break;
        case 2:
        {
            int choice = 0;
            float amount = 0;

            cout << "\n----------- PIRKTI VALIUTĄ -----------\n";
            choice = getCurrencyInput(amount);
            cout << '\n';

            switch (choice)
            {
            case 1:
                cout << "Jūs galite nusipirkti " << amount << " Didžiosios Britanijos svarų (GBP) už "
                     << amount / GBP_Pirkti << " eurų\n";
                break;
            case 2:
                cout << "Jūs galite nusipirkti " << amount << " JAV dolerių (USD) už "
                     << amount / USD_Pirkti << " eurų\n";
                break;
            case 3:
                cout << "Jūs galite nusipirkti " << amount << " Indijos rupijų (INR) už "
                     << amount / INR_Pirkti << " eurų\n";
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
            float amount = 0;

            cout << "\n---------- PARDUOTI VALIUTĄ ----------\n";
            choice = getCurrencyInput(amount);
            cout << '\n';

            switch (choice)
            {
            case 1:
                cout << "Jūs galite parduoti " << amount << " Didžiosios Britanijos svarų (GBP) už "
                     << amount / GBP_Parduoti << " eurų\n";
                break;
            case 2:
                cout << "Jūs galite parduoti " << amount << " JAV dolerių (USD) už "
                     << amount / USD_Parduoti << " eurų\n";
                break;
            case 3:
                cout << "Jūs galite parduoti " << amount << " Indijos rupijų (INR) už "
                     << amount / INR_Parduoti << " eurų\n";
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
