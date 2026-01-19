# include <stdio.h>

int main (){
//     Q1.

// Write a C program to print the following pattern:

// *****
// *****
// *****
// *****
// *****


for(int i = 1 ; i<=5 ; i++){
    for(int j = 1 ; j<=5 ; j++){
        printf("*");
    }
    printf("\n");
}

  printf("-------------------\n");



// Q2.

// Print numbers in the following pattern:

// 1
// 12
// 123
// 1234
// 12345

for(int i = 1 ; i <=5 ; i++){
    for(int j = 1 ; j<=i ; j++){
        printf("%d" , j);
    }
    printf("\n");
}
printf("-------------------\n");


// Q3.

// Print alphabets:

// A
// AB
// ABC
// ABCD
// ABCDE

for(char i = 'A' ; i<= 'E' ; i++){
    for(char j = 'A' ; j <= i ; j++){
        printf("%c" , j);
    }
     printf("\n");

}
printf("-------------------\n");


// Q4.

// Print the pattern:

// 1
// 22
// 333
// 4444
// 55555

for(int i = 1 ; i <=5 ; i++){
    for(int j = 1 ; j<=i ; j++){
        printf("%d" , i);
    }
    printf("\n");
}
printf("-------------------\n");

// Q5.

// Print the following pattern:

// *
// **
// ***
// ****
// *****

for(int i = 1 ; i <=5 ; i++){
    for(int j = 1 ; j <=i ; j++){
        printf("%c" , '*');
    }
    printf("\n");
}
printf("-------------------\n");

// Q6.

// Print inverted stars:

// *****
// ****
// ***
// **
// *

for(int i = 1; i <=5; i++){     
    for(int j = i ; j <=5; j++){  //  , 
        printf("%c " , '*');       
    }
    printf("\n");
}
printf("-------------------\n");

// Q7.

// Print the following number pattern:

// 1
// 23
// 456
// 78910

int count = 1;
for(int i = 1 ; i<=4 ; i++){
    for(int j = 1 ; j<=i ; j++){
        printf("%d", count);
        count++;
    }
    printf("\n");
}
printf("-------------------\n");

// Q8.

// Print the square number pattern:

// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

for(int i = 1 ; i <= 4 ; i++){
    for(int j = 1 ; j <= 4 ; j++){
        printf("%d ",j);
    }
    printf("\n");
}
printf("-------------------\n");

// Q9.

// Print this pattern:

// 5
// 54
// 543
// 5432
// 54321

for(int i = 5; i >= 1 ; i--){  
    for(int j = 5 ; j>=i ; j--){   
        printf("%d" , j);
    }
    printf("\n");

}
printf("-------------------\n");

// Q10.

// Print star pyramid:

//     *
//    **
//   ***
//  ****
// *****

for(int i = 5 ; i >= 1 ; i--){
    for(int k = 1 ; k<i ; k++){
        printf(" ");
       
        }
         for(int j = 5 ; j>=i ; j--){
            printf("%c" , '*');

    }
    printf("\n");
}
printf("-------------------\n");

// Q11.

// Print the following pattern:

// *
// ***
// *****
// *******

for(int i = 1 ; i<=4 ; i++){
    for(int j = 1 ; j<=i ; j++){
        printf("%c",'*');
         }
   

   for(int k=1 ; k<i ; k++){
    printf("%c" , '*');


   }
   printf("\n");
   


}
printf("-------------------\n");


// Q12.

// Print number pyramid:

// 1
// 121
// 12321
// 1234321


for(int i = 1 ; i <= 4 ; i++){
    for(int j = 1 ; j<=i ; j++){
        printf("%d" , j);
    }
    
    for(int k = i-1 ; k>=1 ; k--){
        printf("%d" , k);

    }
     printf("\n");
}
printf("-------------------\n");


// Q13.

// Print the pattern:

// A
// BB
// CCC
// DDDD
// EEEEE

for(char i = 'A' ; i<= 'E' ; i++ ){
   for(char k = 'A' ; k<=i ; k++){
    printf("%c" , i);
   }
 

   
     printf("\n");


}
printf("-------------------\n");


// Q14.

// Print inverted number pattern:

// 12345
// 1234
// 123
// 12
// 1

for(int i =5 ; i>=1 ; i--){
    for(int j = 1 ; j<=i ; j++){
        printf("%d" , j);
    }
    printf("\n");
}
printf("-------------------\n");


// Q15.

// Print Floyd’s Triangle:

// 1
// 2 3
// 4 5 6
// 7 8 9 10

int count1 = 1;
for(int i =1 ; i<=4 ; i++){
    for(int j = 1 ; j<=i ; j++){
        printf("%d " , count1);
        count1++;
    }
    printf("\n");
}

}