#include <iostream>  
using namespace std;  
int main()  
{  
  int n, i, m=0, check=0;  
  cout << "Enter the Number to check Prime: ";  
  cin >> n;  
  //above statements will take the inputs from the user
  m=n/2;  
  for(i = 2; i <= m; i++)  
  {  
      if(n % i == 0)
      //if the modulus is equal to 0  
      {  
          cout<<"Number is not Prime."<<endl;  
          check=1;  
          break;  
      }  
  }  
  if (check==0)  
      cout <<n<<" is Prime."<<endl;  
  return 0;  
}