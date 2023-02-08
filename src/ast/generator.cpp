#include "ast/astnode.h"
#include "ast/generator.h"

namespace sysy{
namespace ast {
namespace node {
using IASTGenerator = sysy::ast::IASTGenerator;
bool CompUnitAST::Codegen(IASTGenerator &generator) const {
    return generator.generate(this);
}
bool FuncDefAST::Codegen(IASTGenerator &generator) const {
    return generator.generate(this);
}
bool FuncTypeAST::Codegen(IASTGenerator &generator) const {
    return generator.generate(this);
}
bool BlockAST::Codegen(IASTGenerator &generator) const {
    return generator.generate(this);
}
bool StmtAST::Codegen(IASTGenerator &generator) const {
    return generator.generate(this);
}
}
}
}