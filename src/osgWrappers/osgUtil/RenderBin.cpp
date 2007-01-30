// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Object>
#include <osg/RenderInfo>
#include <osg/StateSet>
#include <osgUtil/RenderBin>
#include <osgUtil/RenderLeaf>
#include <osgUtil/RenderStage>
#include <osgUtil/StateGraph>
#include <osgUtil/Statistics>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_VALUE_REFLECTOR(osgUtil::RegisterRenderBinProxy)
	I_Constructor2(IN, const std::string &, binName, IN, osgUtil::RenderBin *, proto,
	               ____RegisterRenderBinProxy__C5_std_string_R1__RenderBin_P1,
	               "",
	               "");
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osgUtil::RenderLeaf * >, osgUtil::RenderBin::RenderLeafList);

TYPE_NAME_ALIAS(std::vector< osgUtil::StateGraph * >, osgUtil::RenderBin::StateGraphList);

TYPE_NAME_ALIAS(std::map< int COMMA  osg::ref_ptr< osgUtil::RenderBin > >, osgUtil::RenderBin::RenderBinList);

BEGIN_ENUM_REFLECTOR(osgUtil::RenderBin::SortMode)
	I_EnumLabel(osgUtil::RenderBin::SORT_BY_STATE);
	I_EnumLabel(osgUtil::RenderBin::SORT_BY_STATE_THEN_FRONT_TO_BACK);
	I_EnumLabel(osgUtil::RenderBin::SORT_FRONT_TO_BACK);
	I_EnumLabel(osgUtil::RenderBin::SORT_BACK_TO_FRONT);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgUtil::RenderBin)
	I_BaseType(osg::Object);
	I_Constructor0(____RenderBin,
	               "",
	               "");
	I_Constructor1(IN, osgUtil::RenderBin::SortMode, mode,
	               ____RenderBin__SortMode,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgUtil::RenderBin &, rhs, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____RenderBin__C5_RenderBin_R1__C5_osg_CopyOp_R1,
	                           "Copy constructor using CopyOp to manage deep vs shallow copy. ",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method0(void, reset,
	          __void__reset,
	          "",
	          "");
	I_Method1(void, setStateSet, IN, osg::StateSet *, stateset,
	          __void__setStateSet__osg_StateSet_P1,
	          "",
	          "");
	I_Method0(osg::StateSet *, getStateSet,
	          __osg_StateSet_P1__getStateSet,
	          "",
	          "");
	I_Method0(const osg::StateSet *, getStateSet,
	          __C5_osg_StateSet_P1__getStateSet,
	          "",
	          "");
	I_Method0(osgUtil::RenderBin *, getParent,
	          __RenderBin_P1__getParent,
	          "",
	          "");
	I_Method0(const osgUtil::RenderBin *, getParent,
	          __C5_RenderBin_P1__getParent,
	          "",
	          "");
	I_Method0(osgUtil::RenderStage *, getStage,
	          __RenderStage_P1__getStage,
	          "",
	          "");
	I_Method0(const osgUtil::RenderStage *, getStage,
	          __C5_RenderStage_P1__getStage,
	          "",
	          "");
	I_Method0(int, getBinNum,
	          __int__getBinNum,
	          "",
	          "");
	I_Method0(osgUtil::RenderBin::StateGraphList &, getStateGraphList,
	          __StateGraphList_R1__getStateGraphList,
	          "",
	          "");
	I_Method0(const osgUtil::RenderBin::StateGraphList &, getStateGraphList,
	          __C5_StateGraphList_R1__getStateGraphList,
	          "",
	          "");
	I_Method0(osgUtil::RenderBin::RenderBinList &, getRenderBinList,
	          __RenderBinList_R1__getRenderBinList,
	          "",
	          "");
	I_Method0(const osgUtil::RenderBin::RenderBinList &, getRenderBinList,
	          __C5_RenderBinList_R1__getRenderBinList,
	          "",
	          "");
	I_Method0(osgUtil::RenderBin::RenderLeafList &, getRenderLeafList,
	          __RenderLeafList_R1__getRenderLeafList,
	          "",
	          "");
	I_Method0(const osgUtil::RenderBin::RenderLeafList &, getRenderLeafList,
	          __C5_RenderLeafList_R1__getRenderLeafList,
	          "",
	          "");
	I_Method2(osgUtil::RenderBin *, find_or_insert, IN, int, binNum, IN, const std::string &, binName,
	          __RenderBin_P1__find_or_insert__int__C5_std_string_R1,
	          "",
	          "");
	I_Method1(void, addStateGraph, IN, osgUtil::StateGraph *, rg,
	          __void__addStateGraph__StateGraph_P1,
	          "",
	          "");
	I_Method0(void, sort,
	          __void__sort,
	          "",
	          "");
	I_Method0(void, sortImplementation,
	          __void__sortImplementation,
	          "",
	          "");
	I_Method1(void, setSortMode, IN, osgUtil::RenderBin::SortMode, mode,
	          __void__setSortMode__SortMode,
	          "",
	          "");
	I_Method0(osgUtil::RenderBin::SortMode, getSortMode,
	          __SortMode__getSortMode,
	          "",
	          "");
	I_Method0(void, sortByState,
	          __void__sortByState,
	          "",
	          "");
	I_Method0(void, sortByStateThenFrontToBack,
	          __void__sortByStateThenFrontToBack,
	          "",
	          "");
	I_Method0(void, sortFrontToBack,
	          __void__sortFrontToBack,
	          "",
	          "");
	I_Method0(void, sortBackToFront,
	          __void__sortBackToFront,
	          "",
	          "");
	I_Method1(void, setSortCallback, IN, osgUtil::RenderBin::SortCallback *, sortCallback,
	          __void__setSortCallback__SortCallback_P1,
	          "",
	          "");
	I_Method0(osgUtil::RenderBin::SortCallback *, getSortCallback,
	          __SortCallback_P1__getSortCallback,
	          "",
	          "");
	I_Method0(const osgUtil::RenderBin::SortCallback *, getSortCallback,
	          __C5_SortCallback_P1__getSortCallback,
	          "",
	          "");
	I_Method2(void, draw, IN, osg::RenderInfo &, renderInfo, IN, osgUtil::RenderLeaf *&, previous,
	          __void__draw__osg_RenderInfo_R1__RenderLeaf_P1R1,
	          "",
	          "");
	I_Method2(void, drawImplementation, IN, osg::RenderInfo &, renderInfo, IN, osgUtil::RenderLeaf *&, previous,
	          __void__drawImplementation__osg_RenderInfo_R1__RenderLeaf_P1R1,
	          "",
	          "");
	I_Method1(void, setDrawCallback, IN, osgUtil::RenderBin::DrawCallback *, drawCallback,
	          __void__setDrawCallback__DrawCallback_P1,
	          "",
	          "");
	I_Method0(osgUtil::RenderBin::DrawCallback *, getDrawCallback,
	          __DrawCallback_P1__getDrawCallback,
	          "",
	          "");
	I_Method0(const osgUtil::RenderBin::DrawCallback *, getDrawCallback,
	          __C5_DrawCallback_P1__getDrawCallback,
	          "",
	          "");
	I_Method1(bool, getStats, IN, osgUtil::Statistics &, primStats,
	          __bool__getStats__Statistics_R1,
	          "Extract stats for current draw list. ",
	          "");
	I_Method0(unsigned int, computeNumberOfDynamicRenderLeaves,
	          __unsigned_int__computeNumberOfDynamicRenderLeaves,
	          "Compute the number of dynamic RenderLeaves. ",
	          "");
	I_Method0(void, copyLeavesFromStateGraphListToRenderLeafList,
	          __void__copyLeavesFromStateGraphListToRenderLeafList,
	          "",
	          "");
	I_StaticMethod1(osgUtil::RenderBin *, createRenderBin, IN, const std::string &, binName,
	                __RenderBin_P1__createRenderBin__C5_std_string_R1_S,
	                "",
	                "");
	I_StaticMethod1(osgUtil::RenderBin *, getRenderBinPrototype, IN, const std::string &, binName,
	                __RenderBin_P1__getRenderBinPrototype__C5_std_string_R1_S,
	                "",
	                "");
	I_StaticMethod2(void, addRenderBinPrototype, IN, const std::string &, binName, IN, osgUtil::RenderBin *, proto,
	                __void__addRenderBinPrototype__C5_std_string_R1__RenderBin_P1_S,
	                "",
	                "");
	I_StaticMethod1(void, removeRenderBinPrototype, IN, osgUtil::RenderBin *, proto,
	                __void__removeRenderBinPrototype__RenderBin_P1_S,
	                "",
	                "");
	I_StaticMethod1(void, setDefaultRenderBinSortMode, IN, osgUtil::RenderBin::SortMode, mode,
	                __void__setDefaultRenderBinSortMode__SortMode_S,
	                "",
	                "");
	I_StaticMethod0(osgUtil::RenderBin::SortMode, getDefaultRenderBinSortMode,
	                __SortMode__getDefaultRenderBinSortMode_S,
	                "",
	                "");
	I_SimpleProperty(int, BinNum, 
	                 __int__getBinNum, 
	                 0);
	I_SimpleProperty(osgUtil::RenderBin::DrawCallback *, DrawCallback, 
	                 __DrawCallback_P1__getDrawCallback, 
	                 __void__setDrawCallback__DrawCallback_P1);
	I_SimpleProperty(osgUtil::RenderBin *, Parent, 
	                 __RenderBin_P1__getParent, 
	                 0);
	I_SimpleProperty(osgUtil::RenderBin::RenderBinList &, RenderBinList, 
	                 __RenderBinList_R1__getRenderBinList, 
	                 0);
	I_SimpleProperty(osgUtil::RenderBin::RenderLeafList &, RenderLeafList, 
	                 __RenderLeafList_R1__getRenderLeafList, 
	                 0);
	I_SimpleProperty(osgUtil::RenderBin::SortCallback *, SortCallback, 
	                 __SortCallback_P1__getSortCallback, 
	                 __void__setSortCallback__SortCallback_P1);
	I_SimpleProperty(osgUtil::RenderBin::SortMode, SortMode, 
	                 __SortMode__getSortMode, 
	                 __void__setSortMode__SortMode);
	I_SimpleProperty(osgUtil::RenderStage *, Stage, 
	                 __RenderStage_P1__getStage, 
	                 0);
	I_SimpleProperty(osgUtil::RenderBin::StateGraphList &, StateGraphList, 
	                 __StateGraphList_R1__getStateGraphList, 
	                 0);
	I_SimpleProperty(osg::StateSet *, StateSet, 
	                 __osg_StateSet_P1__getStateSet, 
	                 __void__setStateSet__osg_StateSet_P1);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgUtil::RenderBin::DrawCallback)
	I_BaseType(osg::Referenced);
	I_Constructor0(____DrawCallback,
	               "",
	               "");
	I_Method3(void, drawImplementation, IN, osgUtil::RenderBin *, bin, IN, osg::RenderInfo &, renderInfo, IN, osgUtil::RenderLeaf *&, previous,
	          __void__drawImplementation__RenderBin_P1__osg_RenderInfo_R1__RenderLeaf_P1R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgUtil::RenderBin::SortCallback)
	I_BaseType(osg::Referenced);
	I_Constructor0(____SortCallback,
	               "",
	               "");
	I_Method1(void, sortImplementation, IN, osgUtil::RenderBin *, x,
	          __void__sortImplementation__RenderBin_P1,
	          "",
	          "");
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgUtil::RenderBin >)
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgUtil::RenderBin *, ptr,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgUtil::RenderBin > &, rp,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgUtil::RenderBin *, get,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgUtil::RenderBin *, release,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgUtil::RenderBin > &, rp,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgUtil::RenderBin *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< int COMMA  osg::ref_ptr< osgUtil::RenderBin > >);

STD_VECTOR_REFLECTOR(std::vector< osgUtil::RenderLeaf * >);

STD_VECTOR_REFLECTOR(std::vector< osgUtil::StateGraph * >);

