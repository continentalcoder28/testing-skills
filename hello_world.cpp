// #include<iostream>
// int main(){
//     std::cout << "hllo world";
//     return 0;
// }


// // celsius to fahrenheit
// #include<iostream>
// using namespace std;
// int main(){
//     float celsius,fahrenheit;
//     cout<<"enter the temperature" <<endl;
//     cin>>celsius;
//     fahrenheit = (celsius *9/5 +32 );
//     cout<<"the temperature in fahrenheit "<<fahrenheit <<endl;
// }

// write a program to print all the uppercase,lowercase and numeric from the given set of character
// #include<iostream>
// using namespace std;
// void count (string str){
//     int uppercase=0,lowercase=0,number=0,special=0;
//     for(int i=0;i<str.length();i++){
//         if(str[i]>='A' && str[i]<='Z')
//         uppercase++;
//         if(str[i]>='a' && str[i]<='z')
//         lowercase++;
//         if(str[i]>='0' && str[i]<='0')
//         number++;
//         else
//         special++;  
//     }
//     cout<<"uppercase letters "<<uppercase<<endl;
//     cout<<"lowercase letters "<<lowercase<<endl;
//     cout<<"number"<<number<<endl;
//     cout<<"special characters:"<<special<<endl;
// }

// int main(){
//     int Count;
//     string str="vivek0989#";
//     count(str);
//     return 0;
// }//


// // write a program to find the sum of even number upto n
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     int n,i;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;
//     i=2;
//     while(i<=n){
        
//         sum=sum+i;
//         i=i+2;

//     }
//     cout<<"the value of the sum is::"<<sum<<endl;


// }


// #include<iostream>
// using namespace std;
// int main(){
//     for (int i=0;i<5;i++){
//         for(int j=1;j<=5;j++){
//             if(i+j==10){
//                 break;
//             }
//             cout<<i<<" "<<j<<endl;
//         }
//     }
// }