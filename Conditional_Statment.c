// To check whether the person is adult, tennager, or child.  

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

// Conditional Operator 

// Ternary

#include <stdio.h>
int main () {
    int age; 
    printf("Enter age: ");
    scanf("%d", &age);

    age>= 18 ? printf("Adult \n") : printf("Not Adult \n");

return 0;
}
