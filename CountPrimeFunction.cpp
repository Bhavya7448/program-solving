#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num<2) return false;
    for(int i=2;i*i<=num;i++)
        if(num%i==0)
            return false;
    return true;
}

int countPrime(int a[][10], int r, int c){
    int count=0;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(isPrime(a[i][j]))
                count++;
    return count;
}

int main(){
    int a[10][10], r, c;
    cin>>r>>c;

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>a[i][j];

    cout<<"Prime Count = "<<countPrime(a,r,c);
}
