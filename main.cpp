#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n,d;
    int k;
    bool wynik;
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
    int s=1;
    while(((n-1)%pow(2,s))>0){
       s = s+1;
    }
    s=s-1;
    d = n/pow(2,s);
    for(int i=0;i<k;i++){
        int a=rand()%n;
        if(pow(a,d)%n==0)
            wynik=0;
        else
            for(int r=0;r<s-1;s++){
                if(pow(a,d*pow(2,r))==0)
                    wynik=1;
                else
                    wynik=0;
            }
    }
    if(wynik==0)
        cout<<"liczba nie jest pierwsza"<<endl;
    if(wynik==1)
        cout<<"liczba prawdopodobnie pierwsza"<<endl;

    return 0;
}

