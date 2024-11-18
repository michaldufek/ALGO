// *********************************************************
// PRIKLAD 1
// *********************************************************
// Příklad 1
#include <iostream>
using namespace std;

int main()
{
    char znak;
    int pocet=0;
    cout << "Vlož znaky: " << endl;
    cin.get(znak);
   
    while(znak!='.')
    {
        if(znak >='a' and znak <='z')
        {
            pocet += 1;
        }
       
        cin.get(znak);
    }
   
    cout << "Malých znáků je: " << pocet << endl;
    return 0;
}
// Příklad 2
#include <iostream>
using namespace std;

int main()
{
    char znak;
    float pocet_pismena=0;
    float pocet_znaky=0;
    float podil;
    float celkem;
    cout << "Vlož znaky: " << endl;
    cin >> znak;
   
    while(znak!='*')
    {
        if((znak >='a' and znak <='z') or (znak >= 'A' and znak <= 'Z'))
        {
            pocet_pismena++;
        }
        celkem++;
       
        cin >> znak;
    }
    podil = (celkem - pocet_pismena)/celkem;
    cout << "Počet písmen: " << pocet_pismena << " Celkem: " << celkem << endl;
    cout << "Procento je: " << podil << endl;
   
    return 0;
}
// Příklad 3
#include <iostream>
using namespace std;

int main()
{
    int cislo, sudych=0;
    cout << "Vlož cislo: " << endl;
    cin >> cislo;    
    while(cislo!= -333)
    {
        if(cislo % 2 == 0)
        {
            sudych++;
        }
        cin >> cislo;
    }
   
    cout << "Sudých je: " << sudych << endl;
   
    return 0;
}
// Příklad 4
#include <iostream>
using namespace std;

int main()
{
    int cislo, pocet_lichych=0, suma=0;
    float prumer;
    cout << "Vlož cislo: " << endl;
    cin >> cislo;    
    while(cislo!= -333)
    {
        if(cislo % 2 != 0)
        {
            pocet_lichych++;
            suma += cislo;
           
        }
        cin >> cislo;
    }
    if(pocet_lichych > 0)
    {
        prumer = suma/pocet_lichych;
        cout << "Průměr je: " << prumer << endl;
    }
    else
    {
        cout << "Průměr nejde spočítat -- nebylo zadáno žádné liché číslo" << endl;
    }
   
    return 0;
}
// Příklad 5
#include <iostream>
using namespace std;

int main()
{
    int prvni, cislo, poc=0;

    cout << "Vlož cislo: " << endl;
    cin >> prvni;
    cin >> cislo;
    while(cislo!= -333)
    {
        if(cislo > prvni)
        {
            poc++;
        }
        cin >> cislo;
    }
   
    cout << "Počet větších čísel než " << prvni << " je " << poc;
   
    return 0;
}
// Příklad 6
#include <iostream>
using namespace std;

float rovnice(float p, float q)
{
    return -q/p;
}

int main()
{
    float c1, c2, v;
    cin >> c1;
    cin >> c2;
    if(c1!=0)
    {
        v=rovnice(c1, c2);
        cout <<v << endl;
    }
    else
    {
        cout << "Nejedná se o lineární rovnici";
    }
    return 0;
}
//Var1
// Příklad 7
#include <iostream>
using namespace std;

float absh(float cislo)
{
    float vysledek;
   
    if(cislo >= 0)
    {
        return cislo;
    }
    else
    {
        return -cislo;
    }
   
    return vysledek;
}
//Var2
// Příklad 7
#include <iostream>
using namespace std;

float absh(float cislo)
{
    if(cislo < 0)
    {
        cislo = -cislo;
    }
    return cislo;
}

int main()
{
    float c1;
    cin>>c1;
    cout << absh(c1);
   
    return 0;
}
// Příklad 8
#include <iostream>
using namespace std;

void prohod(float &c1, float &c2)
{
    float pom = c1;
    c1 = c2;
    c2 = pom;
}

int main()
{
    float a, b;
    cin>>a>>b;
    prohod(a,b);
    cout<<a<<", "<<b;
   
    return 0;
}
// Příklad 9
#include <iostream>
#include <math.h>
using namespace std;

bool prvocislo(int cislo)
{
    int d = 2;
    if(cislo == 1)
    {
        return false;
    }
    else
    {
        while(d<=sqrt(cislo) and cislo%d!=0)
        {
            d++;
        }
        return d > sqrt(cislo);
    }
}
int main()
{
    float cislo;
    cin >> cislo;
    cout << prvocislo(cislo) << endl;
    return 0;
}

// ---------------------------------------------------------------------------------------------------------------
// Na vstupu je řada znaků. Určete kolik se v ní nachází malých písmen anglické abecedy před první tečkou.
// Na vstupu je řada znaků. Určete kolik procent znaků tvoří jiné znaky než malá a velká písmena anglické abecedy. Řada je ukončena znakem ‘*‘.
// Na vstupu je řada celých čísel ukončené číslem -333 (toto číslo do řady nepatří). Určete počet sudých čísel.
// Na vstupu je řada celých čísel ukončené číslem -333 (toto číslo do řady nepatří). Určete aritmetický průměr lichých čísel.
// Na vstupu je řada celých čísel ukončené číslem -333 (toto číslo do řady nepatří). Určete počet čísel větších než první zadané číslo řady.
// Vytvořte funkci pro výpočet kořene lineární rovnice p * x + q = 0.
// Vytvořte funkci pro výpočet absolutní hodnoty.
// Vytvořte proceduru pro prohození dvou čísel.
// Vytvořte funkci, které určí, zda zadané číslo je prvočíslo.
// ---------------------------------------------------------------------------------------------------------------