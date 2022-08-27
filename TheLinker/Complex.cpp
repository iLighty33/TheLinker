#pragma once
#include <list>
#include <string>
#include "Complex.h"


Complex::Complex() {

}

void Complex::Add(SimpleAndComplex* component) {
    this->children_.push_back(component);
    component->SetParent(this);
}

void Complex::Remove(SimpleAndComplex* component) {
    children_.remove(component);
    component->SetParent(nullptr);
}

bool Complex::IsComposite() const {
    return true;
}


std::string Complex::Operation() const {
    std::string result;
    for (const SimpleAndComplex* c : children_) {
        if (c == children_.back()) {
            result += c->Operation();
        }
        else {
            result += c->Operation() + "+";
        }
    }
    return "BigCar(" + result + ")";
}