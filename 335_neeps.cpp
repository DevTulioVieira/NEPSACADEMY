#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, b, c, d, x1, x2, soma;
    cin>>a>>b>>c>>d;

    x1= c-a;
    x2= d-b;

    if(x1<0){
		x1=x1*-1;
	}
	if(x2<0){
		x2=x2*-1;
	}
	soma=x1+x2;
    cout<<soma;
}
