//
// Created by Asus on 08.11.2023.
//

#ifndef SAYIDALGORITHMSWEEK3LAB_TASK_2_H
#define SAYIDALGORITHMSWEEK3LAB_TASK_2_H
#include <iostream>
using namespace std;
struct stack{
    int truck[2000];
    int length = 0;
    int pop (){return truck[--length];}
    void push (int x){truck[length++] = x;}
    int front () {return truck[length-1];}
    int size () {return length;}
}car;

#endif //SAYIDALGORITHMSWEEK3LAB_TASK_2_H
