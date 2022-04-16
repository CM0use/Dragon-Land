
//          Copyright CM0use.
// Distributed under the Boost Software License, Version 1.0.
//    https://github.com/CM0use/Dragon-Land/blob/main/LICENSE
//          https://www.boost.org/LICENSE_1_0.txt

# include <iostream>

# include "../header/utilities.h"

int main()
{
	std::string repeat;
	CLEAN_SCREEN
	introduction();
	do 
    {
        if (election() == luck())
			entering_the_cave("He gives you his treasure!");
		else
			entering_the_cave("It gobbles you up in one bite!");

		std::puts("Do you want to play again? [Y/y/S/s/N/n]");
		std::cin >> repeat;
		CLEAN_SCREEN
		
	} while (std::tolower(repeat[0] == 'y') || std::tolower(repeat[0]) == 's');

	return EXIT_SUCCESS;
}