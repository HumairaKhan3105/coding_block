//Q6. Grade Card Program (Based on Marks)

#include<iostream>
using namespace std;
int main(){
    int total = 0,avg,percentage;
    int OS,DBMS,DA,ML,COA;
    cout<<"Enter the marks obtained in Operating System:";
    cin>>OS;
    cout<<"Enter the marks obtained in DBMS:";
    cin>>DBMS;
    cout<<"Enter the marks obtained in Data Analytics:";
    cin>>DA;   
    cout<<"Enter the marks obtained in Machine Learning:";
    cin>>ML;
    cout<<"Enter the marks obtained in Computer organizationa nd aplication :";
    cin>>COA;   
    total  = OS + DBMS + DA + ML + COA;
    cout<<"The total marks obtained is :"<<total<<endl;
    avg = total / 5;
    cout<<"The average marks is :"<<avg<<endl;
    percentage = (total * 100) / 500;
    cout<<"The percentage is :"<<percentage<<"%"<<endl;
    if(percentage >= 90){
        cout<< "Grade : A+";
    }
    else if(percentage >= 80){
        cout<< "Grade : A";
    }
    else if(percentage >= 70){
        cout<< "Grade : B";
    }
    else if(percentage >= 60){
        cout<< "Grade : C";
    }
    else if(percentage >= 50){
        cout<< "Grade : D";
    }
    else{
        cout<< "Grade : F";
    }
}