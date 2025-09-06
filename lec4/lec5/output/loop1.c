// #include<stdio.h>
// int main()
// {
//     // int n= 12;
//     for(int i =12; i>=0 ;i--){
//         printf(" the num %d\n  ",  i);
//     }
// }
// #include<stdio.h>
// int main(){
//     // int n=10;
//     for(int i =0; i<=10; i++ ){
//         if(i % 2  == 0){
//             printf("%d \n",i);
//         }
//                     }
//     }


// #include <stdio.h>
// int main() {
//     for (int i = 10; i >= 4; i--) {
//         if (i % 2 == 0) {
//             printf("%d is even\n", i);
//         } else {
//             printf("%d is odd\n", i);
//         }
//     }
//     return 0;
//}

#include <stdio.h>

int main() {
    int number = 45;
    int sum = 0;

    while (number > 0) {
        sum += number % 10;  // Add the last digit to sum
         number /= 10;        // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}