#include<iostream>
#include<iomanip>
#include<vector>
#include <ctime>
using namespace std;

 class Color {

    int red;
    int blue;
    int green;

    public:

    Color() { red=0, blue=0, green=0; }

    
    Color(int r, int g, int b){red=r, green=g, blue=b ;}

    Color(int r){red=r, green=0, blue=0;} 
    void setRed(int i){ red = i;}
    void setBlue(int i){ blue = i;}
    void setGreen(int i){ green = i;}

    int getRed(){return red;}
    int getBlue(){return blue;}
    int getGreen(){return green;}

    void print(int i){
        cout <<  left << "color" << setw(5)<< i+1  << "red: "
        << setw(5) << red  << "blue: "<< setw(5) << blue 
        << "green: " << green << endl;
    }
 };
 int main(){
    srand(time(0));

    vector<Color> colors;

    colors.push_back(Color(rand() % 256, rand() % 256, rand() % 256));  
    colors.push_back(Color(rand() % 256, rand() % 256, rand() % 256));  
    colors.push_back(Color(rand() % 256));                              
    colors.push_back(Color());                                          
    colors.push_back(Color(rand() % 256, rand() % 256, rand() % 256));  

 
    for (int i = 0; i < 5; i++) {
        colors[i].print(i);
    }

    return 0;
 }