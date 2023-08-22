#include<iostream>
using namespace std;


// // print even number from 2 to n
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n" <<endl;
//     cin>>n;
//     int num =2;
//     while(num<=n){
//         cout<<"number is " <<num <<endl;
    
//     num=num+2;
//     }
// }


// // print odd no from 1 to n
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter the value of n"<<endl;
// cin>>n;
// int num=1;
// while(num<=n){
//     cout<<"the number is " <<num <<endl;
//     num=num+2;

// }

// }


// //find sum from 1 to N
// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     int num=1;
//     int sum=0;
//     while(num<=n){
//         sum=sum+num;
//         // cout<<"the sum of the given number is"<<sum <<endl;
//         num++;}
//         cout<<"the sum of the number is "<<sum <<endl;

    
// }


// // find the factorial of the given number
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int fact=1;
//     int n;
//     cout<<"enter the number you want to calculate the factorial of";
//     cin>>n;
//     for( i=1;i<=n;i++){
//         fact=fact*i;
        
//     }
//     cout<<"the current factorial of the given number is " <<fact<<endl;
// }

// // program to check wheather the number is prime or not
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n" <<endl;
//     cin>>n;
//     int num=2;
//     if(num<=n){
//         if(n%num==0){
//             cout<<"the number is not a prime"<<num<<endl;
//         }
//         else
//         cout<<"the number is a prime" <<endl;
//         num++; 
//     }

// }

// // program to detect wheather it is prime number or not
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number you want to check the prime number of  "<<endl;
//     cin>>n;
//     int num=2;
//     while(num<=n){
//         if(n%num==0){
//             cout<<"this given input is not a prime number " <<endl;
//             }
//     else 
//     cout<<"this is a prime number" <<endl;
//     num++;
//     break;
        

        
//     }
// }



// write a program to check the greater and the smaller number in a computer program

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter the value of a " <<endl;
//     cin>>a;
//     cout<<"enter the value of b " <<endl;
//     cin>>b;

//     if(a>b)
//     cout<<"a is greater than b " <<a <<endl;
//     else
//     cout<<"b is greater than a " <<b <<endl;
//     return 0;
// }

// // write a program to check wheather a program is positive,negative or zero
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter the value of a";
//     cin>>a;
//     if(a>0)
//     cout<<"the given input is positive ";
//      else if (a<0)
//      cout<<"the given input is negative";
//      else
//      cout<<"the given input is equal to zero";
// }

// program to find wheather the input  is uppercase,lowercase,numeric


// #include<iostream>
// using namespace std;
// int main(){
//     char ch ;
//     cout<<"enter the character";
//     cin>>ch;
//     if(ch>='A' && ch<='Z')
//     cout<<"'%c' is a uppercase alphabet",ch;
//     else if(ch>='a' && ch<='z')
//     cout<<" '%c' is a lowercase  alphabet",ch;
//     else if(ch>=48 && ch<=57)
//     cout<<"input  is digit ",ch;
// }

// print 1 to n using while loop

// int main(){
//     int i=1,n;
//     cout<<"enter the value of n";
//     cin>>n;
//     while(i<=n){
//         cout<<"the number is i " <<i <<endl;
//         i++;
//     }

// }
// write a program to print the sum of all natural numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0,n;
//     int i=1;
//     cout<<"enter the value of n";
//     cin>>n;
//     while(i<=n){
//         sum=sum+i;
//         i++;
//         cout<<"the sum of all the natural number is " <<sum <<endl;
//     }
// }


// // find sum of all the even number between 1 to N
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     int i=0,n;
//     cout<<"enter the value of n";
//     cin>>n;
//     while(i<=n){
//         sum=sum+i;
//         cout<<sum;
//         i=i+2;
//     }


// }


// // write a program to check wheather a given input is prime number or not
// #include<iostream>
// using namespace std;
// int main(){
//     int i=2;
//     int n;
//     cout<<"enter the value of n";
//     cin>>n;
//     while(i<n){
//         if(n%i==0)
//         cout<<"not prime" <<endl;
//         else
//         cout<<"not prime "<<endl;}
//         i++;

    
// }


// // pattern printing 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
// cout<<"enter the value of n";
// cin>>n;
// int i=0;
// while(i<n){
//     int j=0;
//     while(j<n){
//         cout<<"*";
//         j++;}
//         cout<<endl;

    
//     i++;

// }

// }

int main(){
    int n;
    int i=1;
    cout<<"enter the value of n";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j++;
        
        }
        cout<<endl;
        i++;

    }

}