#ifndef _PI_UTILS_C_
#define _PI_UTILS_C_

// Importations:
#define IMPORT_MATH_UTILS
#include <cutils.h>
#include <stdio.h>


// Main code:
int main(void)
{
  // Variables:
  #define PI_UTILS_VERSION 1.00L                // Pi Utils version variable.
  #define MIN_PRECISION 0                       // Minimum precision variable.
	#define MAX_PRECISION 18                      // Maximum precision variable.
  signed char loop1 = 1;                        // Loop variable.
  signed char pi_str_c[] = "Short/Approximate"; // Pi value in a string variable (capital letter in the start).
  signed char pi_str[] = "short/approximate";   // Pi value in a string variable.
  signed int precision = 2;                     // Precision variable.
  long double pi_val = PI_S_L;                  // Pi value in a number variable.
  long double option1;                          // Option variable.
	long double val;                              // Value variable.

  // Main loop:
  while(loop1 == 1)
  {
    clear_terminal();
    puts("===========================================");
    printf("============ Pi Utils (C) %.2Lf ============\n", PI_UTILS_VERSION);
    puts("===========================================");
    printf("  %s[ 0 ] Options...%s\n", RED_COLOR, BASE_TERMINAL);
    puts("  [ 1 ] Found the circumference");
    puts("  [ 2 ] Found the circle area");
    puts("  [ 3 ] Found the sphere volume");
    fputs("\t Your answer: ", stdout);
    scanf("%Lf", &option1);
    clear_terminal();

    if(option1 == 0.0L)
    {
      loop1 = 2;

      while(loop1 == 2)
      {
        puts("[ 0 ] Back to main menu");
        printf("%s[ 1 ] Exit...%s\n", RED_COLOR, BASE_TERMINAL);
        printf("[ 2 ] Change value of pi (current: %s)\n", pi_str_c);
        printf("[ 3 ] Change precision value (current: %d)\n", precision);
        fputs("\tYour answer: ", stdout);
        scanf("%Lf", &option1);
        clear_terminal();

        if(option1 == 0.0L)
        {
          --loop1;
        }

        else if(option1 == 1.0L)
        {
          loop1 = 0;
        }

        else if(option1 == 2.0L)
        {
          loop1 = 3;

          while(loop1 == 3)
          {
            puts("[ 0 ] Go back to options menu");
            printf("[ 1 ] Short/Approximate pi (Value: %.*Lf)\n", 2, PI_S_L);
            printf("[ 2 ] Long pi (Value: %.*Lf)\n", 19, PI_L_L);
            fputs("   Your answer: ", stdout);
            scanf("%Lf", &option1);

            if(option1 == 0.0L)
            {
              loop1 = 2;
            }

            else if(option1 == 1.0L)
            {
              pi_val = PI_S_L;
              strcpy(pi_str_c, "Short/Approximate");
              strcpy(pi_str, "short/approximate");
              loop1 = 2;
            }

            else if(option1 == 2.0L)
            {
              pi_val = PI_L_L;
              strcpy(pi_str_c, "Long");
              strcpy(pi_str, "long");
              loop1 = 2;
            }

						clear_terminal();
          }
        }

        else if(option1 == 3.0L)
        {
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
      }
    }

    else if(option1 == 1.0L)
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

				if(option1 == 0.0L)
				{
					--loop1;
				}

				else if(option1 == 1.0L)
				{
					fputs("Type the radius value: ", stdout);
					scanf("%Lf", &val);
					printf("Result: %.*Lf\n", precision, calc_circumfer(pi_val, val));
					petc();
					clear_terminal();
					--loop1;
				}

				else if(option1 == 2.0L)
				{
					fputs("Type the diameter value: ", stdout);
					scanf("%Lf", &val);
					printf("Result: %.*Lf\n", precision, calc_circumfer(pi_val, val / 2.0L));
					petc();
					clear_terminal();
					--loop1;
				}
			}
		}

		else if(option1 == 2.0L)
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

				if(option1 == 0.0L)
				{
					--loop1;
				}

				else if(option1 == 1.0L)
				{
					fputs("Type the radius value: ", stdout);
					scanf("%Lf", &val);
					printf("Result: %.*Lf\n", precision, calc_circ_area(pi_val, val));
					petc();
					clear_terminal();
					--loop1;
				}

				else if(option1 == 2.0L)
				{
					fputs("Type the diameter value: ", stdout);
					scanf("%Lf", &val);
					printf("Result: %.*Lf\n", precision, calc_circ_area(pi_val, val / 2.0L));
					petc();
					clear_terminal();
					--loop1;
				}
			}
		}

		else if(option1 == 3.0L)
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

				if(option1 == 0.0L)
				{
					--loop1;
				}

				else if(option1 == 1.0L)
				{
					fputs("Type the radius value: ", stdout);
					scanf("%Lf", &val);
					printf("Result: %.*Lf\n", precision, calc_spher_vol(pi_val, val));
					petc();
					clear_terminal();
					--loop1;
				}

				else if(option1 == 2.0L)
				{
					fputs("Type the diameter value: ", stdout);
					scanf("%Lf", &val);
					printf("Result: %.*Lf\n", precision, calc_spher_vol(pi_val, val / 2.0L));
					petc();
					clear_terminal();
					--loop1;
				}
			}
		}
  }

  return 0;
}

#endif