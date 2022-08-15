#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int cona, conb, i, j, somax1=0, somax2=0, aux=0;

    cin>>cona>>conb;

    int x1[cona], x2[conb];

    for(i=0; i<cona; i++){
        cin>>x1[i];
    }
    for(i=0; i<conb; i++){
        cin>>x2[i];
    }

    for(i=0; i<cona; i++){
        aux=0;
        for(j=0; j<conb; j++){
            if(x1[i]==x2[j]){
                j==conb;
                aux=1;
            }
            if(j>0 && x1[i]==x1[i-1]){
                aux=1;
            }
        }
        if(aux==0){
            somax1++;
        }
    }

    for(i=0; i<conb; i++){
        aux=0;
        for(j=0; j<cona; j++){
            if(x2[i]==x1[j]){
                j==cona;
                aux=1;
            }
            if(j>0 && x2[i]==x2[i-1]){
                aux=1;
            }
        }
        if(aux==0){
            somax2++;
        }
    }

    if(somax1>=somax2){
        cout<<somax2;
    }else{
        cout<<somax1;
    }
    
}