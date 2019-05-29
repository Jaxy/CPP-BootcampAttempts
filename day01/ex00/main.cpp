#include "Pony.hpp"

void ponyOnTheHeap() {
    Pony *heapPony = new Pony();
    std::cout << "\x1b[32mPony on Heap\x1b[0m" << std::endl;
    heapPony->setName("Heaper");
    heapPony->setColour("Brown");
    heapPony->setAge(3);
    heapPony->displayDetails();
}

void ponyOnTheStack() {
    Pony stackPony;
    std::cout << "\x1b[32mPony on Stack\x1b[0m" << std::endl;
    stackPony.setName("Stacker");
    stackPony.setColour("Black");
    stackPony.setAge(2);
    stackPony.displayDetails();
}

int main() {
    ponyOnTheHeap();
    ponyOnTheStack();
    return 0;
}