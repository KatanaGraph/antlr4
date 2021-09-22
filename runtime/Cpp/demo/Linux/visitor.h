#pragma once
#include "CypherBaseVisitor.h"

template <typename T>
void here_impl(const char* file, int line, T* ctx) {
  int children = ctx->children.size();
  //if (children > 1) {
    std::cout << "HERE at " << file << ":" << line;
    std::cout << " children=" << children;
    std::cout << "\n";
  //}
}

#define HERE here_impl(__FILE__, __LINE__, ctx)

class  OutputVisitor : public CypherBaseVisitor {
public:
  OutputVisitor() : level(0) {}

  virtual antlrcpp::Any visitOC_Statement(CypherParser::OC_StatementContext *ctx) override {
    out("statement");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_Query(CypherParser::OC_QueryContext *ctx) override {
    out("query");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_Union(CypherParser::OC_UnionContext *ctx) override {
    out("UNION");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_SingleQuery(CypherParser::OC_SingleQueryContext *ctx) override {
    HERE;
    return visitChildren(ctx);
      }

  virtual antlrcpp::Any visitOC_SinglePartQuery(CypherParser::OC_SinglePartQueryContext *ctx) override {
    HERE;
    antlrcpp::Any result = defaultResult();
    for (auto& inner : ctx->children) { // Reading, ?, Return
      std::cout << "beginning child\n";
      result = aggregateResult(result, inner->accept(this));
    }
    return result;
  }

  virtual antlrcpp::Any visitOC_MultiPartQuery(CypherParser::OC_MultiPartQueryContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_UpdatingClause(CypherParser::OC_UpdatingClauseContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ReadingClause(CypherParser::OC_ReadingClauseContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Match(CypherParser::OC_MatchContext *ctx) override {
    out("MATCH");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_Unwind(CypherParser::OC_UnwindContext *ctx) override {
    out("UNWIND");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_Merge(CypherParser::OC_MergeContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_MergeAction(CypherParser::OC_MergeActionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Create(CypherParser::OC_CreateContext *ctx) override {
    out("CREATE");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_Set(CypherParser::OC_SetContext *ctx) override {
    out("SET");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_SetItem(CypherParser::OC_SetItemContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Delete(CypherParser::OC_DeleteContext *ctx) override {
    out("DELETE");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_Remove(CypherParser::OC_RemoveContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RemoveItem(CypherParser::OC_RemoveItemContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_InQueryCall(CypherParser::OC_InQueryCallContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_StandaloneCall(CypherParser::OC_StandaloneCallContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_YieldItems(CypherParser::OC_YieldItemsContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_YieldItem(CypherParser::OC_YieldItemContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_With(CypherParser::OC_WithContext *ctx) override {
    out("WITH");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_Return(CypherParser::OC_ReturnContext *ctx) override {
    out("RETURN");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_ProjectionBody(CypherParser::OC_ProjectionBodyContext *ctx) override {
    // HERE; // begins a list of projections
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ProjectionItems(CypherParser::OC_ProjectionItemsContext *ctx) override {
    // HERE; // a list of projections
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ProjectionItem(CypherParser::OC_ProjectionItemContext *ctx) override {
    // TODO doesn't grab implicit projection identifiers
    out("projection");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_Order(CypherParser::OC_OrderContext *ctx) override {
    out("ORDER BY");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_Skip(CypherParser::OC_SkipContext *ctx) override {
    out("SKIP");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_Limit(CypherParser::OC_LimitContext *ctx) override {
    out("LIMIT");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_SortItem(CypherParser::OC_SortItemContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Where(CypherParser::OC_WhereContext *ctx) override {
    out("WHERE");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_Pattern(CypherParser::OC_PatternContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PatternPart(CypherParser::OC_PatternPartContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_AnonymousPatternPart(CypherParser::OC_AnonymousPatternPartContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PatternElement(CypherParser::OC_PatternElementContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_NodePattern(CypherParser::OC_NodePatternContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PatternElementChain(CypherParser::OC_PatternElementChainContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RelationshipPattern(CypherParser::OC_RelationshipPatternContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RelationshipDetail(CypherParser::OC_RelationshipDetailContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Properties(CypherParser::OC_PropertiesContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RelationshipTypes(CypherParser::OC_RelationshipTypesContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_NodeLabels(CypherParser::OC_NodeLabelsContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_NodeLabel(CypherParser::OC_NodeLabelContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RangeLiteral(CypherParser::OC_RangeLiteralContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_LabelName(CypherParser::OC_LabelNameContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RelTypeName(CypherParser::OC_RelTypeNameContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Expression(CypherParser::OC_ExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_OrExpression(CypherParser::OC_OrExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_XorExpression(CypherParser::OC_XorExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_AndExpression(CypherParser::OC_AndExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_NotExpression(CypherParser::OC_NotExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ComparisonExpression(CypherParser::OC_ComparisonExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_AddOrSubtractExpression(CypherParser::OC_AddOrSubtractExpressionContext *ctx) override {
    if (ctx->children.size() == 3) { // expr + expr
      out("binary operator");
      return recurse(ctx);
    }
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_MultiplyDivideModuloExpression(CypherParser::OC_MultiplyDivideModuloExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PowerOfExpression(CypherParser::OC_PowerOfExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_UnaryAddOrSubtractExpression(CypherParser::OC_UnaryAddOrSubtractExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_StringListNullOperatorExpression(CypherParser::OC_StringListNullOperatorExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ListOperatorExpression(CypherParser::OC_ListOperatorExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_StringOperatorExpression(CypherParser::OC_StringOperatorExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_NullOperatorExpression(CypherParser::OC_NullOperatorExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PropertyOrLabelsExpression(CypherParser::OC_PropertyOrLabelsExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Atom(CypherParser::OC_AtomContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Literal(CypherParser::OC_LiteralContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_BooleanLiteral(CypherParser::OC_BooleanLiteralContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ListLiteral(CypherParser::OC_ListLiteralContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PartialComparisonExpression(CypherParser::OC_PartialComparisonExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ParenthesizedExpression(CypherParser::OC_ParenthesizedExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RelationshipsPattern(CypherParser::OC_RelationshipsPatternContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_FilterExpression(CypherParser::OC_FilterExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_IdInColl(CypherParser::OC_IdInCollContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_FunctionInvocation(CypherParser::OC_FunctionInvocationContext *ctx) override {
    out("apply");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_FunctionName(CypherParser::OC_FunctionNameContext *ctx) override {
    out("function name");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ExplicitProcedureInvocation(CypherParser::OC_ExplicitProcedureInvocationContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ImplicitProcedureInvocation(CypherParser::OC_ImplicitProcedureInvocationContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ProcedureResultField(CypherParser::OC_ProcedureResultFieldContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ProcedureName(CypherParser::OC_ProcedureNameContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Namespace(CypherParser::OC_NamespaceContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ListComprehension(CypherParser::OC_ListComprehensionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PatternComprehension(CypherParser::OC_PatternComprehensionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PropertyLookup(CypherParser::OC_PropertyLookupContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_CaseExpression(CypherParser::OC_CaseExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_CaseAlternatives(CypherParser::OC_CaseAlternativesContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Variable(CypherParser::OC_VariableContext *ctx) override {
    out("identifier");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_NumberLiteral(CypherParser::OC_NumberLiteralContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_MapLiteral(CypherParser::OC_MapLiteralContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Parameter(CypherParser::OC_ParameterContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PropertyExpression(CypherParser::OC_PropertyExpressionContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PropertyKeyName(CypherParser::OC_PropertyKeyNameContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_IntegerLiteral(CypherParser::OC_IntegerLiteralContext *ctx) override {
    out("integer");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_DoubleLiteral(CypherParser::OC_DoubleLiteralContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_SchemaName(CypherParser::OC_SchemaNameContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ReservedWord(CypherParser::OC_ReservedWordContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_SymbolicName(CypherParser::OC_SymbolicNameContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_LeftArrowHead(CypherParser::OC_LeftArrowHeadContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RightArrowHead(CypherParser::OC_RightArrowHeadContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Dash(CypherParser::OC_DashContext *ctx) override {
    HERE;
    return visitChildren(ctx);
  }

private:
  int level;

  template <typename ...Params>
  void out(std::string str) {
    for (int i = 0; i < level; ++i) {
      printf("> ");
    }
    printf("%s\n", str.c_str());
  }

  template <typename T>
  antlrcpp::Any recurse(T* ctx) {
    level++;
    auto ret = visitChildren(ctx);
    level--;
    return ret;
  }
};
