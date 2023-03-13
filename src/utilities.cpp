/**
 ** This file is part of https://github.com/CM0use/Dragon-Land
 ** Copyright 2023 CM0use <dilanuzcs@gmail.com>.
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
# include <thread>
# include <random>

# include "../header/utilities.h"

using namespace std::chrono_literals;

void introduction()
{
	std::puts("You are in a land full of dragons.");
	std::this_thread::sleep_for(TIME);
	std::puts("In front of you are two caves.");
	std::this_thread::sleep_for(TIME);
	std::puts("In one of them, the dragon is generous and friendly and he shares his treasure with you.");
	std::this_thread::sleep_for(TIME);
	std::puts("The other dragon is greedy and hungry, and will devour you immediately.");
	std::this_thread::sleep_for(TIME);
}

bool election()
{
	bool option;

	std::puts("Which cave do you want to enter? (0 o 1)");
	while(true)
	{
		std::cin >> option;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		} break;
	}
	return option;
}

bool luck()
{
	std::uniform_int_distribution<std::uint8_t> dist(0, 1);
	std::random_device rd;
	std::mt19937 engine(rd());
	bool luck = dist(engine);
	return luck;
}

void entering_the_cave(const std::string_view& the_luck)
{
	std::puts("You approach the cave...");
	std::this_thread::sleep_for(TIME);
	std::puts("It's dark and creepy...");
	std::this_thread::sleep_for(TIME);
	std::puts("A large dragon suddenly appears in front of you! It opens its jaws and...");
	std::this_thread::sleep_for(TIME);
	std::cout << the_luck << std::endl;
}
