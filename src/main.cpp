#include "task_1.h"
int main() {
    /*cout<<"Task 1"<<endl;
    Stack first;
    first.push(5);
    first.push(6);
    first.push(7);
    cout<<"The top value is "<<first.top()<<endl;
    first.pop();
    cout<<"The top value is "<<first.top()<<endl;
    cout<<"Task 2"<<endl;
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
    if (cars.size() !=0){cout<<0<<endl;}*/
    cout<<"Task 3"<<endl;
    Stack values;
    string postfix = "";
    cout<<"Enter the expression:";
    getline(cin, postfix);
    int value = 0;
    int number1 = 0;
    int number2 = 0;
    int result = 0;
    for (int i=0;i<postfix.size();i++){
        if (postfix[i] == '+'){
            number1 = values.pop();
            number2 = values.pop();
            result = number1+number2;
            values.push(result);
        } else if (postfix[i] == '-'){
            number1 = values.pop();
            number2 = values.pop();
            result = number1-number2;
            values.push(result);
        } else if (postfix[i] == '*'){
            number1 = values.pop();
            number2 = values.pop();
            result = number1*number2;
            values.push(result);
        } else if (postfix[i] == ' '){

        } else {
            value = postfix[i] - '0';
            cout<<value<<endl;
            values.push(value);
        }
    }
    cout<<"The result is "<<values.top()<<endl;
    cout<<"Task 4"<<endl;
    return 0;
}
