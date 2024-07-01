#include<bits/stdc++.h>

using namespace std;

int main(){

    srand(time(0));

    int a= rand();
    int n = 10000;
    ofstream fout("100k-shift.txt");
    for(int i= 0; i<n;i++){
        int a= rand();
        fout<<a<<endl;
    }

    return 0;

}
