// *********************************************************
// PRIKLAD 1
// *********************************************************
#include <iostream>
using namespace std;

int main()
{
    int cislo, fakt=1;
    
    cout << "Zadejte nezáporné číslo: " << endl;
    cin >> cislo;
    
    while(cislo>1)
    {
        fakt*=cislo;
        cislo--;
    }
    cout << "Faktoriál: " << fakt; 
    return 0;
}
// *********************************************************
// PRIKLAD 2
// *********************************************************
#include <iostream>
using namespace std;

int main()
{
    float a, d;
    cout << "Zadej první člen: " << endl;
    cin >> a;
    cout << "Zadej druhý člen: " << endl;
    cin >> d;
    
    while(d==0)
    {
        cout << "Zadejte nenulovou hodnotu: ";
        cin >> d;
    }
    for(int i=1; i<=50; i++)
    {
        if(i%10!=0)
        {
            cout << a + i * d << ", ";
        }
        else
        {
            cout << a + i * d << ", " << endl;
        }
    }
    return 0;
}
// *********************************************************
// PRIKLAD 3
// *********************************************************
#include <iostream>
using namespace std;

int main()
{
    float a, q;
    cout << "Načti první člen: " << endl;
    cin >> a;
    cout << "Načti druhý člen: " << endl;
    cin >> q;
    while(q==0)
    {
        cout << "Načti kladné číslo! " << endl;
        cin >> q;
    }
    
    for(int i=0; i<50;i++)
    {   
        cout << a;
        if(i%10!=9)
        {
            cout << ", ";
        }
        else
        {
            cout << endl;
        }
        a = a*q;
    }
    return 0;
}
// *********************************************************
// PRIKLAD 4 - Var1
// *********************************************************
#include <iostream>
using namespace std;

int main()
{
    int f0=0, f1=1, n, i=0, next;
    
    cout << "Zadej počet posloupností: " << endl;
    cin >> n;
    
    for(i; i<n; i++)
    {
        if(i==0)
        {
            cout << f0 << ", ";
        }
        else if(i==1)
        {
            cout << f1 << ", ";
        }
        next = f0 + f1;
        f0 = f1;
        f1 = next;
        
        cout << next << ", ";
    }
    
    return 0;
}
// *********************************************************
// PRIKLAD 4 - Var2
// *********************************************************
#include <iostream>
using namespace std;

int main()
{
    int f0=0, f1=1, n, i=0;
    
    cout << "Zadej počet posloupností: " << endl;
    cin >> n;
    
    for(i; i<n; i++)
    {
        cout << f0 << ", ";
        
        f1 += f0;
        f0 = f1 - f0;
    }
    
    return 0;
}
// *********************************************************
// PRIKLAD 5
// *********************************************************
#include <iostream>
using namespace std;

int main()
{
    int cislo, suma=0;
    
    cout << "Zadejte celé číslo: " << endl;
    cin >> cislo;
    
    while(cislo!=-333)
    {
        suma +=cislo;
        
        cout << "Načti číslo: " << endl;
        cin >> cislo;
    }
    
    cout << suma;
    return 0;
}
// *********************************************************
// PRIKLAD 6 -- Var 1
// *********************************************************
#include <iostream>
using namespace std;

int main()
{
    int n, i=0;
    float cislo, suma=0;
    
    cout << "Zadejte počet čísel: " << endl;
    cin >> n;
    
    for(n; n > 0; n--)
    {
        cout << "Načti číslo: " << endl;
        cin >> cislo;
        suma += cislo;
        if(n!=1)
        {
            cout << "Ještě " << n - 1 << " čísel" << endl;    
        }
    }
    
    cout << suma;
    return 0;
}
// *********************************************************
// PRIKLAD 6 -- Var 2
// *********************************************************
// varianta s i++
// *********************************************************
// PRIKLAD 7 -- SOUČIN
// *********************************************************
#include <iostream>
using namespace std;

int main()
{
    float cislo1, cislo2;
    float soucin=0;
    int i = 0;
    
    cout << "Načti dvě nezáporná čísla: " << endl;
    cin >> cislo1 >> cislo2;
    while(cislo1 < 0 or cislo2 < 0)
    {
        cout << "Čísla nesmí být záporná!" << endl;
        cin >> cislo1 >> cislo2;
    }
    for(i; i < cislo2; i++)
    {
        soucin += cislo1;
    }
    
    cout << soucin;
    return 0;
}
// *********************************************************
// PRIKLAD 7 -- CELOČISELNÝ PODÍL
// *********************************************************
#include <iostream>
using namespace std;

int main()
{
    float cislo1, cislo2;
    int i = 0;
    
    cout << "Načti dvě nezáporná čísla: " << endl;
    cin >> cislo1 >> cislo2;
    while(cislo1 >= cislo2)
    {
        cislo1 -= cislo2;
        i++;
    }
    
    cout << i;
    return 0;
}
// *********************************************************
// PRIKLAD 7 -- CELOČISELNÝ PODÍL
// *********************************************************
#include <iostream>
using namespace std;

int main()
{
    float cislo1, cislo2;
    int i = 0;
    
    cout << "Načti dvě nezáporná čísla: " << endl;
    cin >> cislo1 >> cislo2;
    while(cislo1 >= cislo2)
    {
        cislo1 -= cislo2;
        i++;
    }
    
    cout << cislo1;
    return 0;
}
// *********************************************************
// PRIKLAD 7 -- NEJVĚTŠÍ SPOL. JMENOVATEL
// *********************************************************
#include <iostream>
using namespace std;

int main()
{
    float cislo1, cislo2;
    int i = 0;
    
    cout << "Načti dvě nezáporná čísla: " << endl;
    cin >> cislo1 >> cislo2;
    while(cislo1 != cislo2)
    {
        if(cislo1 > cislo2)
        {
            cislo1 -=cislo2;
        }
        else
        {
            cislo2 -= cislo1;
        }
    }
    
    cout << cislo1;
    return 0;
}
// *********************************************************
// PRIKLAD 7 -- NEJMENŠÍ SPOL. NÁSOBEK
// *********************************************************
#include <iostream>
using namespace std;

int main()
{
    float cislo1, cislo2, pom1, pom2;
    int i = 0;
    
    cout << "Načti dvě nezáporná čísla: " << endl;
    cin >> cislo1 >> cislo2;
    pom1 = cislo1;
    pom2 = cislo2;
    while(cislo1 != cislo2)
    {
        if(cislo1 > cislo2)
        {
            cislo2 +=pom2;
        }
        else
        {
            cislo1 += pom1;
        }
    }
    
    cout << cislo1;
    return 0;
}
// *********************************************************
// PRIKLAD 8
// *********************************************************
#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int cislo, d;
    
    cout << "Načti přirozené čísla: " << endl;
    cin >> cislo;
    while(cislo < 0)
    {
        cout << "Čísla nesmí být záporná!" << endl;
        cin >> cislo;
    }
    if(cislo==1)
    {
        cout << cislo << " --> nejedná se o prvočíslo";
    }
    else if(cislo==2)
    {
        cout << cislo << " --> je prvočíslo";
    }
    else
    {
        d = 2;
        if(cislo%d==0)
        {
            cout << cislo << " --> není prvočíslo";
        }
        else
        {
            d=3;
            while(d<=sqrt(cislo) and cislo%d!=0)
            {
                d+=2;
            }
            if(cislo%d==0)
            {
                cout << cislo << " --> není prvočíslo";
            }
            else
            {
                cout << cislo << " --> je prvočíslo";
            }
        }
    }
    
    return 0;
}
// ------------------------------------------------------------------------------------------------------------------------------------------

//     Načtěte celé nezáporné číslo a vypište jeho faktoriál.
//     Načtěte celé číslo a, které reprezentuje první člen aritmetické posloupnosti. Dále načtěte celé číslo (nenulové) d, které představuje rozdíl mezi jednotlivými členy aritmetické posloupnosti. Vypište 50 prvních členů této aritmetické posloupnosti (výpis proveďte tak, aby na řádku bylo vždy 10 členů).
//     Načtěte celé číslo a, které reprezentuje první člen geometrické posloupnosti. Dále načtěte reálné číslo (nenulové) q, které představuje rozdíl mezi jednotlivými členy aritmetické posloupnosti. Vypište 50 prvních členů této aritmetické posloupnosti (výpis proveďte tak, aby na řádku bylo vždy 10 členů).
//     Načtěte přirozené číslo N, které je větší než 2. Vypište N prvních členů Fibonacciho posloupnosti.
//     Na vstupu je řada celých čísel ukončené číslem -333 (toto číslo do řady nepatří). Určete součet všech čísel v řadě.
//     Na vstupu je řada N celých čísel (N je potřeba načíst od uživatele). Určete součet všech čísel v řadě.
//     Načtěte dvě celá nezáporná čísla a bez použití multiplikativních operátorů vypište jejich:
//         součin,
//         celočíselný podíl,
//         zbytek po celočíselném dělení,
//         největšího společného dělitele,
//         nejmenší společný násobek.
//     Načťete přirozené číslo a určete, zda se jedná o prvočíslo.
// ------------------------------------------------------------------------------------------------------------------------------------------