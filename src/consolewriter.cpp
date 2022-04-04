#include <iostream>

#include "consolewriter.hpp"
#include "lpct.hpp"
#include "constans.hpp"

namespace del
{
  void ConsoleWriter::help_warning()
  {
    using lc = lpct::colors;

    std::cerr << 
    get_colorstr<std::string>(lc::red, std::string("Try ")) <<
      "'" << constans::programm_name <<
      " help' " << 
      get_colorstr(lc::green, std::string("for more information.")) <<
    std::endl;
  }

  void ConsoleWriter::help()
  {
    std::cout << "y";
  }
}
