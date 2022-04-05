#pragma once
#ifndef ARGSPARSER_HPP_WTVN9KSJ
#define ARGSPARSER_HPP_WTVN9KSJ
#include <string>
#include <memory>
#include <vector>
#include <algorithm>
#include <optional>
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
    std::optional<TypeString> find_command(TypeString&& command)
    {
      for(const auto&fl:constans::flags)
      {
        auto cmd = std::find(fl.cbegin(), fl.cend(), command );
        if ( cmd != fl.cend() )
        {
          return std::make_optional<TypeString>(*cmd);
        }
      }

      return std::nullopt;
    }
  };
}

#endif /* end of include guard: ARGSPARSER_HPP_WTVN9KSJ */
