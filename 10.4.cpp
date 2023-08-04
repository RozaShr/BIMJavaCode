//demonstrate the different between structureand union
#include <stdio.h>
#include<string.h>

// define a structure
struct Person {
    char name[50];
    int age;
    float height;
};

// define a union
union Value {
    int intValue;
    float floatValue;
    char stringValue[50];
};

int main() {
    // create an instance of the Person structure and set its values
    struct Person person;
    strcpy(person.name, "Selena");
    person.age = 56;
    person.height = 5.2;
    
    // create an instance of the Value union and set its intValue value
    union Value value;
    value.intValue = 10;
    
    // print the size of the Person structure and the Value union
    printf("Size of Person structure: %ld\n", sizeof(struct Person));
    printf("Size of Value union: %ld\n", sizeof(union Value));
    
    // print the values of the Person structure and the Value union
    printf("Person name: %s\n", person.name);
    printf("Person age: %d\n", person.age);
    printf("Person height: %f\n", person.height);
    printf("Value intValue: %d\n", value.intValue);
    printf("Value floatValue: %f\n", value.floatValue);
    printf("Value stringValue: %s\n", value.stringValue);
    printf("\nRoza Shrestha\n22\nBIM(1st SEM)");
    return 0;
}
