// Run once time:
#ifndef _PI_UTILS_C_
#define _PI_UTILS_C_

// Importations:
#define IMPORT_MATH_UTILS
#include <cutils.h>
#include <iostream>
#include <string>


// Main code:
int main(void)
{
	// Variables:
	#define PI_UTILS_VERSION "1.0.2"       // Pi Utils version variable.
	#define MIN_PRECISION 0                // Minimum precision variable.
	#define MAX_PRECISION 18               // Maximum precision variable.
	signed char loop1 = 1;                 // Loop variable.
	char pi_str_c[] = "Short/Approximate"; // Pi value in a string variable (capital letter in the start).
	char pi_str[] = "short/approximate";   // Pi value in a string variable.
	signed int precision = 2;              // Precision variable.
	long double pi_val = PI_S_L;           // Pi value in a number variable.
	long double val;                       // Value variable.
	std::string option1;                   // Option variable.

	// Enable Virtual Terminal and UTF-8:
	enable_vt_and_utf8();

  // Main loop:
  while(loop1 == 1)
  {
    clear_terminal();
    puts("============================================");
    printf("============ Pi Utils (C) %s ============\n", PI_UTILS_VERSION);
    puts("============================================");
    printf("  %s[ 0 ] Options...%s\n", RED_COLOR, BASE_TERMINAL);
    puts("  [ 1 ] Found the circumference");
    puts("  [ 2 ] Found the circle area");
    puts("  [ 3 ] Found the sphere volume");
    fputs("\t Your answer: ", stdout);
    std::cin >> std::ws >> option1;
    clear_terminal();

    if(option1 == "0")
    {
      loop1 = 2;

      while(loop1 == 2)
      {
        puts("[ 0 ] Back to main menu");
        printf("%s[ 1 ] Exit...%s\n", RED_COLOR, BASE_TERMINAL);
        printf("[ 2 ] Change value of pi (current: %s)\n", pi_str_c);
        printf("[ 3 ] Change precision value (current: %d)\n", precision);
        fputs("\tYour answer: ", stdout);
        std::cin >> std::ws >> option1;

        if(option1 == "0")
        {
          --loop1;
        }

        else if(option1 == "1")
        {
					clear_terminal();
          loop1 = 0;
        }

        else if(option1 == "2")
        {
					clear_terminal();
          loop1 = 3;

          while(loop1 == 3)
          {
            puts("[ 0 ] Go back to options menu");
            printf("[ 1 ] Short/Approximate pi (Value: %.*Lf)\n", 2, PI_S_L);
            printf("[ 2 ] Long pi (Value: %.*Lf)\n", 19, PI_L_L);
            fputs("   Your answer: ", stdout);
            std::cin >> std::ws >> option1;

            if(option1 == "0")
            {
              loop1 = 2;
            }

            else if(option1 == "1")
            {
              pi_val = PI_S_L;
              strcpy(pi_str_c, "Short/Approximate");
              strcpy(pi_str, "short/approximate");
              loop1 = 2;
            }

            else if(option1 == "2")
            {
              pi_val = PI_L_L;
              strcpy(pi_str_c, "Long");
              strcpy(pi_str, "long");
              loop1 = 2;
            }

						clear_terminal();
          }
        }

        else if(option1 == "3")
        {
					clear_terminal();
          printf("Type the new value for the precision (min: 0, max: 18, current: %d): ", precision);
          scanf("%d", &precision);

          if(precision < MIN_PRECISION)
          {
            precision = MIN_PRECISION;
        	}

          else if(precision > MAX_PRECISION)
          {
            precision = MAX_PRECISION;
          }

					clear_terminal();
        }

				else if(option1 == "3.14" || option1 == "3.1415" || option1 == "3.14159" || option1 == "3,14" || option1 == "3,1415" || option1 == "3,14159")
				{
					clear_terminal();
					easter_egg_function();
					clear_terminal();
				}
      }
    }

    else if(option1 == "1")
		{
			loop1 = 2;

			while(loop1 == 2)
			{
				puts("[ 0 ] Go back to main menu");
				puts("[ 1 ] Calculate using the radius");
				puts("[ 2 ] Calculate using the diameter");
				fputs("   Your answer: ", stdout);
				std::cin >> std::ws >> option1;
				clear_terminal();

				if(option1 == "0")
				{
					--loop1;
				}

				else if(option1 == "1")
				{
					fputs("Type the radius value: ", stdout);
					scanf("%Lf", &val);
					printf("Result: %.*Lf\n", precision, calc_circumfer(pi_val, val));
					petc();
					--loop1;
				}

				else if(option1 == "2")
				{
					fputs("Type the diameter value: ", stdout);
					scanf("%Lf", &val);
					printf("Result: %.*Lf\n", precision, calc_circumfer(pi_val, val / 2.0L));
					petc();
					--loop1;
				}
			}
		}

		else if(option1 == "2")
		{
			loop1 = 2;

			while(loop1 == 2)
			{
				puts("[ 0 ] Go back to main menu");
				puts("[ 1 ] Calculate using the radius");
				puts("[ 2 ] Calculate using the diameter");
				fputs("   Your answer: ", stdout);
				scanf("%Lf", &option1);
				clear_terminal();

				if(option1 == "0")
				{
					--loop1;
				}

				else if(option1 == "1")
				{
					fputs("Type the radius value: ", stdout);
					scanf("%Lf", &val);
					printf("Result: %.*Lf\n", precision, calc_circ_area(pi_val, val));
					petc();
					--loop1;
				}

				else if(option1 == "2")
				{
					fputs("Type the diameter value: ", stdout);
					scanf("%Lf", &val);
					printf("Result: %.*Lf\n", precision, calc_circ_area(pi_val, val / 2.0L));
					petc();
					--loop1;
				}
			}
		}

		else if(option1 == "3")
		{
			loop1 = 2;

			while(loop1 == 2)
			{
				puts("[ 0 ] Go back to main menu");
				puts("[ 1 ] Calculate using the radius");
				puts("[ 2 ] Calculate using the diameter");
				fputs("   Your answer: ", stdout);
				scanf("%Lf", &option1);
				clear_terminal();

				if(option1 == "0")
				{
					--loop1;
				}

				else if(option1 == "1")
				{
					fputs("Type the radius value: ", stdout);
					scanf("%Lf", &val);
					printf("Result: %.*Lf\n", precision, calc_spher_vol(pi_val, val));
					petc();
					--loop1;
				}

				else if(option1 == "2")
				{
					fputs("Type the diameter value: ", stdout);
					scanf("%Lf", &val);
					printf("Result: %.*Lf\n", precision, calc_spher_vol(pi_val, val / 2.0L));
					petc();
					--loop1;
				}
			}
		}
  }

  return 0;
}

#endif
