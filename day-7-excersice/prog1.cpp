#include<iostream>
using namespace std;

int main(){

    string e_name;
    double hra,da,ma,ta,pt,pf,tds,gross,net;
    int salary;

    cout<<"enter your name: ";
    cin>>e_name;

    cout<<"enter your salary: ";
    cin>>salary;

    hra = salary * 0.1;
    da = salary * 0.08;
    ma = salary * 0.05;
    ta = salary * 0.08;

    gross = (salary+hra+da+ma+ta);

    pt = 200;
    pf = salary * 0.12;
    tds = gross * 0.10;

    net = gross - (pt + pf + tds);

    cout<<"net salary :"<<net;

    return 0;

}