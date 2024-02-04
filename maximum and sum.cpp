// sct 212-0143/2022
//Paul Maina Mathu

//lab 1 
//task 1

#include <iostream>

/*question one maximum and sum of arrrays*/

int summation(int arr[],int n){
    int sum=0;
    for(int i=0; i<n; ++i)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int max(int arr[],int n){
 int largest= arr[0];
 for(int i=1; i<n; ++i) {
    if(largest<arr[i]){
        largest=arr[i];
    }
 }
 return largest;
}

int main()
{
int n;
std::cout <<"length of array?";
std::cin >>n;

int* my_ints=new int[n];
for (int i=0;i<n;++i){
    std::cout << "input integers";
    std::cin >> my_ints[i];

}

int total=summation(my_ints, n);
std:: cout<< "the sum of array is :"<< total<< std::endl;
int maximum=max(my_ints,n);
std::cout<<"the largest number is:"<<maximum<<std::endl;
    return 0;
}