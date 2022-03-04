#include "PriorityStack.hpp"
#include <stdexcept>
#include <vector>

template<class T>
void PriorityStack<T>::push(int priority, T value){
    data.push_back(std::pair<int, T>(priority, value));
    for(int i = data.size() - 1; i > 0; i--){
        if(data[i].first < data[i - 1].first)
            std::iter_swap(data.begin() + i, data.begin() + i - 1);
        else
            break;
    }
}

template<class T>
bool PriorityStack<T>::is_empty(){
    return data.empty();
}

template<class T>
T PriorityStack<T>::pop(){
    if(is_empty())
        throw std::runtime_error("Stack underflow!");
    T to_ret = data.back().second;
    data.pop_back();
    return to_ret;
}

template<class T>
void PriorityStack<T>::clear(){
    data.clear();
}