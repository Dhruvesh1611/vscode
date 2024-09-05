#include <stdio.h>
int main() {
    int arr[] = {3, 1, 4, 1, 5};
    int i, j;
    int temp;
    int length = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// #include <stdio.h>
// int main(){
// int a=;
// int b;
// int c;
// c=a+b;
//  {
//     printf("%d ", c);
// }
// return 0;
// }

// #include <stdio.h>
// int main(){
//     printf("test");

//     return 0;
// }


// #include <stdio.h>
// void main(){
//     printf("test");

// }


// #include <stdio.h>
// int main(){
// int a=2;
// float b=2.1;
// char c='c';
// char d[]="dd";
//  {
//     printf("%d\n", a);
//     printf("%f\n", b);
//     printf("%c\n", c);
//     printf("%s ", d);

// }
// return 0;
// }

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