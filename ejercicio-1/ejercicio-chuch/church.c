/*
** Automatically generated from `church.m'
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
INIT mercury__church__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 28 "church.c"
#include "array.mh"

#line 31 "church.c"
#line 32 "church.c"
#include "bitmap.mh"

#line 35 "church.c"
#line 36 "church.c"
#include "church.mh"

#line 39 "church.c"
#line 40 "church.c"
#include "io.mh"

#line 43 "church.c"
#line 44 "church.c"
#include "string.mh"

#line 47 "church.c"
#line 48 "church.c"
#include "time.mh"

#line 51 "church.c"
#line 52 "church.c"
#ifndef CHURCH_DECL_GUARD
#define CHURCH_DECL_GUARD

#line 56 "church.c"
#line 57 "church.c"

#endif
#line 60 "church.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_church__type_ctor_info_church_0;
MR_decl_label10(main_2_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label5(main_2_0, 12,13,14,15,16)
MR_decl_label2(fn__church__multiplicacion_2_0, 13,4)
MR_decl_label1(fn__church__suma_2_0, 2)
MR_decl_label3(__Unify___church__church_0_0, 12,5,1)
MR_decl_label4(__Compare___church__church_0_0, 14,7,5,9)
MR_def_extern_entry(fn__church__suma_2_0)
MR_def_extern_entry(fn__church__multiplicacion_2_0)
MR_def_extern_entry(main_2_0)
MR_def_extern_entry(__Unify___church__church_0_0)
MR_def_extern_entry(__Compare___church__church_0_0)

static const struct mercury_type_0 mercury_common_0[5] =
{
{
((MR_Word *) (MR_Unsigned) 0U)
},
{
MR_TAG_COMMON(1,0,0)
},
{
MR_TAG_COMMON(1,0,1)
},
{
MR_TAG_COMMON(1,0,2)
},
{
MR_TAG_COMMON(1,0,3)
},
};

static const MR_DuFunctorDesc mercury_data_church__du_functor_desc_church_0_0 = {
	"cero",
	0,
	0,
	MR_SECTAG_LOCAL_REST_OF_WORD,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL,
	MR_FUNCTOR_SUBTYPE_NONE,
	0
};
extern const MR_TypeCtorInfo_Struct mercury_data_church__type_ctor_info_church_0;

const MR_PseudoTypeInfo mercury_data_church__field_types_church_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_church__type_ctor_info_church_0
};

static const MR_DuFunctorDesc mercury_data_church__du_functor_desc_church_0_1 = {
	"suc",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_church__field_types_church_0_1,
	NULL,
	NULL,
	NULL,
	MR_FUNCTOR_SUBTYPE_NONE,
	0
};

const MR_DuFunctorDescPtr mercury_data_church__du_stag_ordered_church_0_0[] = {
	&mercury_data_church__du_functor_desc_church_0_0

};

const MR_DuFunctorDescPtr mercury_data_church__du_stag_ordered_church_0_1[] = {
	&mercury_data_church__du_functor_desc_church_0_1

};

const MR_DuPtagLayout mercury_data_church__du_ptag_ordered_church_0[] = {
	{ 1, MR_SECTAG_LOCAL_REST_OF_WORD,
	mercury_data_church__du_stag_ordered_church_0_0,
	-1,
	0,
	1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_church__du_stag_ordered_church_0_1,
	-1,
	1,
	1 }

};

const MR_DuFunctorDescPtr mercury_data_church__du_name_ordered_church_0[] = {
	&mercury_data_church__du_functor_desc_church_0_0,
	&mercury_data_church__du_functor_desc_church_0_1
};

const MR_Integer mercury_data_church__functor_number_map_church_0[] = {
	0,
	1
};
	
const MR_TypeCtorInfo_Struct mercury_data_church__type_ctor_info_church_0 = {
	0,
	18,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___church__church_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___church__church_0_0)),
	"church",
	"church",
	{ (void *) mercury_data_church__du_name_ordered_church_0 },
	{ (void *) mercury_data_church__du_ptag_ordered_church_0 },
	2,
	12,
	mercury_data_church__functor_number_map_church_0
};




MR_BEGIN_MODULE(church_module0)
	MR_init_entry1(fn__church__suma_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__church__suma_2_0);
	MR_init_label1(fn__church__suma_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'suma'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__church__suma_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(fn__church__suma_2_0_i2);
	}
	MR_r3 = (MR_Integer) 0;
	while (1) {
	MR_r3 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_r3) + (MR_Unsigned) (MR_Integer) 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r1,0))
		continue;
	MR_r1 = MR_r2;
	break;
	} /* end while */
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_r3 = (MR_Integer) ((MR_Unsigned) ((MR_Integer) MR_r3) - (MR_Unsigned) (MR_Integer) 1);
	if (MR_INT_GT(MR_r3,0))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(fn__church__suma_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(church_module1)
	MR_init_entry1(fn__church__multiplicacion_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__church__multiplicacion_2_0);
	MR_init_label2(fn__church__multiplicacion_2_0,13,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'multiplicacion'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__church__multiplicacion_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__church__multiplicacion_2_0_i13);
	}
	MR_r1 = (MR_Unsigned) 0U;
	MR_proceed();
MR_def_label(fn__church__multiplicacion_2_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = ((MR_Word) MR_succip);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_localcall_lab(fn__church__multiplicacion_2_0,
		fn__church__multiplicacion_2_0_i4);
MR_def_label(fn__church__multiplicacion_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__church__suma_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(io__print_3_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(church_module2)
	MR_init_entry1(main_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__main_2_0);
	MR_init_label10(main_2_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label5(main_2_0,12,13,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'main'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__main_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = ((MR_Word) MR_succip);
	MR_sv(2) = ((MR_Word) MR_TAG_COMMON(1,0,2));
	MR_sv(3) = ((MR_Word) MR_TAG_COMMON(1,0,4));
	MR_sv(5) = (MR_Unsigned) 0U;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__church__suma_2_0,
		main_2_0_i2);
MR_def_label(main_2_0, 2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Unsigned) 0U;
	MR_np_call_localret_ent(fn__church__multiplicacion_2_0,
		main_2_0_i3);
MR_def_label(main_2_0, 3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__church__suma_2_0,
		main_2_0_i4);
MR_def_label(main_2_0, 4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Word) MR_TAG_COMMON(1,0,2));
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__church__multiplicacion_2_0,
		main_2_0_i5);
MR_def_label(main_2_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = ((MR_Word) MR_STRING_CTOR_ADDR);
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Word) MR_string_const("5 + 0 = ", 8));
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i6);
MR_def_label(main_2_0, 6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = ((MR_Word) MR_CTOR0_ADDR(church, church));
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i7);
MR_def_label(main_2_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		main_2_0_i8);
MR_def_label(main_2_0, 8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Word) MR_string_const("3 * 0 = ", 8));
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i9);
MR_def_label(main_2_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i10);
MR_def_label(main_2_0, 10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		main_2_0_i11);
MR_def_label(main_2_0, 11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Word) MR_string_const("5 + 3 = ", 8));
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i12);
MR_def_label(main_2_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i13);
MR_def_label(main_2_0, 13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		main_2_0_i14);
MR_def_label(main_2_0, 14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Word) MR_string_const("3 * 5 = ", 8));
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i15);
MR_def_label(main_2_0, 15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__print_3_0,
		main_2_0_i16);
MR_def_label(main_2_0, 16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(church_module3)
	MR_init_entry1(__Unify___church__church_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___church__church_0_0);
	MR_init_label3(__Unify___church__church_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___church__church_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___church__church_0_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___church__church_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___church__church_0_0, 12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___church__church_0_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (MR_INT_EQ(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___church__church_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___church__church_0_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_INT_NE(MR_tempr1,0))
		continue;
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp_and_return(3);
	}
	break;
	} /* end while */
MR_def_label(__Unify___church__church_0_0, 1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(church_module4)
	MR_init_entry1(__Compare___church__church_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___church__church_0_0);
	MR_init_label4(__Compare___church__church_0_0,14,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___church__church_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = ((MR_Word) MR_succip);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___church__church_0_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___church__church_0_0_i5);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___church__church_0_0_i7);
	}
MR_def_label(__Compare___church__church_0_0, 14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___church__church_0_0, 7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___church__church_0_0, 5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___church__church_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___church__church_0_0, 9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___church__church_0_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___church__church_0_0_i5);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___church__church_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__church_maybe_bunch_0(void)
{
	church_module0();
	church_module1();
	church_module2();
	church_module3();
	church_module4();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__church__init(void);
void mercury__church__init_type_tables(void);
void mercury__church__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__church__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__church__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__church__init_threadscope_string_table(void);
#endif
const char *mercury__church__grade_check(void);

void mercury__church__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__church_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_church__type_ctor_info_church_0,
		church__church_0_0);
	mercury__church__init_debugger();
}

void mercury__church__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_church__type_ctor_info_church_0);
	}
}


void mercury__church__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__church__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__church);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__church__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__church__init_threadscope_string_table(void)
{
}

#endif

// Ensure everything is compiled with the same grade.
const char *mercury__church__grade_check(void)
{
    return &MR_GRADE_VAR;
}
