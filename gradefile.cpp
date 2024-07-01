#include<bits/stdc++.h>

using namespace std;


int main(){
int n=40;
int *a= new int[n];

ifstream fin("30.txt");

for(int i=0; i<n; i++){
    fin>>a[i];
    int sum +=a[i];
    int average = sum/n;
    cout<<"Average"<<average<<endl;
 }


for(int i=0; i<n; i++){
    cout<<a[i]<<endl;
}
}
