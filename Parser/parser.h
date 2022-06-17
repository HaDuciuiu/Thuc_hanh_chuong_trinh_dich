/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */
#ifndef __PARSER_H__
#define __PARSER_H__
#include "token.h"

void scan(void); // xem truoc noi dung 1 token
void eat(TokenType tokenType); // duyet ki hieu ket thuc

// Cac ham duyet ki tu khong ket thuc
void compileProgram(void);
void compileBlock(void); // phan tich cac khoi cau lenh
void compileBlock2(void);
void compileBlock3(void);
void compileBlock4(void);
void compileBlock5(void);
void compileConstDecls(void);
void compileConstDecl(void);
void compileTypeDecls(void);
void compileTypeDecl(void);
void compileVarDecls(void);
void compileVarDecl(void);
void compileSubDecls(void);
void compileFuncDecl(void);
void compileProcDecl(void);
void compileUnsignedConstant(void);
void compileConstant(void);
void compileConstant2(void);
void compileType(void);
void compileBasicType(void); // phan tich cac kieu bien co ban
void compileParams(void);
void compileParams2(void);
void compileParam(void);
void compileStatements(void); // phan tich cau lenh
void compileStatements2(void);
void compileStatement(void);
void compileAssignSt(void);
void compileCallSt(void);
void compileGroupSt(void);
void compileIfSt(void);
void compileElseSt(void);
void compileWhileSt(void);
void compileForSt(void);
void compileArguments(void);
void compileArguments2(void);
void compileCondition(void); // phan tich dieu kien
void compileCondition2(void);
void compileExpression(void); // phan tich bieu thuc
void compileExpression2(void);
void compileExpression3(void);
void compileTerm(void); // phan tich so hang
void compileTerm2(void);
void compileFactor(void); // phan tich nhan tu
void compileIndexes(void);

int compile(char *fileName); // kich hoat parser

#endif
