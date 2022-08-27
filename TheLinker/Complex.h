#pragma once
#include <list>
#include "SimpleAndComplex.h"

/**
 * Класс сложных компонентов
 */

//class SimpleAndComplex;


class Complex : public SimpleAndComplex {
protected:
    std::list<SimpleAndComplex*> children_;

public:
    Complex();

    void Add(SimpleAndComplex* component);

    void Remove(SimpleAndComplex* component);

    bool IsComposite() const;

    std::string Operation() const;
};


