#include <iostream>

void foo() { 
    std::cout << "Risky foo" << std::endl; 
}

// trying to call the foo() outside the main() function
foo();

int main() {
    std::cout << "Calling main()" << std::endl;
    return 0;
}
