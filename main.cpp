#include <iostream>
#include <cmath>

using namespace std;

    long long potega(int d,int f){
        int g=d;
        if(f==1)
            return d;
        else
            for(int i=1;i<f;i++){
                g=g*d;
            }
            return g;
    }

int main()
{
    long long n,d;
    int k;
    bool wynik;
    cout<<"Podaj liczbe do sprawdzenia:"<<endl;
    cin>>n;
    if(n<=3){
        cout<<"podana liczba to liczba pierwsza"<<endl;}
    else{
        if(n%2==0){
            cout<<"podana liczba nie jest liczba pierwsza"<<endl;}
    else{
    cout<<"Podaj dokladnosc testu:"<<endl;
    cin>>k;
    int s=1;
    while(((n-1)%potega(2,s))==0){
       s = s+1;
    }
    s=s-1;
    d = n/potega(2,s);
    for(int i=0;i<k;i++){
        int a=rand()%n;
        if(potega(a,d)%n==0){
            wynik=0;}
        else
            for(int r=0;r<s-1;r++){
                int o=d*potega(2,r);
                if(potega(a,o)>1){
                    wynik=1;}
                else{
                    wynik=0;
            }
    }
    }
    if(wynik==0){
        cout<<"liczba nie jest pierwsza :-("<<endl;}
    if(wynik==1){
        cout<<"liczba prawdopodobnie pierwsza"<<endl;}

    return 0;
}
    }
}
