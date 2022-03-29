#include <iostream>
using namespace std;


int main() {
    int N, sum=0;
    cout<<"plz enter N"<<endl ;
    cin>>N;
    for(int i=1; i<=N;i++)
        sum+=i;
    cout<<"the sum from 1 to N = : "<<sum ;
}
