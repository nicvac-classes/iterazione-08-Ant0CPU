#include <iostream>
using namespace std;

int main() {
    int N, i, p, d;
    float voto, somma, media;
    string stato, nome;

    somma=0;
    p=0;
    d=0;

    do 
    {
        cout<<"Quanti studenti ci sono in una classe?"<<endl;
        cin>>N;
    }
    while (N<0);

    for(i=1; i<=N; i++ )
    {
        cout<<"Come si chiama lo studente?"<<endl;
        cin>>nome;
        cout<<"Nome: "<<nome<<endl;
        
        cout<<"Inserire il suo voto il informatica"<<endl;
        cin>>voto;
        if (voto>=6)
        {
            stato="Promosso";
            p=p+1;
        }
        else
        {
            stato="Ha il debito";
            d=d+1;
        }

        cout<<stato<<endl;
        somma=somma+voto;
    }
    media=somma/(i-1);
    cout<<"Media della classe: " <<media<<endl;
    
    cout<<"Sono stati promossi: " <<p<<endl;
    cout<<"Hanno avuto il debito: " <<d<<endl;
}