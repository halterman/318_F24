#include <iostream>
#include <vector>

int construct_count = 0;
int destruct_count = 0;

class Widget {
    int data;
public:
    Widget(int data) : data{data} {
        std::cout << "Constructing widget " << data << '\n';
        construct_count++;
    }
    Widget(const Widget& other) : data{other.data} {
        std::cout << "Copy constructing widget " << data << '\n';
        construct_count++;
    }
    ~Widget() {
        std::cout << "Destroying widget " << data << '\n';
        destruct_count++;
    }
    Widget& operator=(const Widget& other) {
        if (this != &other) {
            data = other.data;
        }
        return *this;
    }
};

void f1() {
    std::vector<Widget> wids;
    wids.push_back(23);
    wids.push_back(11);
    wids.push_back(5);
    wids.push_back(19);
    wids.push_back(6);
    std::cout << "In function f1\n";
}

int main() {
    f1();
    std::cout << "Construct count is " << construct_count << '\n';
    std::cout << "Destruct count is " << destruct_count << '\n';
}
