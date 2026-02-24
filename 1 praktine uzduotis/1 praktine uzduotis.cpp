#include <iostream> 
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    while (true)//Ciklas, atsakingas uz kodo pasikartojima.
    {
        // Kintamieji.
        string pasirinkimas;
        int pasirinikimas2;
        double suma;
        string grizti;

        // Valiutu kursai.
        double GBP_Bendras = 0.8729;
        double GBP_Pirkti = 0.8600;
        double GBP_Parduoti = 0.9220;
        double USD_Bendras = 1.1793;
        double USD_Pirkti = 1.1460;
        double USD_Parduoti = 1.2340;
        double INR_Bendras = 104.6918;
        double INR_Pirkti = 101.3862;
        double INR_Parduoti = 107.8546;

        // Meniu, kuriame galima pasirinkti valiuta, su kuria bus padaryti kiti veiksmai.
        cout << "Pasirinkite valiuta, i kuria noretumete konvertuoti EUR." << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "Didziosios Britanijos svara - GBP" << endl;
        cout << "Jungtiniu Amerikos Valstiju doleri - USD" << endl;
        cout << "Indijos rupija - INR" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "Pasirinkite valiuta, su kuria norite atlikti veiksmus(GBP, USD, INR): ";

        cin >> pasirinkimas;
        //Veiksmai su GBP.
        if (pasirinkimas == "GBP")
        {
            cout << "Jusu pasirinkote valiuta GBP - Didziosios Britanijos svara" << endl;
            cout << "Pasirinkite tolesnius veiksmus su valiuta:" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "1 - Valiutos kurso palyginimas su kita valiuta." << endl;
            cout << "2 - Galimybe isigyti valiutos." << endl;
            cout << "3 - Galimybe parduoti valiuta." << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "Iveskite numeri: ";
            cin >> pasirinikimas2;
            
            switch (pasirinikimas2)
            {
            case 1://Valiutos kurso palyginimas su kita valiuta.
                cout << "Jus pasirinkote Valiutos kurso palyginimas su kita valiuta." << endl;
                cout << "1 EUR = " << fixed << setprecision(2) << GBP_Bendras << " GBP" << endl;
                break;

            case 2://Galimybe įsigyti valiutos.
                cout << "Jus pasirinkote Galimybe isigyti valiutos." << endl;
                cout << "Iveskite kiek euru norite isleisti: ";
                cin >> suma;
                cout << "Noredami isigyti: " << suma << " EUR Jus gausite: "
                    << fixed << setprecision(2) << suma * GBP_Pirkti << " GBP" << endl;
                break;

            case 3://Galimybe parduoti valiuta.
                cout << "Jus pasirinkote Galimybe parduoti valiuta" << endl;
                cout << "Iveskite suma GBP, kuria norite parduoti: ";
                cin >> suma;
                cout << "Noredami parduoti: " << suma << " GBP jus gausite: "
                    << fixed << setprecision(2) << suma / GBP_Parduoti << " EUR" << endl;
                break;
            }
        }

        //Veiksmai su USD.
        else if (pasirinkimas == "USD")
        {
            cout << "Jusu pasirinkote valiuta USD - Jungtiniu Amerikos Valstiju doleri." << endl;
            cout << "Pasirinkite tolesnius veiksmus su valiuta: " << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "1 - Valiutos kurso palyginimas su kita valiuta." << endl;
            cout << "2 - Galimybe isigyti valiutos." << endl;
            cout << "3 - Galimybe parduoti valiuta." << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "Iveskite numeri: ";
            cin >> pasirinikimas2;

            switch (pasirinikimas2)
            {
            case 1://Valiutos kurso palyginimas su kita valiuta.
                cout << "Jus pasirinkote Valiutos kurso palyginimas su kita valiuta." << endl;
                cout << "1 EUR = " << fixed << setprecision(2) << USD_Bendras << " USD" << endl;
                
                break;

            case 2://Galimybe įsigyti valiutos.
                cout << "Jus pasirinkote Galimybe isigyti valiutos." << endl;
                cout << "Iveskite kiek euru norite isleisti: ";
                cin >> suma;
                cout << "Noredami isigyti: " << suma << " EUR Jus gausite: "
                    << fixed << setprecision(2) << suma * USD_Pirkti << " USD" << endl;
                break;

            case 3://Galimybe parduoti valiuta.
                cout << "Jus pasirinkote Galimybe parduoti valiuta" << endl;
                cout << "Iveskite suma USD, kuria norite parduoti: ";
                cin >> suma;
                cout << "Noredami parduoti: " << suma << " USD jus gausite: "
                    << fixed << setprecision(2) << suma / USD_Parduoti << " EUR" << endl;
                break;
            }
        }

        //Veiksmai su INR.
        else if (pasirinkimas == "INR")
        {
            cout << "Jusu pasirinkote valiuta INR - Indijos rupija." << endl;
            cout << "Pasirinkite tolesnius veiksmus su valiuta" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "1 - Valiutos kurso palyginimas su kita valiuta." << endl;
            cout << "2 - Galimybe isigyti valiutos." << endl;
            cout << "3 - Galimybe parduoti valiuta." << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "Iveskite numeri: ";
            cin >> pasirinikimas2;

            switch (pasirinikimas2)
            {
            case 1://Valiutos kurso palyginimas su kita valiuta.
                cout << "Jus pasirinkote Valiutos kurso palyginimas su kita valiuta." << endl;
                cout << "1 EUR = " << fixed << setprecision(2) << INR_Bendras << " INR" << endl;
               
                break;

            case 2://Galimybe įsigyti valiutos.
                cout << "Jus pasirinkote Galimybe isigyti valiutos." << endl;
                cout << "Iveskite kiek euru norite isleisti: ";
                cin >> suma;
                cout << "Noredami isigyti: " << suma << " EUR Jus gausite: "
                    << fixed << setprecision(2) << suma * INR_Pirkti << " INR" << endl;
                break;

            case 3://Galimybe parduoti valiuta.
                cout << "Jus pasirinkote Galimybe parduoti valiuta" << endl;
                cout << "Iveskite suma INR, kuria norite parduoti: ";
                cin >> suma;
                cout << "Noredami parduoti: " << suma << " INR jus gausite: "
                    << fixed << setprecision(2) << suma / INR_Parduoti << " EUR" << endl;
                break;
            }
        }

        //Klaidos pranesimas, jei kazkas padaryta neteisingai.
        else
        {
            cout << ":( Ivyko klaida, bandykite dar karta." << endl;
        }

        cout << "---------------------------------------------------" << endl;
        cout << endl;

        // Ivedus "Taip", ciklas pasikartos ir gris i pirmaji pasirinkimo meniu.
        cout << "Noredami grizti i meniu, parasykite (Taip): ";
        cin >> grizti;
        if (grizti != "Taip")
        {
            break;
        }
    }
    return 0;
}