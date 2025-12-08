/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:34:57 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/08 19:03:10 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"


Dog::Dog()
	: Animal()
{
	type = "Dog";
	std::cout << "A Dog was born" << std::endl;
}

Dog::Dog(const Dog& other)
    :   Animal(other)
{
	std::cout << "Dog copied" << std::endl;
}

Dog::~Dog()
{
    std::cout << this->type << " went to sleep forever." << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if(this != &other)
        this->type = other.type;
    return *this;
}

void Dog::makeSound() const
{
	std::cout << this->type << " WOOOF WOOOOF" << std::endl;
}
