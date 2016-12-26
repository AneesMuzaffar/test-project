#include <iostream>

using namespace std;

long double prob(int , int , int) ;

int main()
{
    cout << "Enter the number, picks & mega pick" << endl;
    int no , p , mp ;
    double chance ;
    while((cin >> no >> p >> mp) && (no >= p))
    {
        chance = prob(no , p , mp) ;
        cout << "You have one in " << chance << " chance of winning." ;
    }

    return 0;
}
long double prob(int no , int p , int mp)
{
    double chance = 1 ;
    double pp = p , nno = no , mmp = mp ;
    for( ;pp > 0;pp--,nno--)
    {
        chance = chance * (nno/pp) ;
    }
    return (chance*(1/mmp)) ;
}
