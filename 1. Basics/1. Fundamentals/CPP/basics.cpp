#include <iostream>
using namespace std;

void if_else_statement(int age){
    if (age>18){
        cout << "ADULT" << endl;
    }else if (age>10 && age<18){
        cout << "TEEN" << endl;
    }else if (age<10){
        cout << "CHILD" << endl;
    }else{
        cout << "NOT ADULT" << endl;
    }
}

void three_greater_elements(int a, int b,int c){
    if ((a>=b) && (a>=c)){
         cout << "GREATER NUMBER IS: "<<  a << endl;
    }else if ((b>=c) && (b>=a)){
         cout << "GREATER NUMBER IS: "<<  b << endl;
    }else{
        cout << "GREATER NUMBER IS: "<<  c << endl;
    }
    
}

void switchcase(int a){
    switch(a){
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "WEDNESDAY" << endl;
            break;
        case 4:
            cout << "THU" << endl;
            break;
        case 5:
            cout << "FRI" << endl;
            break;
        case 6:
            cout << "SAT" << endl;
            break;
        case 7:
            cout << "SUNDAY" << endl;
            break;
        default:
            cout << "INVALID NUMBER" << endl;
    }
}


void for_table_and_while_table(int a){
    for (int i=1;i<=10;i++){
        cout << a << " x " << i << " = " << a*i << endl;
    }

    cout << "IN WHILE LOOP" << endl;

    int i=1;
    while (i<=10){
        cout << a << " x " << i << " = " << a*i << endl;
        i+=1;
    }
}
int main() {
    int age;
    cin >> age ;
    if_else_statement(age);
    int a,b,c;
    cin >> a >> b >> c ;
    three_greater_elements(a,b,c);
    int day;
    cin >> day;
    switchcase(day);
    cout << "Hello world!" << endl;
    int table;
    cin >> table;
    for_table_and_while_table(table);
    return 0;
}