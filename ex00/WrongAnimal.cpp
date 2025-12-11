/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 07:27:30 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/11 08:46:13 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
    : type("WrongAnimal")
{
    std::cout << "An WrongAnimal appears." << std::endl;

}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
    :   type(other.type)
{
    std::cout << "WrongAnimal copied." << std::endl;
}


WrongAnimal::~WrongAnimal()
{
    std::cout << this->type << " disappeared." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if(this != &other)
        this->type = other.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound." << std::endl;
}


void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}
