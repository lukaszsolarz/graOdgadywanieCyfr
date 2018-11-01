#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int liczba, strzal, ileprob=0;
int main()
{
    cout << "pomyslalem sobie liczbe od 0 do 100" << endl;
    srand(time(NULL));
    liczba=rand()%100+1 ;


    while (strzal !=liczba)
    {
        ileprob++;
        cout<< "zgadnij jaka ( to twoja "<<ileprob<< "proba)"<<endl;
        cin >> strzal;

        if (strzal ==liczba )
        cout<<"udalo sie, wygrywasz w"<<ileprob<< "probie)"<<endl;

        if (strzal <liczba )
        cout<<"za malo "<<endl;

        else if (strzal>liczba )
        cout<<"za duzo  "<<endl;
    }




    return 0;

}
