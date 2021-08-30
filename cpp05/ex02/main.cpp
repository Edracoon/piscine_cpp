#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try	// J'essaie ce code : si des erreurs proviennent je recupere ces erreurs dans mon catch
	{
		Bureaucrat	Kev("Kevin", 3);			// Creation de Kev
		std::cout << Kev << std::endl;			// Affichage de Kev
		Kev.increaseGrade();					// Decre du Grade
		std::cout << Kev << std::endl;			// Affiche de Kev

		Bureaucrat	Ed("Edgar", 138);			// Creation d'Ed
		std::cout << Ed << std::endl;			// Affichage d'Ed
		Ed.increaseGrade();						// incre du Grade
		std::cout << Ed << std::endl;			// Affiche d'Ed

		// for (int i = 0 ; i < 51 ; i++)	
		// 	Ed.decreaseGrade();
		// Grade is now 151 == Error => Exception is catched = Grade too low

		ShrubberyCreationForm	shrub("maison");	// Creation d'un Form
		std::cout << shrub << std::endl;		// Affichage Form
		shrub.beSigned(Ed);					// Signer un Form
		std::cout << shrub << std::endl;		// Affichage du Form
		shrub.execute(Ed);

		ShrubberyCreationForm	test(shrub); // Constructeur par copy marche pas
		std::cout << test << std::endl;	// Attention faire une surchage sur l'operateur=
	}
	// catch (Bureaucrat::GradeTooLowException ex)	// -> catch specifique a mon erreur "too low"
	// {
	// 	std::cerr << ex.what() << std::endl;
	// }
	// catch (Bureaucrat::GradeTooHighException ex)	// -> catch specifique a mon erreur "too high"
	// {
	// 	std::cerr << ex.what() << std::endl;
	// }
	catch (std::exception& ex)	//	catch global qui va utiliser mes class
	{							//	qui heritent de std::exception
		std::cerr << ex.what() << std::endl;
	}
}
