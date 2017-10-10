#include<iostream>
using namespace std;

int main (){

int i,n,sum=0,n1=0,n2=1,next=0;
cout<<"Enter Series Length: ";
cin>>n;

for (i=0;i<n;i++){
    next = n1 + n2;
    n1 = n2;
    n2 = next;
    if(next>4000000){
        //cout <<"\nMore than 4000000\n"<<i;
        break;
    }else{
        if(next%2==0){
        sum = sum + next;
        }
    }

    //cout <<next << " ";
}
cout <<"\nSum of the even-valued terms: "<<sum << " ";
}
