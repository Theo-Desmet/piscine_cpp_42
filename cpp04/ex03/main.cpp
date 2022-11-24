/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdesmet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:18:08 by tdesmet           #+#    #+#             */
/*   Updated: 2022/11/24 09:49:16 by tdesmet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {
	/********** create class ***********/
	IMateriaSource * iMatS = new MateriaSource();
	MateriaSource * matS = new MateriaSource();
	AMateria * matIce = new Ice();
	AMateria * matCure = new Cure();
	Ice * ice = new Ice();
	Cure * cure = new Cure();
	ICharacter * iToto = new Character("i_toto");
	Character * toto = new Character("toto");

	std::cout << "\033[1;37m******************************************" << std::endl;
	std::cout << "*             test character             *" << std::endl;
	std::cout << "******************************************\033[1;0m" << std::endl;

	std::cout << std::endl << "********** test equip character **********" << std::endl;
	std::cout << "Character equip \033[1;34mice\033[1;0m 🧊 in case 0" << std::endl;
	iToto->equip(matIce);
	toto->equip(ice);
	std::cout << "Character equip \033[1;32mcure\033[1;0m 🩹 in case 1" << std::endl;
	iToto->equip(matCure);
	toto->equip(cure);
	std::cout << "Character equip \033[1;34mice\033[1;0m 🧊 in case 2" << std::endl;
	iToto->equip(matIce);
	toto->equip(ice);
	std::cout << "Character equip \033[1;32mcure\033[1;0m 🩹 in case 3" << std::endl;
	iToto->equip(matCure);
	toto->equip(cure);

	std::cout << std::endl <<"********** test equip error **********" << std::endl;
	std::cout << "Character equip \033[1;34mice\033[1;0m 🧊 in case 4" << std::endl;
	iToto->equip(matIce);
	toto->equip(ice);

	std::cout << std::endl <<"********** test unequip character **********" << std::endl;
	std::cout << "Character unequip \033[1;34mice\033[1;0m 🧊 in case 0" << std::endl;
	iToto->unequip(0);
	toto->unequip(0);
	std::cout << "Character unequip \033[1;32mcure\033[1;0m 🩹 in case 1" << std::endl;
	iToto->unequip(1);
	toto->unequip(1);
	std::cout << "Character unequip \033[1;34mice\033[1;0m 🧊 in case 2" << std::endl;
	iToto->unequip(2);
	toto->unequip(2);
	std::cout << "Character unequip \033[1;32mcure\033[1;0m 🩹 in case 3" << std::endl;
	iToto->unequip(3);
	toto->unequip(3);

	std::cout << std::endl <<"********** test unequip error **********" << std::endl;
	std::cout << "Character unequip \033[1;34mice\033[1;0m 🧊 in case -1" << std::endl;
	iToto->unequip(-1);
	toto->unequip(-1);
	std::cout << "Character unequip \033[1;32mcure\033[1;0m 🩹 in case 3" << std::endl;
	iToto->unequip(3);
	toto->unequip(3);
	std::cout << "Character unequip \033[1;34mice\033[1;0m 🧊 in case 4" << std::endl;
	iToto->unequip(4);
	toto->unequip(4);



	std::cout << std::endl << std::endl;
	std::cout << "\033[1;37m******************************************" << std::endl;
	std::cout << "*           test MateriaSource           *" << std::endl;
	std::cout << "******************************************\033[1;0m" << std::endl;

	std::cout << std::endl <<"********** test learn **********" << std::endl;
	std::cout << "Materia source learning \033[1;34mice\033[1;0m 🧊 in case 0" << std::endl;
	iMatS->learnMateria(new Ice());
	matS->learnMateria(new Ice());
	std::cout << "Materia source learning \033[1;34mice\033[1;0m 🧊 in case 1" << std::endl;
	iMatS->learnMateria(new Ice());
	matS->learnMateria(new Ice());
	std::cout << "Materia source learning \033[1;32mcure\033[1;0m 🩹 in case 2" << std::endl;
	iMatS->learnMateria(new Cure());
	matS->learnMateria(new Cure());
	std::cout << "Materia source learning \033[1;32mcure\033[1;0m 🩹 in case 3" << std::endl;
	iMatS->learnMateria(new Cure());
	matS->learnMateria(new Cure());

	std::cout << std::endl << "********** test learn error **********" << std::endl;
	std::cout << "Materia source learning \033[1;34mice\033[1;0m 🧊 in case 4" << std::endl;
	AMateria * test = new Ice();
	iMatS->learnMateria(test);
	matS->learnMateria(test);

	std::cout << std::endl << "********** test create and equip **********" << std::endl;
	std::cout << "Materia source create \033[1;34mice\033[1;0m 🧊 in case 0" << std::endl;
	iToto->equip(iMatS->createMateria("ice"));
	toto->equip(matS->createMateria("ice"));
	std::cout << "Materia source create \033[1;34mice\033[1;0m 🧊 in case 1" << std::endl;
	iToto->equip(iMatS->createMateria("ice"));
	toto->equip(matS->createMateria("ice"));
	std::cout << "Materia source create \033[1;32mcure\033[1;0m 🩹 in case 2" << std::endl;
	iToto->equip(iMatS->createMateria("cure"));
	toto->equip(matS->createMateria("cure"));
	std::cout << "Materia source create \033[1;32mcure\033[1;0m 🩹 in case 3" << std::endl;
	iToto->equip(iMatS->createMateria("cure"));
	toto->equip(matS->createMateria("cure"));



	std::cout << std::endl << std::endl;
	std::cout << "\033[1;37m******************************************" << std::endl;
	std::cout << "*                test use                *" << std::endl;
	std::cout << "******************************************\033[1;0m" << std::endl;

	std::cout << std::endl << "********** test use **********" << std::endl;
	std::cout << "Character use \033[1;34mice\033[1;0m 🧊 in case 0" << std::endl;
	iToto->use(0, *toto);
	toto->use(0, *iToto);
	std::cout << "Character use \033[1;34mice\033[1;0m 🧊 in case 1" << std::endl;
	iToto->use(1, *toto);
	toto->use(1, *iToto);
	std::cout << "Character equip \033[1;32mcure\033[1;0m 🩹 in case 2" << std::endl;
	iToto->use(2, *iToto);
	toto->use(2, *toto);
	std::cout << "Character equip \033[1;32mcure\033[1;0m 🩹 in case 3" << std::endl;
	iToto->use(3, *iToto);
	toto->use(3, *toto);

	delete iMatS;
	delete matS;
	delete iToto;
	delete toto;
	delete ice;
	delete cure;
	delete matIce;
	delete matCure;
	delete test;

	return 0;
}
