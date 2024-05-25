// Write a program to count the minimum number of notes in a given amount using the switch statement.
// Input 1: 510
// Output1 : notes of “500” = 1 and notes of “10” = 1
#include<iostream>
using namespace std;
int main(){
    int amount;
    int note1 =0,note2 = 0,note5 = 0;
    int note10 = 0,note20 = 0 ,note50 = 0;
    int note100 = 0,note200 = 0,note500 = 0;
//no of notes of each rupees
    cout<<"Enter the amount: ";
    cin>>amount;
    switch(amount>=500){ //500
        case 1 :
        note500 = amount/500;
        amount -= (note500*500);
        break;
    }
    switch(amount>=200){ //200
        case 1 :
        note200 = amount/200;
        amount -= (note200*200);
        break;
    }
    switch(amount>=100){ //100
        case 1 :
        note100 = amount/100;
        amount -=(note100*100);
        break;
    }
    switch(amount>=50){ //50
        case 1 :
        note50 = amount/50;
        amount -= (note50*50);
        break;
    }
    switch(amount>=20){ //20
        case 1 :
        note20 = amount/20;
        amount -= (note20*20);
        break;
    }
    switch(amount>=10){ //10
        case 1 :
        note10 = amount/10;
        amount -= (note10*10);
        break;
    }
    switch(amount>=5){ //5
        case 1 :
        note5 = amount/5;
        amount -= (note5*5);
        break;
    }
    switch(amount>=2){ //2
        case 1 :
        note2 = amount/2;
        amount -= (note2*2);
        break;
    }
    switch(amount>=1){ //1
        case 1 :
        note1 = amount/1;
        amount -= (note1*1);
        break;
    }
    int totalnotes = note1+note2+note5+note10+note20+note50+note100+note200+note500;
    cout<<totalnotes;
}   