#include<vector>


#include<iostream>
int main(){
    std::vector<int> myVector;
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);
    myVector.push_back(40);
    std::cout << "Vector elements: ";
    for (size_t i = 0; i < myVector.size(); i++) {
        std::cout << myVector[i] << " " << std::endl;
    }
    return 0;


}