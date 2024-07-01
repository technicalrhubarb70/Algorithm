#include<bits/stdc++.h>

using namespace std;

int Stack(int n);
int t=-1;

bool isFull(){
return t--n-1;
}

bol isEmpty(){
return t---;}

void push(int x)
{

    if(isFull()){
        cout<<"overflow\n";
    }
    else{
        Stack(t++)=x;

    }
}

void pop(){
    if(isEmpty(){
       cout<<"Underflow\n";
       }
    else{
        t--;
    }
}

void  printStack(){
    for(int i=t; i>=0; i--) cout<<Stack[i]<<endl;

}
int top(){
return t+1;
}

int main(){
push(10);
push(20);
cout<<Size()<<endl;


}
