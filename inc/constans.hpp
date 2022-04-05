#pragma once
#ifndef CONSTANS_HPP_E1EAF6VR
#define CONSTANS_HPP_E1EAF6VR
#include <string>
#include <vector>

namespace del
{
  namespace constans
  {
    static inline constexpr const char*
      programm_name = "del";

    static inline constexpr const char*
      authors = "notidman";
  
    static inline const std::vector<std::vector<std::string>>
      flags 
      {
        {"remove","r", "-"},
        {"help",  "h", "?"},
        {"total", "t", "!"},
      };
  }
}

#endif /* end of include guard: CONSTANS_HPP_E1EAF6VR */
