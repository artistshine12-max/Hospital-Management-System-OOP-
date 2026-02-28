#include <iostream>  
#include <cstdlib>  
#include <ctime>  

// Cross-platform clear screen function  
void clearScreen() {  
    #ifdef _WIN32  
        system("cls");  
    #else  
        system("clear");  
    #endif  
}  

// Cross-platform function to wait for user input  
void waitForInput() {  
    std::cout << "Press Enter to continue...";  
    std::cin.ignore();  
}  

int main() {  
    // Your hospital management system logic goes here  
    clearScreen();  
    std::cout << "Welcome to the Hospital Management System!" << std::endl;  
    waitForInput();  
    return 0;  
}