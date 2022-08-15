#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i1, i2, f1, f2, comp=0, aux=0;

    cin>>i1>>i2>>f1>>f2;

    if(i1==f1 && i2==f2){
        comp=1;
    }

    while(comp==0){
        if(i2!=f2){
            if(f2==0){
                f2=1;
            }else{
                f2=0;
            }
            if(f1==0){
                f1=1;
            }else{
                f1=0;
            }
            aux++;
        }
        if(f1!=i1){
            if(f1==0){
                f1=1;
            }else{
                f1=0;
            }
            aux++;
        }

        if(i1==f1 && i2==f2){
            comp=1;
        }
    }
    cout<<aux;
}