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
    ArgsParser (std::unique_ptr<std::vector<TypeString>> &&env)
    {
    }

    std::unique_ptr<std::vector<TypeString>>&&
    files();

  private:
  };
}

#endif /* end of include guard: ARGSPARSER_HPP_WTVN9KSJ */
