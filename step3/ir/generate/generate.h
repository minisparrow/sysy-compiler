#pragma once

#include "ast/astnode.h"
#include "ir/ir.h"

namespace sysy::ir {
IRList generate(sysy::ast::node::BaseAST* root);
}  // namespace sysy::ir
