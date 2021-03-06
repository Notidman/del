#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

int 
main(int argc, char **argv)
{
  int choice;
  while (1)
  {
    static struct option long_options[] =
    {
      /* Use flags like so:
      {"verbose",	no_argument,	&verbose_flag, 'V'}*/
      /* Argument styles: no_argument, required_argument, optional_argument */
      {"version", no_argument,	0,	'v'},
      {"help",	no_argument,	0,	'h'},
      
      {0,0,0,0}
    };
  
    int option_index = 0;
  
    /* Argument parameters:
      no_argument: " "
      required_argument: ":"
      optional_argument: "::" */
  
    choice = getopt_long( argc, argv, "vh",
          long_options, &option_index);
  
    if (choice == -1)
      break;
  
    switch( choice )
    {
      case 'v':
        
        break;
  
      case 'h':
        
        break;
  
      case '?':
        /* getopt_long will have already printed an error */
        break;
  
      default:
        /* Not sure how to get here... */
        return EXIT_FAILURE;
    }
  }
  
  /* Deal with non-option arguments here */
  if ( optind < argc )
  {
    while ( optind < argc )
    {
      
    }
  }
  
  return EXIT_SUCCESS;
}
