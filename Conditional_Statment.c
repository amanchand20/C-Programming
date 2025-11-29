To check whether the person is adult, tennager, or child.  

#include <stdio.h>
int main() {

    int age; 

    printf("Enter the age: ");
    scanf("%d", &age);

    if (age > 18) {
        printf("Adult \n");
    } 
    else if (age < 18 && age > 13 ) {
        printf("Teenager \n");
    }
    else {
        printf("Child \n");
    }
 
    return 0;
}


// Ternary Operator 

#include <stdio.h>
int main () {
    int age; 
    printf("Enter age: ");
    scanf("%d", &age);

    age>= 18 ? printf("Adult \n") : printf("Not Adult \n");

return 0;
}


Switch Operator 

#include <stdio.h>
int main () {
    int day; 
    printf("Enter day(1-7): ");
    scanf("%s", &day);

    switch (day) {
        case 'm': printf("monday \n");
                break; 
        case 't': printf("tueday \n");
                break;
        case 'w': printf("wednesday \n");
                break;
        case 'T': printf("thursday \n");
                break;
        case 'f': printf("friday \n");
                break;
        case 's': printf("saturday \n");
                break;
        case 'S': printf("sunday \n");
                break;  
        default: printf("Not a valid day! \n");              
    }

    return 0;
}

Nested switch

#include <stdio.h>

int main () {
    int number; 
    printf("Enter number: ");
    scanf("%d", &number);

    if (number >= 0) {
        printf("Positive \n");

        if(number % 2 == 0) { 
            printf("Even \n");
        } else {
            printf("Odd \n");
        }
    } else {
        printf("Negative \n");
    }
    
    return 0;
}

Write a program to check if a student passed or failed. 

marks > 30 is pass 
marks <= 30 is fail

#include <stdio.h> 

int main () {
    int marks; 
    printf("Enter marks (0 - 100): ");
    scanf("%d", &marks);

    if (marks > 30 && marks <= 100){
        printf("PASS \n");
    } 
    else if (marks > 0 && marks <= 30) {
        printf("FAIL \n");
    } else {
        printf("Wrong Marks \n");
    }

       marks <= 30 ? printf("FAIL \n") : printf("PASS \n");

    return 0;
}

Write a program to give grade to a student
marks < 30 is C
30 <= marks < 70 is B
70 <= marks < 90 is A
90 <= marks <= 100 is A+ \

#include <stdio.h>

int main () {
    int marks; 
    printf("Enter marks(0-100): ");
    scanf("%d", &marks);

    if (marks >= 0 && marks < 30) {
        printf("C \n");
    } 
    else if (marks >= 30 && marks < 70) {
        printf("B \n");
    }
    else if (marks >= 70 && marks < 90) {
        printf("A \n");
    }
    else if (marks >= 90 && marks <= 100) {
        printf("A+ \n");
    }
    else {
        printf("Wrong marks \n");
    }

    return 0;
}

Practise question no. 10 

#include <stdio.h>
int main () {
    int x = 2;

    if(x = 1) {
        printf("x is equal to 1. \n");
    } else {
        printf("x is not equal to 1. \n");
    }

    return 0; 
}

How to check if a character is Uppercase or Lowercase 

#include <stdio.h>

int main () {
    char ch; 
    printf("Enter character: ");
    scanf("%c", &ch); 

    if (ch >= 'A' && ch <= 'Z') {
        printf("Upper Case \n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lower Case \n");
    } else {
        printf("Not english letter \n");
    }

    return 0;
}
