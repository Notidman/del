#pragma once
#ifndef FILEREMOVAL_HPP_YINCBXRM
#define FILEREMOVAL_HPP_YINCBXRM
#include <vector>
#include <string>
#include <memory>
#include "argsparser.hpp"

namespace del
{
  template < typename TypeString >
  class FileRemoval
  {
  public:
    FileRemoval(std::unique_ptr<ArgsParser<std::string>> &&files);
  
  private:
    /* data */
  };
}

#endif /* end of include guard: FILEREMOVAL_HPP_YINCBXRM */
