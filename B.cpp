#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
   int length;
   cin>>length;
   int arr[length][length];
   for (int i = 0; i < length; i++)
   {
       for (int j = 0; j < length; j++)
	   {
           cin>>arr[i][j];
       }
   }
   
   for (int i = 0; i < length; i++)
   {
       int max = 0, temp = 0;
       for (int j = 0; j < length; j++){
       	
           if(arr[j][i] > max)
		   {
               temp++;
               max = arr[j][i];
           }
       }
       if(i != length - 1) {
           cout<<temp<<" ";
       } else {
           cout<<temp<<endl;
       }
   }
   
   for (int i = 0; i < length; i++)
   {
       int max = 0, temp = 0;
       for (int j = 0; j < length; j++)
	   {
           if(arr[i][j] > max)
		   {
               temp++;
               max = arr[i][j];
           }
       }
       cout<<temp<<endl;
   }
   return 0;
}
