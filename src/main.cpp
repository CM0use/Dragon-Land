/**
 ** This file is part of Dragon-Land project
 ** Copyright 2023 CM0use dilanuzcs@gmail.com
 ** URL: https://github.com/CM0use/Dragon-Land
 **
 ** This program is free software: you can redistribute it and/or modify
 ** it under the terms of the GNU General Public License as published by
 ** the Free Software Foundation, either version 3 of the License, or
 ** (at your option) any later version.
 **
 ** This program is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 ** GNU General Public License for more details.
 **
 ** You should have received a copy of the GNU General Public License
 ** along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

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
