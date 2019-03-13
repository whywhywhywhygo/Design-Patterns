//
// Created by gaojian on 18-10-27.
//

#include "menucomponent.h"
#include <exception>

using std::runtime_error;

std::string MenuComponent::getName() const
{
	throw runtime_error("Unsupported operation");
}

std::string MenuComponent::getDescription() const
{
	throw runtime_error("Unsupported operation");
}

double MenuComponent::getPrice() const
{
	throw runtime_error("Unsupported operation");
}

bool MenuComponent::isVegetarian() const
{
	throw runtime_error("Unsupported operation");
}

void MenuComponent::print()
{
	throw runtime_error("Unsupported operation");
}

void MenuComponent::add(std::shared_ptr<MenuComponent> component)
{
	throw runtime_error("Unsupported operation");
}

void MenuComponent::remove(std::shared_ptr<MenuComponent> component)
{
	throw runtime_error("Unsupported operation");
}

std::shared_ptr<MenuComponent> MenuComponent::getChild(int index)
{
	throw runtime_error("Unsupported operation");
}