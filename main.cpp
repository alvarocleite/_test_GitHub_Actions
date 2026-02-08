#include <iostream>

int main() {
#if defined(_MSC_VER)
    #pragma message("warning: This warning is generated on purpose for testing reasons!")
#else
    #warning "This warning is generated on purpose for testing reasons!"
#endif
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
