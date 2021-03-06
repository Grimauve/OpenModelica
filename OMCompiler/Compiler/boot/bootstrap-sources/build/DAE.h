#ifndef DAE__H
#define DAE__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#ifdef __cplusplus
extern "C" {
#endif
extern struct record_description DAE_AvlTreePathFunction_Tree_EMPTY__desc;
extern struct record_description DAE_AvlTreePathFunction_Tree_LEAF__desc;
extern struct record_description DAE_AvlTreePathFunction_Tree_NODE__desc;
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_add(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey, modelica_metatype _inValue, modelica_fnptr _conflictFunc);
#define boxptr_DAE_AvlTreePathFunction_add omc_DAE_AvlTreePathFunction_add
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_add,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_add,0}};
#define boxvar_DAE_AvlTreePathFunction_add MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_add)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_addConflictDefault(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key);
#define boxptr_DAE_AvlTreePathFunction_addConflictDefault omc_DAE_AvlTreePathFunction_addConflictDefault
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_addConflictDefault,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_addConflictDefault,0}};
#define boxvar_DAE_AvlTreePathFunction_addConflictDefault MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_addConflictDefault)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_addConflictFail(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key);
#define boxptr_DAE_AvlTreePathFunction_addConflictFail omc_DAE_AvlTreePathFunction_addConflictFail
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_addConflictFail,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_addConflictFail,0}};
#define boxvar_DAE_AvlTreePathFunction_addConflictFail MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_addConflictFail)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_addConflictKeep(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key);
#define boxptr_DAE_AvlTreePathFunction_addConflictKeep omc_DAE_AvlTreePathFunction_addConflictKeep
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_addConflictKeep,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_addConflictKeep,0}};
#define boxvar_DAE_AvlTreePathFunction_addConflictKeep MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_addConflictKeep)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_addConflictReplace(threadData_t *threadData, modelica_metatype _newValue, modelica_metatype _oldValue, modelica_metatype _key);
#define boxptr_DAE_AvlTreePathFunction_addConflictReplace omc_DAE_AvlTreePathFunction_addConflictReplace
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_addConflictReplace,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_addConflictReplace,0}};
#define boxvar_DAE_AvlTreePathFunction_addConflictReplace MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_addConflictReplace)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_addList(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _inValues, modelica_fnptr _conflictFunc);
#define boxptr_DAE_AvlTreePathFunction_addList omc_DAE_AvlTreePathFunction_addList
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_addList,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_addList,0}};
#define boxvar_DAE_AvlTreePathFunction_addList MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_addList)
#define boxptr_DAE_AvlTreePathFunction_balance omc_DAE_AvlTreePathFunction_balance
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_fold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue);
#define boxptr_DAE_AvlTreePathFunction_fold omc_DAE_AvlTreePathFunction_fold
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_fold,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_fold,0}};
#define boxvar_DAE_AvlTreePathFunction_fold MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_fold)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_foldCond(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5Fvalue);
#define boxptr_DAE_AvlTreePathFunction_foldCond omc_DAE_AvlTreePathFunction_foldCond
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_foldCond,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_foldCond,0}};
#define boxvar_DAE_AvlTreePathFunction_foldCond MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_foldCond)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_fold__2(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _foldFunc, modelica_metatype __omcQ_24in_5FfoldArg1, modelica_metatype __omcQ_24in_5FfoldArg2, modelica_metatype *out_foldArg2);
#define boxptr_DAE_AvlTreePathFunction_fold__2 omc_DAE_AvlTreePathFunction_fold__2
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_fold__2,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_fold__2,0}};
#define boxvar_DAE_AvlTreePathFunction_fold__2 MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_fold__2)
DLLExport
void omc_DAE_AvlTreePathFunction_forEach(threadData_t *threadData, modelica_metatype _tree, modelica_fnptr _func);
#define boxptr_DAE_AvlTreePathFunction_forEach omc_DAE_AvlTreePathFunction_forEach
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_forEach,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_forEach,0}};
#define boxvar_DAE_AvlTreePathFunction_forEach MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_forEach)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_fromList(threadData_t *threadData, modelica_metatype _inValues, modelica_fnptr _conflictFunc);
#define boxptr_DAE_AvlTreePathFunction_fromList omc_DAE_AvlTreePathFunction_fromList
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_fromList,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_fromList,0}};
#define boxvar_DAE_AvlTreePathFunction_fromList MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_fromList)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_get(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key);
#define boxptr_DAE_AvlTreePathFunction_get omc_DAE_AvlTreePathFunction_get
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_get,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_get,0}};
#define boxvar_DAE_AvlTreePathFunction_get MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_get)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_getOpt(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key);
#define boxptr_DAE_AvlTreePathFunction_getOpt omc_DAE_AvlTreePathFunction_getOpt
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_getOpt,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_getOpt,0}};
#define boxvar_DAE_AvlTreePathFunction_getOpt MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_getOpt)
DLLExport
modelica_boolean omc_DAE_AvlTreePathFunction_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey);
DLLExport
modelica_metatype boxptr_DAE_AvlTreePathFunction_hasKey(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype _inKey);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_hasKey,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_hasKey,0}};
#define boxvar_DAE_AvlTreePathFunction_hasKey MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_hasKey)
DLLExport
void omc_DAE_AvlTreePathFunction_intersection(threadData_t *threadData);
#define boxptr_DAE_AvlTreePathFunction_intersection omc_DAE_AvlTreePathFunction_intersection
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_intersection,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_intersection,0}};
#define boxvar_DAE_AvlTreePathFunction_intersection MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_intersection)
DLLExport
modelica_boolean omc_DAE_AvlTreePathFunction_isEmpty(threadData_t *threadData, modelica_metatype _tree);
DLLExport
modelica_metatype boxptr_DAE_AvlTreePathFunction_isEmpty(threadData_t *threadData, modelica_metatype _tree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_isEmpty,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_isEmpty,0}};
#define boxvar_DAE_AvlTreePathFunction_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_isEmpty)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_join(threadData_t *threadData, modelica_metatype __omcQ_24in_5Ftree, modelica_metatype _treeToJoin, modelica_fnptr _conflictFunc);
#define boxptr_DAE_AvlTreePathFunction_join omc_DAE_AvlTreePathFunction_join
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_join,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_join,0}};
#define boxvar_DAE_AvlTreePathFunction_join MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_join)
DLLExport
modelica_integer omc_DAE_AvlTreePathFunction_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2);
DLLExport
modelica_metatype boxptr_DAE_AvlTreePathFunction_keyCompare(threadData_t *threadData, modelica_metatype _inKey1, modelica_metatype _inKey2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_keyCompare,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_keyCompare,0}};
#define boxvar_DAE_AvlTreePathFunction_keyCompare MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_keyCompare)
DLLExport
modelica_string omc_DAE_AvlTreePathFunction_keyStr(threadData_t *threadData, modelica_metatype _inKey);
#define boxptr_DAE_AvlTreePathFunction_keyStr omc_DAE_AvlTreePathFunction_keyStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_keyStr,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_keyStr,0}};
#define boxvar_DAE_AvlTreePathFunction_keyStr MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_keyStr)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_listKeys(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_DAE_AvlTreePathFunction_listKeys omc_DAE_AvlTreePathFunction_listKeys
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_listKeys,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_listKeys,0}};
#define boxvar_DAE_AvlTreePathFunction_listKeys MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_listKeys)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_listKeysReverse(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_DAE_AvlTreePathFunction_listKeysReverse omc_DAE_AvlTreePathFunction_listKeysReverse
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_listKeysReverse,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_listKeysReverse,0}};
#define boxvar_DAE_AvlTreePathFunction_listKeysReverse MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_listKeysReverse)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_listValues(threadData_t *threadData, modelica_metatype _tree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_DAE_AvlTreePathFunction_listValues omc_DAE_AvlTreePathFunction_listValues
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_listValues,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_listValues,0}};
#define boxvar_DAE_AvlTreePathFunction_listValues MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_listValues)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_map(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc);
#define boxptr_DAE_AvlTreePathFunction_map omc_DAE_AvlTreePathFunction_map
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_map,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_map,0}};
#define boxvar_DAE_AvlTreePathFunction_map MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_map)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_mapFold(threadData_t *threadData, modelica_metatype _inTree, modelica_fnptr _inFunc, modelica_metatype _inStartValue, modelica_metatype *out_outResult);
#define boxptr_DAE_AvlTreePathFunction_mapFold omc_DAE_AvlTreePathFunction_mapFold
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_mapFold,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_mapFold,0}};
#define boxvar_DAE_AvlTreePathFunction_mapFold MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_mapFold)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_new(threadData_t *threadData);
#define boxptr_DAE_AvlTreePathFunction_new omc_DAE_AvlTreePathFunction_new
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_new,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_new,0}};
#define boxvar_DAE_AvlTreePathFunction_new MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_new)
DLLExport
modelica_string omc_DAE_AvlTreePathFunction_printNodeStr(threadData_t *threadData, modelica_metatype _inNode);
#define boxptr_DAE_AvlTreePathFunction_printNodeStr omc_DAE_AvlTreePathFunction_printNodeStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_printNodeStr,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_printNodeStr,0}};
#define boxvar_DAE_AvlTreePathFunction_printNodeStr MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_printNodeStr)
DLLExport
modelica_string omc_DAE_AvlTreePathFunction_printTreeStr(threadData_t *threadData, modelica_metatype _inTree);
#define boxptr_DAE_AvlTreePathFunction_printTreeStr omc_DAE_AvlTreePathFunction_printTreeStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_printTreeStr,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_printTreeStr,0}};
#define boxvar_DAE_AvlTreePathFunction_printTreeStr MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_printTreeStr)
#define boxptr_DAE_AvlTreePathFunction_rotateLeft omc_DAE_AvlTreePathFunction_rotateLeft
#define boxptr_DAE_AvlTreePathFunction_rotateRight omc_DAE_AvlTreePathFunction_rotateRight
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_setTreeLeftRight(threadData_t *threadData, modelica_metatype _orig, modelica_metatype _left, modelica_metatype _right);
#define boxptr_DAE_AvlTreePathFunction_setTreeLeftRight omc_DAE_AvlTreePathFunction_setTreeLeftRight
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_setTreeLeftRight,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_setTreeLeftRight,0}};
#define boxvar_DAE_AvlTreePathFunction_setTreeLeftRight MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_setTreeLeftRight)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_toList(threadData_t *threadData, modelica_metatype _inTree, modelica_metatype __omcQ_24in_5Flst);
#define boxptr_DAE_AvlTreePathFunction_toList omc_DAE_AvlTreePathFunction_toList
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_toList,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_toList,0}};
#define boxvar_DAE_AvlTreePathFunction_toList MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_toList)
DLLExport
modelica_metatype omc_DAE_AvlTreePathFunction_update(threadData_t *threadData, modelica_metatype _tree, modelica_metatype _key, modelica_metatype _value);
#define boxptr_DAE_AvlTreePathFunction_update omc_DAE_AvlTreePathFunction_update
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_update,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_update,0}};
#define boxvar_DAE_AvlTreePathFunction_update MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_update)
DLLExport
modelica_string omc_DAE_AvlTreePathFunction_valueStr(threadData_t *threadData, modelica_metatype _inValue);
#define boxptr_DAE_AvlTreePathFunction_valueStr omc_DAE_AvlTreePathFunction_valueStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_valueStr,2,0) {(void*) boxptr_DAE_AvlTreePathFunction_valueStr,0}};
#define boxvar_DAE_AvlTreePathFunction_valueStr MMC_REFSTRUCTLIT(boxvar_lit_DAE_AvlTreePathFunction_valueStr)
#ifdef __cplusplus
}
#endif
#endif
