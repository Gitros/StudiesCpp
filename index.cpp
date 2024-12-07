#include <iostream>
#include <string>
#include <ctime>

class Serwis
{
private:
    static const int MAX_KOMPUTEROW = 100;
    static const int MAX_NAPRAW = 5;
    std::string naprawy[MAX_KOMPUTEROW][MAX_NAPRAW];
    static int liczbaZgloszen;

public:
    Serwis()
    {
        // Zerowanie tablicy naprawy
        for (int i = 0; i < MAX_KOMPUTEROW; ++i)
        {
            for (int j = 0; j < MAX_NAPRAW; ++j)
            {
                naprawy[i][j] = "";
            }
        }
        liczbaZgloszen = 0;
    }

    bool dodajNaprawe(int nrKomputera)
    {
        // Sprawdzenie dostępności miejsca na naprawę
        int index = 0;
        while (index < MAX_NAPRAW && !naprawy[nrKomputera][index].empty())
        {
            ++index;
        }
        if (index == MAX_NAPRAW)
        {
            return false; // Brak miejsca na kolejną naprawę
        }

        // Dodanie dzisiejszej daty
        time_t now = time(0);
        tm *ltm = localtime(&now);
        char today[11];
        strftime(today, sizeof(today), "%Y-%m-%d", ltm);
        naprawy[nrKomputera][index] = today;

        ++liczbaZgloszen; // Zwiększenie liczby zgłoszeń
        return true;
    }

    int liczDoZlomowania()
    {
        int liczbaDoZlomowania = 0;
        for (int i = 0; i < MAX_KOMPUTEROW; ++i)
        {
            bool maMiejsce = false;
            for (int j = 0; j < MAX_NAPRAW; ++j)
            {
                if (naprawy[i][j].empty())
                {
                    maMiejsce = true;
                    break;
                }
            }
            if (!maMiejsce)
            {
                ++liczbaDoZlomowania;
            }
        }
        return liczbaDoZlomowania;
    }

    std::string ostatniaNaprawa(int komputer)
    {
        for (int j = MAX_NAPRAW - 1; j >= 0; --j)
        {
            if (!naprawy[komputer][j].empty())
            {
                return naprawy[komputer][j];
            }
        }
        return "Brak napraw";
    }

    double srednioNapraw()
    {
        int liczbaNaprawionychKomputerow = 0;
        int sumaNapraw = 0;

        for (int i = 0; i < MAX_KOMPUTEROW; ++i)
        {
            bool naprawiony = false;
            for (int j = 0; j < MAX_NAPRAW; ++j)
            {
                if (!naprawy[i][j].empty())
                {
                    naprawiony = true;
                    break;
                }
            }
            if (naprawiony)
            {
                ++liczbaNaprawionychKomputerow;
                sumaNapraw += MAX_NAPRAW; // Każdy komputer ma MAX_NAPRAW napraw, gdy są naprawiane
            }
        }

        if (liczbaNaprawionychKomputerow > 0)
        {
            return static_cast<double>(sumaNapraw) / liczbaNaprawionychKomputerow;
        }
        else
        {
            return 0.0;
        }
    }
};

// Inicjalizacja statycznego pola liczbaZgloszen
int Serwis::liczbaZgloszen = 0;

// Przykład użycia klasy Serwis
int main()
{
    Serwis serwis;

    // Dodanie przykładowych napraw
    serwis.dodajNaprawe(0);
    serwis.dodajNaprawe(1);
    serwis.dodajNaprawe(2);
    serwis.dodajNaprawe(0);
    serwis.dodajNaprawe(1);
    serwis.dodajNaprawe(3);

    // Przykładowe użycie metod klasy Serwis
    std::cout << "Liczba komputerów do złomowania: " << serwis.liczDoZlomowania() << std::endl;
    std::cout << "Ostatnia naprawa komputera 0: " << serwis.ostatniaNaprawa(0) << std::endl;
    std::cout << "Średnia liczba napraw komputerów: " << serwis.srednioNapraw() << std::endl;

    return 0;
}
