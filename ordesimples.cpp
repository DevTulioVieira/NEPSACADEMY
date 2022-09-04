#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

int main(){
    list<int> num;
    int a, i, aux;
    cin>>a;

    for(i=0; i<a; i++){
        cin>>aux;
        num.push_front(aux);
    }

    num.sort();

    for(i=0; i<a; i++){
        cout<<num.front()<<" ";
        num.pop_front();
    }

}
