#include <iostream>
#include <vector>
#include <string>
#include <exception>

template<typename T0>
std::vector<T0> someVec;

template<typename T>
T average(std::vector<T>& vec){
    T sum = 0;
    for(int i = 0; i < vec.size();i++){
        sum+=vec[i];
    }
    if(vec.empty()) return 0;
    return sum/vec.size();
}
template<typename T1>
void floodVec(std::vector<T1>& vec){
    std::cout<<"Input count elements of vector"<<std::endl;
    int n;
    std::cin>>n;
    vec.resize(n);
    for(int i = 0; i < vec.size(); i++){
        std::cout<<"Input "<<i<<" element"<<std::endl;
        std::cin>>vec[i];
    }
    std::cout<<"Flooded"<<std::endl;
}

int main() {
    floodVec(someVec<double>);
    std::cout << average(someVec<double>) << std::endl;
    return 0;
}
