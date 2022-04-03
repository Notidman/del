#pragma once
#ifndef ARGSPARSER_HPP_WTVN9KSJ
#define ARGSPARSER_HPP_WTVN9KSJ
#include <string>
#include <memory>
#include <vector>

namespace del
{
  template < typename TypeString >
  class ArgsParser final
  {
  public:
    ArgsParser (std::unique_ptr<std::vector<TypeString>> &&env);

    std::unique_ptr<std::vector<TypeString>>&&
    files();

    bool total();
    bool dir();
    bool no();
    bool force();
    bool recursive();

  private:
    bool total_      = false;
    bool dir_        = false;
    bool no_         = false;
    bool force_      = false;
    bool recursive_  = false;
  };
}

#endif /* end of include guard: ARGSPARSER_HPP_WTVN9KSJ */
