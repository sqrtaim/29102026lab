#include <iostream>
using namespace std;
int toMinutes(int h , int m);
int convertTime(int current, int correct);
int main() {
int h1 , m1 , h2 , m2;
char colon;
cin>>h1>>colon>>m1>>h2>>colon>>m2;
cout<<convertTime(toMinutes(h1,m1), toMinutes(h2,m2))<<endl;
return 0;
}

int toMinutes(int h , int m ){
    return h*60+m;
}
int convertTime(int current, int correct){
    int diff= correct-current;
    int operation = 0;   //adds operations step with each whole division
    operation += diff/60; diff%= 60;
    operation += diff/15; diff%= 15;
    operation += diff/5; diff%= 5;
    operation += diff; 
    return operation;
}