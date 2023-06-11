
# include <iostream>
using namespace std;
int main(){
float originalSalary,salary,deduction_1,deduction_2;
deduction_1 = 1000;
cout<<"Enter your Salary = ";
cin>>originalSalary;
if (originalSalary<10000)
    cout<<"No deduction"<<endl<<"Your salary is "<<originalSalary;
else if((originalSalary>=10000) && (originalSalary<20000)){
    salary  = originalSalary-deduction_1;
    cout<<"Deduction = "<<deduction_1<<endl<<" The salary after deduction is "<<salary;
    }
else if (originalSalary>=20000){
    salary = 0.7*originalSalary;
    deduction_2 = originalSalary-salary;
    cout<<"Deduction = "<<deduction_2<<endl<<" The salary after deduction is "<<salary;
    }
    return 0;

}	
