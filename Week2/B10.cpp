#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    const int MAX=1000;
    double vectorA[MAX];
    double vectorB[MAX];
    for(int i=0;i<n;i++){
        cin>>vectorA[i];
    }
    for(int i=0;i<n;i++){
        cin>>vectorB[i];
    }
    double product=0;
    for(int i=0;i<n;i++){
        product+= vectorA[i]*vectorB[i];
    }
    cout<<fixed<<setprecision(2)<<product;
    
}
