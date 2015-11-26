#include <iostream>

using namespace std;

int main()
{
    long long n,d,s=0,s2=1;
    int k;
    cout<<"Podaj liczbe do sprawdzenia:"<<endl;
    cin>>n;
    if(n<=3)
        cout<<"podana liczba to liczba pierwsza"<<endl;
    else
        if(n%2==0)
            cout<<"podana liczba nie jest liczba pierwsza"<<endl;
    else
    cout<<"Podaj dokladnosc testu:"<<endl;
    cin>>k;
    while ((s2 & (n-1)) == 0)
    {
       s  += 1;
       s2 <<= 1;
    }
    d = n/s2;
    for (i=0; i<k; i++){

    }
    cout<<s<<endl<<s2<<endl<<d;
    return 0;
}

