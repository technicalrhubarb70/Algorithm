
#include<bits/stdc++.h>

using namespace std;

void shiftLeft(int *p, int n){
    for(int i=0; i<n; i++){
            cout<<a[i]<<endl;

    }
}
int main(){
int n=10000;
int *a= new int[n];

ifstream fin("10k-shift.txt");

for(int i=0; i<n; i++){
    fin>>a[i];
}


printList(a,n);

int *m=shiftLeft(a,n,9000);
printList(m,n);

}
