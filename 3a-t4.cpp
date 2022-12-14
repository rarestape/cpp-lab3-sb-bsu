#include<iostream> 
#include<limits>
using namespace std; 

int main()
{
int k, i = 1, sum_k = 0, number;


 cout<<"Enter the amount of integers to sum  (integer number) \n";
cin>>k;


while(cin.fail())  //checking if user print wrong amount and then asking the correct(integer)
{
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');
cout<<"Enter the amount of integers to sum  (integer number) \n";
cin>>k;

}
cin.ignore(numeric_limits<streamsize>::max(), '\n'); //for clear trash from cin 
do {
    if (k>0)
    {
      cout << "Enter integer nr. " << i << ": "; 
      cin >> number;
      if(cin.fail())//checking if user print wrong number and then asking the correct(integer)
        {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(),'\n');
         cout<<"you have entered wrong input"<<endl;
         continue;
        }    
      sum_k += number; i++;  
    }
} while (i <= k ) ;
cout << " The total sum of " << k << " integers is: "  << sum_k;
return 0;
