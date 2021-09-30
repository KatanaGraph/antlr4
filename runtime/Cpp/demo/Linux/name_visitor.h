
// Generated from /home/daniel/antlr4/runtime/Cpp/demo/Cypher.g4 by ANTLR 4.9.2

#pragma once

#include "CypherBaseVisitor.h"


/**
 * This class provides an empty implementation of CypherVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  NameVisitor : public CypherBaseVisitor {
public:

  virtual antlrcpp::Any visitOC_Cypher(CypherParser::OC_CypherContext *ctx) override {
    printf("OC_CypherContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Statement(CypherParser::OC_StatementContext *ctx) override {
    printf("OC_StatementContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Query(CypherParser::OC_QueryContext *ctx) override {
    printf("OC_QueryContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RegularQuery(CypherParser::OC_RegularQueryContext *ctx) override {
    printf("OC_RegularQueryContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Union(CypherParser::OC_UnionContext *ctx) override {
    printf("OC_UnionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_SingleQuery(CypherParser::OC_SingleQueryContext *ctx) override {
    printf("OC_SingleQueryContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_SinglePartQuery(CypherParser::OC_SinglePartQueryContext *ctx) override {
    printf("OC_SinglePartQueryContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_MultiPartQuery(CypherParser::OC_MultiPartQueryContext *ctx) override {
    printf("OC_MultiPartQueryContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_UpdatingClause(CypherParser::OC_UpdatingClauseContext *ctx) override {
    printf("OC_UpdatingClauseContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ReadingClause(CypherParser::OC_ReadingClauseContext *ctx) override {
    printf("OC_ReadingClauseContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Match(CypherParser::OC_MatchContext *ctx) override {
    printf("OC_MatchContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Unwind(CypherParser::OC_UnwindContext *ctx) override {
    printf("OC_UnwindContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Merge(CypherParser::OC_MergeContext *ctx) override {
    printf("OC_MergeContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_MergeAction(CypherParser::OC_MergeActionContext *ctx) override {
    printf("OC_MergeActionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Create(CypherParser::OC_CreateContext *ctx) override {
    printf("OC_CreateContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Set(CypherParser::OC_SetContext *ctx) override {
    printf("OC_SetContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_SetItem(CypherParser::OC_SetItemContext *ctx) override {
    printf("OC_SetItemContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Delete(CypherParser::OC_DeleteContext *ctx) override {
    printf("OC_DeleteContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Remove(CypherParser::OC_RemoveContext *ctx) override {
    printf("OC_RemoveContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RemoveItem(CypherParser::OC_RemoveItemContext *ctx) override {
    printf("OC_RemoveItemContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_InQueryCall(CypherParser::OC_InQueryCallContext *ctx) override {
    printf("OC_InQueryCallContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_StandaloneCall(CypherParser::OC_StandaloneCallContext *ctx) override {
    printf("OC_StandaloneCallContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_YieldItems(CypherParser::OC_YieldItemsContext *ctx) override {
    printf("OC_YieldItemsContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_YieldItem(CypherParser::OC_YieldItemContext *ctx) override {
    printf("OC_YieldItemContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_With(CypherParser::OC_WithContext *ctx) override {
    printf("OC_WithContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Return(CypherParser::OC_ReturnContext *ctx) override {
    printf("OC_ReturnContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ProjectionBody(CypherParser::OC_ProjectionBodyContext *ctx) override {
    printf("OC_ProjectionBodyContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ProjectionItems(CypherParser::OC_ProjectionItemsContext *ctx) override {
    printf("OC_ProjectionItemsContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ProjectionItem(CypherParser::OC_ProjectionItemContext *ctx) override {
    printf("OC_ProjectionItemContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Order(CypherParser::OC_OrderContext *ctx) override {
    printf("OC_OrderContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Skip(CypherParser::OC_SkipContext *ctx) override {
    printf("OC_SkipContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Limit(CypherParser::OC_LimitContext *ctx) override {
    printf("OC_LimitContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_SortItem(CypherParser::OC_SortItemContext *ctx) override {
    printf("OC_SortItemContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Where(CypherParser::OC_WhereContext *ctx) override {
    printf("OC_WhereContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Pattern(CypherParser::OC_PatternContext *ctx) override {
    printf("OC_PatternContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PatternPart(CypherParser::OC_PatternPartContext *ctx) override {
    printf("OC_PatternPartContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_AnonymousPatternPart(CypherParser::OC_AnonymousPatternPartContext *ctx) override {
    printf("OC_AnonymousPatternPartContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PatternElement(CypherParser::OC_PatternElementContext *ctx) override {
    printf("OC_PatternElementContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_NodePattern(CypherParser::OC_NodePatternContext *ctx) override {
    printf("OC_NodePatternContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PatternElementChain(CypherParser::OC_PatternElementChainContext *ctx) override {
    printf("OC_PatternElementChainContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RelationshipPattern(CypherParser::OC_RelationshipPatternContext *ctx) override {
    printf("OC_RelationshipPatternContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RelationshipDetail(CypherParser::OC_RelationshipDetailContext *ctx) override {
    printf("OC_RelationshipDetailContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Properties(CypherParser::OC_PropertiesContext *ctx) override {
    printf("OC_PropertiesContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RelationshipTypes(CypherParser::OC_RelationshipTypesContext *ctx) override {
    printf("OC_RelationshipTypesContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_NodeLabels(CypherParser::OC_NodeLabelsContext *ctx) override {
    printf("OC_NodeLabelsContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_NodeLabel(CypherParser::OC_NodeLabelContext *ctx) override {
    printf("OC_NodeLabelContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RangeLiteral(CypherParser::OC_RangeLiteralContext *ctx) override {
    printf("OC_RangeLiteralContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_LabelName(CypherParser::OC_LabelNameContext *ctx) override {
    printf("OC_LabelNameContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RelTypeName(CypherParser::OC_RelTypeNameContext *ctx) override {
    printf("OC_RelTypeNameContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Expression(CypherParser::OC_ExpressionContext *ctx) override {
    printf("OC_ExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_OrExpression(CypherParser::OC_OrExpressionContext *ctx) override {
    printf("OC_OrExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_XorExpression(CypherParser::OC_XorExpressionContext *ctx) override {
    printf("OC_XorExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_AndExpression(CypherParser::OC_AndExpressionContext *ctx) override {
    printf("OC_AndExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_NotExpression(CypherParser::OC_NotExpressionContext *ctx) override {
    printf("OC_NotExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ComparisonExpression(CypherParser::OC_ComparisonExpressionContext *ctx) override {
    printf("OC_ComparisonExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_AddOrSubtractExpression(CypherParser::OC_AddOrSubtractExpressionContext *ctx) override {
    printf("OC_AddOrSubtractExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_MultiplyDivideModuloExpression(CypherParser::OC_MultiplyDivideModuloExpressionContext *ctx) override {
    printf("OC_MultiplyDivideModuloExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PowerOfExpression(CypherParser::OC_PowerOfExpressionContext *ctx) override {
    printf("OC_PowerOfExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_UnaryAddOrSubtractExpression(CypherParser::OC_UnaryAddOrSubtractExpressionContext *ctx) override {
    printf("OC_UnaryAddOrSubtractExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_StringListNullOperatorExpression(CypherParser::OC_StringListNullOperatorExpressionContext *ctx) override {
    printf("OC_StringListNullOperatorExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ListOperatorExpression(CypherParser::OC_ListOperatorExpressionContext *ctx) override {
    printf("OC_ListOperatorExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_StringOperatorExpression(CypherParser::OC_StringOperatorExpressionContext *ctx) override {
    printf("OC_StringOperatorExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_NullOperatorExpression(CypherParser::OC_NullOperatorExpressionContext *ctx) override {
    printf("OC_NullOperatorExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PropertyOrLabelsExpression(CypherParser::OC_PropertyOrLabelsExpressionContext *ctx) override {
    printf("OC_PropertyOrLabelsExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Atom(CypherParser::OC_AtomContext *ctx) override {
    printf("OC_AtomContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Literal(CypherParser::OC_LiteralContext *ctx) override {
    printf("OC_LiteralContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_BooleanLiteral(CypherParser::OC_BooleanLiteralContext *ctx) override {
    printf("OC_BooleanLiteralContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ListLiteral(CypherParser::OC_ListLiteralContext *ctx) override {
    printf("OC_ListLiteralContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PartialComparisonExpression(CypherParser::OC_PartialComparisonExpressionContext *ctx) override {
    printf("OC_PartialComparisonExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ParenthesizedExpression(CypherParser::OC_ParenthesizedExpressionContext *ctx) override {
    printf("OC_ParenthesizedExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RelationshipsPattern(CypherParser::OC_RelationshipsPatternContext *ctx) override {
    printf("OC_RelationshipsPatternContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_FilterExpression(CypherParser::OC_FilterExpressionContext *ctx) override {
    printf("OC_FilterExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_IdInColl(CypherParser::OC_IdInCollContext *ctx) override {
    printf("OC_IdInCollContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_FunctionInvocation(CypherParser::OC_FunctionInvocationContext *ctx) override {
    printf("OC_FunctionInvocationContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_FunctionName(CypherParser::OC_FunctionNameContext *ctx) override {
    printf("OC_FunctionNameContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ExplicitProcedureInvocation(CypherParser::OC_ExplicitProcedureInvocationContext *ctx) override {
    printf("OC_ExplicitProcedureInvocationContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ImplicitProcedureInvocation(CypherParser::OC_ImplicitProcedureInvocationContext *ctx) override {
    printf("OC_ImplicitProcedureInvocationContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ProcedureResultField(CypherParser::OC_ProcedureResultFieldContext *ctx) override {
    printf("OC_ProcedureResultFieldContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ProcedureName(CypherParser::OC_ProcedureNameContext *ctx) override {
    printf("OC_ProcedureNameContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Namespace(CypherParser::OC_NamespaceContext *ctx) override {
    printf("OC_NamespaceContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ListComprehension(CypherParser::OC_ListComprehensionContext *ctx) override {
    printf("OC_ListComprehensionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PatternComprehension(CypherParser::OC_PatternComprehensionContext *ctx) override {
    printf("OC_PatternComprehensionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PropertyLookup(CypherParser::OC_PropertyLookupContext *ctx) override {
    printf("OC_PropertyLookupContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_CaseExpression(CypherParser::OC_CaseExpressionContext *ctx) override {
    printf("OC_CaseExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_CaseAlternatives(CypherParser::OC_CaseAlternativesContext *ctx) override {
    printf("OC_CaseAlternativesContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Variable(CypherParser::OC_VariableContext *ctx) override {
    printf("OC_VariableContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_NumberLiteral(CypherParser::OC_NumberLiteralContext *ctx) override {
    printf("OC_NumberLiteralContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_MapLiteral(CypherParser::OC_MapLiteralContext *ctx) override {
    printf("OC_MapLiteralContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Parameter(CypherParser::OC_ParameterContext *ctx) override {
    printf("OC_ParameterContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PropertyExpression(CypherParser::OC_PropertyExpressionContext *ctx) override {
    printf("OC_PropertyExpressionContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_PropertyKeyName(CypherParser::OC_PropertyKeyNameContext *ctx) override {
    printf("OC_PropertyKeyNameContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_IntegerLiteral(CypherParser::OC_IntegerLiteralContext *ctx) override {
    printf("OC_IntegerLiteralContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_DoubleLiteral(CypherParser::OC_DoubleLiteralContext *ctx) override {
    printf("OC_DoubleLiteralContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_SchemaName(CypherParser::OC_SchemaNameContext *ctx) override {
    printf("OC_SchemaNameContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_ReservedWord(CypherParser::OC_ReservedWordContext *ctx) override {
    printf("OC_ReservedWordContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_SymbolicName(CypherParser::OC_SymbolicNameContext *ctx) override {
    printf("OC_SymbolicNameContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_LeftArrowHead(CypherParser::OC_LeftArrowHeadContext *ctx) override {
    printf("OC_LeftArrowHeadContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_RightArrowHead(CypherParser::OC_RightArrowHeadContext *ctx) override {
    printf("OC_RightArrowHeadContext\n");
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOC_Dash(CypherParser::OC_DashContext *ctx) override {
    printf("OC_DashContext\n");
    return visitChildren(ctx);
  }


};

