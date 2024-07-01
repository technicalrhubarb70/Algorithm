#include<bits/stdc++.h>

using namespace std;

int main(){

    srand(time(0));

    int a= rand();
    ofstream fout("30.txt");
    for(int i= 0; i<40;i++){
        int a= rand();
        fout<<a<<endl;
    }

    return 0;

}
