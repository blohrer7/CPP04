/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:34:57 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/09 10:46:46 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


Dog::Dog()
	: Animal()
{
	type = "Dog";
    this->brain = new Brain();
	std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog& other)
    :   Animal(other)
{
    brain = new Brain(*other.brain);
	std::cout << "Dog copied" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << this->type << " went to sleep forever." << std::endl;
}


Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        // Basis-Teil kopieren (type usw.)
        Animal::operator=(other);

        // altes Brain löschen
        delete this->brain;

        // neues Brain deep kopieren
        this->brain = new Brain(*other.brain);
    }
    std::cout << "Dog assigned" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
	std::cout << this->type << " WOOOF WOOOOF" << std::endl;
}

std::string Dog::getIdea(int index) const
{
    return this->brain->getIdea(index);
}

void Dog::setIdea(int index, const std::string& idea)
{
    this->brain->setIdea(index, idea);
}
