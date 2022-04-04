#pragma once
#include <algorithm>
#ifndef ARGSPARSER_HPP_WTVN9KSJ
#define ARGSPARSER_HPP_WTVN9KSJ
#include <string>
#include <memory>
#include <vector>
#include "constans.hpp"

namespace del
{
  template < typename TypeString >
  class ArgsParser final
  {
  public:
    ArgsParser (std::unique_ptr<std::vector<TypeString>> &&env)
    {
      auto command = find_command(std::move(env->at(2)));

    }

    std::unique_ptr<std::vector<TypeString>>&&
    files();

  private:
    constans::commands find_command(TypeString&& env)
    {
      for(const auto&fl:constans::flags)
      {
        if ( std::find(fl.cbegin(), fl.cend(), env) )
        {
          return 
        }
      }

      return 
    }
  };
}

#endif /* end of include guard: ARGSPARSER_HPP_WTVN9KSJ */
