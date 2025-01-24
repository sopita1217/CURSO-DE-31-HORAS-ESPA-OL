#include <iostream>
#include <string>
//INPUT Y OUTPUT DE FUNCIONES
void max_str(const std::string& input1, const std::string input2,std::string& output)
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}
void max_int(const int input1, const int input2, int& output)
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}
void max_double(const double input1, const double input2, double& output)
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}
int main()
{
std::string str1 = "holaaaaa";
std::string str2 = "adios";
std::string output;
max_str(str1, str2, output);
std::cout <<  "max_str : " << output <<std::endl;

int outin;
int in1{90};
int in2{330};
max_int (in1,in2,outin);
std::cout << "max_int : " << outin << std::endl;

double indbl1{13.09};
double indbl2{231.23};
double outdbl;
max_double(indbl1, indbl2, outdbl);
std::cout << "max_double : " << outdbl << std::endl;

}