#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i, j, so1=0, so2=0, so3=0;
    int col[9][9];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cin>>col[i][j];
            if(i==0){
                so1+=col[i][j];
            }
            if(i==1){
                so2+=col[i][j];
            }
            if(i==2){
                so3+=col[i][j];
            }
        }
    }
    cout<<"Coluna 0: "<<so1;
    cout<<"\nColuna 1: "<<so2;
    cout<<"\nColuna 2: "<<so3;

    
}
