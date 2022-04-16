
//          Copyright CM0use.
// Distributed under the Boost Software License, Version 1.0.
//    https://github.com/CM0use/Dragon-Land/blob/main/LICENSE
//          https://www.boost.org/LICENSE_1_0.txt

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
