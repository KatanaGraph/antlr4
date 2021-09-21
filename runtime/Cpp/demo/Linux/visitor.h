#pragma once
#include "CypherBaseVisitor.h"
#include <cstdio>

namespace antlrcpptest {

/**
 * This class provides an empty implementation of CypherVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
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
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_SingleQuery(CypherParser::OC_SingleQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_SinglePartQuery(CypherParser::OC_SinglePartQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_MultiPartQuery(CypherParser::OC_MultiPartQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_UpdatingClause(CypherParser::OC_UpdatingClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ReadingClause(CypherParser::OC_ReadingClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Match(CypherParser::OC_MatchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Unwind(CypherParser::OC_UnwindContext *ctx) override {
    out("UNWIND");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_Merge(CypherParser::OC_MergeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_MergeAction(CypherParser::OC_MergeActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Create(CypherParser::OC_CreateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Set(CypherParser::OC_SetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_SetItem(CypherParser::OC_SetItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Delete(CypherParser::OC_DeleteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Remove(CypherParser::OC_RemoveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RemoveItem(CypherParser::OC_RemoveItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_InQueryCall(CypherParser::OC_InQueryCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_StandaloneCall(CypherParser::OC_StandaloneCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_YieldItems(CypherParser::OC_YieldItemsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_YieldItem(CypherParser::OC_YieldItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_With(CypherParser::OC_WithContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Return(CypherParser::OC_ReturnContext *ctx) override {
    out("RETURN");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_ProjectionBody(CypherParser::OC_ProjectionBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ProjectionItems(CypherParser::OC_ProjectionItemsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ProjectionItem(CypherParser::OC_ProjectionItemContext *ctx) override {
    // TODO doesn't grab implicit projection identifiers
    out("projection");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_Order(CypherParser::OC_OrderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Skip(CypherParser::OC_SkipContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Limit(CypherParser::OC_LimitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_SortItem(CypherParser::OC_SortItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Where(CypherParser::OC_WhereContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Pattern(CypherParser::OC_PatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PatternPart(CypherParser::OC_PatternPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_AnonymousPatternPart(CypherParser::OC_AnonymousPatternPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PatternElement(CypherParser::OC_PatternElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_NodePattern(CypherParser::OC_NodePatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PatternElementChain(CypherParser::OC_PatternElementChainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RelationshipPattern(CypherParser::OC_RelationshipPatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RelationshipDetail(CypherParser::OC_RelationshipDetailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Properties(CypherParser::OC_PropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RelationshipTypes(CypherParser::OC_RelationshipTypesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_NodeLabels(CypherParser::OC_NodeLabelsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_NodeLabel(CypherParser::OC_NodeLabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RangeLiteral(CypherParser::OC_RangeLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_LabelName(CypherParser::OC_LabelNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RelTypeName(CypherParser::OC_RelTypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Expression(CypherParser::OC_ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_OrExpression(CypherParser::OC_OrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_XorExpression(CypherParser::OC_XorExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_AndExpression(CypherParser::OC_AndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_NotExpression(CypherParser::OC_NotExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ComparisonExpression(CypherParser::OC_ComparisonExpressionContext *ctx) override {
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
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PowerOfExpression(CypherParser::OC_PowerOfExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_UnaryAddOrSubtractExpression(CypherParser::OC_UnaryAddOrSubtractExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_StringListNullOperatorExpression(CypherParser::OC_StringListNullOperatorExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ListOperatorExpression(CypherParser::OC_ListOperatorExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_StringOperatorExpression(CypherParser::OC_StringOperatorExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_NullOperatorExpression(CypherParser::OC_NullOperatorExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PropertyOrLabelsExpression(CypherParser::OC_PropertyOrLabelsExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Atom(CypherParser::OC_AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Literal(CypherParser::OC_LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_BooleanLiteral(CypherParser::OC_BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ListLiteral(CypherParser::OC_ListLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PartialComparisonExpression(CypherParser::OC_PartialComparisonExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ParenthesizedExpression(CypherParser::OC_ParenthesizedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RelationshipsPattern(CypherParser::OC_RelationshipsPatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_FilterExpression(CypherParser::OC_FilterExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_IdInColl(CypherParser::OC_IdInCollContext *ctx) override {
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
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ImplicitProcedureInvocation(CypherParser::OC_ImplicitProcedureInvocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ProcedureResultField(CypherParser::OC_ProcedureResultFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ProcedureName(CypherParser::OC_ProcedureNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Namespace(CypherParser::OC_NamespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ListComprehension(CypherParser::OC_ListComprehensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PatternComprehension(CypherParser::OC_PatternComprehensionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PropertyLookup(CypherParser::OC_PropertyLookupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_CaseExpression(CypherParser::OC_CaseExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_CaseAlternatives(CypherParser::OC_CaseAlternativesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Variable(CypherParser::OC_VariableContext *ctx) override {
    out("identifier");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_NumberLiteral(CypherParser::OC_NumberLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_MapLiteral(CypherParser::OC_MapLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Parameter(CypherParser::OC_ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PropertyExpression(CypherParser::OC_PropertyExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PropertyKeyName(CypherParser::OC_PropertyKeyNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_IntegerLiteral(CypherParser::OC_IntegerLiteralContext *ctx) override {
    out("integer");
    return recurse(ctx);
  }

  virtual antlrcpp::Any visitOC_DoubleLiteral(CypherParser::OC_DoubleLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_SchemaName(CypherParser::OC_SchemaNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ReservedWord(CypherParser::OC_ReservedWordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_SymbolicName(CypherParser::OC_SymbolicNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_LeftArrowHead(CypherParser::OC_LeftArrowHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RightArrowHead(CypherParser::OC_RightArrowHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Dash(CypherParser::OC_DashContext *ctx) override {
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

}  // namespace antlrcpptest
