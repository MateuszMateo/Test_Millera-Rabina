#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

long long potega(long long d,long long f){
    long long g=d;
    if(f==1)
        return d;
    else
        for(int i=1;i<f;i++){
            g=g*d;
        }
    return g;
}
long long potega_modulo(long long d,long long f,long long n){
    long long g=d;
    if(f==1)
        return d%n;
    else
        for(int i=1;i<f;i++){
            g=(g*d)%n;
        }
    return g;
}

int main()
{
    srand(time(0));
    long long n,d;
    int k;
    bool wynik;
    bool czy_swiadek;
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
            wynik = 0;
            for(int i=0;i<k;i++){
                int a=rand()%(n-1) + 1;
                if(potega(a,d)%n==1){
                    czy_swiadek=false;
                }
                else{
                    for(int r=0;r<s-1;r++){
                        long long o=d*potega(2,r);
                        if(potega(a,o)%n!=n-1){
                            czy_swiadek=true;
                        }
                        else{
                            czy_swiadek=false;
                            break;

                        }
                    }
                }
                if(czy_swiadek=true){
                    wynik=0;
                    break;
                }
                if(czy_swiadek=false){
                    wynik=1;
                }
            }
            if(wynik==0){
                cout<<"liczba nie jest pierwsza"<<endl;}
            else{
                if(wynik==1){
                    cout<<"liczba prawdopodobnie pierwsza"<<endl;}
            }
            return 0;
        }
    }
}
