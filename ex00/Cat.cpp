/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:55:33 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/08 19:02:45 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include"Cat.hpp"

Cat::Cat()
	: Animal()
{
	type = "Cat";
	std::cout << "A Cat was born" << std::endl;
}

Cat::Cat(const Cat& other)
    :   Animal(other)
{
	std::cout << "Cat copied" << std::endl;
}

Cat::~Cat()
{
    std::cout << this->type << " went to sleep forever." << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if(this != &other)
        this->type = other.type;
    return *this;
}

void Cat::makeSound() const
{
	std::cout << this->type << " MIAU MIAU" << std::endl;
}
