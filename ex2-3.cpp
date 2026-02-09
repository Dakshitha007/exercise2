#include<iostream>
using namespace std;
int main(){
    const int GREEN=30,YELLOW=5,RED=25;
    int GREE=GREEN,YELLO=YELLOW,RE=RED;
    int timeofdate;
    cout<<"enter the time of the day(1/2/3):";
    cin>>timeofdate;
    switch(timeofdate){
        case 1:GREE=40;YELLO=5;RE=20;break;
        case 2:GREE=30;YELLO=5;RE=25;break;
        case 3:GREE=25;YELLO=5;RE=30;break;
        default:cout<<"Invalid input!!";
    }
    int c=1;
    while(c<=10){
        int am;
        cout<<"is there any ambulance sound(1/0):";
        cin>>am;
        for(int i=0;i<4;i++){
            cout<<"SIGNAL AT THE JUNCTION :"<<i+1; 
            if(am){
                cout<<"GREEN SIGNAL IS EXTENDED DUE TO AN EMERGENCY!!";
            }
            else{
                cout<<"GREEN:"<<GREE<<endl<<"YELLOW:"<<YELLO<<endl<<"RED"<<RE<<endl;
            }
        }
    
        c++;
    }
    return 0;

}