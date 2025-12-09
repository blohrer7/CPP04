/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:55:33 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/09 13:22:36 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include"Cat.hpp"

Cat::Cat()
	: AAnimal()
{
	type = "Cat";
    this->brain = new Brain();
	std::cout << "A Cat was born" << std::endl;
}

Cat::Cat(const Cat& other)
    :   AAnimal(other)
{
    brain = new Brain(*other.brain);
	std::cout << "Cat copied" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << this->type << " went to sleep forever." << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if(this != &other)
    {
        AAnimal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    std::cout << "Cat assigned" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
	std::cout << this->type << " MIAU MIAU" << std::endl;
}

std::string Cat::getIdea(int index) const
{
    return this->brain->getIdea(index);
}

void Cat::setIdea(int index, const std::string& idea)
{
    this->brain->setIdea(index, idea);
}