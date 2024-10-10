#include <iostream>
#include <clocale>
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

    wcout << L"\nPasirinkite valiutą:\n";
    wcout << L"[1] Didžiosios Britanijos svaras (GBP)\n";
    wcout << L"[2] JAV doleris (USD)\n";
    wcout << L"[3] Indijos rupija (INR)\n";

    wcout << L"\nJūsų pasirinkimas:";
    cin >> choice;

    wcout << L"Įveskite valiutos kiekį:";
    cin >> amount_var;

    return choice;
}

int main()
{
    wcout << fixed << setprecision(2);
    setlocale(LC_ALL, "Lithuanian");

    bool isRunning = true;
    int mainChoice = 0;

    while (isRunning)
    {
        wcout << L"\nPasirinkite funkciją:\n";
        wcout << L"[1] Palyginti valiutų kursus\n";
        wcout << L"[2] Pirkti valiutą\n";
        wcout << L"[3] Parduoti valiutą\n";
        wcout << L"[0] Išeiti is programos\n";

        wcout << ">> ";
        cin >> mainChoice;

        switch (mainChoice)
        {
        case 1:
            wcout << L"\n--------------------- VALIUTŲ KURSAI ---------------------\n";
            wcout << L"Didžiosios Britanijos svaras (GBP): " << GBP_Bendras << L" svarų už 1 eurą\n";
            wcout << L"JAV doleris (USD):                  " << USD_Bendras << L" dolerių už 1 eurą\n";
            wcout << L"Indijos rupija (INR):               " << INR_Bendras << L" rupijų už 1 eurą\n";
            wcout << "----------------------------------------------------------\n";
            break;
        case 2:
        {
            int choice = 0;
            float amount = 0;

            wcout << L"\n----------- PIRKTI VALIUTĄ -----------\n";
            choice = getCurrencyInput(amount);
            wcout << '\n';

            switch (choice)
            {
            case 1:
                wcout << L"Jūs galite nusipirkti " << amount << L" Didžiosios Britanijos svarų (GBP) už "
                     << amount / GBP_Pirkti << L" eurų\n";
                break;
            case 2:
                wcout << L"Jūs galite nusipirkti " << amount << L" JAV dolerių (USD) už "
                     << amount / USD_Pirkti << L" eurų\n";
                break;
            case 3:
                wcout << L"Jūs galite nusipirkti " << amount << L" Indijos rupijų (INR) už "
                     << amount / INR_Pirkti << L" eurų\n";
                break;
            default:
                wcout << L"Klaida: Neteisingas valiutos pasirinkimas.\n";
                break;
            }

            break;
        }
        case 3:
        {
            int choice = 0;
            float amount = 0;

            wcout << L"\n---------- PARDUOTI VALIUTĄ ----------\n";
            choice = getCurrencyInput(amount);
            wcout << '\n';

            switch (choice)
            {
            case 1:
                wcout << L"Jūs galite parduoti " << amount << L" Didžiosios Britanijos svarų (GBP) už "
                     << amount / GBP_Parduoti << L" eurų\n";
                break;
            case 2:
                wcout << L"Jūs galite parduoti " << amount << L" JAV dolerių (USD) už "
                     << amount / USD_Parduoti << L" eurų\n";
                break;
            case 3:
                wcout << L"Jūs galite parduoti " << amount << L" Indijos rupijų (INR) už "
                     << amount / INR_Parduoti << L" eurų\n";
                break;
            default:
                wcout << L"Klaida: Neteisingas valiutos pasirinkimas.\n";
                break;
            }

            break;
        }
        case 0:
            isRunning = false;
            break;
        default:
            wcout << L"Klaida: Neteisingas pasirinkimas.\n";
            break;
        }
    }

    return 0;
}
