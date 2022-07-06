#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    getline(cin, input);  //get input and store it in array of string "input"
    int o = input.length();
    int i = 0;
    int j = 0;

    cout<<"|";
    while(i < o){
        //Check number
        if(input[i]=='0' || input[i]=='1' || input[i]=='2' || input[i]=='3' || input[i]=='4' || input[i]=='5' || input[i]=='6' || input[i]=='7' || input[i]=='8' || input[i]=='9'){
            if(input[i+1]==' ' || input[i+1]==')' || i == o-1){
                cout<<"|num|";
            }
        }

        //Check operator(plus and minus)
        else if(input[i]=='+' || input[i]=='-'){
            if((input[i+2]=='0' || input[i+2]=='1' || input[i+2]=='2' || input[i+2]=='3' || input[i+2]=='4' || input[i+2]=='5' ||input[i+2]=='6' || input[i+2]=='7' || input[i+2]=='8' || input[i+2]=='9' || input[i+2]=='(') &&
              (input[i-2]=='0' || input[i-2]=='1' || input[i-2]=='2' || input[i-2]=='3' || input[i-2]=='4' || input[i-2]=='5' ||input[i-2]=='6' || input[i-2]=='7' || input[i-2]=='8' || input[i-2]=='9' || input[i-2]==')'))
            {
                cout<<"|operator|";
            }else if(!(input[i+1]=='0' || input[i+1]=='1' || input[i+1]=='2' || input[i+1]=='3' || input[i+1]=='4' || input[i+1]=='5' || input[i+1]=='6' || input[i+1]=='7' || input[i+1]=='8' || input[i+1]=='9')){
                cout<<"|error|";
                break;
            }
        }

        //Check operator(multiplier and divider)
        else if(input[i]=='x' || input[i]=='X' || input[i]==':'){
            if((input[i+2]=='0' || input[i+2]=='1' || input[i+2]=='2' || input[i+2]=='3' || input[i+2]=='4' || input[i+2]=='5' ||input[i+2]=='6' || input[i+2]=='7' || input[i+2]=='8' || input[i+2]=='9' || input[i+2]=='(') &&
              (input[i-2]=='0' || input[i-2]=='1' || input[i-2]=='2' || input[i-2]=='3' || input[i-2]=='4' || input[i-2]=='5' ||input[i-2]=='6' || input[i-2]=='7' || input[i-2]=='8' || input[i-2]=='9' || input[i-2]==')'))
            {
                cout<<"|operator|";
            }
        }

        //Check E-notation
        else if(input[i]=='E' || input[i]=='e'){
            if(!(input[i+1]=='0' || input[i+1]=='1' || input[i+1]=='2' || input[i+1]=='3' || input[i+1]=='4' || input[i+1]=='5' ||input[i+1]=='6' || input[i+1]=='7' || input[i+1]=='8' || input[i+1]=='9' || input[i+1]=='+' || input[i+1]=='-') ||
               !(input[i-1]=='0' || input[i-1]=='1' || input[i-1]=='2' || input[i-1]=='3' || input[i-1]=='4' || input[i-1]=='5' ||input[i-1]=='6' || input[i-1]=='7' || input[i-1]=='8' || input[i-1]=='9'))
                {
                    cout<<"|error|";
                    break;
                }
        }

        //Check comma
        else if(input[i]==','){
            if(!(input[i+1]=='0' || input[i+1]=='1' || input[i+1]=='2' || input[i+1]=='3' || input[i+1]=='4' || input[i+1]=='5' ||input[i+1]=='6' || input[i+1]=='7' || input[i+1]=='8' || input[i+1]=='9') ||
               !(input[i-1]=='0' || input[i-1]=='1' || input[i-1]=='2' || input[i-1]=='3' || input[i-1]=='4' || input[i-1]=='5' ||input[i-1]=='6' || input[i-1]=='7' || input[i-1]=='8' || input[i-1]=='9'))
               {
                cout<<"|error|";
                break;
               }
        }

        //Check Left Parenthesis
        else if(input[i]=='('){
            cout<<"|kurbuka|";
            j = i;
            while(j < o && input[j]!=')'){
                    j++;
                }
            if(input[j]!=')'){
                cout<<"|error|";
                break;
            }
        }

        //Check Right Parenthesis
        else if(input[i]==')'){
            cout<<"|kurtutup|";
            j = i;
            while((j < o && input[j]!='(' )){
                    j++;
                }
            if(input[j]!='('){
                cout<<"|error|";
                break;
            }
        }

        else if(input[i]!= ' '){
            cout<<"|error|";
            break;
        }

        i++;
    }
    cout<<"|";
}