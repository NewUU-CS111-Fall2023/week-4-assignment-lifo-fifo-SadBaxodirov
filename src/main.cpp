/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task_1.h"
#include "task_2.h"

int main() {
    std::cout << "Task 1" << std::endl;
    // call for task 1
    Stack first;
    first.push(5);
    first.push(6);
    first.push(7);
    cout<<"The top value is "<<first.top()<<endl;
    first.pop();
    cout<<"The top value is "<<first.top()<<endl;
    std::cout << "Task 2" << std::endl;
    // call for task 2
    int amount_n;
    cin >> amount_n;
    int n;
    int count = 1;
    for (int i=0;i<amount_n;i++){
        cin>>n;
        car.push(n);
        if (n == count){count++; cout<<car.pop()<<endl;}
        while (car.size() > 0){
            if (car.front() == count){count++; cout<<car.pop()<<endl;}
            else break;
        }
    }

    if (car.size() == 0) {cout << "YES" << endl;}
    else cout << "NO" << endl;
    std::cout << "Task 3" << std::endl;
    // call for task 3
    std::cout << "Task 4" << std::endl;
    // call for task 4
    std::cout << "Task 5" << std::endl;
    // call for task 5
    return 0;
}
