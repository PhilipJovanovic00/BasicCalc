#include <iostream>
#include <string>
#include <cmath>

using namespace std;



int main() {

    char op;
    double num1, num2;
    double result;
    string userInput;
    char inputVerify;
    int verify = 0;

    do{
        cout << "Welcome to my little calculator program!" << endl;
        //cout << "would you like to proceed?" << endl;
        //cin >> reinterpret_cast<bool &>(inputVerify);
        cout << "please select an operator: \nAddition - 1 \nSubtraction -2 \nMultiplication - 3  " << endl;
        cout << "Division - 4 \nPower - 5 " << endl;
        cin >> userInput;

        if(userInput == "1"){
            cout << "You chose addition" << endl;
            op = '+';
            cout << "Please enter the first number" << endl;
            cin >> num1;
            cout << "Please enter the second number" << endl;
            cin >> num2;

            switch(op){
                case '+':
                    result = num1 + num2;
                    break;
            }
            cout << result << endl;

        }
        if(userInput == "2"){
            cout << "You chose subtraction" << endl;
            op = '-';
            cout << "Please enter the first number" << endl;
            cin >> num1;
            cout << "Please enter the second number" << endl;
            cin >> num2;

            switch(op){
                case '-':
                    result = num1 - num2;
                    break;
            }
            cout << result << endl;
        }
        if(userInput == "3"){
            cout << "You chose multiplication" << endl;
            op = '*';
            cout << "Please enter the first number" << endl;
            cin >> num1;
            cout << "Please enter the second number" << endl;
            cin >> num2;

            switch(op){
                case '*':
                    result = num1 * num2;
                    break;
            }
            cout << result << endl;
        }
        if(userInput == "4"){
            cout << "You chose division" << endl;
            op = '/';
            cout << "Please enter the first number" << endl;
            cin >> num1;
            cout << "Please enter the second number" << endl;
            cin >> num2;

            if(num2 != 0) {
                switch (op) {
                    case '/':
                        result = num1 / num2;
                        break;
                }
                cout << result << endl;
            }else{
                cout << "division durch 0 ist nicht erlaubt. " << endl;
                abort();
            }

        }
        if(userInput == "5"){
            cout << "You chose Power" << endl;
            cout << "Please enter the first number" << endl;
            cin >> num1;
            cout << "Please enter the number you want to power to the first number" << endl;
            cin >> num2;

            result = pow(num1, num2);
            cout << result << endl;

        }



        cout << "If you would like to continue press any button, if you want to quit press q" << endl;
        cin >> userInput;

    }while(userInput != "q");
    system("exit");


    return 0;
}
