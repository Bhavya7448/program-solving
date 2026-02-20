#include<iostream>
using namespace std;

int main(){
    int a[10][10], r, c;

    cout<<"Enter rows and columns: ";
    cin>>r>>c;

    cout<<"Enter elements:\n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>a[i][j];

    for(int i=0;i<r;i++){
        for(int pass=0;pass<c-1;pass++){
            for(int j=0;j<c-pass-1;j++){
                if(a[i][j] > a[i][j+1]){
                    int temp = a[i][j];
                    a[i][j] = a[i][j+1];
                    a[i][j+1] = temp;
                }
            }
        }
    }

    cout<<"Sorted Matrix (Row-wise):\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
