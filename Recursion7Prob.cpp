// Reverse a string using recursion!
// #include<iostream>
// using namespace std;
// void rev(string str){
//     if(str.length()==0){
//         return; 
//     }
//     string ros = str.substr(1);
//     rev(ros);
//     cout<<str[0];
// }
// int main(){
//     string str = "saurabh";
//     rev(str);
// }

// Replace pi with 3.14 in a given string :
// #include<iostream>
// using namespace std;
// void Replaces(string str){
//     if(str.length()==0){
//         return;
//     }
//     string ros = str.substr(2);
//     if(str[0]=='p' && str[1]=='i'){
//         cout<<3.14;
//         Replaces(ros);
//     }
//     else{
//         cout<<str[0];
//         Replaces(str.substr(1));
//     }
// }
// int main(){
//     Replaces("saupisaurabhpihddjwpi");
// }

// Tower Of Hanoi :
// #include<iostream>
// using namespace std;
// void TowerOfHanoi(int n,string src,string dest,string help){
//     if(n==0){
//         return;
//     }
//     TowerOfHanoi(n-1,src,help,dest);
//     cout<<"Moved from "<<src<<" to "<<dest<<endl;
//     TowerOfHanoi(n-1,help,dest,src);
// }
// int main(){
//     TowerOfHanoi(3,"A","C","B");
// }

// Remove duplicates from a string
// #include<iostream>
// using namespace std;
// string duplicates(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char c=s[0];
//     string ans =duplicates(s.substr(1));
//     if(c==ans[0]){
//         return ans;
//     }
//     return c+ans;
    

// }
// int main(){
//     cout<<duplicates("aaabbbbccccddddeeeeffff");
// }

// Move all x st the end of the string
// #include<iostream>
// using namespace std;
// string move(string s){
//     if(s.length()==0){
//         return "";
//     }
//     char ch = s[0];
//     string ans = move(s.substr(1));
//     if(ch=='x'){
//         return ans+ch;
//     }
//     return ch+ans;
// }
// int main(){
//     cout<<move("axbcvdxbvgfvxbfhx");
// }

// Print all permutations of a string 
// #include<iostream>
// using namespace std;
// void Permutations(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<s.length();i++){
//         char ch = s[i];
//         string ros = s.substr(0,i)+s.substr(i,i+1);
//         Permutations(ros,ans+ch);
//     }
// }
// int main(){
//     Permutations("ABC"," ");
// }

// 0-1 Knapsacks problem 
#include<iostream>
using namespace std;
int Knapsack(int value[],int wt[],int n,int w){
    if(n==0 || w==0){
        return 0;
    }
    if(wt[n-1]>w){
        return Knapsack(value,wt,n-1,w);
    }
    return max(Knapsack(value,wt,n-1,w-wt[n-1]+value[n-1]),Knapsack(value,wt,n-1,w));
}
int main(){
    int value[] = {100,50,150};
    int wt [] = {10,20,30};
    int n=3;
    int w=50;
    cout<<Knapsack(value,wt,n,w);
}