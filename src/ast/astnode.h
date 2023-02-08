#pragma once

#include <iostream>
namespace sysy::ast::node {
class BaseAST {
 public:
  virtual ~BaseAST() = default;
  virtual void Dump() const = 0; 
};

// CompUnit 是 BaseAST
class CompUnitAST : public BaseAST {
 public:
  // 用智能指针管理对象
  std::unique_ptr<BaseAST> func_def;
  void Dump() const override {
    std::cout << "CompUnitAST { ";
    func_def->Dump();
    std::cout << " }";
  }
};

// FuncDef 也是 BaseAST
class FuncDefAST : public BaseAST {
 public:
  std::unique_ptr<BaseAST> func_type;
  std::string ident;
  std::unique_ptr<BaseAST> block;

  void Dump() const override {
    std::cout << "FuncDefAST { ";
    func_type->Dump();
    std::cout << ", " << ident << ", ";
    block->Dump();
    std::cout << " }";
  }
};

// Func_type 也是 BaseAST
class FuncTypeAST : public BaseAST {
 public:
  std::string type_;
  void Dump() const override {
    std::cout << "FuncTypeAST { ";
    std::cout << type_ ;
    std::cout << " }";
  }
};

// block 也是 BaseAST
class BlockAST: public BaseAST {
 public:
  std::string left; 
  std::unique_ptr<BaseAST> stmt;
  std::string right; 
  void Dump() const override {
    std::cout << "BlockAST ";
    std::cout << left;
    stmt->Dump();
    std::cout << right;
  }
};

// stmt 也是 BaseAST
class StmtAST: public BaseAST {
 public:
  std::string return_; 
  int  number;
  std::string comma; 
  void Dump() const override {
    std::cout << "StmtAST { ";
    std::cout << number;
    std::cout << " }";
  }
};
}