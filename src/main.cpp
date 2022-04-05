
/*|+----------------------------------------------------------------------+|*\
 *|   ProgramName: del // del - safe alternative rm                        |*
 *|   License: GPL3                                                        |*
 *|   Author: Ezi                                                          |*
 *|   Language: C++20                                                      |*
 *|   Copyright © 2022 Ezi . All Rights Reserved.                          |*
\*|+---------------------------------| DEL |------------------------------+|*/

#include <iostream>
#include <memory>
#include "argsparser.hpp"
#include "fileremoval.hpp"
#include "consolewriter.hpp"

int 
main(int argc, char **argv)
{
  try
  {
    // create container for argv
    auto env{std::make_unique<std::vector<std::string>>(argv, argv + argc)}; 

    // Parse argv into files and flags
    auto argsParser{std::make_unique<
      del::ArgsParser<std::string>>(std::move(env))};

    // Delete files
    auto fileRemoval{std::make_unique<
      del::FileRemoval<std::string>>(std::move(argsParser))};
  }
  catch(...)
  {
    // Help user
    del::ConsoleWriter::help_warning();
  }
  
  return EXIT_SUCCESS;
}
