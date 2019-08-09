//Author Pulkit Singh

#include <iostream>
#include <string.h>
using namespace std;

void MaxChar(char* str) 
{ 
    int count[256] = {0}; 
  
    int len = strlen(str); 
    int max = 0;
    char result,maxstr;   
  
    for (int i = 0; i < len; i++) { 
        count[str[i]]++;
        if(max == count[str[i]]) {
            if(str[i]<maxstr) maxstr = str[i]; 
        }
        if (max < count[str[i]]) {
          maxstr = str[i];
          max = count[str[i]];
        } 
      
          result = maxstr;
    }   
    cout<<result<<" "<<max;
} 

int main() {
  char x[50];
  cin>>x;
  MaxChar(x);
}