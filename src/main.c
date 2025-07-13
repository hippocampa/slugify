#include <stdio.h>
#include <string.h>
#define HELP_CMD "help"

void
process_name (char *arg)
{
  printf ("%s\n", arg);
}

void
show_help ()
{
  puts ("Slugify");
  puts ("turning-string-to-slug\n");
  puts ("Usage:");
  puts ("slugify <string>\tTurn string to slug");
  puts ("slugify help\t\tShow help\n\n");
  puts ("Source: hippocampa.github.io");
}

int
main (int argc, char *argv[])
{
  if (argc == 1 || argc > 2)
    {
      show_help ();
    }
  else
    {
      if (strcmp (HELP_CMD, argv[1]) == 0)
        {
          show_help ();
        }
      else
        {
          process_name (argv[1]);
        }
    }
  return 0;
}
