#include <iostream>
#include <limits>
#include <string>
#include <type_traits>
#include <windows.h>

using namespace std;

template <typename T>
void print_type(const char* type_name) {
    cout << type_name << "\t\t占用字节数: " << sizeof(T);

    if constexpr (is_same_v<T, bool>) {
        cout << "\t最大值: " << (numeric_limits<T>::max)();
        cout << "\t最小值: " << (numeric_limits<T>::min)() << '\n';
    } else if constexpr (is_same_v<T, char> || is_same_v<T, signed char> || is_same_v<T, unsigned char>) {
        cout << "\t最大值: " << static_cast<int>((numeric_limits<T>::max)());
        cout << "\t最小值: " << static_cast<int>((numeric_limits<T>::min)()) << '\n';
    } else {
        cout << "\t最大值: " << (numeric_limits<T>::max)();
        cout << "\t最小值: " << (numeric_limits<T>::min)() << '\n';
    }
}

int main() {
    // Ensure UTF-8 output/input on Windows console.
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "type\t\t************ size ************" << '\n';

    print_type<bool>("bool");
    print_type<char>("char");
    print_type<signed char>("signed char");
    print_type<unsigned char>("unsigned char");
    print_type<wchar_t>("wchar_t");
    print_type<short>("short");
    print_type<int>("int");
    print_type<unsigned>("unsigned");
    print_type<long>("long");
    print_type<unsigned long>("unsigned long");
    print_type<double>("double");
    print_type<long double>("long double");
    print_type<float>("float");
    print_type<size_t>("size_t");

    cout << "string\t\t占用字节数: " << sizeof(string) << '\n';
    cout << "type\t\t************ size ************" << '\n';

    return 0;
}
