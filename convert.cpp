#include<iostream>
#include<cmath>
#include<string>

using namespace std;


class Binary
{
    public:
    string to_binary(int input)
    {   
        string binary = get_binary(input);
        string reversed;
        for(int i = binary.length() - 1; i >= 0; i--)
        {
            char bit = binary[i];
            string bit_s(1, bit);
            reversed.append(bit_s);
        }
        return reversed;
    };
    private:
    string get_binary(int num)
    { 
          string binary;
          int remainder;
          while(true)
          {
              remainder = num%2;
              num /= 2;
              binary.append(to_string(remainder));
              if(num < 2){
                  binary.append(to_string(num));
                  break;
              }
          }
          return binary;
    }
};


int main()
{   
    int inp_num;
    Binary binary;
    cout << "Please enter the Decimal Number to convert: " << endl;
    cin >> inp_num;
    cout << "The equavilent binary number is: " << endl;
    cout << binary.to_binary(inp_num) << endl;
    return 0;
}