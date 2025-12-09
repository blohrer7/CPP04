/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:15:49 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/09 10:31:34 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
    std::cout << "Brain created." << std::endl;
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = "default";
        i++;
    }
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copied." << std::endl;
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = other.ideas[i];
        i++;
    }
}

Brain::~Brain()
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        int i = 0;
        while (i < 100)
        {
            this->ideas[i] = other.ideas[i];
            i++;
        }
    }
    std::cout << "Brain assigned." << std::endl;
    return *this;
}

std::string Brain::getIdea(int index) const
{
    if (index < 0 || index >= 100)
        return "";

    return this->ideas[index];
}

void Brain::setIdea(int index, const std::string& idea)
{
    if (index < 0 || index >= 100)
        return;

    this->ideas[index] = idea;
}