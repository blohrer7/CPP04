/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 13:11:56 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/09 13:12:16 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"


AAnimal::AAnimal()
    : type("Animal")
{
    std::cout << "AAnimal created." << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
    : type(other.type)
{
    std::cout << "AAnimal copied." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    if (this != &other)
        this->type = other.type;
    std::cout << "AAnimal assigned." << std::endl;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destroyed." << std::endl;
}

std::string AAnimal::getType() const
{
    return this->type;
}