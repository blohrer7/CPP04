/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:49:27 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/11 09:16:27 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"



int main()
{
    std::cout << "=== Abstract Class Test ===" << std::endl;

    // ❌ Should not compile
    AAnimal test;                // error: abstract class
    AAnimal* wrong = new AAnimal(); // error: abstract class

    std::cout << "\n=== Polymorphic Allocation ===" << std::endl;
    {
        const AAnimal* d = new Dog();
        const AAnimal* c = new Cat();

        d->makeSound();
        c->makeSound();

        delete d;
        delete c;
    }

    std::cout << "\n=== Array of AAnimals ===" << std::endl;
    {
        AAnimal* animals[4];

        for (int i = 0; i < 2; i++)
            animals[i] = new Dog();

        for (int i = 2; i < 4; i++)
            animals[i] = new Cat();

        for (int i = 0; i < 4; i++)
            delete animals[i];
    }

    std::cout << "\n=== Deep Copy Test (Dog) ===" << std::endl;
    {
        Dog d1;
        d1.setIdea(0, "I want a bone");

        Dog d2(d1);  // deep copy
        std::cout << "d1 idea: " << d1.getIdea(0) << std::endl;
        std::cout << "d2 idea: " << d2.getIdea(0) << std::endl;

        d1.setIdea(0, "I want two bones!");

        std::cout << "After modifying d1:" << std::endl;
        std::cout << "d1 idea: " << d1.getIdea(0) << std::endl;
        std::cout << "d2 idea: " << d2.getIdea(0) << std::endl;
    }

    std::cout << "\n=== All tests completed ===" << std::endl;
    return 0;
}
