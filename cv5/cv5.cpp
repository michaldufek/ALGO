// Příklad 1 -- Varianta 1
#include <iostream>
using namespace std;

int main()
{
    int pocet=0;
    char znak;
    char predchozi;
    cout << "Vlož číslo: " << endl;
    // zpracovává i mezery
    cin.get(znak);
    while(znak!= '!')
    {
        if((znak >= '1' and znak <= '9') and !(predchozi >= '1' and predchozi <= '9')) 
        {
            pocet++;
        }
        predchozi=znak;
        cin.get(znak);
    }
    cout << "Počet čísel je: " << pocet;
    return 0;
}
// ---------------------------------------------------------------------------------------------------------------
// Příklad 1 -- Varianta2 s logickou proměnnou
#include <iostream>
using namespace std;

int main()
{
    int pocet=0;
    bool cislo=false;
    char znak;
    cout << "Vlož znaky: " << endl;
    // zpracovává i mezery
    cin.get(znak);
    while(znak!= '!')
    {
        while(znak>='0' and znak<='9')
        {
            cislo=true;
            cin.get(znak);
        }
        if(cislo) 
        {
            pocet++;
            cislo=false;
        }
        else
        {
            cin.get(znak);
        }
    }
    cout << "Počet čísel je: " << pocet;
    return 0;
}
// ---------------------------------------------------------------------------------------------------------------
// Neprezentovat
// Příklad 2 -- Vysvětlení a ukázka před příkladem jak najít a rozpoznat číslo v řadě znaků
#include <iostream>
using namespace std;

int main()
{
    int pocet=0;
    int hodnota=0;
    bool cislo=false;
    char znak;
    cout << "Vlož znaky: " << endl;
    // zpracovává i mezery
    cin.get(znak);
    while(znak!= '!')
    {
        while(znak>='0' and znak<='9')
        {
            hodnota = hodnota*10 + int(znak)-int('0'); // jaká je vnitřní reprezentace v ascii?
            cislo=true;
            cin.get(znak);
        }
        if(cislo) 
        {
            pocet++;
            cislo=false;
            cout << hodnota<<", ";
            hodnota=0;
        }
        else
        {
            cin.get(znak);
        }
    }
    cout << "Počet čísel je: " << pocet;
    return 0;
}
// ---------------------------------------------------------------------------------------------------------------
// VARIANTA K PREZENTACI
// Příklad 2 -- Vysvětlení a ukázka před příkladem jak najít a rozpoznat číslo v řadě znaků
#include <iostream>
using namespace std;

int main()
{
    int cislo=0;
    bool jeCislo=false;
    char znak;
    
    cout << "Vlož znak" << endl;
    cin.get(znak);
    while(znak!='!')
    {
        while(znak>='0' and znak <='9')
        {
            jeCislo=true;
            cislo = cislo*10 + int(znak) - int('0'); // => reprezentace hodnoty ascii
            cin.get(znak);
        }
        if(cislo)
        {
            jeCislo=false;
            cout << cislo << endl;
            cislo=0;
        }
        else
        {
            cin.get(znak);
        }
    }
    cout << "Program skončil" << endl;
    return 0;
}
// ---------------------------------------------------------------------------------------------------------------
// Příklad 2
#include <iostream>
using namespace std;

int main()
{
    int max=0;
    int cislo=0;
    bool jeCislo=false;
    char znak;
    
    cout << "Vlož znak" << endl;
    cin.get(znak);
    while(znak!='!')
    {
        while(znak>='0' and znak <='9')
        {
            jeCislo=true;
            cislo = cislo*10 + int(znak) - int('0'); // => reprezentace hodnoty ascii
            cin.get(znak);
        }
        if(cislo)
        {
            jeCislo=false;
            cout << cislo << endl;
            if(cislo>max)
            {
                max=cislo;
            }
            cislo=0;
        }
        else
        {
            cin.get(znak);
        }
    }
    cout << "Největší číslo ze zadaných znaků je: " << max << endl;
    return 0;
}
// ************************************************************************************************
// Příklad 3 -- Nejprve odvoď vzorec pro aproximaci hodnoty sinus
#include <iostream>
#include <math.h>
using namespace std;

float sinus(float x)
{
    float suma=x;
    float t=x;
    int n=0; // chybí nám pořadí tho prvku, pro který počítáme
    while(abs(t) > 0.0001) // dokud nebude mít tuto přesnost, tak bude něco dělat
    {
        t= -t * (x*x)/((2*n + 2)*(2*n + 3));
        suma+=t;
        n++;
    }
    return suma;
}

int main()
{
    float cislo;
    cin >> cislo;
    cout << sinus(cislo) << ", " << sin(cislo); // sin(cislo) je benchmarking našeho algoritmu
    return 0;
}
// ************************************************************************************************
// Příklad 
int faktorial(int x)
{
        if (x == 1)
                return 1;
        return x * faktorial(x - 1);
}
// ************************************************************************************************
// Na vstupu je řada znaků ukončená znakem ‘!‘. Určete počet přirozených čísel, které se v řadě nachází.
// Na vstupu je řada znaků ukončená znakem ‘!‘. Nalezněte v ní největší číslo (uvažujte jen celá čísla).
// Vytvořte vlastní funkci pro výpočet funkce sinus. Výpočet postavte na využití rozvoje funkce sinus v nekonečnou řadu.
// sin( x )= x - x 3 3! + x 5 5! - x 7 7! + x 9 9! - ...
// Obdobným způsobem vytvořte i funkce cosinus a ex
// cos( x )= 1 - x 2 2! + x 4 4! - x 6 6! + x 8 8! - ...
// e x = 1 + x + x 2 2! + x 3 3! + x 4 4! + ...
// Vytvořte funkci pro výpočet faktoriálu pomocí rekurze.
// Vytvořte funkci pro výpočet největšího společného dělitele dvou přirozených čísel. Funkce muže využít pouze operátory + nebo -.

// algo6.txt
// Zobrazování položky algo6.txt.