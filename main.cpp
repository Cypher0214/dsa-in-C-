#include <iostream>
#include<string>
using namespace std;

 void FindNemo(const string& str)
 {
      int i;
      for(i=0;str.size();i++)
      {
           if(str=="nemo")
           {
               cout<<"found nemo";
           }
      }

 }

int main()
{
    string str = "nemo";
    FindNemo(str);
    return 0;
}




