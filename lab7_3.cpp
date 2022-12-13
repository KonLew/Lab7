#include <iostream>
#include <cmath>
using namespace std;

int adiff(int A,int B){
    int c = (abs(A-B))%360;
    if (c>180){
        return c = 360 - c;
    }else{
        return c;
        }
}