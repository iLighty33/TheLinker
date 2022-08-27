#pragma once
#include <list>
#include <iostream>

/**
 * ������� ����� ��� ��� �������, ��� � ��� ������� �������� ���������.
 */

class SimpleAndComplex {
protected:
    SimpleAndComplex* parent_;
    std::list<SimpleAndComplex*> children_;
public:
    SimpleAndComplex();

    void SetParent(SimpleAndComplex* parent);
    SimpleAndComplex* GetParent() const;

    virtual void Add(SimpleAndComplex* component) {}
    virtual void Remove(SimpleAndComplex* component) {}

    virtual bool IsComposite() const;

    void setWeigth(int weigth) noexcept;

    int getWeigth() noexcept;

    void setCost(int cost) noexcept;

    int getCost() noexcept;

	virtual std::string Operation() const = 0;

private:

    int weigth_ = 0;
    int cost_ = 0;

};

