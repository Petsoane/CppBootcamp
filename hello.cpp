#include <iostream>
#include <cmath>
#include <string>
#include <fstream>


// // This will define which namespaces are required for this file.
// using std::cin;
// using std::cout;
// using std::endl;
using namespace std;

// Fucntion prototypes.
void decimalPrompt();
void scores();
int Failure();
void fileIO();

// main is where program exection starts.
int main(){
    // Hello world example
    cout << "Hello World! ??("; // prints Hello World
    
    // Size example
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    /** typedef example
     * 
     *  Typedef is used to create a new name for an existing type
    */
    typedef wchar_t wide;

    /** Enummeration example
     * 
     *  An enum is like giving a name to a set of logically associated numbers
    */

    // enum test { a, b, c, d} exmpl;
    // exmpl = b;
    // cout << exmpl;

    /** Variable examples
     * 
     * ! There is a difference between a variable declaration and its definition.
     * To better grasp this concept, think about function definition and declaration.
    */
    // All of these can be used to also be defined outside of this function with the user of the 'extern' keyword.
    int a, b;
    int c;
    float f = 18.34563f;

    // Note: Lvalues and Rvalues.

    /**
    * A variable can be declared in defferent places, and deppending on where it is defined it will have a scope assigned to it.
    * types of scopes:
        Local
        formal parameters
        global
    */

    // Volatile variables are variables that can be changed in ways that the program cannot control, or is inexpected.
    // Restrict is used on a pointer, and means that there is no other way that the object/value can be accesed either then the given value.

    /** Storage classes
    *   Storage classes define the scope and the life-time of variables and/or functions withing a c++ program.
    *
    * auto: is the defult storage class for all local variables. It can only be used inside function.
    * register: this creates a variable that will be stored inside a register and cannot be have its address dereferenced. This is not guarnateed though... its a strong maybe.
    * static: This creates a variable that will last for the lifetime of the program, until the program ends (or dies?)
    *          When this is used on a global variable, this will make the variable be restricted only to the current file.
    * extern: this makes a global variable visible to all the program files. 
    * mutable: applies to objects and allows a constant member fuction to change a mutable member.
    */

    // bitwise operators can be really fun smile 

    // decimalPrompt();
    // scores();
    fileIO();
    (void funtion)* f = &decimalPrompt;

    return (0);
}

void decimalPrompt(){
    double num;

    cout << "Enter a number: ";
    cin >> num;

    cout << std::round(num) << endl;
}

void scores(){
    double a, b, c, d, e, avg_score;

    cout << "Enter five scores" << endl;
    cout << "Score one: ";
    cin >> a;
    cout << "Second score: ";
    cin >> b;
    cout << "Third score: ";
    cin >> c;
    cout << "Fourth score: ";
    cin >> d;
    cout << "Fifth score: ";
    cin >> e;

    avg_score = (a + b + c + d + e) / 5;

    cout << "The average score is " << avg_score << endl;
    return;
}

int Failure(){
    string name;
    int age = 0;
    int weight = 0;
    double height = 0.0;


    cout << "Line 5: Enter name, age, wight and height" ;
    cin >> name >> age >> weight >> height;
    cout << endl;

    cout << "Line 8: Name: " << name << endl;
    cout << "Line 9 Age: " << age << endl;
    cout << "Line 10 Wieght: " << weight << endl;
    cout << "Line 11 Height" << height << endl;

    return (0); 
}

void fileIO(){
    ofstream outData;
    outData.open("./test", std::ios::app);
    string input;
    
    cout << endl << endl;
    while (1){
        getline(cin, input);
        if (input == "exit")
        {
            break;
        }
        outData << input << endl;

    }
    outData.close();
}