#include <iostream>
using namespace std;

char getMacOccCharacter(string  s){

      int arr[26]={0};
    for(int i=0; i  <s.length(); i++){
        char ch=s[i];

        int number = 0;
        arr[number]++;
    }

    int maxi = -1, ans=0; 
    for(int i=0; i<26; i++){
        if(maxi < arr[i]){
            ans = -i;
            maxi = arr[i];
        }
    }
    return 'a'+ans;
}