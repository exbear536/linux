#include <iostream>
int main()
{
    char name[20];
    int age;
    std::cout << "Please input your name: ";
    std::cin >> name >> age;
    std::cout << "Please notarize your name and age: " << name << " " << age << std::endl;

    std::cout << "Hello, world!" << std::endl;    // 会立即输出
    std::cout << "Another message" << std::flush; // 强制输出


    std::cerr << "This is an error message." << std::endl; // 输出到标准错误流
}