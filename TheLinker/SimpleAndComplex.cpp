#pragma once
#include "SimpleAndComplex.h"
#include <string>

SimpleAndComplex::SimpleAndComplex()
{
}


void SimpleAndComplex::SetParent(SimpleAndComplex* parent) {
    this->parent_ = parent;
}

SimpleAndComplex* SimpleAndComplex::GetParent() const {
    return this->parent_;
}


 bool SimpleAndComplex::IsComposite() const {
    return false;
}

void SimpleAndComplex::setWeigth(int weigth) noexcept {
    this->weigth_ = weigth;
}

int SimpleAndComplex::getWeigth() noexcept {
    return this->weigth_;
}

void SimpleAndComplex::setCost(int cost) noexcept {
    this->cost_ = cost;
}

int SimpleAndComplex::getCost() noexcept {
    return this->cost_;
}
