/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:49:27 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/09 13:00:03 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    std::cout << "=== Subject basic test ===" << std::endl;
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        delete j;
        delete i;
    }

    std::cout << "\n=== Array of Animals (half Dog / half Cat) ===" << std::endl;
    {
        const int size = 6;
        Animal* animals[size];

        // first half dogs
        for (int i = 0; i < size / 2; i++)
            animals[i] = new Dog();

        // second half cats
        for (int i = size / 2; i < size; i++)
            animals[i] = new Cat();

        // delete all
        for (int i = 0; i < size; i++)
            delete animals[i];
    }

    std::cout << "\n=== Deep Copy Test (Dog) ===" << std::endl;
    {
        Dog d1;
        d1.setIdea(0, "I want a bone");

        Dog d2(d1);    // copy constructor (deep)
        std::cout << "d1 idea[0]: " << d1.getIdea(0) << std::endl;
        std::cout << "d2 idea[0]: " << d2.getIdea(0) << std::endl;

        d1.setIdea(0, "I want TWO bones!");

        std::cout << "After modifying d1:" << std::endl;
        std::cout << "d1 idea[0]: " << d1.getIdea(0) << std::endl;
        std::cout << "d2 idea[0]: " << d2.getIdea(0) << std::endl;
    }

    std::cout << "\n=== Assignment Operator Test (Cat) ===" << std::endl;
    {
        Cat c1;
        Cat c2;

        c1.setIdea(1, "Catch a mouse");
        c2.setIdea(1, "Sleep on keyboard");

        c2 = c1;    // assignment deep copy

        std::cout << "c1 idea[1]: " << c1.getIdea(1) << std::endl;
        std::cout << "c2 idea[1]: " << c2.getIdea(1) << std::endl;

        c1.setIdea(1, "Eat tuna");

        std::cout << "After modifying c1:" << std::endl;
        std::cout << "c1 idea[1]: " << c1.getIdea(1) << std::endl;
        std::cout << "c2 idea[1]: " << c2.getIdea(1) << std::endl;
    }

    std::cout << "\n=== All tests finished ===" << std::endl;
    return 0;
}


