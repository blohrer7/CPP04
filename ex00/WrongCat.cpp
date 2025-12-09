/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 09:27:14 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/09 09:54:04 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat()
    : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "An WrongCat appears." << std::endl;
    
}

WrongCat::WrongCat(const WrongCat& other)
    :   WrongAnimal(other)
{
    std::cout << "WrongCat copied." << std::endl;
}


WrongCat::~WrongCat()
{
    std::cout << "WrongCat " << this->type << " disappeared." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if(this != &other)
        this->type = other.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat meow (but nobody hears it polymorphically)." << std::endl;
}