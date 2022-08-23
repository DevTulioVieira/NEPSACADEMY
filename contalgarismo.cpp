#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, i, x, b=0, c=0;

    cin>>a;
    int num[a];
    int soma[10];

    while(b<10){
        soma[b]=0;
        b++;
    }
    b=0;
    for(i=0; i<a; i++){
        cin>>num[a];
        while(num[a]>0){
            x=num[a]%10;
            while(c==0){
                if(x==b){
                    soma[x]+=1;
                    c=1;
                }
                b++;
            }
            b=0;
            c=0;
            num[a]/=10;
        }
    }
    b=0;
    while(b<10){
        cout<<b<<" - "<<soma[b]<<"\n";
        b++;
    }
}
