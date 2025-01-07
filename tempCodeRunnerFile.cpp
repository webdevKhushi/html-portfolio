// //program to find the square root of the number by binayr search
// # include <iostream>
// using namespace std;
// int binarySearch(int x){
//     int s=0;
//     int e=x;
//     long long int ans=-1;
//     long long int mid=s+(e-s)/2;
//     while(s<=e){
//         long long int a=mid*mid;
//         if(a==x){
//             return mid;
//         }
//         else if(a<x){
//             ans=mid;
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the value of the number whose squareroot you want to find:\n";
//     cin>>n;
//     cout<<"The squareroot of the entered number is:\n";
//     int number= binarySearch(n);
//     cout<<number;
//     cout<<"\n";
// }

// to find the squareroot of the number with more precision
# include <iostream>
using namespace std;

int binarySearch(int n){
    int s=0;
    int e=n;
    long long int ans=-1;
    long long int mid=s+(e-s)/2;
    while(s<=e){
        long long int a=mid*mid;
        if(a==n){
            return mid;
        }
        else if(a<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double precision(int n,int precision,int temp){
    double factor=1;
    double ans=temp;
    for(int i=0;i<precision;i++){
        factor=factor/10;
    }
    for(double j=ans;j*j<n;j+=factor){
        ans=j;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the value of the number:\n";
    cin>>n;
    int temp=binarySearch(n);
    double ans=precision(n,3,temp);
    cout<<"The value of the squareroot of the nuumber is:\n";
    cout<<ans<<"\n";
}