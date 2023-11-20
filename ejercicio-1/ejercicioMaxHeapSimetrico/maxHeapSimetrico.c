/*
** Automatically generated from `maxHeapSimetrico.m'
** by the Mercury compiler,
** version 22.01-jammy1
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=3
** UNBOXED_FLOAT=yes
** UNBOXED_INT64S=yes
** PREGENERATED_DIST=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__maxHeapSimetrico__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 28 "maxHeapSimetrico.c"
#include "array.mh"

#line 31 "maxHeapSimetrico.c"
#line 32 "maxHeapSimetrico.c"
#include "bitmap.mh"

#line 35 "maxHeapSimetrico.c"
#line 36 "maxHeapSimetrico.c"
#include "io.mh"

#line 39 "maxHeapSimetrico.c"
#line 40 "maxHeapSimetrico.c"
#include "maxHeapSimetrico.mh"

#line 43 "maxHeapSimetrico.c"
#line 44 "maxHeapSimetrico.c"
#include "string.mh"

#line 47 "maxHeapSimetrico.c"
#line 48 "maxHeapSimetrico.c"
#include "time.mh"

#line 51 "maxHeapSimetrico.c"
#line 52 "maxHeapSimetrico.c"
#ifndef MAXHEAPSIMETRICO_DECL_GUARD
#define MAXHEAPSIMETRICO_DECL_GUARD

#line 56 "maxHeapSimetrico.c"
#line 57 "maxHeapSimetrico.c"

#endif
#line 60 "maxHeapSimetrico.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Integer f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
	MR_Word * f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_maxHeapSimetrico__type_ctor_info_arbol_1;
MR_decl_label3(maxHeapSimetrico__condicionHeap_3_0, 3,6,1)
MR_decl_label5(maxHeapSimetrico__esMaxHeapSimetrico_1_0, 4,6,7,2,1)
MR_decl_label10(main_2_0, 4,6,3,8,9,13,15,12,17,18)
MR_decl_label3(main_2_0, 22,21,26)
MR_decl_label4(maxHeapSimetrico__postorder_2_0, 17,5,6,7)
MR_decl_label4(maxHeapSimetrico__preorder_2_0, 16,5,6,7)
MR_decl_label6(__Unify___maxHeapSimetrico__arbol_1_0, 19,6,20,5,10,12)
MR_decl_label7(__Compare___maxHeapSimetrico__arbol_1_0, 3,7,5,10,12,16,54)
MR_def_extern_entry(maxHeapSimetrico__esMaxHeapSimetrico_1_0)
MR_def_extern_entry(maxHeapSimetrico__preorder_2_0)
MR_def_extern_entry(maxHeapSimetrico__postorder_2_0)
MR_def_extern_entry(maxHeapSimetrico__condicionHeap_3_0)
MR_def_extern_entry(main_2_0)
MR_def_extern_entry(__Unify___maxHeapSimetrico__arbol_1_0)
MR_def_extern_entry(__Compare___maxHeapSimetrico__arbol_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const struct mercury_type_1 mercury_common_1[5] =
{
{
7
},
{
6
},
{
5
},
{
4
},
{
10
},
};

static const struct mercury_type_2 mercury_common_2[4] =
{
{
3,
MR_TAG_COMMON(0,1,1),
MR_TAG_COMMON(0,1,0)
},
{
2,
MR_TAG_COMMON(0,1,3),
MR_TAG_COMMON(0,1,2)
},
{
1,
MR_TAG_COMMON(1,2,1),
MR_TAG_COMMON(1,2,0)
},
{
10,
MR_TAG_COMMON(0,1,4),
MR_TAG_COMMON(0,1,4)
},
};

const MR_PseudoTypeInfo mercury_data_maxHeapSimetrico__field_types_arbol_1_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_maxHeapSimetrico__du_functor_desc_arbol_1_0 = {
	"hoja",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_maxHeapSimetrico__field_types_arbol_1_0,
	NULL,
	NULL,
	NULL,
	MR_FUNCTOR_SUBTYPE_NONE,
	0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_maxHeapSimetrico__pti_arbol_1__pseudo_1 = {
	&mercury_data_maxHeapSimetrico__type_ctor_info_arbol_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_maxHeapSimetrico__field_types_arbol_1_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_maxHeapSimetrico__pti_arbol_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_maxHeapSimetrico__pti_arbol_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_maxHeapSimetrico__du_functor_desc_arbol_1_1 = {
	"rama",
	3,
	7,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_maxHeapSimetrico__field_types_arbol_1_1,
	NULL,
	NULL,
	NULL,
	MR_FUNCTOR_SUBTYPE_NONE,
	0
};

const MR_DuFunctorDescPtr mercury_data_maxHeapSimetrico__du_stag_ordered_arbol_1_0[] = {
	&mercury_data_maxHeapSimetrico__du_functor_desc_arbol_1_0

};

const MR_DuFunctorDescPtr mercury_data_maxHeapSimetrico__du_stag_ordered_arbol_1_1[] = {
	&mercury_data_maxHeapSimetrico__du_functor_desc_arbol_1_1

};

const MR_DuPtagLayout mercury_data_maxHeapSimetrico__du_ptag_ordered_arbol_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_maxHeapSimetrico__du_stag_ordered_arbol_1_0,
	-1,
	0,
	1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_maxHeapSimetrico__du_stag_ordered_arbol_1_1,
	-1,
	1,
	1 }

};

const MR_DuFunctorDescPtr mercury_data_maxHeapSimetrico__du_name_ordered_arbol_1[] = {
	&mercury_data_maxHeapSimetrico__du_functor_desc_arbol_1_0,
	&mercury_data_maxHeapSimetrico__du_functor_desc_arbol_1_1
};

const MR_Integer mercury_data_maxHeapSimetrico__functor_number_map_arbol_1[] = {
	0,
	1
};
	
const MR_TypeCtorInfo_Struct mercury_data_maxHeapSimetrico__type_ctor_info_arbol_1 = {
	1,
	18,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___maxHeapSimetrico__arbol_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___maxHeapSimetrico__arbol_1_0)),
	"maxHeapSimetrico",
	"arbol",
	{ (void *) mercury_data_maxHeapSimetrico__du_name_ordered_arbol_1 },
	{ (void *) mercury_data_maxHeapSimetrico__du_ptag_ordered_arbol_1 },
	2,
	12,
	mercury_data_maxHeapSimetrico__functor_number_map_arbol_1
};



MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(maxHeapSimetrico_module0)
	MR_init_entry1(maxHeapSimetrico__esMaxHeapSimetrico_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__maxHeapSimetrico__esMaxHeapSimetrico_1_0);
	MR_init_label5(maxHeapSimetrico__esMaxHeapSimetrico_1_0,4,6,7,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'esMaxHeapSimetrico'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__maxHeapSimetrico__esMaxHeapSimetrico_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(maxHeapSimetrico__esMaxHeapSimetrico_1_0_i2);
	}
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	MR_r3 = MR_tfield(1, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(maxHeapSimetrico__condicionHeap_3_0,
		maxHeapSimetrico__esMaxHeapSimetrico_1_0_i4);
MR_def_label(maxHeapSimetrico__esMaxHeapSimetrico_1_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(maxHeapSimetrico__esMaxHeapSimetrico_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(maxHeapSimetrico__preorder_2_0,
		maxHeapSimetrico__esMaxHeapSimetrico_1_0_i6);
MR_def_label(maxHeapSimetrico__esMaxHeapSimetrico_1_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(maxHeapSimetrico__postorder_2_0,
		maxHeapSimetrico__esMaxHeapSimetrico_1_0_i7);
MR_def_label(maxHeapSimetrico__esMaxHeapSimetrico_1_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_TAG_COMMON(0,0,0));
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
MR_def_label(maxHeapSimetrico__esMaxHeapSimetrico_1_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(maxHeapSimetrico__esMaxHeapSimetrico_1_0, 1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(maxHeapSimetrico_module1)
	MR_init_entry1(maxHeapSimetrico__preorder_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__maxHeapSimetrico__preorder_2_0);
	MR_init_label4(maxHeapSimetrico__preorder_2_0,16,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'preorder'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__maxHeapSimetrico__preorder_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(maxHeapSimetrico__preorder_2_0_i16);
	}
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Unsigned) 0U;
	MR_proceed();
MR_def_label(maxHeapSimetrico__preorder_2_0, 16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 2);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(maxHeapSimetrico__preorder_2_0,
		maxHeapSimetrico__preorder_2_0_i5);
MR_def_label(maxHeapSimetrico__preorder_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(maxHeapSimetrico__preorder_2_0,
		maxHeapSimetrico__preorder_2_0_i6);
MR_def_label(maxHeapSimetrico__preorder_2_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		maxHeapSimetrico__preorder_2_0_i7);
MR_def_label(maxHeapSimetrico__preorder_2_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(maxHeapSimetrico_module2)
	MR_init_entry1(maxHeapSimetrico__postorder_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__maxHeapSimetrico__postorder_2_0);
	MR_init_label4(maxHeapSimetrico__postorder_2_0,17,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'postorder'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__maxHeapSimetrico__postorder_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(maxHeapSimetrico__postorder_2_0_i17);
	}
	MR_r2 = MR_tfield(0, MR_r1, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = (MR_Unsigned) 0U;
	MR_proceed();
MR_def_label(maxHeapSimetrico__postorder_2_0, 17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(1, MR_r1, 2);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(maxHeapSimetrico__postorder_2_0,
		maxHeapSimetrico__postorder_2_0_i5);
MR_def_label(maxHeapSimetrico__postorder_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(maxHeapSimetrico__postorder_2_0,
		maxHeapSimetrico__postorder_2_0_i6);
MR_def_label(maxHeapSimetrico__postorder_2_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = ((MR_Word) MR_INT_CTOR_ADDR);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__append_3_1,
		maxHeapSimetrico__postorder_2_0_i7);
MR_def_label(maxHeapSimetrico__postorder_2_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Unsigned) 0U;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__append_3_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(maxHeapSimetrico_module3)
	MR_init_entry1(maxHeapSimetrico__condicionHeap_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__maxHeapSimetrico__condicionHeap_3_0);
	MR_init_label3(maxHeapSimetrico__condicionHeap_3_0,3,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'condicionHeap'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__maxHeapSimetrico__condicionHeap_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = ((MR_Word) MR_succip);
	if (MR_INT_NE(MR_tag(MR_r2),0)) {
		MR_GOTO_LAB(maxHeapSimetrico__condicionHeap_3_0_i3);
	}
	if (MR_INT_NE(MR_tag(MR_r3),0)) {
		MR_GOTO_LAB(maxHeapSimetrico__condicionHeap_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if ((((MR_Integer) MR_r1) < ((MR_Integer) MR_tempr1))) {
		MR_GOTO_LAB(maxHeapSimetrico__condicionHeap_3_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r1 = (((MR_Integer) MR_r1) >= ((MR_Integer) MR_r2));
	MR_decr_sp_and_return(4);
	}
MR_def_label(maxHeapSimetrico__condicionHeap_3_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r3),1)) {
		MR_GOTO_LAB(maxHeapSimetrico__condicionHeap_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if ((((MR_Integer) MR_r1) < ((MR_Integer) MR_tempr1))) {
		MR_GOTO_LAB(maxHeapSimetrico__condicionHeap_3_0_i1);
	}
	MR_tempr4 = MR_r3;
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((((MR_Integer) MR_r1) < ((MR_Integer) MR_tempr2))) {
		MR_GOTO_LAB(maxHeapSimetrico__condicionHeap_3_0_i1);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr4, 2);
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_tempr3, 2);
	}
	MR_np_localcall_lab(maxHeapSimetrico__condicionHeap_3_0,
		maxHeapSimetrico__condicionHeap_3_0_i6);
MR_def_label(maxHeapSimetrico__condicionHeap_3_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(maxHeapSimetrico__condicionHeap_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	if (MR_INT_NE(MR_tag(MR_r2),0)) {
		MR_GOTO_LAB(maxHeapSimetrico__condicionHeap_3_0_i3);
	}
	if (MR_INT_NE(MR_tag(MR_r3),0)) {
		MR_GOTO_LAB(maxHeapSimetrico__condicionHeap_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if ((((MR_Integer) MR_r1) < ((MR_Integer) MR_tempr1))) {
		MR_GOTO_LAB(maxHeapSimetrico__condicionHeap_3_0_i1);
	}
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_r1 = (((MR_Integer) MR_r1) >= ((MR_Integer) MR_r2));
	MR_decr_sp_and_return(4);
	}
MR_def_label(maxHeapSimetrico__condicionHeap_3_0, 1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(io__print_3_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(maxHeapSimetrico_module4)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,4,6,3,8,9,13,15,12,17,18)
	MR_init_label3(main_2_0,22,21,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	MR_sv(2) = ((MR_Word) MR_TAG_COMMON(1,2,3));
	MR_sv(1) = ((MR_Word) MR_TAG_COMMON(0,1,2));
	MR_r1 = ((MR_Word) MR_TAG_COMMON(1,2,2));
	MR_np_call_localret_ent(maxHeapSimetrico__esMaxHeapSimetrico_1_0,
		main_2_0_i4);
MR_def_label(main_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(main_2_0_i3);
	}
	MR_r1 = ((MR_Word) MR_STRING_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_string_const("El \303\241rbol 1 es un max\342\200\223heap sim\303\251trico.", 40));
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i6);
MR_def_label(main_2_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		main_2_0_i9);
MR_def_label(main_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_STRING_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_string_const("El \303\241rbol 1 no es un max\342\200\223heap sim\303\251trico.", 43));
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i8);
MR_def_label(main_2_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		main_2_0_i9);
MR_def_label(main_2_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(maxHeapSimetrico__esMaxHeapSimetrico_1_0,
		main_2_0_i13);
MR_def_label(main_2_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(main_2_0_i12);
	}
	MR_r1 = ((MR_Word) MR_STRING_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_string_const("El \303\241rbol 2 es un max\342\200\223heap sim\303\251trico.", 40));
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i15);
MR_def_label(main_2_0, 15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		main_2_0_i18);
MR_def_label(main_2_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_STRING_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_string_const("El \303\241rbol 2 no es un max\342\200\223heap sim\303\251trico.", 43));
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i17);
MR_def_label(main_2_0, 17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		main_2_0_i18);
MR_def_label(main_2_0, 18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(maxHeapSimetrico__esMaxHeapSimetrico_1_0,
		main_2_0_i22);
MR_def_label(main_2_0, 22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(main_2_0_i21);
	}
	MR_r1 = ((MR_Word) MR_STRING_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_string_const("El \303\241rbol 4 es un max\342\200\223heap sim\303\251trico.", 40));
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i26);
MR_def_label(main_2_0, 21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Word) MR_STRING_CTOR_ADDR);
	MR_r2 = ((MR_Word) MR_string_const("El \303\241rbol 4 no es un max\342\200\223heap sim\303\251trico.", 43));
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i26);
MR_def_label(main_2_0, 26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(maxHeapSimetrico_module5)
	MR_init_entry1(__Unify___maxHeapSimetrico__arbol_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___maxHeapSimetrico__arbol_1_0);
	MR_init_label6(__Unify___maxHeapSimetrico__arbol_1_0,19,6,20,5,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___maxHeapSimetrico__arbol_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = ((MR_Word) MR_succip);
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___maxHeapSimetrico__arbol_1_0_i20);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	if (MR_INT_NE(MR_tag(MR_sv(1)),0)) {
		MR_GOTO_LAB(__Unify___maxHeapSimetrico__arbol_1_0_i5);
	}
	if (MR_INT_EQ(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Unify___maxHeapSimetrico__arbol_1_0_i6);
	}
MR_def_label(__Unify___maxHeapSimetrico__arbol_1_0, 19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
MR_def_label(__Unify___maxHeapSimetrico__arbol_1_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___maxHeapSimetrico__arbol_1_0, 20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(__Unify___maxHeapSimetrico__arbol_1_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Unify___maxHeapSimetrico__arbol_1_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___maxHeapSimetrico__arbol_1_0_i10);
MR_def_label(__Unify___maxHeapSimetrico__arbol_1_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___maxHeapSimetrico__arbol_1_0_i19);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(__Unify___maxHeapSimetrico__arbol_1_0,
		__Unify___maxHeapSimetrico__arbol_1_0_i12);
MR_def_label(__Unify___maxHeapSimetrico__arbol_1_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___maxHeapSimetrico__arbol_1_0_i19);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___maxHeapSimetrico__arbol_1_0_i20);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	if (MR_INT_NE(MR_tag(MR_sv(1)),0)) {
		MR_GOTO_LAB(__Unify___maxHeapSimetrico__arbol_1_0_i5);
	}
	if (MR_INT_EQ(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Unify___maxHeapSimetrico__arbol_1_0_i6);
	}
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(maxHeapSimetrico_module6)
	MR_init_entry1(__Compare___maxHeapSimetrico__arbol_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___maxHeapSimetrico__arbol_1_0);
	MR_init_label7(__Compare___maxHeapSimetrico__arbol_1_0,3,7,5,10,12,16,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___maxHeapSimetrico__arbol_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = ((MR_Word) MR_succip);
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___maxHeapSimetrico__arbol_1_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___maxHeapSimetrico__arbol_1_0_i5);
	}
	if (MR_INT_NE(MR_tag(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___maxHeapSimetrico__arbol_1_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
MR_def_label(__Compare___maxHeapSimetrico__arbol_1_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___maxHeapSimetrico__arbol_1_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___maxHeapSimetrico__arbol_1_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___maxHeapSimetrico__arbol_1_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___maxHeapSimetrico__arbol_1_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___maxHeapSimetrico__arbol_1_0_i12);
MR_def_label(__Compare___maxHeapSimetrico__arbol_1_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___maxHeapSimetrico__arbol_1_0_i54);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(__Compare___maxHeapSimetrico__arbol_1_0,
		__Compare___maxHeapSimetrico__arbol_1_0_i16);
MR_def_label(__Compare___maxHeapSimetrico__arbol_1_0, 16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___maxHeapSimetrico__arbol_1_0_i54);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___maxHeapSimetrico__arbol_1_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___maxHeapSimetrico__arbol_1_0_i5);
	}
	if (MR_INT_NE(MR_tag(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___maxHeapSimetrico__arbol_1_0_i7);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
MR_def_label(__Compare___maxHeapSimetrico__arbol_1_0, 54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__maxHeapSimetrico_maybe_bunch_0(void)
{
	maxHeapSimetrico_module0();
	maxHeapSimetrico_module1();
	maxHeapSimetrico_module2();
	maxHeapSimetrico_module3();
	maxHeapSimetrico_module4();
	maxHeapSimetrico_module5();
	maxHeapSimetrico_module6();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__maxHeapSimetrico__init(void);
void mercury__maxHeapSimetrico__init_type_tables(void);
void mercury__maxHeapSimetrico__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__maxHeapSimetrico__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__maxHeapSimetrico__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__maxHeapSimetrico__init_threadscope_string_table(void);
#endif
const char *mercury__maxHeapSimetrico__grade_check(void);

void mercury__maxHeapSimetrico__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__maxHeapSimetrico_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_maxHeapSimetrico__type_ctor_info_arbol_1,
		maxHeapSimetrico__arbol_1_0);
	mercury__maxHeapSimetrico__init_debugger();
}

void mercury__maxHeapSimetrico__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_maxHeapSimetrico__type_ctor_info_arbol_1);
	}
}


void mercury__maxHeapSimetrico__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__maxHeapSimetrico__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__maxHeapSimetrico);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__maxHeapSimetrico__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__maxHeapSimetrico__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__maxHeapSimetrico__grade_check(void)
{
    return &MR_GRADE_VAR;
}
