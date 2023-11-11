#include "task_1.h"
int main() {
    Stack first;
    first.push(5);
    first.push(6);
    first.push(7);
    cout<<"The top value is "<<first.top()<<endl;
    first.pop();
    cout<<"The top value is "<<first.top()<<endl;
    cout<<"Task 2";
    Stack cars;
    int amount_n;
    cin >> amount_n;
    int n;
    int count = 1;
    for (int i=0;i<amount_n;i++){
        cin>>n;
        cars.push(n);
        if (n==count){count++; cars.pop();}
        while (cars.size()>0){
            if (cars.top()==count){count++; cars.pop();}
            else break;
        }
    }
    if (cars.size() !=0){cout<<0<<endl;}
    return 0;
}
