#include<iostream>

int Foo() {
    std::cout << "hello jisoo" << std::endl;
}

int Bar() [
    std::cout << "hello rose" << std::endl;
]

int main(){
    std::cout << "hello lisa" << std::endl;


    Foo();
    Bar();
    return 0;
}