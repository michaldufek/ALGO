// ***************************************************************************************************************
// PRIKLAD 1
// ***************************************************************************************************************
#include <iostream>
#include <iomanip>
using namespace std;

const int maxRozsah = 100;
typedef int typVektorCelychCisel[maxRozsah];
typedef typVektorCelychCisel typMaticeCelychCisel[maxRozsah];

void vypisVektor(typVektorCelychCisel pole, int pocet)
{
    for(int i=0;i<pocet;i++)
    {
        cout<<right<<setprecision(5)<<setw(6)<< " "<<pole[i];
    }
}

void vypisMatici(typMaticeCelychCisel pole, int radky, int sloupce)
{
    for(int i=0; i<radky; i++)
    {
        vypisVektor(pole[i], sloupce);
        cout << endl;
    }
}
// Jednicky
void jednicky(typMaticeCelychCisel pole, int n)
{
    for(int r=0;r<n;r++)
    {
        for(int s=0;s<n;s++)
        {
            pole[r][s]=1;
        }
    }
}
// Hlavni diagonala
void hl_diagonala(typMaticeCelychCisel pole, int n)
{
    for(int r=0;r<n;r++)
        {
            pole[r][r]=0;
        }
}
// Vedlejsi diagonala
void ved_diagonala(typMaticeCelychCisel pole, int n)
{
    for(int r=0;r<n;r++)
        {
            pole[r][n-1-r]=2;
        }
}
// Po radcich
void poRadcich(typMaticeCelychCisel pole, int n)
{
    int c=1;
    for(int r=0;r<n;r++)
    {
        for(int s=0;s<n;s++)
        {
            //pole[r][s]=c++;
            pole[r][s]=r*n+s+1;
            
        }
        
    }
}
//Po sloupcich
void poSloupcich(typMaticeCelychCisel pole, int n)
{
    int c=1;
    for(int r=0;r<n;r++)
    {
        for(int s=0;s<n;s++)
        {
            pole[s][r]=c++;
            //pole[s][r]=r*n+s+1;
            
        }
        
    }
}

int main()
{
    int pocet;
    typMaticeCelychCisel mat;
    cin>>pocet;
    jednicky(mat, pocet);
    hl_diagonala(mat, pocet);
    ved_diagonala(mat, pocet);
    poRadcich(mat, pocet);
    poSloupcich(mat, pocet);
    vypisMatici(mat, pocet, pocet);

    return 0;
}
// ***************************************************************************************************************
// PRIKLAD 2
// ***************************************************************************************************************
#include <iostream>
#include <iomanip>
using namespace std;

const int maxRozsah = 100;
typedef int typVektorCelychCisel[maxRozsah];
typedef typVektorCelychCisel typMaticeCelychCisel[maxRozsah];

void vypisVektor(typVektorCelychCisel pole, int pocet)
{
    for(int i=0;i<pocet;i++)
    {
        cout<<right<<setprecision(5)<<setw(6)<< " "<<pole[i];
    }
}

void vypisMatici(typMaticeCelychCisel pole, int radky, int sloupce)
{
    for(int i=0; i<radky; i++)
    {
        vypisVektor(pole[i], sloupce);
        cout << endl;
    }
}
// Jednicky
void jednicky(typMaticeCelychCisel pole, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int r=0;r<n;r++)
        {
            for(int s=0;s<n;s++)
            {
                pole[r][s]=1;
            }
        }
    }
}
// Hlavni diagonala
void hl_diagonala(typMaticeCelychCisel pole, int n)
{
    for(int r=0;r<n;r++)
        {
            pole[r][r]=0;
        }
}
// Vedlejsi diagonala
void ved_diagonala(typMaticeCelychCisel pole, int n)
{
    for(int r=0;r<n;r++)
        {
            pole[r][n-1-r]=2;
        }
}
// Po radcich
void poRadcich(typMaticeCelychCisel pole, int n)
{
    int c=1;
    for(int r=0;r<n;r++)
    {
        for(int s=0;s<n;s++)
        {
            //pole[r][s]=c++;
            pole[r][s]=r*n+s+1;
            
        }
        
    }
}
//Po sloupcich
void poSloupcich(typMaticeCelychCisel pole, int n)
{
    int c=1;
    for(int r=0;r<n;r++)
    {
        for(int s=0;s<n;s++)
        {
            pole[s][r]=c++;
            //pole[s][r]=r*n+s+1;
            
        }
        
    }
}

// Priklad 2 - nacteni radku
void nactiVektor(typVektorCelychCisel pole, int pocet)
{
    for(int i=0; i<pocet; i++)
    {
        cin>>pole[i];
    }
}
void nactiMatici(typMaticeCelychCisel pole, int radky, int sloupce)
{
    for(int i=0; i<radky;i++)
    {
        nactiVektor(pole[i], sloupce);
    }
}
int main()
{
    int r, s;
    typMaticeCelychCisel mat;
    cin>>r>>s;
    
    nactiMatici(mat, r, s);
    vypisMatici(mat, r, s);

    return 0;
}

// ***************************************************************************************************************
// PRIKLAD 3
// ***************************************************************************************************************
#include <iostream>
#include <iomanip>
using namespace std;

const int maxRozsah = 100;
typedef int typVektorCelychCisel[maxRozsah];
typedef typVektorCelychCisel typMaticeCelychCisel[maxRozsah];

void vypisVektor(typVektorCelychCisel pole, int pocet)
{
    for(int i=0;i<pocet;i++)
    {
        cout<<right<<setprecision(5)<<setw(6)<< " "<<pole[i];
    }
}

void vypisMatici(typMaticeCelychCisel pole, int radky, int sloupce)
{
    for(int i=0; i<radky; i++)
    {
        vypisVektor(pole[i], sloupce);
        cout << endl;
    }
}
// Jednicky
void jednicky(typMaticeCelychCisel pole, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int r=0;r<n;r++)
        {
            for(int s=0;s<n;s++)
            {
                pole[r][s]=1;
            }
        }
    }
}
// Hlavni diagonala
void hl_diagonala(typMaticeCelychCisel pole, int n)
{
    for(int r=0;r<n;r++)
        {
            pole[r][r]=0;
        }
}
// Vedlejsi diagonala
void ved_diagonala(typMaticeCelychCisel pole, int n)
{
    for(int r=0;r<n;r++)
        {
            pole[r][n-1-r]=2;
        }
}
// Po radcich
void poRadcich(typMaticeCelychCisel pole, int n)
{
    int c=1;
    for(int r=0;r<n;r++)
    {
        for(int s=0;s<n;s++)
        {
            //pole[r][s]=c++;
            pole[r][s]=r*n+s+1;
            
        }
        
    }
}
//Po sloupcich
void poSloupcich(typMaticeCelychCisel pole, int n)
{
    int c=1;
    for(int r=0;r<n;r++)
    {
        for(int s=0;s<n;s++)
        {
            pole[s][r]=c++;
            //pole[s][r]=r*n+s+1;
            
        }
        
    }
}

// Priklad 2 - nacteni radku
void nactiVektor(typVektorCelychCisel pole, int pocet)
{
    for(int i=0; i<pocet; i++)
    {
        cin>>pole[i];
    }
}
void nactiMatici(typMaticeCelychCisel pole, int radky, int sloupce)
{
    for(int i=0; i<radky;i++)
    {
        nactiVektor(pole[i], sloupce);
    }
}
// Priklad 3 - secti vektor
int soucetVektoru(typVektorCelychCisel pole, int pocet)
{
    int soucet=0;
    for(int i=0;i<pocet;i++)
    {
        soucet+=pole[i];
    }
    return soucet;
}
// Priklad - sestaveni poradi radku podle souctu jejich hodnot
int poradiRadku(typMaticeCelychCisel pole, int radky, int sloupce)
{
    int poradi=0;
    int maxSoucet=soucetVektoru(pole[0], sloupce);
    // i=1 protoze nulu uz mame
    for(int i=1;i<radky; i++) 
    {
        int pom=soucetVektoru(pole[i], sloupce);
        if(pom>maxSoucet)
        {
            maxSoucet=pom;
            poradi=i;
        }
    }
    return poradi+1; // protoze indexujeme od nuly
}
int main()
{
    int r, s;
    typMaticeCelychCisel mat;
    cin>>r>>s;
    
    nactiMatici(mat, r, s);
    vypisMatici(mat, r, s);
    cout << poradiRadku(mat, r, s);

    return 0;
}

// ***************************************************************************************************************
// PRIKLAD 4
// ***************************************************************************************************************
#include <iostream>
#include <iomanip>
using namespace std;

const int maxRozsah = 100;
typedef int typVektorCelychCisel[maxRozsah];
typedef typVektorCelychCisel typMaticeCelychCisel[maxRozsah];

void vypisVektor(typVektorCelychCisel pole, int pocet)
{
    for(int i=0;i<pocet;i++)
    {
        cout<<right<<setprecision(5)<<setw(6)<< " "<<pole[i];
    }
}

void vypisMatici(typMaticeCelychCisel pole, int radky, int sloupce)
{
    for(int i=0; i<radky; i++)
    {
        vypisVektor(pole[i], sloupce);
        cout << endl;
    }
}
// Jednicky
void jednicky(typMaticeCelychCisel pole, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int r=0;r<n;r++)
        {
            for(int s=0;s<n;s++)
            {
                pole[r][s]=1;
            }
        }
    }
}
// Hlavni diagonala
void hl_diagonala(typMaticeCelychCisel pole, int n)
{
    for(int r=0;r<n;r++)
        {
            pole[r][r]=0;
        }
}
// Vedlejsi diagonala
void ved_diagonala(typMaticeCelychCisel pole, int n)
{
    for(int r=0;r<n;r++)
        {
            pole[r][n-1-r]=2;
        }
}
// Po řadcich
void poRadcich(typMaticeCelychCisel pole, int n)
{
    int c=1;
    for(int r=0;r<n;r++)
    {
        for(int s=0;s<n;s++)
        {
            //pole[r][s]=c++;
            pole[r][s]=r*n+s+1;
            
        }
        
    }
}
//Po sloupcich
void poSloupcich(typMaticeCelychCisel pole, int n)
{
    int c=1;
    for(int r=0;r<n;r++)
    {
        for(int s=0;s<n;s++)
        {
            pole[s][r]=c++;
            //pole[s][r]=r*n+s+1;
            
        }
        
    }
}

// Priklad 2 - nacteni radku
void nactiVektor(typVektorCelychCisel pole, int pocet)
{
    for(int i=0; i<pocet; i++)
    {
        cin>>pole[i];
    }
}
void nactiMatici(typMaticeCelychCisel pole, int radky, int sloupce)
{
    for(int i=0; i<radky;i++)
    {
        nactiVektor(pole[i], sloupce);
    }
}
// Priklad 3 - secti vektor
int soucetVektoru(typVektorCelychCisel pole, int pocet)
{
    int soucet=0;
    for(int i=0;i<pocet;i++)
    {
        soucet+=pole[i];
    }
    return soucet;
}
// Priklad - sestaveni poradi radku podle souctu jejich hodnot
int poradiRadku(typMaticeCelychCisel pole, int radky, int sloupce)
{
    int poradi=0;
    int maxSoucet=soucetVektoru(pole[0], sloupce);
    // i=1 protože nulu už mame
    for(int i=1;i<radky; i++) 
    {
        int pom=soucetVektoru(pole[i], sloupce);
        if(pom>maxSoucet)
        {
            maxSoucet=pom;
            poradi=i;
        }
    }
    return poradi+1; // protoze indexujeme od nuly
}
// Priklad 4 - Prohozeni poradi
void prohodMinMax(typMaticeCelychCisel pole, int radky, int sloupce)
{
    int minR = 0, minS=0, maxR=0, maxS=0;
    for(int r=0; r<radky;r++)
    {
        for(int s=0;s<radky;s++)
        {
            if(pole[r][s]>pole[maxR][maxS])
            {
                maxS=s;
                maxR=r;
            }
            else if(pole[r][s]<pole[minR][minS])
            {
                minS=s;
                minR=r;
            }
        }
    }
    // bez pomocnych promennych
    pole[minR][minS]+=pole[maxR][maxS];
    pole[maxR][maxS]=pole[minR][minS]-pole[maxR][maxS];
    pole[minR][minS]=pole[minR][minS]-pole[maxR][maxS];

}

int main()
{
    int r, s;
    typMaticeCelychCisel mat;
    cin>>r>>s;
    
    nactiMatici(mat, r, s);
    vypisMatici(mat, r, s);
    cout << poradiRadku(mat, r, s)<< endl;
    prohodMinMax(mat, r, s);

    return 0;
}

// ***************************************************************************************************************
// PRIKLAD 5 - Presypaci hodiny
// ***************************************************************************************************************

// ***************************************************************************************************************
// Vytvorte datovy typ pro dvourozmerne pole. Vytvorte proceduru na vypis matice. Od uzivatele nactete rozmer ctvercove matice a naplnte ji (uvedene priklady jsou pro n=3):
// pouze jednickami,
// 1	1	1
// 1	1	1
// 1	1	1
// na hlavni diagonalu vlozte nuly,
// 0	1	1
// 1	0	1
// 1	1	0
// na vedlejsi diagonalu vlozte dvojky,
// 0	1	2
// 1	2	1
// 2	1	0
// po radcich od 1 do n2,
// 1	2	3
// 4	5	6
// 7	8	9
// po sloupcich 1 do n2,
// 1	4	7
// 2	5	8
// 3	6	9
// po spirale (jako sneka) 1 do n2.
// 1	2	3
// 8	9	4
// 7	6	5
// Vytvorte proceduru pro nactení matice N × M zadávanou po řádcích (N - pocet radku, M - pocet sloupcu).
// Urcete cislo radku s nejvetsim souctem.
// Prohodte minimalni a maximalni prvek v matici.
// Sestavte program, ktery je ulozi do ctvercove matice daneho radu n (n je liche) podle nasledujiciho schematu (uvedeno pro n=7) a tuto matici vytiskne.
// *	*	*	*	*	*	*
// *	*	*	*	*	
// *	*	*		
// *			
// *	*	*		
// *	*	*	*	*	
// *	*	*	*	*	*	*
// Matice predstavuje zadaní N linearních rovnic o N neznamych. Vytvorte algoritmus, ktery koreny vypocita.