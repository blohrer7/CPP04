/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:49:07 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/09 09:49:01 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal()
    : type("Animal")
{
    std::cout << "An Animal appears." << std::endl;

}

Animal::Animal(const Animal& other)
    :   type(other.type){}


Animal::~Animal()
{
    std::cout << this->type << " disappeared." << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if(this != &other)
        this->type = other.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound." << std::endl;
}


void Animal::setType(std::string type)
{
    this->type = type;
}

std::string Animal::getType() const
{
    return this->type;
}
