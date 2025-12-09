/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 18:49:27 by blohrer           #+#    #+#             */
/*   Updated: 2025/12/09 09:49:30 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== Normal Animals ===" << std::endl;
    {
        const Animal* meta = new Animal();
        const Animal* dog  = new Dog();
        const Animal* cat  = new Cat();

        std::cout << dog->getType() << std::endl;
        std::cout << cat->getType() << std::endl;

        cat->makeSound();
        dog->makeSound();
        meta->makeSound();

        delete meta;
        delete dog;
        delete cat;
    }

    std::cout << "\n=== Wrong Animals ===" << std::endl;
    {
        const WrongAnimal* wmeta = new WrongAnimal();
        const WrongAnimal* wcat  = new WrongCat();

        std::cout << wcat->getType() << std::endl;

        wcat->makeSound();
        wmeta->makeSound();

        delete wmeta;
        delete wcat;
    }

    return 0;
}

