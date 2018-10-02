#include<iostream>
using namespace std;


class Employee{

private:
  string first_name;
  string second_name;
  double monthly_salary;

public:
  Employee(double salary)
  {
    if(salary>=0)
      {
        monthly_salary = salary;
      }
    else
    {
      monthly_salary = 0.0;
    }

  }
void setFirstName(string f_name)
{
  first_name = f_name;
}
void setSecondName(string s_name)
{
  second_name = s_name;
}
double getSalary()
{
  return monthly_salary;
}
string getFirstName()
{
  return first_name;
}
string getLastName()
{
  return second_name;
}



};




int main()
{
  string f_name, l_name;
  int salary;

    cout<<"Enter First_Name : ";
    cin>>f_name;
    cout<<"Enter Last_Name : ";
    cin>>l_name;
    cout<<"Enter Salary : ";
    cin>>salary;

Employee acct1(salary);
acct1.setFirstName(f_name)
acct1.setSecondName(l_name)
cout<<acct1.getFirstName, acct1.getLastName, acct1.getSalary<<endl;


  }

  return 0;
}
