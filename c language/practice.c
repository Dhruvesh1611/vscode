//1.
// #include <stdio.h>
// int main()
// {
//     printf("hello world");
// }

//2.
// #include <stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d",&a);
//     scanf("%d",&b);
//      c=a+b;
//     {
//         printf("sum is %d",c);
//     }
// }

//3.
// #include <stdio.h>
// int main(){
//     int a=10,b=15;
//     // scanf("%d",&a);
//     // scanf("%d",&b);
//     if(a>b)
//     {
//         printf("%d is a largest",a);
//     }
//     else
//     {
//                 printf("%d is a largest",b);
//     }
// }

//4.
// #include <stdio.h>
// int main()
// {
// int a=15;
// if(a%2==0)
// {
//     printf("%d is even",a);
// }
// else
// {
//     printf("%d is odd",a);
// }
// }


//5.
// #include <stdio.h>
//     int main(){
//         int fact=1;
//         int i;
//         for(i=1;i<=5;i++)
//         {
//             fact=fact*i;
//         }
//         printf("%d",fact);
//     }



//6.
// #include <stdio.h>
// int main() {
//     int number, reversedNumber = 0;

//     printf("Enter an integer: ");
//     scanf("%d", &number);
//     int originalNumber = number;

//     while (number != 0) {
//         int digit = number % 10;  
//         reversedNumber = reversedNumber * 10 + digit;  
//         number /= 10;  
//     printf("The reverse of %d is: %d\n", originalNumber, reversedNumber);
//     }
//     return 0;
// }


//7.
// #include <stdio.h>
// int main() {
//     int number, reversedNumber = 0;

//     printf("Enter an integer: ");
//     scanf("%d", &number);
//     int originalNumber = number;

//     while (number != 0) {
//         int digit = number % 10;  
//         reversedNumber = reversedNumber * 10 + digit;  
//         number /= 10;  
//     }
//         if(reversedNumber==originalNumber){
//         printf("The reverse of %d is %d\n", originalNumber, reversedNumber);
//         printf(" %d is palidrome ",originalNumber);
//     }
//     else{
//         printf("The reverse of %d is %d\n", originalNumber, reversedNumber);
//         printf(" %d is not palidrome ",originalNumber);
//     }
    
//     return 0;
// }



// 8.
// #include <stdio.h>
// int main() {
//     int number, sum = 0;

//     printf("Enter an integer: ");
//     scanf("%d", &number);

//     number = (number);

//     while (number != 0) {
//         sum += number % 10;  
//         number /= 10;  
//     }
//     printf("The sum of the digits is: %d\n", sum);

//     return 0;
// }

//9.
// #include <stdio.h>
// int main() {
//     int number, i, isPrime = 1;

//     printf("Enter an integer: ");
//     scanf("%d", &number);

//     if (number <= 1) {
//         isPrime = 0;  
//     } else {
//         for (i = 2; i * i <= number; i++) {
//             if (number % i == 0) {
//                 isPrime = 0;  
//                 break;
//             }
//         }
//     }

//     // Output whether the number is prime
//     if (isPrime) {
//         printf("%d is a prime number.\n", number);
//     } else {
//         printf("%d is not a prime number.\n", number);
//     }

//     return 0;
// }


// 10. Fibonacci Sequence
// #include <stdio.h>
// int main()
// {
// int i;
// int b=1;
// for(i=5;i>0;i--)
// {
//  b=b*i;
// }
// printf("%d ",b);
// }


//11.
// #include <stdio.h>
// int main()
// {
//     int n1, n2, i, gcd;

//     printf("Enter two integers: ");
//     scanf("%d %d", &n1, &n2);

//     for(i=1; i <= n1 && i <= n2; i++)
//     {
//         if(n1%i==0 && n2%i==0)
//             gcd = i;
//     }

//     printf("G.C.D of %d and %d is %d", n1, n2, gcd);

//     return 0;
// }


//13.
// #include <stdio.h>
// int main(){
//     int a=1900;
//     if((a%4==0 && a%100!=0 )||(a%400==0))
//     {
//         printf("it's a leap year");
//     }
//     else
//     {
//         printf("it's not a leap year");
//     }
// }



//14.
// #include <stdio.h>
// int main(){
// int a=10;
// float b=2.5;
// float sum=a+b;
// int multi=a*b;
// float less=a-b;
// int devide=a/b;
//  {
//     printf("%.1f\n ", sum); 
//     printf("%d\n ", multi);
//     printf("%.1f\n ", less);
//     printf("%d\n ", devide);
// }
// return 0;
// }



//15.
// #include <stdio.h>
// int main(){
//     int i;
//     int j=0;
//     int arr[]={1,2,8,4,5};
//     for(i=0;i<5;i++)
//     {
//     j=j+arr[i]; 
//     }
//     printf("%d\n",j);
// }



//17.
// #include <stdio.h>
// int main() {
//     char s[] = "hello";
//     int i;
//     for (i = 0; s[i] != '\0'; ++i);
//     printf("Length of the string: %d", i);
//     return 0;
// }



//20.
//  #include <stdio.h>
//  int main(){
//     int a=1;
//     int b=5;
// {
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     {
//         printf("a=%d,b=%d",a,b);
//     }
// }
// }



//21.
// #include <stdio.h>
// int main(){
//     char a='C';
//     printf("%d",a);
// }


//22. celsius to ferenhit
// #include <stdio.h>
// int main(){
//     float a=34;
//     float b=(a*9/5)+32;
//     {
//         printf("celsius is %f\n ferenhit is %f",a,b);
//     }
// }

//23. ferenhit to celsius
// #include <stdio.h>
// int main(){
//     float a=34;
//     float b=(a-32)*5/9;
//     {
//         printf("ferenhit is %f\n celsius is %f",a,b);
//     }
// }

 
//33.
// #include <stdio.h>
// int main(){
//     int i;
//     int j=0;
//     int arr[]={1,2,8,4,5};
    
//     for(i=0;i<5;i++)
//     {
//     j=j+arr[i];
    
//     }
//     printf("%d\n",j/2);
// }


#include <stdio.h>

int main() {
    int  i;
    int max;

    // printf("Enter the number of elements in the array: ");
    // scanf("%d", &n);

    // int arr[n];

    // printf("Enter %d elements:\n", n);
    // for (i = 0; i < n; i++) {
    //     scanf("%d", &arr[i]);
    // }
    int arr[]={1,8,2,4}
    max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }

    printf("The largest element in the array is: %d\n", max);

    return 0;
}
