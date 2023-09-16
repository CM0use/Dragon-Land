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

# ifndef UTILITIES_H
# define UTILITIES_H

# ifdef _WIN32
# define CLEAN_SCREEN system("CLS");
# elif __APPLE__
# define CLEAN_SCREEN system("clear");
# elif __linux__ 
# define CLEAN_SCREEN system("clear");
# endif

# define TIME (2.369s)

void introduction();
bool election();
bool luck();
void entering_the_cave(const std::string_view&);

#endif
