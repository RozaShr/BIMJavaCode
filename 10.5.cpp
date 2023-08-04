//demonstrate the concept of nested structure
#include<stdio.h>
#include<string.h>
// define a structure to hold an address
struct Address {
    char street[50];
    char city[50];
    char state[50];
    int zip;
};

// define a structure to hold a person's information, including their address
struct Person {
    char name[50];
    int age;
    struct Address address;
};

int main() {
    // create an instance of the Person structure and set its values
    struct Person person;
    strcpy(person.name, "Selena");
    person.age = 25;
    strcpy(person.address.street, "Lockwood street");
    strcpy(person.address.city, "Seatle");
    strcpy(person.address.state, "WDC");
    person.address.zip = 12345;
    
    // print out the person's information, including their address
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Address: %s, %s, %s %d\n", person.address.street, person.address.city, person.address.state, person.address.zip);
    printf("\nRoza Shrestha\n22\nBIM(1st SEM)");
    return 0;
}
