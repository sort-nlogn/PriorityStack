#pragma once
#include <vector>

template<class T>
class PriorityStack{
    private:
        std::vector<std::pair<int, T>> data;
    public:
        void push(int priority, T value);

        T pop();

        bool is_empty();

        void clear();
};