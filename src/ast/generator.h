#pragma once 
#include "ast/astnode.h"

namespace sysy::ast{
    using namespace sysy::ast::node;
class IASTGenerator {
public:
  virtual bool generate(const CompUnitAST *root) = 0;
  virtual bool generate(const FuncDefAST *root) = 0;
  virtual bool generate(const FuncTypeAST *root) = 0;
  virtual bool generate(const BlockAST *root) = 0;
  virtual bool generate(const StmtAST *root) = 0;
};
}