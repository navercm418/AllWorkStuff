/* Generated code for Python module 'cryptography.hazmat.primitives.hashes'
 * created by Nuitka version 0.6.17.3
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_cryptography$hazmat$primitives$hashes" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$hashes;
PyDictObject *moduledict_cryptography$hazmat$primitives$hashes;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[143];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[143];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("cryptography.hazmat.primitives.hashes"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 143; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$primitives$hashes(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 143; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_937a89ff17c61fd3fc82e277543422e2;
static PyCodeObject *codeobj_71df0384a1f8ecfcfe71b95afaa036de;
static PyCodeObject *codeobj_86dfff9a60103501f21105c50d464681;
static PyCodeObject *codeobj_c330adaec87028f2b6c62786bd20c873;
static PyCodeObject *codeobj_c60ee5a97a0faebff8f284d71b3deaac;
static PyCodeObject *codeobj_1a913138e9ef62c5b52fac24622f5d9d;
static PyCodeObject *codeobj_45b10d6a330c885bf2cec77d91a9a6b2;
static PyCodeObject *codeobj_c556cb0a2666df15b6cb73c8507a1a3f;
static PyCodeObject *codeobj_3afe157606f8938dcf40bdccdf1fb1b3;
static PyCodeObject *codeobj_11d9f86cc02ca2f41245593f5a02a4ae;
static PyCodeObject *codeobj_3097e7b6ed04645c862302ff507b3db0;
static PyCodeObject *codeobj_c1abb48daaceee40850967232c85e60c;
static PyCodeObject *codeobj_dc13fb4c11c6d17a35a11019c23180dd;
static PyCodeObject *codeobj_6fa823bf701770f9b62be3f854d31658;
static PyCodeObject *codeobj_3f365587bfd2ad4e9a8389800a8e0639;
static PyCodeObject *codeobj_8ab8daada742baaa93b6b41a323c59a6;
static PyCodeObject *codeobj_39f400effa61a0e0c4dff5990d9f0a3e;
static PyCodeObject *codeobj_cbcdaa4d7f010d93c553389b0413ef7f;
static PyCodeObject *codeobj_89ff903c8701cd022d741fca21c110b0;
static PyCodeObject *codeobj_82dd8ecfbebcf2da30cbdb8c1ef9b874;
static PyCodeObject *codeobj_1b913039bddd04edf9ed02b0b0050756;
static PyCodeObject *codeobj_1b8fea5e159c1f0f384b5445b1667da5;
static PyCodeObject *codeobj_492fae4d5eebf0fb19ab07e0a7667531;
static PyCodeObject *codeobj_810450d5a7a2756be52cb8cee5eb1451;
static PyCodeObject *codeobj_7615bf8ea59cb7a5594a83026e07dd4c;
static PyCodeObject *codeobj_d562b18223deeb5d99b8822e9114ef50;
static PyCodeObject *codeobj_7630727712828f8a65b61685b2b7a502;
static PyCodeObject *codeobj_dd0f19f9c9806cea9b17224b0368f9d6;
static PyCodeObject *codeobj_0d1695a4efd39e3be7f13b0055fa3383;
static PyCodeObject *codeobj_5b44bc200115f974f12ba684da43c160;
static PyCodeObject *codeobj_a8cc8b3f6f3663a77256af17cba45c8d;
static PyCodeObject *codeobj_66654785388131f19f08e29a65ed8a68;
static PyCodeObject *codeobj_df8d1f6b591124767095bcff929df7d5;
static PyCodeObject *codeobj_478e711e313f11e4f2aa83fd53aa3966;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[135]); CHECK_OBJECT(module_filename_obj);
    codeobj_937a89ff17c61fd3fc82e277543422e2 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[136], NULL, NULL, 0, 0, 0);
    codeobj_71df0384a1f8ecfcfe71b95afaa036de = MAKE_CODEOBJECT(module_filename_obj, 225, CO_NOFREE, mod_consts[127], mod_consts[137], NULL, 0, 0, 0);
    codeobj_86dfff9a60103501f21105c50d464681 = MAKE_CODEOBJECT(module_filename_obj, 242, CO_NOFREE, mod_consts[132], mod_consts[137], NULL, 0, 0, 0);
    codeobj_c330adaec87028f2b6c62786bd20c873 = MAKE_CODEOBJECT(module_filename_obj, 68, CO_NOFREE, mod_consts[18], mod_consts[137], NULL, 0, 0, 0);
    codeobj_c60ee5a97a0faebff8f284d71b3deaac = MAKE_CODEOBJECT(module_filename_obj, 19, CO_NOFREE, mod_consts[5], mod_consts[137], NULL, 0, 0, 0);
    codeobj_1a913138e9ef62c5b52fac24622f5d9d = MAKE_CODEOBJECT(module_filename_obj, 34, CO_NOFREE, mod_consts[69], mod_consts[137], NULL, 0, 0, 0);
    codeobj_45b10d6a330c885bf2cec77d91a9a6b2 = MAKE_CODEOBJECT(module_filename_obj, 218, CO_NOFREE, mod_consts[124], mod_consts[137], NULL, 0, 0, 0);
    codeobj_c556cb0a2666df15b6cb73c8507a1a3f = MAKE_CODEOBJECT(module_filename_obj, 111, CO_NOFREE, mod_consts[90], mod_consts[137], NULL, 0, 0, 0);
    codeobj_3afe157606f8938dcf40bdccdf1fb1b3 = MAKE_CODEOBJECT(module_filename_obj, 132, CO_NOFREE, mod_consts[100], mod_consts[137], NULL, 0, 0, 0);
    codeobj_11d9f86cc02ca2f41245593f5a02a4ae = MAKE_CODEOBJECT(module_filename_obj, 139, CO_NOFREE, mod_consts[102], mod_consts[137], NULL, 0, 0, 0);
    codeobj_3097e7b6ed04645c862302ff507b3db0 = MAKE_CODEOBJECT(module_filename_obj, 146, CO_NOFREE, mod_consts[104], mod_consts[137], NULL, 0, 0, 0);
    codeobj_c1abb48daaceee40850967232c85e60c = MAKE_CODEOBJECT(module_filename_obj, 160, CO_NOFREE, mod_consts[109], mod_consts[137], NULL, 0, 0, 0);
    codeobj_dc13fb4c11c6d17a35a11019c23180dd = MAKE_CODEOBJECT(module_filename_obj, 166, CO_NOFREE, mod_consts[111], mod_consts[137], NULL, 0, 0, 0);
    codeobj_6fa823bf701770f9b62be3f854d31658 = MAKE_CODEOBJECT(module_filename_obj, 172, CO_NOFREE, mod_consts[113], mod_consts[137], NULL, 0, 0, 0);
    codeobj_3f365587bfd2ad4e9a8389800a8e0639 = MAKE_CODEOBJECT(module_filename_obj, 178, CO_NOFREE, mod_consts[115], mod_consts[137], NULL, 0, 0, 0);
    codeobj_8ab8daada742baaa93b6b41a323c59a6 = MAKE_CODEOBJECT(module_filename_obj, 153, CO_NOFREE, mod_consts[107], mod_consts[137], NULL, 0, 0, 0);
    codeobj_39f400effa61a0e0c4dff5990d9f0a3e = MAKE_CODEOBJECT(module_filename_obj, 118, CO_NOFREE, mod_consts[94], mod_consts[137], NULL, 0, 0, 0);
    codeobj_cbcdaa4d7f010d93c553389b0413ef7f = MAKE_CODEOBJECT(module_filename_obj, 125, CO_NOFREE, mod_consts[98], mod_consts[137], NULL, 0, 0, 0);
    codeobj_89ff903c8701cd022d741fca21c110b0 = MAKE_CODEOBJECT(module_filename_obj, 185, CO_NOFREE, mod_consts[117], mod_consts[137], NULL, 0, 0, 0);
    codeobj_82dd8ecfbebcf2da30cbdb8c1ef9b874 = MAKE_CODEOBJECT(module_filename_obj, 202, CO_NOFREE, mod_consts[121], mod_consts[137], NULL, 0, 0, 0);
    codeobj_1b913039bddd04edf9ed02b0b0050756 = MAKE_CODEOBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[138], NULL, 4, 0, 0);
    codeobj_1b8fea5e159c1f0f384b5445b1667da5 = MAKE_CODEOBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[139], NULL, 2, 0, 0);
    codeobj_492fae4d5eebf0fb19ab07e0a7667531 = MAKE_CODEOBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[139], NULL, 2, 0, 0);
    codeobj_810450d5a7a2756be52cb8cee5eb1451 = MAKE_CODEOBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[139], NULL, 2, 0, 0);
    codeobj_7615bf8ea59cb7a5594a83026e07dd4c = MAKE_CODEOBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[139], NULL, 2, 0, 0);
    codeobj_d562b18223deeb5d99b8822e9114ef50 = MAKE_CODEOBJECT(module_filename_obj, 36, CO_NOFREE, mod_consts[10], mod_consts[140], NULL, 1, 0, 0);
    codeobj_7630727712828f8a65b61685b2b7a502 = MAKE_CODEOBJECT(module_filename_obj, 54, CO_NOFREE, mod_consts[19], mod_consts[140], NULL, 1, 0, 0);
    codeobj_dd0f19f9c9806cea9b17224b0368f9d6 = MAKE_CODEOBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[140], NULL, 1, 0, 0);
    codeobj_0d1695a4efd39e3be7f13b0055fa3383 = MAKE_CODEOBJECT(module_filename_obj, 27, CO_NOFREE, mod_consts[66], mod_consts[140], NULL, 1, 0, 0);
    codeobj_5b44bc200115f974f12ba684da43c160 = MAKE_CODEOBJECT(module_filename_obj, 48, CO_NOFREE, mod_consts[21], mod_consts[140], NULL, 1, 0, 0);
    codeobj_a8cc8b3f6f3663a77256af17cba45c8d = MAKE_CODEOBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[141], NULL, 1, 0, 0);
    codeobj_66654785388131f19f08e29a65ed8a68 = MAKE_CODEOBJECT(module_filename_obj, 21, CO_NOFREE, mod_consts[63], mod_consts[140], NULL, 1, 0, 0);
    codeobj_df8d1f6b591124767095bcff929df7d5 = MAKE_CODEOBJECT(module_filename_obj, 42, CO_NOFREE, mod_consts[17], mod_consts[142], NULL, 2, 0, 0);
    codeobj_478e711e313f11e4f2aa83fd53aa3966 = MAKE_CODEOBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[142], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__10_finalize();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__11___init__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__12___init__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__13___init__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__14___init__();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__1_name();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__2_digest_size();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__3_algorithm();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__4_update();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__5_finalize();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__6_copy();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__7___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__8_update();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__9_copy();


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function__7___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_algorithm = python_pars[1];
    PyObject *par_backend = python_pars[2];
    PyObject *par_ctx = python_pars[3];
    struct Nuitka_FrameObject *frame_1b913039bddd04edf9ed02b0b0050756;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1b913039bddd04edf9ed02b0b0050756 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1b913039bddd04edf9ed02b0b0050756)) {
        Py_XDECREF(cache_frame_1b913039bddd04edf9ed02b0b0050756);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b913039bddd04edf9ed02b0b0050756 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b913039bddd04edf9ed02b0b0050756 = MAKE_FUNCTION_FRAME(codeobj_1b913039bddd04edf9ed02b0b0050756, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1b913039bddd04edf9ed02b0b0050756->m_type_description == NULL);
    frame_1b913039bddd04edf9ed02b0b0050756 = cache_frame_1b913039bddd04edf9ed02b0b0050756;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1b913039bddd04edf9ed02b0b0050756);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1b913039bddd04edf9ed02b0b0050756) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_backend);
        tmp_isinstance_inst_1 = par_backend;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[2];
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[4]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1b913039bddd04edf9ed02b0b0050756->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 71;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_algorithm);
        tmp_isinstance_inst_2 = par_algorithm;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[6];
        frame_1b913039bddd04edf9ed02b0b0050756->m_frame.f_lineno = 77;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 77;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_algorithm);
        tmp_assattr_value_1 = par_algorithm;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_backend);
        tmp_assattr_value_2 = par_backend;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[8], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_ctx);
        tmp_compexpr_left_1 = par_ctx;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[8]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[9]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[10]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1b913039bddd04edf9ed02b0b0050756->m_frame.f_lineno = 83;
        tmp_assattr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[11], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_ctx);
        tmp_assattr_value_4 = par_ctx;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[11], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1b913039bddd04edf9ed02b0b0050756);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1b913039bddd04edf9ed02b0b0050756);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1b913039bddd04edf9ed02b0b0050756, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b913039bddd04edf9ed02b0b0050756->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b913039bddd04edf9ed02b0b0050756, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b913039bddd04edf9ed02b0b0050756,
        type_description_1,
        par_self,
        par_algorithm,
        par_backend,
        par_ctx
    );


    // Release cached frame if used for exception.
    if (frame_1b913039bddd04edf9ed02b0b0050756 == cache_frame_1b913039bddd04edf9ed02b0b0050756) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1b913039bddd04edf9ed02b0b0050756);
        cache_frame_1b913039bddd04edf9ed02b0b0050756 = NULL;
    }

    assertFrameObject(frame_1b913039bddd04edf9ed02b0b0050756);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_algorithm);
    Py_DECREF(par_algorithm);
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function__8_update(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    struct Nuitka_FrameObject *frame_478e711e313f11e4f2aa83fd53aa3966;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_478e711e313f11e4f2aa83fd53aa3966 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_478e711e313f11e4f2aa83fd53aa3966)) {
        Py_XDECREF(cache_frame_478e711e313f11e4f2aa83fd53aa3966);

#if _DEBUG_REFCOUNTS
        if (cache_frame_478e711e313f11e4f2aa83fd53aa3966 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_478e711e313f11e4f2aa83fd53aa3966 = MAKE_FUNCTION_FRAME(codeobj_478e711e313f11e4f2aa83fd53aa3966, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_478e711e313f11e4f2aa83fd53aa3966->m_type_description == NULL);
    frame_478e711e313f11e4f2aa83fd53aa3966 = cache_frame_478e711e313f11e4f2aa83fd53aa3966;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_478e711e313f11e4f2aa83fd53aa3966);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_478e711e313f11e4f2aa83fd53aa3966) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[11]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_478e711e313f11e4f2aa83fd53aa3966->m_frame.f_lineno = 91;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_name_1, mod_consts[13]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 91;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[16];
        CHECK_OBJECT(par_data);
        tmp_args_element_name_2 = par_data;
        frame_478e711e313f11e4f2aa83fd53aa3966->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[11]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_name_3 = par_data;
        frame_478e711e313f11e4f2aa83fd53aa3966->m_frame.f_lineno = 93;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[17], tmp_args_element_name_3);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_478e711e313f11e4f2aa83fd53aa3966);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_478e711e313f11e4f2aa83fd53aa3966);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_478e711e313f11e4f2aa83fd53aa3966, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_478e711e313f11e4f2aa83fd53aa3966->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_478e711e313f11e4f2aa83fd53aa3966, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_478e711e313f11e4f2aa83fd53aa3966,
        type_description_1,
        par_self,
        par_data
    );


    // Release cached frame if used for exception.
    if (frame_478e711e313f11e4f2aa83fd53aa3966 == cache_frame_478e711e313f11e4f2aa83fd53aa3966) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_478e711e313f11e4f2aa83fd53aa3966);
        cache_frame_478e711e313f11e4f2aa83fd53aa3966 = NULL;
    }

    assertFrameObject(frame_478e711e313f11e4f2aa83fd53aa3966);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function__9_copy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_dd0f19f9c9806cea9b17224b0368f9d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dd0f19f9c9806cea9b17224b0368f9d6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dd0f19f9c9806cea9b17224b0368f9d6)) {
        Py_XDECREF(cache_frame_dd0f19f9c9806cea9b17224b0368f9d6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd0f19f9c9806cea9b17224b0368f9d6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd0f19f9c9806cea9b17224b0368f9d6 = MAKE_FUNCTION_FRAME(codeobj_dd0f19f9c9806cea9b17224b0368f9d6, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dd0f19f9c9806cea9b17224b0368f9d6->m_type_description == NULL);
    frame_dd0f19f9c9806cea9b17224b0368f9d6 = cache_frame_dd0f19f9c9806cea9b17224b0368f9d6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dd0f19f9c9806cea9b17224b0368f9d6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dd0f19f9c9806cea9b17224b0368f9d6) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[11]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_dd0f19f9c9806cea9b17224b0368f9d6->m_frame.f_lineno = 97;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_name_1, mod_consts[13]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 97;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_4;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[10]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[8]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[11]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_dd0f19f9c9806cea9b17224b0368f9d6->m_frame.f_lineno = 99;
        tmp_kw_call_dict_value_1_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[19]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_dd0f19f9c9806cea9b17224b0368f9d6->m_frame.f_lineno = 98;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_name_2, args, kw_values, mod_consts[20]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dd0f19f9c9806cea9b17224b0368f9d6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_dd0f19f9c9806cea9b17224b0368f9d6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dd0f19f9c9806cea9b17224b0368f9d6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dd0f19f9c9806cea9b17224b0368f9d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd0f19f9c9806cea9b17224b0368f9d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd0f19f9c9806cea9b17224b0368f9d6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd0f19f9c9806cea9b17224b0368f9d6,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_dd0f19f9c9806cea9b17224b0368f9d6 == cache_frame_dd0f19f9c9806cea9b17224b0368f9d6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_dd0f19f9c9806cea9b17224b0368f9d6);
        cache_frame_dd0f19f9c9806cea9b17224b0368f9d6 = NULL;
    }

    assertFrameObject(frame_dd0f19f9c9806cea9b17224b0368f9d6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function__10_finalize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_digest = NULL;
    struct Nuitka_FrameObject *frame_a8cc8b3f6f3663a77256af17cba45c8d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a8cc8b3f6f3663a77256af17cba45c8d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a8cc8b3f6f3663a77256af17cba45c8d)) {
        Py_XDECREF(cache_frame_a8cc8b3f6f3663a77256af17cba45c8d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a8cc8b3f6f3663a77256af17cba45c8d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a8cc8b3f6f3663a77256af17cba45c8d = MAKE_FUNCTION_FRAME(codeobj_a8cc8b3f6f3663a77256af17cba45c8d, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a8cc8b3f6f3663a77256af17cba45c8d->m_type_description == NULL);
    frame_a8cc8b3f6f3663a77256af17cba45c8d = cache_frame_a8cc8b3f6f3663a77256af17cba45c8d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a8cc8b3f6f3663a77256af17cba45c8d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a8cc8b3f6f3663a77256af17cba45c8d) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[11]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a8cc8b3f6f3663a77256af17cba45c8d->m_frame.f_lineno = 104;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_name_1, mod_consts[13]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 104;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[11]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a8cc8b3f6f3663a77256af17cba45c8d->m_frame.f_lineno = 105;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[21]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_digest == NULL);
        var_digest = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a8cc8b3f6f3663a77256af17cba45c8d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a8cc8b3f6f3663a77256af17cba45c8d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a8cc8b3f6f3663a77256af17cba45c8d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a8cc8b3f6f3663a77256af17cba45c8d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a8cc8b3f6f3663a77256af17cba45c8d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a8cc8b3f6f3663a77256af17cba45c8d,
        type_description_1,
        par_self,
        var_digest
    );


    // Release cached frame if used for exception.
    if (frame_a8cc8b3f6f3663a77256af17cba45c8d == cache_frame_a8cc8b3f6f3663a77256af17cba45c8d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a8cc8b3f6f3663a77256af17cba45c8d);
        cache_frame_a8cc8b3f6f3663a77256af17cba45c8d = NULL;
    }

    assertFrameObject(frame_a8cc8b3f6f3663a77256af17cba45c8d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_digest);
    tmp_return_value = var_digest;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_digest);
    Py_DECREF(var_digest);
    var_digest = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_digest);
    var_digest = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function__11___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_digest_size = python_pars[1];
    struct Nuitka_FrameObject *frame_1b8fea5e159c1f0f384b5445b1667da5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1b8fea5e159c1f0f384b5445b1667da5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1b8fea5e159c1f0f384b5445b1667da5)) {
        Py_XDECREF(cache_frame_1b8fea5e159c1f0f384b5445b1667da5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b8fea5e159c1f0f384b5445b1667da5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b8fea5e159c1f0f384b5445b1667da5 = MAKE_FUNCTION_FRAME(codeobj_1b8fea5e159c1f0f384b5445b1667da5, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1b8fea5e159c1f0f384b5445b1667da5->m_type_description == NULL);
    frame_1b8fea5e159c1f0f384b5445b1667da5 = cache_frame_1b8fea5e159c1f0f384b5445b1667da5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1b8fea5e159c1f0f384b5445b1667da5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1b8fea5e159c1f0f384b5445b1667da5) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_digest_size);
        tmp_isinstance_inst_1 = par_digest_size;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[23]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[24];
        frame_1b8fea5e159c1f0f384b5445b1667da5->m_frame.f_lineno = 190;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 190;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_digest_size);
        tmp_compexpr_left_1 = par_digest_size;
        tmp_compexpr_right_1 = mod_consts[25];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[26];
        frame_1b8fea5e159c1f0f384b5445b1667da5->m_frame.f_lineno = 193;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 193;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_digest_size);
        tmp_assattr_value_1 = par_digest_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[27], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1b8fea5e159c1f0f384b5445b1667da5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1b8fea5e159c1f0f384b5445b1667da5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1b8fea5e159c1f0f384b5445b1667da5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b8fea5e159c1f0f384b5445b1667da5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b8fea5e159c1f0f384b5445b1667da5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b8fea5e159c1f0f384b5445b1667da5,
        type_description_1,
        par_self,
        par_digest_size
    );


    // Release cached frame if used for exception.
    if (frame_1b8fea5e159c1f0f384b5445b1667da5 == cache_frame_1b8fea5e159c1f0f384b5445b1667da5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1b8fea5e159c1f0f384b5445b1667da5);
        cache_frame_1b8fea5e159c1f0f384b5445b1667da5 = NULL;
    }

    assertFrameObject(frame_1b8fea5e159c1f0f384b5445b1667da5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_digest_size);
    Py_DECREF(par_digest_size);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_digest_size);
    Py_DECREF(par_digest_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function__12___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_digest_size = python_pars[1];
    struct Nuitka_FrameObject *frame_492fae4d5eebf0fb19ab07e0a7667531;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_492fae4d5eebf0fb19ab07e0a7667531 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_492fae4d5eebf0fb19ab07e0a7667531)) {
        Py_XDECREF(cache_frame_492fae4d5eebf0fb19ab07e0a7667531);

#if _DEBUG_REFCOUNTS
        if (cache_frame_492fae4d5eebf0fb19ab07e0a7667531 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_492fae4d5eebf0fb19ab07e0a7667531 = MAKE_FUNCTION_FRAME(codeobj_492fae4d5eebf0fb19ab07e0a7667531, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_492fae4d5eebf0fb19ab07e0a7667531->m_type_description == NULL);
    frame_492fae4d5eebf0fb19ab07e0a7667531 = cache_frame_492fae4d5eebf0fb19ab07e0a7667531;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_492fae4d5eebf0fb19ab07e0a7667531);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_492fae4d5eebf0fb19ab07e0a7667531) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_digest_size);
        tmp_isinstance_inst_1 = par_digest_size;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[23]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[24];
        frame_492fae4d5eebf0fb19ab07e0a7667531->m_frame.f_lineno = 207;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 207;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_digest_size);
        tmp_compexpr_left_1 = par_digest_size;
        tmp_compexpr_right_1 = mod_consts[25];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 209;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[26];
        frame_492fae4d5eebf0fb19ab07e0a7667531->m_frame.f_lineno = 210;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 210;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_digest_size);
        tmp_assattr_value_1 = par_digest_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[27], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_492fae4d5eebf0fb19ab07e0a7667531);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_492fae4d5eebf0fb19ab07e0a7667531);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_492fae4d5eebf0fb19ab07e0a7667531, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_492fae4d5eebf0fb19ab07e0a7667531->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_492fae4d5eebf0fb19ab07e0a7667531, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_492fae4d5eebf0fb19ab07e0a7667531,
        type_description_1,
        par_self,
        par_digest_size
    );


    // Release cached frame if used for exception.
    if (frame_492fae4d5eebf0fb19ab07e0a7667531 == cache_frame_492fae4d5eebf0fb19ab07e0a7667531) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_492fae4d5eebf0fb19ab07e0a7667531);
        cache_frame_492fae4d5eebf0fb19ab07e0a7667531 = NULL;
    }

    assertFrameObject(frame_492fae4d5eebf0fb19ab07e0a7667531);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_digest_size);
    Py_DECREF(par_digest_size);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_digest_size);
    Py_DECREF(par_digest_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function__13___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_digest_size = python_pars[1];
    struct Nuitka_FrameObject *frame_810450d5a7a2756be52cb8cee5eb1451;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_810450d5a7a2756be52cb8cee5eb1451 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_810450d5a7a2756be52cb8cee5eb1451)) {
        Py_XDECREF(cache_frame_810450d5a7a2756be52cb8cee5eb1451);

#if _DEBUG_REFCOUNTS
        if (cache_frame_810450d5a7a2756be52cb8cee5eb1451 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_810450d5a7a2756be52cb8cee5eb1451 = MAKE_FUNCTION_FRAME(codeobj_810450d5a7a2756be52cb8cee5eb1451, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_810450d5a7a2756be52cb8cee5eb1451->m_type_description == NULL);
    frame_810450d5a7a2756be52cb8cee5eb1451 = cache_frame_810450d5a7a2756be52cb8cee5eb1451;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_810450d5a7a2756be52cb8cee5eb1451);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_810450d5a7a2756be52cb8cee5eb1451) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_digest_size);
        tmp_compexpr_left_1 = par_digest_size;
        tmp_compexpr_right_1 = mod_consts[28];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 233;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[29];
        frame_810450d5a7a2756be52cb8cee5eb1451->m_frame.f_lineno = 234;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 234;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_digest_size);
        tmp_assattr_value_1 = par_digest_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[27], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_810450d5a7a2756be52cb8cee5eb1451);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_810450d5a7a2756be52cb8cee5eb1451);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_810450d5a7a2756be52cb8cee5eb1451, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_810450d5a7a2756be52cb8cee5eb1451->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_810450d5a7a2756be52cb8cee5eb1451, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_810450d5a7a2756be52cb8cee5eb1451,
        type_description_1,
        par_self,
        par_digest_size
    );


    // Release cached frame if used for exception.
    if (frame_810450d5a7a2756be52cb8cee5eb1451 == cache_frame_810450d5a7a2756be52cb8cee5eb1451) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_810450d5a7a2756be52cb8cee5eb1451);
        cache_frame_810450d5a7a2756be52cb8cee5eb1451 = NULL;
    }

    assertFrameObject(frame_810450d5a7a2756be52cb8cee5eb1451);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_digest_size);
    Py_DECREF(par_digest_size);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_digest_size);
    Py_DECREF(par_digest_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$hashes$$$function__14___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_digest_size = python_pars[1];
    struct Nuitka_FrameObject *frame_7615bf8ea59cb7a5594a83026e07dd4c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7615bf8ea59cb7a5594a83026e07dd4c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7615bf8ea59cb7a5594a83026e07dd4c)) {
        Py_XDECREF(cache_frame_7615bf8ea59cb7a5594a83026e07dd4c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7615bf8ea59cb7a5594a83026e07dd4c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7615bf8ea59cb7a5594a83026e07dd4c = MAKE_FUNCTION_FRAME(codeobj_7615bf8ea59cb7a5594a83026e07dd4c, module_cryptography$hazmat$primitives$hashes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7615bf8ea59cb7a5594a83026e07dd4c->m_type_description == NULL);
    frame_7615bf8ea59cb7a5594a83026e07dd4c = cache_frame_7615bf8ea59cb7a5594a83026e07dd4c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7615bf8ea59cb7a5594a83026e07dd4c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7615bf8ea59cb7a5594a83026e07dd4c) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_digest_size);
        tmp_compexpr_left_1 = par_digest_size;
        tmp_compexpr_right_1 = mod_consts[30];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 250;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[31];
        frame_7615bf8ea59cb7a5594a83026e07dd4c->m_frame.f_lineno = 251;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 251;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_digest_size);
        tmp_assattr_value_1 = par_digest_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[27], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7615bf8ea59cb7a5594a83026e07dd4c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7615bf8ea59cb7a5594a83026e07dd4c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7615bf8ea59cb7a5594a83026e07dd4c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7615bf8ea59cb7a5594a83026e07dd4c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7615bf8ea59cb7a5594a83026e07dd4c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7615bf8ea59cb7a5594a83026e07dd4c,
        type_description_1,
        par_self,
        par_digest_size
    );


    // Release cached frame if used for exception.
    if (frame_7615bf8ea59cb7a5594a83026e07dd4c == cache_frame_7615bf8ea59cb7a5594a83026e07dd4c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7615bf8ea59cb7a5594a83026e07dd4c);
        cache_frame_7615bf8ea59cb7a5594a83026e07dd4c = NULL;
    }

    assertFrameObject(frame_7615bf8ea59cb7a5594a83026e07dd4c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_digest_size);
    Py_DECREF(par_digest_size);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_digest_size);
    Py_DECREF(par_digest_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__10_finalize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function__10_finalize,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[89],
#endif
        codeobj_a8cc8b3f6f3663a77256af17cba45c8d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__11___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function__11___init__,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_1b8fea5e159c1f0f384b5445b1667da5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__12___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function__12___init__,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_492fae4d5eebf0fb19ab07e0a7667531,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__13___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function__13___init__,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_810450d5a7a2756be52cb8cee5eb1451,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__14___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function__14___init__,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_7615bf8ea59cb7a5594a83026e07dd4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__1_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        codeobj_66654785388131f19f08e29a65ed8a68,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__2_digest_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        codeobj_0d1695a4efd39e3be7f13b0055fa3383,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts[65],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__3_algorithm() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_d562b18223deeb5d99b8822e9114ef50,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts[70],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__4_update() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_df8d1f6b591124767095bcff929df7d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts[73],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__5_finalize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_5b44bc200115f974f12ba684da43c160,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts[75],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__6_copy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_7630727712828f8a65b61685b2b7a502,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__7___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function__7___init__,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_1b913039bddd04edf9ed02b0b0050756,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__8_update() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function__8_update,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[87],
#endif
        codeobj_478e711e313f11e4f2aa83fd53aa3966,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__9_copy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$hashes$$$function__9_copy,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_dd0f19f9c9806cea9b17224b0368f9d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$hashes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_cryptography$hazmat$primitives$hashes[] = {
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    impl_cryptography$hazmat$primitives$hashes$$$function__7___init__,
    impl_cryptography$hazmat$primitives$hashes$$$function__8_update,
    impl_cryptography$hazmat$primitives$hashes$$$function__9_copy,
    impl_cryptography$hazmat$primitives$hashes$$$function__10_finalize,
    impl_cryptography$hazmat$primitives$hashes$$$function__11___init__,
    impl_cryptography$hazmat$primitives$hashes$$$function__12___init__,
    impl_cryptography$hazmat$primitives$hashes$$$function__13___init__,
    impl_cryptography$hazmat$primitives$hashes$$$function__14___init__,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_cryptography$hazmat$primitives$hashes;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_cryptography$hazmat$primitives$hashes) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_cryptography$hazmat$primitives$hashes[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_cryptography$hazmat$primitives$hashes,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_cryptography$hazmat$primitives$hashes(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    module_cryptography$hazmat$primitives$hashes = module;

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

    _initSlotCompare();
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.primitives.hashes: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.primitives.hashes: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.primitives.hashes: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$hazmat$primitives$hashes\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_cryptography$hazmat$primitives$hashes = MODULE_DICT(module_cryptography$hazmat$primitives$hashes);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_cryptography$hazmat$primitives$hashes,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$hashes,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$hashes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$hashes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$hashes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$primitives$hashes);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_cryptography$hazmat$primitives$hashes);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_16_var___class__ = NULL;
    PyObject *outline_17_var___class__ = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *outline_19_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_17__prepared = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_18__prepared = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_19__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__class_decl_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_20__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_937a89ff17c61fd3fc82e277543422e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_19 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_c60ee5a97a0faebff8f284d71b3deaac_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c60ee5a97a0faebff8f284d71b3deaac_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34 = NULL;
    struct Nuitka_FrameObject *frame_1a913138e9ef62c5b52fac24622f5d9d_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_1a913138e9ef62c5b52fac24622f5d9d_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_61 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__4_Hash_68 = NULL;
    struct Nuitka_FrameObject *frame_c330adaec87028f2b6c62786bd20c873_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c330adaec87028f2b6c62786bd20c873_4 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA1_111 = NULL;
    struct Nuitka_FrameObject *frame_c556cb0a2666df15b6cb73c8507a1a3f_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c556cb0a2666df15b6cb73c8507a1a3f_5 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_224_118 = NULL;
    struct Nuitka_FrameObject *frame_39f400effa61a0e0c4dff5990d9f0a3e_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    static struct Nuitka_FrameObject *cache_frame_39f400effa61a0e0c4dff5990d9f0a3e_6 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA512_256_125 = NULL;
    struct Nuitka_FrameObject *frame_cbcdaa4d7f010d93c553389b0413ef7f_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    static struct Nuitka_FrameObject *cache_frame_cbcdaa4d7f010d93c553389b0413ef7f_7 = NULL;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA224_132 = NULL;
    struct Nuitka_FrameObject *frame_3afe157606f8938dcf40bdccdf1fb1b3_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    static struct Nuitka_FrameObject *cache_frame_3afe157606f8938dcf40bdccdf1fb1b3_8 = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA256_139 = NULL;
    struct Nuitka_FrameObject *frame_11d9f86cc02ca2f41245593f5a02a4ae_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    static struct Nuitka_FrameObject *cache_frame_11d9f86cc02ca2f41245593f5a02a4ae_9 = NULL;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA384_146 = NULL;
    struct Nuitka_FrameObject *frame_3097e7b6ed04645c862302ff507b3db0_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    static struct Nuitka_FrameObject *cache_frame_3097e7b6ed04645c862302ff507b3db0_10 = NULL;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA512_153 = NULL;
    struct Nuitka_FrameObject *frame_8ab8daada742baaa93b6b41a323c59a6_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    static struct Nuitka_FrameObject *cache_frame_8ab8daada742baaa93b6b41a323c59a6_11 = NULL;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_224_160 = NULL;
    struct Nuitka_FrameObject *frame_c1abb48daaceee40850967232c85e60c_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c1abb48daaceee40850967232c85e60c_12 = NULL;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_256_166 = NULL;
    struct Nuitka_FrameObject *frame_dc13fb4c11c6d17a35a11019c23180dd_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    static struct Nuitka_FrameObject *cache_frame_dc13fb4c11c6d17a35a11019c23180dd_13 = NULL;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_384_172 = NULL;
    struct Nuitka_FrameObject *frame_6fa823bf701770f9b62be3f854d31658_14;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6fa823bf701770f9b62be3f854d31658_14 = NULL;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__15_SHA3_512_178 = NULL;
    struct Nuitka_FrameObject *frame_3f365587bfd2ad4e9a8389800a8e0639_15;
    NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
    static struct Nuitka_FrameObject *cache_frame_3f365587bfd2ad4e9a8389800a8e0639_15 = NULL;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE128_185 = NULL;
    struct Nuitka_FrameObject *frame_89ff903c8701cd022d741fca21c110b0_16;
    NUITKA_MAY_BE_UNUSED char const *type_description_16 = NULL;
    static struct Nuitka_FrameObject *cache_frame_89ff903c8701cd022d741fca21c110b0_16 = NULL;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__17_SHAKE256_202 = NULL;
    struct Nuitka_FrameObject *frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17;
    NUITKA_MAY_BE_UNUSED char const *type_description_17 = NULL;
    static struct Nuitka_FrameObject *cache_frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17 = NULL;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__18_MD5_218 = NULL;
    struct Nuitka_FrameObject *frame_45b10d6a330c885bf2cec77d91a9a6b2_18;
    NUITKA_MAY_BE_UNUSED char const *type_description_18 = NULL;
    static struct Nuitka_FrameObject *cache_frame_45b10d6a330c885bf2cec77d91a9a6b2_18 = NULL;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225 = NULL;
    struct Nuitka_FrameObject *frame_71df0384a1f8ecfcfe71b95afaa036de_19;
    NUITKA_MAY_BE_UNUSED char const *type_description_19 = NULL;
    static struct Nuitka_FrameObject *cache_frame_71df0384a1f8ecfcfe71b95afaa036de_19 = NULL;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242 = NULL;
    struct Nuitka_FrameObject *frame_86dfff9a60103501f21105c50d464681_20;
    NUITKA_MAY_BE_UNUSED char const *type_description_20 = NULL;
    static struct Nuitka_FrameObject *cache_frame_86dfff9a60103501f21105c50d464681_20 = NULL;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_937a89ff17c61fd3fc82e277543422e2 = MAKE_MODULE_FRAME(codeobj_937a89ff17c61fd3fc82e277543422e2, module_cryptography$hazmat$primitives$hashes);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_937a89ff17c61fd3fc82e277543422e2);
    assert(Py_REFCNT(frame_937a89ff17c61fd3fc82e277543422e2) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[36], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 5;
        tmp_assign_source_4 = IMPORT_HARD___FUTURE__();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_cryptography$hazmat$primitives$hashes,
                mod_consts[38],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[38]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_cryptography$hazmat$primitives$hashes,
                mod_consts[40],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[40]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_cryptography$hazmat$primitives$hashes,
                mod_consts[41],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[41]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_7);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[42];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$hashes;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[39];
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 7;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[22];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$hashes;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[39];
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 9;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[43];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_cryptography$hazmat$primitives$hashes;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[44];
        tmp_level_name_3 = mod_consts[39];
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 11;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_cryptography$hazmat$primitives$hashes,
                mod_consts[14],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[45];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_cryptography$hazmat$primitives$hashes;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[46];
        tmp_level_name_4 = mod_consts[39];
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 12;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_cryptography$hazmat$primitives$hashes,
                mod_consts[12],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[12]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_cryptography$hazmat$primitives$hashes,
                mod_consts[1],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[1]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_cryptography$hazmat$primitives$hashes,
                mod_consts[3],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[3]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_14);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[47];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_cryptography$hazmat$primitives$hashes;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[48];
        tmp_level_name_5 = mod_consts[39];
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 15;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_cryptography$hazmat$primitives$hashes,
                mod_consts[0],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_15);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_16 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[50];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = mod_consts[39];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_18 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_18;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 19;

        goto try_except_handler_3;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[51]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[51]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        tmp_tuple_element_1 = mod_consts[5];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 19;
        tmp_assign_source_19 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[52]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[54];
        tmp_getattr_default_1 = mod_consts[55];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[54]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 19;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_20;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_args_element_name_2;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_3;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[56]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_3;
        }
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 18;

            goto try_except_handler_3;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[57]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 18;

            goto try_except_handler_3;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 18;
        tmp_called_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_3;
        }
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_19 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_19, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[5];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_19, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        if (isFrameUnusable(cache_frame_c60ee5a97a0faebff8f284d71b3deaac_2)) {
            Py_XDECREF(cache_frame_c60ee5a97a0faebff8f284d71b3deaac_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c60ee5a97a0faebff8f284d71b3deaac_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c60ee5a97a0faebff8f284d71b3deaac_2 = MAKE_FUNCTION_FRAME(codeobj_c60ee5a97a0faebff8f284d71b3deaac, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c60ee5a97a0faebff8f284d71b3deaac_2->m_type_description == NULL);
        frame_c60ee5a97a0faebff8f284d71b3deaac_2 = cache_frame_c60ee5a97a0faebff8f284d71b3deaac_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c60ee5a97a0faebff8f284d71b3deaac_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c60ee5a97a0faebff8f284d71b3deaac_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_3;
            tmp_called_instance_1 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_19, mod_consts[42]);

            if (tmp_called_instance_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[42]);

                    if (unlikely(tmp_called_instance_1 == NULL)) {
                        tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                    }

                    if (tmp_called_instance_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 20;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_name_3 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__1_name();

            frame_c60ee5a97a0faebff8f284d71b3deaac_2->m_frame.f_lineno = 20;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[61], tmp_args_element_name_3);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_19, mod_consts[63], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_4;
            tmp_called_instance_2 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_19, mod_consts[42]);

            if (tmp_called_instance_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[42]);

                    if (unlikely(tmp_called_instance_2 == NULL)) {
                        tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                    }

                    if (tmp_called_instance_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 26;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_instance_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_name_4 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__2_digest_size();

            frame_c60ee5a97a0faebff8f284d71b3deaac_2->m_frame.f_lineno = 26;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[61], tmp_args_element_name_4);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_19, mod_consts[66], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c60ee5a97a0faebff8f284d71b3deaac_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c60ee5a97a0faebff8f284d71b3deaac_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c60ee5a97a0faebff8f284d71b3deaac_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c60ee5a97a0faebff8f284d71b3deaac_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c60ee5a97a0faebff8f284d71b3deaac_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c60ee5a97a0faebff8f284d71b3deaac_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c60ee5a97a0faebff8f284d71b3deaac_2 == cache_frame_c60ee5a97a0faebff8f284d71b3deaac_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c60ee5a97a0faebff8f284d71b3deaac_2);
            cache_frame_c60ee5a97a0faebff8f284d71b3deaac_2 = NULL;
        }

        assertFrameObject(frame_c60ee5a97a0faebff8f284d71b3deaac_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = mod_consts[49];
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto try_except_handler_5;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_19, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[5];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_19;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 19;
            tmp_assign_source_22 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_22;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_args_element_name_2 = outline_0_var___class__;
        Py_INCREF(tmp_args_element_name_2);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_19);
        locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_19 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_19);
        locals_cryptography$hazmat$primitives$hashes$$$class__1_HashAlgorithm_19 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 19;
        goto try_except_handler_3;
        outline_result_1:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 18;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_21);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_23 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_arg_name_4;
        PyObject *tmp_dict_arg_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_4, tmp_key_name_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = mod_consts[50];
        tmp_metaclass_name_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_6;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_6;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_name_8 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = mod_consts[39];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_8, tmp_subscript_name_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_6;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_6;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_25 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_arg_name_6;
        tmp_key_name_6 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_6, tmp_key_name_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 34;

        goto try_except_handler_6;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_name_9;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_9 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_9, mod_consts[51]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_name_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_10 = tmp_class_creation_2__metaclass;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[51]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_6;
        }
        tmp_tuple_element_4 = mod_consts[69];
        tmp_args_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_4 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_name_3, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_name_3 = tmp_class_creation_2__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 34;
        tmp_assign_source_26 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_name_3);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_26;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_11;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_11 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_11, mod_consts[52]);
        tmp_operand_name_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_6;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_name_2 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[54];
        tmp_getattr_default_2 = mod_consts[55];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_6;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_name_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_name_12 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[54]);
            Py_DECREF(tmp_expression_name_12);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 34;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_27;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_element_name_6;
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[56]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 33;

            goto try_except_handler_6;
        }
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[57]);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 33;

            goto try_except_handler_6;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 33;
        tmp_called_name_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[69];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_8;
        }
        if (isFrameUnusable(cache_frame_1a913138e9ef62c5b52fac24622f5d9d_3)) {
            Py_XDECREF(cache_frame_1a913138e9ef62c5b52fac24622f5d9d_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_1a913138e9ef62c5b52fac24622f5d9d_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_1a913138e9ef62c5b52fac24622f5d9d_3 = MAKE_FUNCTION_FRAME(codeobj_1a913138e9ef62c5b52fac24622f5d9d, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_1a913138e9ef62c5b52fac24622f5d9d_3->m_type_description == NULL);
        frame_1a913138e9ef62c5b52fac24622f5d9d_3 = cache_frame_1a913138e9ef62c5b52fac24622f5d9d_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_1a913138e9ef62c5b52fac24622f5d9d_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_1a913138e9ef62c5b52fac24622f5d9d_3) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_7;
            tmp_called_instance_3 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34, mod_consts[42]);

            if (tmp_called_instance_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[42]);

                    if (unlikely(tmp_called_instance_3 == NULL)) {
                        tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                    }

                    if (tmp_called_instance_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 35;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_3);
                } else {
                    goto frame_exception_exit_3;
                }
            }



            tmp_args_element_name_7 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__3_algorithm();

            frame_1a913138e9ef62c5b52fac24622f5d9d_3->m_frame.f_lineno = 35;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[61], tmp_args_element_name_7);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_8;
            tmp_called_instance_4 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34, mod_consts[42]);

            if (tmp_called_instance_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[42]);

                    if (unlikely(tmp_called_instance_4 == NULL)) {
                        tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                    }

                    if (tmp_called_instance_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_4);
                } else {
                    goto frame_exception_exit_3;
                }
            }



            tmp_args_element_name_8 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__4_update();

            frame_1a913138e9ef62c5b52fac24622f5d9d_3->m_frame.f_lineno = 41;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[72], tmp_args_element_name_8);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_name_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_name_9;
            tmp_called_instance_5 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34, mod_consts[42]);

            if (tmp_called_instance_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[42]);

                    if (unlikely(tmp_called_instance_5 == NULL)) {
                        tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                    }

                    if (tmp_called_instance_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 47;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }



            tmp_args_element_name_9 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__5_finalize();

            frame_1a913138e9ef62c5b52fac24622f5d9d_3->m_frame.f_lineno = 47;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[72], tmp_args_element_name_9);
            Py_DECREF(tmp_called_instance_5);
            Py_DECREF(tmp_args_element_name_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34, mod_consts[21], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_name_10;
            tmp_called_instance_6 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34, mod_consts[42]);

            if (tmp_called_instance_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[42]);

                    if (unlikely(tmp_called_instance_6 == NULL)) {
                        tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
                    }

                    if (tmp_called_instance_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_called_instance_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }



            tmp_args_element_name_10 = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__6_copy();

            frame_1a913138e9ef62c5b52fac24622f5d9d_3->m_frame.f_lineno = 53;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[72], tmp_args_element_name_10);
            Py_DECREF(tmp_called_instance_6);
            Py_DECREF(tmp_args_element_name_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1a913138e9ef62c5b52fac24622f5d9d_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1a913138e9ef62c5b52fac24622f5d9d_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1a913138e9ef62c5b52fac24622f5d9d_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1a913138e9ef62c5b52fac24622f5d9d_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1a913138e9ef62c5b52fac24622f5d9d_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1a913138e9ef62c5b52fac24622f5d9d_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_1a913138e9ef62c5b52fac24622f5d9d_3 == cache_frame_1a913138e9ef62c5b52fac24622f5d9d_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_1a913138e9ef62c5b52fac24622f5d9d_3);
            cache_frame_1a913138e9ef62c5b52fac24622f5d9d_3 = NULL;
        }

        assertFrameObject(frame_1a913138e9ef62c5b52fac24622f5d9d_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            tmp_compexpr_right_2 = mod_consts[49];
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            assert(tmp_condition_result_12 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_8:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_8;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_8 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = mod_consts[69];
            tmp_args_name_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_4, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_name_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34;
            PyTuple_SET_ITEM0(tmp_args_name_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 34;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_name_8, tmp_args_name_4, tmp_kwargs_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_args_element_name_6 = outline_1_var___class__;
        Py_INCREF(tmp_args_element_name_6);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34);
        locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34);
        locals_cryptography$hazmat$primitives$hashes$$$class__2_HashContext_34 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 34;
        goto try_except_handler_6;
        outline_result_2:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 33;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_28);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_dircall_arg1_3;
        tmp_dircall_arg1_3 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_30 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_arg_name_7;
        PyObject *tmp_dict_arg_name_8;
        PyObject *tmp_key_name_8;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_7, tmp_key_name_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = mod_consts[50];
        tmp_metaclass_name_3 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_8, tmp_key_name_8);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_9;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_9;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_name_15 = tmp_class_creation_3__bases;
        tmp_subscript_name_3 = mod_consts[39];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_15, tmp_subscript_name_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_9;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_9;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_3);
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_32 = SELECT_METACLASS(tmp_metaclass_name_3, tmp_bases_name_3);
        Py_DECREF(tmp_metaclass_name_3);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_arg_name_9;
        tmp_key_name_9 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_9, tmp_key_name_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 61;

        goto try_except_handler_9;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_expression_name_16;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_16 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_16, mod_consts[51]);
        tmp_condition_result_16 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_name_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_17 = tmp_class_creation_3__metaclass;
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[51]);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_9;
        }
        tmp_tuple_element_7 = mod_consts[79];
        tmp_args_name_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_5, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_7 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_name_5, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_name_5 = tmp_class_creation_3__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 61;
        tmp_assign_source_33 = CALL_FUNCTION(tmp_called_name_9, tmp_args_name_5, tmp_kwargs_name_5);
        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_name_5);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_expression_name_18;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_name_18 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_18, mod_consts[52]);
        tmp_operand_name_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_9;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_left_name_3 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[54];
        tmp_getattr_default_3 = mod_consts[55];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_9;
        }
        tmp_right_name_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_19;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_name_19 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_name_19 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[54]);
            Py_DECREF(tmp_expression_name_19);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_right_name_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 61;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_34;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_10;
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_args_element_name_12;
        tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_name_20 == NULL)) {
            tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_9;
        }
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[56]);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_9;
        }
        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_21 == NULL)) {
            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 60;

            goto try_except_handler_9;
        }
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[57]);
        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 60;

            goto try_except_handler_9;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 60;
        tmp_called_name_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_11);
        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_9;
        }
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_61 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_61, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[80];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_61, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_61, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_11;
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_compexpr_left_3 = tmp_class_creation_3__bases;
            tmp_compexpr_right_3 = mod_consts[49];
            tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
            assert(tmp_condition_result_18 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_12:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_61, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_11;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_name_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_name_12 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_9 = mod_consts[79];
            tmp_args_name_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_6, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_name_6, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_61;
            PyTuple_SET_ITEM0(tmp_args_name_6, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 61;
            tmp_assign_source_36 = CALL_FUNCTION(tmp_called_name_12, tmp_args_name_6, tmp_kwargs_name_6);
            Py_DECREF(tmp_args_name_6);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_args_element_name_12 = outline_2_var___class__;
        Py_INCREF(tmp_args_element_name_12);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_61);
        locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_61 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_61);
        locals_cryptography$hazmat$primitives$hashes$$$class__3_ExtendableOutputFunction_61 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 61;
        goto try_except_handler_9;
        outline_result_3:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 60;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_12);
        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_35);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_dircall_arg1_4;
        tmp_dircall_arg1_4 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_37 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = PyDict_New();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_arg_name_10;
        PyObject *tmp_dict_arg_name_11;
        PyObject *tmp_key_name_11;
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_10, tmp_key_name_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = mod_consts[50];
        tmp_metaclass_name_4 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_11, tmp_key_name_11);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_12;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_12;
        }
        tmp_condition_result_20 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_name_22 = tmp_class_creation_4__bases;
        tmp_subscript_name_4 = mod_consts[39];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_22, tmp_subscript_name_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_12;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_12;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_4);
        condexpr_end_8:;
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_name_4 = tmp_class_creation_4__bases;
        tmp_assign_source_39 = SELECT_METACLASS(tmp_metaclass_name_4, tmp_bases_name_4);
        Py_DECREF(tmp_metaclass_name_4);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_arg_name_12;
        tmp_key_name_12 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_12, tmp_key_name_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 68;

        goto try_except_handler_12;
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_name_23;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_name_23 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_23, mod_consts[51]);
        tmp_condition_result_22 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_args_name_7;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_name_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_name_24 = tmp_class_creation_4__metaclass;
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[51]);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_12;
        }
        tmp_tuple_element_10 = mod_consts[18];
        tmp_args_name_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_7, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_10 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_name_7, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_name_7 = tmp_class_creation_4__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 68;
        tmp_assign_source_40 = CALL_FUNCTION(tmp_called_name_13, tmp_args_name_7, tmp_kwargs_name_7);
        Py_DECREF(tmp_called_name_13);
        Py_DECREF(tmp_args_name_7);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_40;
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_expression_name_25;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_name_25 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_25, mod_consts[52]);
        tmp_operand_name_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_12;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_left_name_4 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[54];
        tmp_getattr_default_4 = mod_consts[55];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_12;
        }
        tmp_right_name_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_26;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_right_name_4, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_name_26 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_name_26 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[54]);
            Py_DECREF(tmp_expression_name_26);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_right_name_4, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_right_name_4);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_12;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 68;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_12;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = PyDict_New();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_41;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_14;
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_27 == NULL)) {
            tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_12;
        }
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[81]);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_12;
        }
        tmp_args_element_name_13 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_args_element_name_13 == NULL)) {
            tmp_args_element_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 67;

            goto try_except_handler_12;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 67;
        tmp_called_name_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_13);
        Py_DECREF(tmp_called_name_15);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_12;
        }
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__4_Hash_68 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_Hash_68, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[18];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_Hash_68, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_14;
        }
        if (isFrameUnusable(cache_frame_c330adaec87028f2b6c62786bd20c873_4)) {
            Py_XDECREF(cache_frame_c330adaec87028f2b6c62786bd20c873_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c330adaec87028f2b6c62786bd20c873_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c330adaec87028f2b6c62786bd20c873_4 = MAKE_FUNCTION_FRAME(codeobj_c330adaec87028f2b6c62786bd20c873, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c330adaec87028f2b6c62786bd20c873_4->m_type_description == NULL);
        frame_c330adaec87028f2b6c62786bd20c873_4 = cache_frame_c330adaec87028f2b6c62786bd20c873_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c330adaec87028f2b6c62786bd20c873_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c330adaec87028f2b6c62786bd20c873_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[82];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__7___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_Hash_68, mod_consts[83], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_7;
            tmp_called_instance_7 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_Hash_68, mod_consts[14]);

            if (tmp_called_instance_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_7 == NULL)) {
                        tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                    }

                    if (tmp_called_instance_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 87;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_called_instance_7);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            frame_c330adaec87028f2b6c62786bd20c873_4->m_frame.f_lineno = 87;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_7,
                mod_consts[85],
                PyTuple_GET_ITEM(mod_consts[86], 0)
            );

            Py_DECREF(tmp_called_instance_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_Hash_68, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__8_update();

        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_Hash_68, mod_consts[17], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__9_copy();

        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_Hash_68, mod_consts[19], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__10_finalize();

        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_Hash_68, mod_consts[21], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c330adaec87028f2b6c62786bd20c873_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c330adaec87028f2b6c62786bd20c873_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c330adaec87028f2b6c62786bd20c873_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c330adaec87028f2b6c62786bd20c873_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c330adaec87028f2b6c62786bd20c873_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c330adaec87028f2b6c62786bd20c873_4,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c330adaec87028f2b6c62786bd20c873_4 == cache_frame_c330adaec87028f2b6c62786bd20c873_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c330adaec87028f2b6c62786bd20c873_4);
            cache_frame_c330adaec87028f2b6c62786bd20c873_4 = NULL;
        }

        assertFrameObject(frame_c330adaec87028f2b6c62786bd20c873_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_14;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_compexpr_left_4 = tmp_class_creation_4__bases;
            tmp_compexpr_right_4 = mod_consts[49];
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_4, tmp_compexpr_right_4);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto try_except_handler_14;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
            assert(tmp_condition_result_24 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_16:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__4_Hash_68, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_14;
        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_name_16;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_name_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_name_16 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_12 = mod_consts[18];
            tmp_args_name_8 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_8, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_12 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_name_8, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_cryptography$hazmat$primitives$hashes$$$class__4_Hash_68;
            PyTuple_SET_ITEM0(tmp_args_name_8, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 68;
            tmp_assign_source_43 = CALL_FUNCTION(tmp_called_name_16, tmp_args_name_8, tmp_kwargs_name_8);
            Py_DECREF(tmp_args_name_8);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto try_except_handler_14;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_args_element_name_14 = outline_3_var___class__;
        Py_INCREF(tmp_args_element_name_14);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__4_Hash_68);
        locals_cryptography$hazmat$primitives$hashes$$$class__4_Hash_68 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__4_Hash_68);
        locals_cryptography$hazmat$primitives$hashes$$$class__4_Hash_68 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 68;
        goto try_except_handler_12;
        outline_result_4:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 67;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_42);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dircall_arg1_5;
        tmp_dircall_arg1_5 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_44 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = PyDict_New();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_metaclass_name_5;
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_arg_name_13;
        PyObject *tmp_dict_arg_name_14;
        PyObject *tmp_key_name_14;
        nuitka_bool tmp_condition_result_26;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_bases_name_5;
        tmp_key_name_13 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_name_13 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_13, tmp_key_name_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_name_14 = tmp_class_creation_5__class_decl_dict;
        tmp_key_name_14 = mod_consts[50];
        tmp_metaclass_name_5 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_14, tmp_key_name_14);
        if (tmp_metaclass_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_15;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_15;
        }
        tmp_condition_result_26 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_name_28 = tmp_class_creation_5__bases;
        tmp_subscript_name_5 = mod_consts[39];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_28, tmp_subscript_name_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_15;
        }
        tmp_metaclass_name_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_15;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_name_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_5);
        condexpr_end_10:;
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_name_5 = tmp_class_creation_5__bases;
        tmp_assign_source_46 = SELECT_METACLASS(tmp_metaclass_name_5, tmp_bases_name_5);
        Py_DECREF(tmp_metaclass_name_5);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_arg_name_15;
        tmp_key_name_15 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_name_15 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_15, tmp_key_name_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_27 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 111;

        goto try_except_handler_15;
    }
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_expression_name_29;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_name_29 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_29, mod_consts[51]);
        tmp_condition_result_28 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_30;
        PyObject *tmp_args_name_9;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_name_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_name_30 = tmp_class_creation_5__metaclass;
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[51]);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_15;
        }
        tmp_tuple_element_13 = mod_consts[90];
        tmp_args_name_9 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_9, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_13 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_name_9, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_name_9 = tmp_class_creation_5__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 111;
        tmp_assign_source_47 = CALL_FUNCTION(tmp_called_name_17, tmp_args_name_9, tmp_kwargs_name_9);
        Py_DECREF(tmp_called_name_17);
        Py_DECREF(tmp_args_name_9);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_expression_name_31;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_name_31 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_31, mod_consts[52]);
        tmp_operand_name_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_15;
        }
        tmp_condition_result_29 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_left_name_5 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_5 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_5 = mod_consts[54];
        tmp_getattr_default_5 = mod_consts[55];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_15;
        }
        tmp_right_name_5 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_32;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_right_name_5, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_name_32 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_name_32 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[54]);
            Py_DECREF(tmp_expression_name_32);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_right_name_5, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_right_name_5);
        goto try_except_handler_15;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_right_name_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_15;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 111;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_15;
    }
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = PyDict_New();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_48;
    }
    branch_end_18:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_name_18;
        PyObject *tmp_called_name_19;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        tmp_expression_name_33 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_33 == NULL)) {
            tmp_expression_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_15;
        }
        tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[81]);
        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_15;
        }
        tmp_args_element_name_15 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_15 == NULL)) {
            tmp_args_element_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 110;

            goto try_except_handler_15;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 110;
        tmp_called_name_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_19);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_15;
        }
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA1_111 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA1_111, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[90];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA1_111, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_17;
        }
        if (isFrameUnusable(cache_frame_c556cb0a2666df15b6cb73c8507a1a3f_5)) {
            Py_XDECREF(cache_frame_c556cb0a2666df15b6cb73c8507a1a3f_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c556cb0a2666df15b6cb73c8507a1a3f_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c556cb0a2666df15b6cb73c8507a1a3f_5 = MAKE_FUNCTION_FRAME(codeobj_c556cb0a2666df15b6cb73c8507a1a3f, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c556cb0a2666df15b6cb73c8507a1a3f_5->m_type_description == NULL);
        frame_c556cb0a2666df15b6cb73c8507a1a3f_5 = cache_frame_c556cb0a2666df15b6cb73c8507a1a3f_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c556cb0a2666df15b6cb73c8507a1a3f_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c556cb0a2666df15b6cb73c8507a1a3f_5) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[91];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA1_111, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA1_111, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA1_111, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c556cb0a2666df15b6cb73c8507a1a3f_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c556cb0a2666df15b6cb73c8507a1a3f_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c556cb0a2666df15b6cb73c8507a1a3f_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c556cb0a2666df15b6cb73c8507a1a3f_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c556cb0a2666df15b6cb73c8507a1a3f_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c556cb0a2666df15b6cb73c8507a1a3f_5,
            type_description_2,
            outline_4_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c556cb0a2666df15b6cb73c8507a1a3f_5 == cache_frame_c556cb0a2666df15b6cb73c8507a1a3f_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c556cb0a2666df15b6cb73c8507a1a3f_5);
            cache_frame_c556cb0a2666df15b6cb73c8507a1a3f_5 = NULL;
        }

        assertFrameObject(frame_c556cb0a2666df15b6cb73c8507a1a3f_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_17;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_compexpr_left_5 = tmp_class_creation_5__bases;
            tmp_compexpr_right_5 = mod_consts[49];
            tmp_condition_result_30 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_5, tmp_compexpr_right_5);
            if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto try_except_handler_17;
            }
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
            assert(tmp_condition_result_30 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_20:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA1_111, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto try_except_handler_17;
        }
        branch_no_20:;
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_name_20;
            PyObject *tmp_args_name_10;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_name_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_name_20 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_15 = mod_consts[90];
            tmp_args_name_10 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_10, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_15 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_name_10, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA1_111;
            PyTuple_SET_ITEM0(tmp_args_name_10, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_name_10 = tmp_class_creation_5__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 111;
            tmp_assign_source_50 = CALL_FUNCTION(tmp_called_name_20, tmp_args_name_10, tmp_kwargs_name_10);
            Py_DECREF(tmp_args_name_10);
            if (tmp_assign_source_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto try_except_handler_17;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_args_element_name_16 = outline_4_var___class__;
        Py_INCREF(tmp_args_element_name_16);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA1_111);
        locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA1_111 = NULL;
        goto try_return_handler_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA1_111);
        locals_cryptography$hazmat$primitives$hashes$$$class__5_SHA1_111 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 111;
        goto try_except_handler_15;
        outline_result_5:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 110;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_16);
        Py_DECREF(tmp_called_name_18);
        Py_DECREF(tmp_args_element_name_16);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_49);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_dircall_arg1_6;
        tmp_dircall_arg1_6 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_51 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = PyDict_New();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_metaclass_name_6;
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_key_name_16;
        PyObject *tmp_dict_arg_name_16;
        PyObject *tmp_dict_arg_name_17;
        PyObject *tmp_key_name_17;
        nuitka_bool tmp_condition_result_32;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_bases_name_6;
        tmp_key_name_16 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_name_16 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_16, tmp_key_name_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_name_17 = tmp_class_creation_6__class_decl_dict;
        tmp_key_name_17 = mod_consts[50];
        tmp_metaclass_name_6 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_17, tmp_key_name_17);
        if (tmp_metaclass_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_18;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_18;
        }
        tmp_condition_result_32 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_name_34 = tmp_class_creation_6__bases;
        tmp_subscript_name_6 = mod_consts[39];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_34, tmp_subscript_name_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_18;
        }
        tmp_metaclass_name_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_18;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_name_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_6);
        condexpr_end_12:;
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_name_6 = tmp_class_creation_6__bases;
        tmp_assign_source_53 = SELECT_METACLASS(tmp_metaclass_name_6, tmp_bases_name_6);
        Py_DECREF(tmp_metaclass_name_6);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_53;
    }
    {
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_key_name_18;
        PyObject *tmp_dict_arg_name_18;
        tmp_key_name_18 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_dict_arg_name_18 = tmp_class_creation_6__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_18, tmp_key_name_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_33 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 118;

        goto try_except_handler_18;
    }
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_expression_name_35;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_name_35 = tmp_class_creation_6__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_35, mod_consts[51]);
        tmp_condition_result_34 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_36;
        PyObject *tmp_args_name_11;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kwargs_name_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_name_36 = tmp_class_creation_6__metaclass;
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[51]);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_18;
        }
        tmp_tuple_element_16 = mod_consts[94];
        tmp_args_name_11 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_11, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_16 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_name_11, 1, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_name_11 = tmp_class_creation_6__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 118;
        tmp_assign_source_54 = CALL_FUNCTION(tmp_called_name_21, tmp_args_name_11, tmp_kwargs_name_11);
        Py_DECREF(tmp_called_name_21);
        Py_DECREF(tmp_args_name_11);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_35;
        PyObject *tmp_operand_name_6;
        PyObject *tmp_expression_name_37;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_name_37 = tmp_class_creation_6__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_37, mod_consts[52]);
        tmp_operand_name_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_18;
        }
        tmp_condition_result_35 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_getattr_default_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_left_name_6 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_getattr_target_6 = tmp_class_creation_6__metaclass;
        tmp_getattr_attr_6 = mod_consts[54];
        tmp_getattr_default_6 = mod_consts[55];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_18;
        }
        tmp_right_name_6 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_38;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_right_name_6, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_name_38 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_name_38 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[54]);
            Py_DECREF(tmp_expression_name_38);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_right_name_6, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_right_name_6);
        goto try_except_handler_18;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_right_name_6);
        if (tmp_raise_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_18;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 118;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_18;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = PyDict_New();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_55;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_name_22;
        PyObject *tmp_called_name_23;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_args_element_name_18;
        tmp_expression_name_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_39 == NULL)) {
            tmp_expression_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_18;
        }
        tmp_called_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[81]);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_18;
        }
        tmp_args_element_name_17 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_17 == NULL)) {
            tmp_args_element_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 117;

            goto try_except_handler_18;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 117;
        tmp_called_name_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_17);
        Py_DECREF(tmp_called_name_23);
        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_18;
        }
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_224_118 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_224_118, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_20;
        }
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_224_118, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_20;
        }
        if (isFrameUnusable(cache_frame_39f400effa61a0e0c4dff5990d9f0a3e_6)) {
            Py_XDECREF(cache_frame_39f400effa61a0e0c4dff5990d9f0a3e_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_39f400effa61a0e0c4dff5990d9f0a3e_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_39f400effa61a0e0c4dff5990d9f0a3e_6 = MAKE_FUNCTION_FRAME(codeobj_39f400effa61a0e0c4dff5990d9f0a3e, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_39f400effa61a0e0c4dff5990d9f0a3e_6->m_type_description == NULL);
        frame_39f400effa61a0e0c4dff5990d9f0a3e_6 = cache_frame_39f400effa61a0e0c4dff5990d9f0a3e_6;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_39f400effa61a0e0c4dff5990d9f0a3e_6);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_39f400effa61a0e0c4dff5990d9f0a3e_6) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[95];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_224_118, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = mod_consts[96];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_224_118, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_224_118, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_39f400effa61a0e0c4dff5990d9f0a3e_6);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;

        frame_exception_exit_6:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_39f400effa61a0e0c4dff5990d9f0a3e_6);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_39f400effa61a0e0c4dff5990d9f0a3e_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_39f400effa61a0e0c4dff5990d9f0a3e_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_39f400effa61a0e0c4dff5990d9f0a3e_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_39f400effa61a0e0c4dff5990d9f0a3e_6,
            type_description_2,
            outline_5_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_39f400effa61a0e0c4dff5990d9f0a3e_6 == cache_frame_39f400effa61a0e0c4dff5990d9f0a3e_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_39f400effa61a0e0c4dff5990d9f0a3e_6);
            cache_frame_39f400effa61a0e0c4dff5990d9f0a3e_6 = NULL;
        }

        assertFrameObject(frame_39f400effa61a0e0c4dff5990d9f0a3e_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;

        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_20;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_compexpr_left_6 = tmp_class_creation_6__bases;
            tmp_compexpr_right_6 = mod_consts[49];
            tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_6, tmp_compexpr_right_6);
            if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto try_except_handler_20;
            }
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
            assert(tmp_condition_result_36 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_24:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_224_118, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_20;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_called_name_24;
            PyObject *tmp_args_name_12;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_name_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_name_24 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_18 = mod_consts[94];
            tmp_args_name_12 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_12, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_18 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_name_12, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_224_118;
            PyTuple_SET_ITEM0(tmp_args_name_12, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_name_12 = tmp_class_creation_6__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 118;
            tmp_assign_source_57 = CALL_FUNCTION(tmp_called_name_24, tmp_args_name_12, tmp_kwargs_name_12);
            Py_DECREF(tmp_args_name_12);
            if (tmp_assign_source_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto try_except_handler_20;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_57;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_args_element_name_18 = outline_5_var___class__;
        Py_INCREF(tmp_args_element_name_18);
        goto try_return_handler_20;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_224_118);
        locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_224_118 = NULL;
        goto try_return_handler_19;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_224_118);
        locals_cryptography$hazmat$primitives$hashes$$$class__6_SHA512_224_118 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 118;
        goto try_except_handler_18;
        outline_result_6:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 117;
        tmp_assign_source_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, tmp_args_element_name_18);
        Py_DECREF(tmp_called_name_22);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_56);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_dircall_arg1_7;
        tmp_dircall_arg1_7 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_58 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = PyDict_New();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_metaclass_name_7;
        nuitka_bool tmp_condition_result_37;
        PyObject *tmp_key_name_19;
        PyObject *tmp_dict_arg_name_19;
        PyObject *tmp_dict_arg_name_20;
        PyObject *tmp_key_name_20;
        nuitka_bool tmp_condition_result_38;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_name_40;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_bases_name_7;
        tmp_key_name_19 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_name_19 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_19, tmp_key_name_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_37 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_name_20 = tmp_class_creation_7__class_decl_dict;
        tmp_key_name_20 = mod_consts[50];
        tmp_metaclass_name_7 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_20, tmp_key_name_20);
        if (tmp_metaclass_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_21;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_21;
        }
        tmp_condition_result_38 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_name_40 = tmp_class_creation_7__bases;
        tmp_subscript_name_7 = mod_consts[39];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_40, tmp_subscript_name_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_21;
        }
        tmp_metaclass_name_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_21;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_name_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_7);
        condexpr_end_14:;
        condexpr_end_13:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_name_7 = tmp_class_creation_7__bases;
        tmp_assign_source_60 = SELECT_METACLASS(tmp_metaclass_name_7, tmp_bases_name_7);
        Py_DECREF(tmp_metaclass_name_7);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_60;
    }
    {
        nuitka_bool tmp_condition_result_39;
        PyObject *tmp_key_name_21;
        PyObject *tmp_dict_arg_name_21;
        tmp_key_name_21 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_dict_arg_name_21 = tmp_class_creation_7__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_21, tmp_key_name_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 125;

        goto try_except_handler_21;
    }
    branch_no_25:;
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_expression_name_41;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_name_41 = tmp_class_creation_7__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_41, mod_consts[51]);
        tmp_condition_result_40 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_name_25;
        PyObject *tmp_expression_name_42;
        PyObject *tmp_args_name_13;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_kwargs_name_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_name_42 = tmp_class_creation_7__metaclass;
        tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_42, mod_consts[51]);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_21;
        }
        tmp_tuple_element_19 = mod_consts[98];
        tmp_args_name_13 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_13, 0, tmp_tuple_element_19);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_19 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_name_13, 1, tmp_tuple_element_19);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_name_13 = tmp_class_creation_7__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 125;
        tmp_assign_source_61 = CALL_FUNCTION(tmp_called_name_25, tmp_args_name_13, tmp_kwargs_name_13);
        Py_DECREF(tmp_called_name_25);
        Py_DECREF(tmp_args_name_13);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_21;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_61;
    }
    {
        nuitka_bool tmp_condition_result_41;
        PyObject *tmp_operand_name_7;
        PyObject *tmp_expression_name_43;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_name_43 = tmp_class_creation_7__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_43, mod_consts[52]);
        tmp_operand_name_7 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_21;
        }
        tmp_condition_result_41 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_getattr_default_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_left_name_7 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_getattr_target_7 = tmp_class_creation_7__metaclass;
        tmp_getattr_attr_7 = mod_consts[54];
        tmp_getattr_default_7 = mod_consts[55];
        tmp_tuple_element_20 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
        if (tmp_tuple_element_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_21;
        }
        tmp_right_name_7 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_44;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_right_name_7, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_name_44 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_name_44 == NULL));
            tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_44, mod_consts[54]);
            Py_DECREF(tmp_expression_name_44);
            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_right_name_7, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_right_name_7);
        goto try_except_handler_21;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_7, tmp_right_name_7);
        Py_DECREF(tmp_right_name_7);
        if (tmp_raise_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_21;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 125;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_21;
    }
    branch_no_27:;
    goto branch_end_26;
    branch_no_26:;
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = PyDict_New();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_62;
    }
    branch_end_26:;
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_name_26;
        PyObject *tmp_called_name_27;
        PyObject *tmp_expression_name_45;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        tmp_expression_name_45 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_45 == NULL)) {
            tmp_expression_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_21;
        }
        tmp_called_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_45, mod_consts[81]);
        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_21;
        }
        tmp_args_element_name_19 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_19 == NULL)) {
            tmp_args_element_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_27);

            exception_lineno = 124;

            goto try_except_handler_21;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 124;
        tmp_called_name_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, tmp_args_element_name_19);
        Py_DECREF(tmp_called_name_27);
        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_21;
        }
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA512_256_125 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA512_256_125, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_23;
        }
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA512_256_125, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_23;
        }
        if (isFrameUnusable(cache_frame_cbcdaa4d7f010d93c553389b0413ef7f_7)) {
            Py_XDECREF(cache_frame_cbcdaa4d7f010d93c553389b0413ef7f_7);

#if _DEBUG_REFCOUNTS
            if (cache_frame_cbcdaa4d7f010d93c553389b0413ef7f_7 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_cbcdaa4d7f010d93c553389b0413ef7f_7 = MAKE_FUNCTION_FRAME(codeobj_cbcdaa4d7f010d93c553389b0413ef7f, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_cbcdaa4d7f010d93c553389b0413ef7f_7->m_type_description == NULL);
        frame_cbcdaa4d7f010d93c553389b0413ef7f_7 = cache_frame_cbcdaa4d7f010d93c553389b0413ef7f_7;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_cbcdaa4d7f010d93c553389b0413ef7f_7);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_cbcdaa4d7f010d93c553389b0413ef7f_7) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA512_256_125, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA512_256_125, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA512_256_125, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_cbcdaa4d7f010d93c553389b0413ef7f_7);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;

        frame_exception_exit_7:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_cbcdaa4d7f010d93c553389b0413ef7f_7);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cbcdaa4d7f010d93c553389b0413ef7f_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cbcdaa4d7f010d93c553389b0413ef7f_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cbcdaa4d7f010d93c553389b0413ef7f_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cbcdaa4d7f010d93c553389b0413ef7f_7,
            type_description_2,
            outline_6_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_cbcdaa4d7f010d93c553389b0413ef7f_7 == cache_frame_cbcdaa4d7f010d93c553389b0413ef7f_7) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_cbcdaa4d7f010d93c553389b0413ef7f_7);
            cache_frame_cbcdaa4d7f010d93c553389b0413ef7f_7 = NULL;
        }

        assertFrameObject(frame_cbcdaa4d7f010d93c553389b0413ef7f_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;

        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_23;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_42;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_compexpr_left_7 = tmp_class_creation_7__bases;
            tmp_compexpr_right_7 = mod_consts[49];
            tmp_condition_result_42 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_7, tmp_compexpr_right_7);
            if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto try_except_handler_23;
            }
            if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
                goto branch_yes_28;
            } else {
                goto branch_no_28;
            }
            assert(tmp_condition_result_42 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_28:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA512_256_125, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto try_except_handler_23;
        }
        branch_no_28:;
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_called_name_28;
            PyObject *tmp_args_name_14;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_name_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_name_28 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_21 = mod_consts[98];
            tmp_args_name_14 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_14, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_21 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_name_14, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA512_256_125;
            PyTuple_SET_ITEM0(tmp_args_name_14, 2, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_name_14 = tmp_class_creation_7__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 125;
            tmp_assign_source_64 = CALL_FUNCTION(tmp_called_name_28, tmp_args_name_14, tmp_kwargs_name_14);
            Py_DECREF(tmp_args_name_14);
            if (tmp_assign_source_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto try_except_handler_23;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_64;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_args_element_name_20 = outline_6_var___class__;
        Py_INCREF(tmp_args_element_name_20);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA512_256_125);
        locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA512_256_125 = NULL;
        goto try_return_handler_22;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA512_256_125);
        locals_cryptography$hazmat$primitives$hashes$$$class__7_SHA512_256_125 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 125;
        goto try_except_handler_21;
        outline_result_7:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 124;
        tmp_assign_source_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_26, tmp_args_element_name_20);
        Py_DECREF(tmp_called_name_26);
        Py_DECREF(tmp_args_element_name_20);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_63);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_dircall_arg1_8;
        tmp_dircall_arg1_8 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_65 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = PyDict_New();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_metaclass_name_8;
        nuitka_bool tmp_condition_result_43;
        PyObject *tmp_key_name_22;
        PyObject *tmp_dict_arg_name_22;
        PyObject *tmp_dict_arg_name_23;
        PyObject *tmp_key_name_23;
        nuitka_bool tmp_condition_result_44;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_name_46;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_bases_name_8;
        tmp_key_name_22 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_name_22 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_22, tmp_key_name_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_43 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_name_23 = tmp_class_creation_8__class_decl_dict;
        tmp_key_name_23 = mod_consts[50];
        tmp_metaclass_name_8 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_23, tmp_key_name_23);
        if (tmp_metaclass_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_24;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_24;
        }
        tmp_condition_result_44 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_16;
        } else {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_name_46 = tmp_class_creation_8__bases;
        tmp_subscript_name_8 = mod_consts[39];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_46, tmp_subscript_name_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_24;
        }
        tmp_metaclass_name_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_24;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_name_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_8);
        condexpr_end_16:;
        condexpr_end_15:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_name_8 = tmp_class_creation_8__bases;
        tmp_assign_source_67 = SELECT_METACLASS(tmp_metaclass_name_8, tmp_bases_name_8);
        Py_DECREF(tmp_metaclass_name_8);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_67;
    }
    {
        nuitka_bool tmp_condition_result_45;
        PyObject *tmp_key_name_24;
        PyObject *tmp_dict_arg_name_24;
        tmp_key_name_24 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_dict_arg_name_24 = tmp_class_creation_8__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_24, tmp_key_name_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_45 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 132;

        goto try_except_handler_24;
    }
    branch_no_29:;
    {
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_expression_name_47;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_name_47 = tmp_class_creation_8__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_47, mod_consts[51]);
        tmp_condition_result_46 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_name_29;
        PyObject *tmp_expression_name_48;
        PyObject *tmp_args_name_15;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_kwargs_name_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_name_48 = tmp_class_creation_8__metaclass;
        tmp_called_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_48, mod_consts[51]);
        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_24;
        }
        tmp_tuple_element_22 = mod_consts[100];
        tmp_args_name_15 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_15, 0, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_22 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_name_15, 1, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_name_15 = tmp_class_creation_8__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 132;
        tmp_assign_source_68 = CALL_FUNCTION(tmp_called_name_29, tmp_args_name_15, tmp_kwargs_name_15);
        Py_DECREF(tmp_called_name_29);
        Py_DECREF(tmp_args_name_15);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_68;
    }
    {
        nuitka_bool tmp_condition_result_47;
        PyObject *tmp_operand_name_8;
        PyObject *tmp_expression_name_49;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_name_49 = tmp_class_creation_8__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_49, mod_consts[52]);
        tmp_operand_name_8 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_24;
        }
        tmp_condition_result_47 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_left_name_8 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_8__metaclass;
        tmp_getattr_attr_8 = mod_consts[54];
        tmp_getattr_default_8 = mod_consts[55];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_24;
        }
        tmp_right_name_8 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_50;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_right_name_8, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_name_50 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_name_50 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_50, mod_consts[54]);
            Py_DECREF(tmp_expression_name_50);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_right_name_8, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_right_name_8);
        goto try_except_handler_24;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_8, tmp_right_name_8);
        Py_DECREF(tmp_right_name_8);
        if (tmp_raise_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_24;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 132;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_24;
    }
    branch_no_31:;
    goto branch_end_30;
    branch_no_30:;
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = PyDict_New();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_69;
    }
    branch_end_30:;
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_called_name_30;
        PyObject *tmp_called_name_31;
        PyObject *tmp_expression_name_51;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        tmp_expression_name_51 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_51 == NULL)) {
            tmp_expression_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_24;
        }
        tmp_called_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_51, mod_consts[81]);
        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_24;
        }
        tmp_args_element_name_21 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_21 == NULL)) {
            tmp_args_element_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_31);

            exception_lineno = 131;

            goto try_except_handler_24;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 131;
        tmp_called_name_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_31, tmp_args_element_name_21);
        Py_DECREF(tmp_called_name_31);
        if (tmp_called_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_24;
        }
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA224_132 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA224_132, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_26;
        }
        tmp_dictset_value = mod_consts[100];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA224_132, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_26;
        }
        if (isFrameUnusable(cache_frame_3afe157606f8938dcf40bdccdf1fb1b3_8)) {
            Py_XDECREF(cache_frame_3afe157606f8938dcf40bdccdf1fb1b3_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3afe157606f8938dcf40bdccdf1fb1b3_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3afe157606f8938dcf40bdccdf1fb1b3_8 = MAKE_FUNCTION_FRAME(codeobj_3afe157606f8938dcf40bdccdf1fb1b3, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_3afe157606f8938dcf40bdccdf1fb1b3_8->m_type_description == NULL);
        frame_3afe157606f8938dcf40bdccdf1fb1b3_8 = cache_frame_3afe157606f8938dcf40bdccdf1fb1b3_8;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_3afe157606f8938dcf40bdccdf1fb1b3_8);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_3afe157606f8938dcf40bdccdf1fb1b3_8) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[101];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA224_132, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }
        tmp_dictset_value = mod_consts[96];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA224_132, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA224_132, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3afe157606f8938dcf40bdccdf1fb1b3_8);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;

        frame_exception_exit_8:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3afe157606f8938dcf40bdccdf1fb1b3_8);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3afe157606f8938dcf40bdccdf1fb1b3_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3afe157606f8938dcf40bdccdf1fb1b3_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3afe157606f8938dcf40bdccdf1fb1b3_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3afe157606f8938dcf40bdccdf1fb1b3_8,
            type_description_2,
            outline_7_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_3afe157606f8938dcf40bdccdf1fb1b3_8 == cache_frame_3afe157606f8938dcf40bdccdf1fb1b3_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_3afe157606f8938dcf40bdccdf1fb1b3_8);
            cache_frame_3afe157606f8938dcf40bdccdf1fb1b3_8 = NULL;
        }

        assertFrameObject(frame_3afe157606f8938dcf40bdccdf1fb1b3_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;

        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_26;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_48;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_compexpr_left_8 = tmp_class_creation_8__bases;
            tmp_compexpr_right_8 = mod_consts[49];
            tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_8, tmp_compexpr_right_8);
            if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto try_except_handler_26;
            }
            if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
                goto branch_yes_32;
            } else {
                goto branch_no_32;
            }
            assert(tmp_condition_result_48 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_32:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA224_132, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto try_except_handler_26;
        }
        branch_no_32:;
        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_called_name_32;
            PyObject *tmp_args_name_16;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_name_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_name_32 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_24 = mod_consts[100];
            tmp_args_name_16 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_16, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_24 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_name_16, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA224_132;
            PyTuple_SET_ITEM0(tmp_args_name_16, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_name_16 = tmp_class_creation_8__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 132;
            tmp_assign_source_71 = CALL_FUNCTION(tmp_called_name_32, tmp_args_name_16, tmp_kwargs_name_16);
            Py_DECREF(tmp_args_name_16);
            if (tmp_assign_source_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto try_except_handler_26;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_71;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_args_element_name_22 = outline_7_var___class__;
        Py_INCREF(tmp_args_element_name_22);
        goto try_return_handler_26;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA224_132);
        locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA224_132 = NULL;
        goto try_return_handler_25;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA224_132);
        locals_cryptography$hazmat$primitives$hashes$$$class__8_SHA224_132 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto try_except_handler_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 132;
        goto try_except_handler_24;
        outline_result_8:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 131;
        tmp_assign_source_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_30, tmp_args_element_name_22);
        Py_DECREF(tmp_called_name_30);
        Py_DECREF(tmp_args_element_name_22);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_70);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_dircall_arg1_9;
        tmp_dircall_arg1_9 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_72 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = PyDict_New();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_metaclass_name_9;
        nuitka_bool tmp_condition_result_49;
        PyObject *tmp_key_name_25;
        PyObject *tmp_dict_arg_name_25;
        PyObject *tmp_dict_arg_name_26;
        PyObject *tmp_key_name_26;
        nuitka_bool tmp_condition_result_50;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_name_52;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_bases_name_9;
        tmp_key_name_25 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_name_25 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_25, tmp_key_name_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_49 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_17;
        } else {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_name_26 = tmp_class_creation_9__class_decl_dict;
        tmp_key_name_26 = mod_consts[50];
        tmp_metaclass_name_9 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_26, tmp_key_name_26);
        if (tmp_metaclass_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        goto condexpr_end_17;
        condexpr_false_17:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        tmp_condition_result_50 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_18;
        } else {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_name_52 = tmp_class_creation_9__bases;
        tmp_subscript_name_9 = mod_consts[39];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_52, tmp_subscript_name_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        tmp_metaclass_name_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        tmp_metaclass_name_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_9);
        condexpr_end_18:;
        condexpr_end_17:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_name_9 = tmp_class_creation_9__bases;
        tmp_assign_source_74 = SELECT_METACLASS(tmp_metaclass_name_9, tmp_bases_name_9);
        Py_DECREF(tmp_metaclass_name_9);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_74;
    }
    {
        nuitka_bool tmp_condition_result_51;
        PyObject *tmp_key_name_27;
        PyObject *tmp_dict_arg_name_27;
        tmp_key_name_27 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_dict_arg_name_27 = tmp_class_creation_9__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_27, tmp_key_name_27);
        assert(!(tmp_res == -1));
        tmp_condition_result_51 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_51 == NUITKA_BOOL_TRUE) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 139;

        goto try_except_handler_27;
    }
    branch_no_33:;
    {
        nuitka_bool tmp_condition_result_52;
        PyObject *tmp_expression_name_53;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_name_53 = tmp_class_creation_9__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_53, mod_consts[51]);
        tmp_condition_result_52 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_name_33;
        PyObject *tmp_expression_name_54;
        PyObject *tmp_args_name_17;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_kwargs_name_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_name_54 = tmp_class_creation_9__metaclass;
        tmp_called_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_54, mod_consts[51]);
        if (tmp_called_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        tmp_tuple_element_25 = mod_consts[102];
        tmp_args_name_17 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_17, 0, tmp_tuple_element_25);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_25 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_name_17, 1, tmp_tuple_element_25);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_name_17 = tmp_class_creation_9__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 139;
        tmp_assign_source_75 = CALL_FUNCTION(tmp_called_name_33, tmp_args_name_17, tmp_kwargs_name_17);
        Py_DECREF(tmp_called_name_33);
        Py_DECREF(tmp_args_name_17);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_75;
    }
    {
        nuitka_bool tmp_condition_result_53;
        PyObject *tmp_operand_name_9;
        PyObject *tmp_expression_name_55;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_name_55 = tmp_class_creation_9__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_55, mod_consts[52]);
        tmp_operand_name_9 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        tmp_condition_result_53 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_getattr_target_9;
        PyObject *tmp_getattr_attr_9;
        PyObject *tmp_getattr_default_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_left_name_9 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_getattr_target_9 = tmp_class_creation_9__metaclass;
        tmp_getattr_attr_9 = mod_consts[54];
        tmp_getattr_default_9 = mod_consts[55];
        tmp_tuple_element_26 = BUILTIN_GETATTR(tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9);
        if (tmp_tuple_element_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        tmp_right_name_9 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_56;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_right_name_9, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_name_56 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_name_56 == NULL));
            tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_56, mod_consts[54]);
            Py_DECREF(tmp_expression_name_56);
            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_right_name_9, 1, tmp_tuple_element_26);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_right_name_9);
        goto try_except_handler_27;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_9, tmp_right_name_9);
        Py_DECREF(tmp_right_name_9);
        if (tmp_raise_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_27;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 139;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_27;
    }
    branch_no_35:;
    goto branch_end_34;
    branch_no_34:;
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = PyDict_New();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_76;
    }
    branch_end_34:;
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_name_34;
        PyObject *tmp_called_name_35;
        PyObject *tmp_expression_name_57;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        tmp_expression_name_57 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_57 == NULL)) {
            tmp_expression_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_27;
        }
        tmp_called_name_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_57, mod_consts[81]);
        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_27;
        }
        tmp_args_element_name_23 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_23 == NULL)) {
            tmp_args_element_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_35);

            exception_lineno = 138;

            goto try_except_handler_27;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 138;
        tmp_called_name_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_35, tmp_args_element_name_23);
        Py_DECREF(tmp_called_name_35);
        if (tmp_called_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_27;
        }
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA256_139 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA256_139, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_29;
        }
        tmp_dictset_value = mod_consts[102];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA256_139, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_29;
        }
        if (isFrameUnusable(cache_frame_11d9f86cc02ca2f41245593f5a02a4ae_9)) {
            Py_XDECREF(cache_frame_11d9f86cc02ca2f41245593f5a02a4ae_9);

#if _DEBUG_REFCOUNTS
            if (cache_frame_11d9f86cc02ca2f41245593f5a02a4ae_9 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_11d9f86cc02ca2f41245593f5a02a4ae_9 = MAKE_FUNCTION_FRAME(codeobj_11d9f86cc02ca2f41245593f5a02a4ae, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_11d9f86cc02ca2f41245593f5a02a4ae_9->m_type_description == NULL);
        frame_11d9f86cc02ca2f41245593f5a02a4ae_9 = cache_frame_11d9f86cc02ca2f41245593f5a02a4ae_9;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_11d9f86cc02ca2f41245593f5a02a4ae_9);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_11d9f86cc02ca2f41245593f5a02a4ae_9) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA256_139, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA256_139, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA256_139, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_2 = "o";
            goto frame_exception_exit_9;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_11d9f86cc02ca2f41245593f5a02a4ae_9);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;

        frame_exception_exit_9:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_11d9f86cc02ca2f41245593f5a02a4ae_9);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_11d9f86cc02ca2f41245593f5a02a4ae_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_11d9f86cc02ca2f41245593f5a02a4ae_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_11d9f86cc02ca2f41245593f5a02a4ae_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_11d9f86cc02ca2f41245593f5a02a4ae_9,
            type_description_2,
            outline_8_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_11d9f86cc02ca2f41245593f5a02a4ae_9 == cache_frame_11d9f86cc02ca2f41245593f5a02a4ae_9) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_11d9f86cc02ca2f41245593f5a02a4ae_9);
            cache_frame_11d9f86cc02ca2f41245593f5a02a4ae_9 = NULL;
        }

        assertFrameObject(frame_11d9f86cc02ca2f41245593f5a02a4ae_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;

        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_29;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_54;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_compexpr_left_9 = tmp_class_creation_9__bases;
            tmp_compexpr_right_9 = mod_consts[49];
            tmp_condition_result_54 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_9, tmp_compexpr_right_9);
            if (tmp_condition_result_54 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto try_except_handler_29;
            }
            if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
                goto branch_yes_36;
            } else {
                goto branch_no_36;
            }
            assert(tmp_condition_result_54 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_36:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA256_139, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_29;
        }
        branch_no_36:;
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_called_name_36;
            PyObject *tmp_args_name_18;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kwargs_name_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_name_36 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_27 = mod_consts[102];
            tmp_args_name_18 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_18, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_27 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_name_18, 1, tmp_tuple_element_27);
            tmp_tuple_element_27 = locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA256_139;
            PyTuple_SET_ITEM0(tmp_args_name_18, 2, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_name_18 = tmp_class_creation_9__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 139;
            tmp_assign_source_78 = CALL_FUNCTION(tmp_called_name_36, tmp_args_name_18, tmp_kwargs_name_18);
            Py_DECREF(tmp_args_name_18);
            if (tmp_assign_source_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto try_except_handler_29;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_78;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_args_element_name_24 = outline_8_var___class__;
        Py_INCREF(tmp_args_element_name_24);
        goto try_return_handler_29;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA256_139);
        locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA256_139 = NULL;
        goto try_return_handler_28;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA256_139);
        locals_cryptography$hazmat$primitives$hashes$$$class__9_SHA256_139 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto try_except_handler_28;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 139;
        goto try_except_handler_27;
        outline_result_9:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 138;
        tmp_assign_source_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_34, tmp_args_element_name_24);
        Py_DECREF(tmp_called_name_34);
        Py_DECREF(tmp_args_element_name_24);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto try_except_handler_27;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_77);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_dircall_arg1_10;
        tmp_dircall_arg1_10 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_79 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = PyDict_New();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_metaclass_name_10;
        nuitka_bool tmp_condition_result_55;
        PyObject *tmp_key_name_28;
        PyObject *tmp_dict_arg_name_28;
        PyObject *tmp_dict_arg_name_29;
        PyObject *tmp_key_name_29;
        nuitka_bool tmp_condition_result_56;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_name_58;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_bases_name_10;
        tmp_key_name_28 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_name_28 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_28, tmp_key_name_28);
        assert(!(tmp_res == -1));
        tmp_condition_result_55 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_19;
        } else {
            goto condexpr_false_19;
        }
        condexpr_true_19:;
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_name_29 = tmp_class_creation_10__class_decl_dict;
        tmp_key_name_29 = mod_consts[50];
        tmp_metaclass_name_10 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_29, tmp_key_name_29);
        if (tmp_metaclass_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_30;
        }
        goto condexpr_end_19;
        condexpr_false_19:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_30;
        }
        tmp_condition_result_56 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_20;
        } else {
            goto condexpr_false_20;
        }
        condexpr_true_20:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_name_58 = tmp_class_creation_10__bases;
        tmp_subscript_name_10 = mod_consts[39];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_58, tmp_subscript_name_10, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_30;
        }
        tmp_metaclass_name_10 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_30;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        tmp_metaclass_name_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_10);
        condexpr_end_20:;
        condexpr_end_19:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_name_10 = tmp_class_creation_10__bases;
        tmp_assign_source_81 = SELECT_METACLASS(tmp_metaclass_name_10, tmp_bases_name_10);
        Py_DECREF(tmp_metaclass_name_10);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_81;
    }
    {
        nuitka_bool tmp_condition_result_57;
        PyObject *tmp_key_name_30;
        PyObject *tmp_dict_arg_name_30;
        tmp_key_name_30 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_dict_arg_name_30 = tmp_class_creation_10__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_30, tmp_key_name_30);
        assert(!(tmp_res == -1));
        tmp_condition_result_57 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 146;

        goto try_except_handler_30;
    }
    branch_no_37:;
    {
        nuitka_bool tmp_condition_result_58;
        PyObject *tmp_expression_name_59;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_name_59 = tmp_class_creation_10__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_59, mod_consts[51]);
        tmp_condition_result_58 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_58 == NUITKA_BOOL_TRUE) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_name_37;
        PyObject *tmp_expression_name_60;
        PyObject *tmp_args_name_19;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_kwargs_name_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_name_60 = tmp_class_creation_10__metaclass;
        tmp_called_name_37 = LOOKUP_ATTRIBUTE(tmp_expression_name_60, mod_consts[51]);
        if (tmp_called_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_30;
        }
        tmp_tuple_element_28 = mod_consts[104];
        tmp_args_name_19 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_19, 0, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_28 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_name_19, 1, tmp_tuple_element_28);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_name_19 = tmp_class_creation_10__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 146;
        tmp_assign_source_82 = CALL_FUNCTION(tmp_called_name_37, tmp_args_name_19, tmp_kwargs_name_19);
        Py_DECREF(tmp_called_name_37);
        Py_DECREF(tmp_args_name_19);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_30;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_82;
    }
    {
        nuitka_bool tmp_condition_result_59;
        PyObject *tmp_operand_name_10;
        PyObject *tmp_expression_name_61;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_name_61 = tmp_class_creation_10__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_61, mod_consts[52]);
        tmp_operand_name_10 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_30;
        }
        tmp_condition_result_59 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_59 == NUITKA_BOOL_TRUE) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_getattr_target_10;
        PyObject *tmp_getattr_attr_10;
        PyObject *tmp_getattr_default_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_left_name_10 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_getattr_target_10 = tmp_class_creation_10__metaclass;
        tmp_getattr_attr_10 = mod_consts[54];
        tmp_getattr_default_10 = mod_consts[55];
        tmp_tuple_element_29 = BUILTIN_GETATTR(tmp_getattr_target_10, tmp_getattr_attr_10, tmp_getattr_default_10);
        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_30;
        }
        tmp_right_name_10 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_62;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_right_name_10, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_20 = tmp_class_creation_10__prepared;
            tmp_expression_name_62 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_name_62 == NULL));
            tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_62, mod_consts[54]);
            Py_DECREF(tmp_expression_name_62);
            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_right_name_10, 1, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_right_name_10);
        goto try_except_handler_30;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_10, tmp_right_name_10);
        Py_DECREF(tmp_right_name_10);
        if (tmp_raise_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_30;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 146;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_30;
    }
    branch_no_39:;
    goto branch_end_38;
    branch_no_38:;
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = PyDict_New();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_83;
    }
    branch_end_38:;
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_name_38;
        PyObject *tmp_called_name_39;
        PyObject *tmp_expression_name_63;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        tmp_expression_name_63 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_63 == NULL)) {
            tmp_expression_name_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_30;
        }
        tmp_called_name_39 = LOOKUP_ATTRIBUTE(tmp_expression_name_63, mod_consts[81]);
        if (tmp_called_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_30;
        }
        tmp_args_element_name_25 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_25 == NULL)) {
            tmp_args_element_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);

            exception_lineno = 145;

            goto try_except_handler_30;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 145;
        tmp_called_name_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_39, tmp_args_element_name_25);
        Py_DECREF(tmp_called_name_39);
        if (tmp_called_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_30;
        }
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA384_146 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA384_146, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_32;
        }
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA384_146, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_32;
        }
        if (isFrameUnusable(cache_frame_3097e7b6ed04645c862302ff507b3db0_10)) {
            Py_XDECREF(cache_frame_3097e7b6ed04645c862302ff507b3db0_10);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3097e7b6ed04645c862302ff507b3db0_10 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3097e7b6ed04645c862302ff507b3db0_10 = MAKE_FUNCTION_FRAME(codeobj_3097e7b6ed04645c862302ff507b3db0, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_3097e7b6ed04645c862302ff507b3db0_10->m_type_description == NULL);
        frame_3097e7b6ed04645c862302ff507b3db0_10 = cache_frame_3097e7b6ed04645c862302ff507b3db0_10;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_3097e7b6ed04645c862302ff507b3db0_10);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_3097e7b6ed04645c862302ff507b3db0_10) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[105];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA384_146, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_2 = "o";
            goto frame_exception_exit_10;
        }
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA384_146, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_2 = "o";
            goto frame_exception_exit_10;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA384_146, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_2 = "o";
            goto frame_exception_exit_10;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3097e7b6ed04645c862302ff507b3db0_10);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;

        frame_exception_exit_10:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3097e7b6ed04645c862302ff507b3db0_10);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3097e7b6ed04645c862302ff507b3db0_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3097e7b6ed04645c862302ff507b3db0_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3097e7b6ed04645c862302ff507b3db0_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3097e7b6ed04645c862302ff507b3db0_10,
            type_description_2,
            outline_9_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_3097e7b6ed04645c862302ff507b3db0_10 == cache_frame_3097e7b6ed04645c862302ff507b3db0_10) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_3097e7b6ed04645c862302ff507b3db0_10);
            cache_frame_3097e7b6ed04645c862302ff507b3db0_10 = NULL;
        }

        assertFrameObject(frame_3097e7b6ed04645c862302ff507b3db0_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;

        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_32;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_60;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_compexpr_left_10 = tmp_class_creation_10__bases;
            tmp_compexpr_right_10 = mod_consts[49];
            tmp_condition_result_60 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_10, tmp_compexpr_right_10);
            if (tmp_condition_result_60 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto try_except_handler_32;
            }
            if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
                goto branch_yes_40;
            } else {
                goto branch_no_40;
            }
            assert(tmp_condition_result_60 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_40:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA384_146, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_32;
        }
        branch_no_40:;
        {
            PyObject *tmp_assign_source_85;
            PyObject *tmp_called_name_40;
            PyObject *tmp_args_name_20;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_kwargs_name_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_name_40 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_30 = mod_consts[104];
            tmp_args_name_20 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_20, 0, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_30 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_name_20, 1, tmp_tuple_element_30);
            tmp_tuple_element_30 = locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA384_146;
            PyTuple_SET_ITEM0(tmp_args_name_20, 2, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_name_20 = tmp_class_creation_10__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 146;
            tmp_assign_source_85 = CALL_FUNCTION(tmp_called_name_40, tmp_args_name_20, tmp_kwargs_name_20);
            Py_DECREF(tmp_args_name_20);
            if (tmp_assign_source_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto try_except_handler_32;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_85;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_args_element_name_26 = outline_9_var___class__;
        Py_INCREF(tmp_args_element_name_26);
        goto try_return_handler_32;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA384_146);
        locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA384_146 = NULL;
        goto try_return_handler_31;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA384_146);
        locals_cryptography$hazmat$primitives$hashes$$$class__10_SHA384_146 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto try_except_handler_31;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 146;
        goto try_except_handler_30;
        outline_result_10:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 145;
        tmp_assign_source_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_38, tmp_args_element_name_26);
        Py_DECREF(tmp_called_name_38);
        Py_DECREF(tmp_args_element_name_26);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_84);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_dircall_arg1_11;
        tmp_dircall_arg1_11 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_11);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
            tmp_assign_source_86 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = PyDict_New();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_metaclass_name_11;
        nuitka_bool tmp_condition_result_61;
        PyObject *tmp_key_name_31;
        PyObject *tmp_dict_arg_name_31;
        PyObject *tmp_dict_arg_name_32;
        PyObject *tmp_key_name_32;
        nuitka_bool tmp_condition_result_62;
        int tmp_truth_name_11;
        PyObject *tmp_type_arg_21;
        PyObject *tmp_expression_name_64;
        PyObject *tmp_subscript_name_11;
        PyObject *tmp_bases_name_11;
        tmp_key_name_31 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_name_31 = tmp_class_creation_11__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_31, tmp_key_name_31);
        assert(!(tmp_res == -1));
        tmp_condition_result_61 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_21;
        } else {
            goto condexpr_false_21;
        }
        condexpr_true_21:;
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_name_32 = tmp_class_creation_11__class_decl_dict;
        tmp_key_name_32 = mod_consts[50];
        tmp_metaclass_name_11 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_32, tmp_key_name_32);
        if (tmp_metaclass_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_33;
        }
        goto condexpr_end_21;
        condexpr_false_21:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_33;
        }
        tmp_condition_result_62 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_62 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_22;
        } else {
            goto condexpr_false_22;
        }
        condexpr_true_22:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_name_64 = tmp_class_creation_11__bases;
        tmp_subscript_name_11 = mod_consts[39];
        tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_64, tmp_subscript_name_11, 0);
        if (tmp_type_arg_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_33;
        }
        tmp_metaclass_name_11 = BUILTIN_TYPE1(tmp_type_arg_21);
        Py_DECREF(tmp_type_arg_21);
        if (tmp_metaclass_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_33;
        }
        goto condexpr_end_22;
        condexpr_false_22:;
        tmp_metaclass_name_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_11);
        condexpr_end_22:;
        condexpr_end_21:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_name_11 = tmp_class_creation_11__bases;
        tmp_assign_source_88 = SELECT_METACLASS(tmp_metaclass_name_11, tmp_bases_name_11);
        Py_DECREF(tmp_metaclass_name_11);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_88;
    }
    {
        nuitka_bool tmp_condition_result_63;
        PyObject *tmp_key_name_33;
        PyObject *tmp_dict_arg_name_33;
        tmp_key_name_33 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_dict_arg_name_33 = tmp_class_creation_11__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_33, tmp_key_name_33);
        assert(!(tmp_res == -1));
        tmp_condition_result_63 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_63 == NUITKA_BOOL_TRUE) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_11__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 153;

        goto try_except_handler_33;
    }
    branch_no_41:;
    {
        nuitka_bool tmp_condition_result_64;
        PyObject *tmp_expression_name_65;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_name_65 = tmp_class_creation_11__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_65, mod_consts[51]);
        tmp_condition_result_64 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_name_41;
        PyObject *tmp_expression_name_66;
        PyObject *tmp_args_name_21;
        PyObject *tmp_tuple_element_31;
        PyObject *tmp_kwargs_name_21;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_name_66 = tmp_class_creation_11__metaclass;
        tmp_called_name_41 = LOOKUP_ATTRIBUTE(tmp_expression_name_66, mod_consts[51]);
        if (tmp_called_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_33;
        }
        tmp_tuple_element_31 = mod_consts[107];
        tmp_args_name_21 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_21, 0, tmp_tuple_element_31);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_31 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_name_21, 1, tmp_tuple_element_31);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_name_21 = tmp_class_creation_11__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 153;
        tmp_assign_source_89 = CALL_FUNCTION(tmp_called_name_41, tmp_args_name_21, tmp_kwargs_name_21);
        Py_DECREF(tmp_called_name_41);
        Py_DECREF(tmp_args_name_21);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_33;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_89;
    }
    {
        nuitka_bool tmp_condition_result_65;
        PyObject *tmp_operand_name_11;
        PyObject *tmp_expression_name_67;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_name_67 = tmp_class_creation_11__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_67, mod_consts[52]);
        tmp_operand_name_11 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_33;
        }
        tmp_condition_result_65 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_tuple_element_32;
        PyObject *tmp_getattr_target_11;
        PyObject *tmp_getattr_attr_11;
        PyObject *tmp_getattr_default_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_left_name_11 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_getattr_target_11 = tmp_class_creation_11__metaclass;
        tmp_getattr_attr_11 = mod_consts[54];
        tmp_getattr_default_11 = mod_consts[55];
        tmp_tuple_element_32 = BUILTIN_GETATTR(tmp_getattr_target_11, tmp_getattr_attr_11, tmp_getattr_default_11);
        if (tmp_tuple_element_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_33;
        }
        tmp_right_name_11 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_68;
            PyObject *tmp_type_arg_22;
            PyTuple_SET_ITEM(tmp_right_name_11, 0, tmp_tuple_element_32);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_22 = tmp_class_creation_11__prepared;
            tmp_expression_name_68 = BUILTIN_TYPE1(tmp_type_arg_22);
            assert(!(tmp_expression_name_68 == NULL));
            tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_68, mod_consts[54]);
            Py_DECREF(tmp_expression_name_68);
            if (tmp_tuple_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_right_name_11, 1, tmp_tuple_element_32);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_right_name_11);
        goto try_except_handler_33;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_11, tmp_right_name_11);
        Py_DECREF(tmp_right_name_11);
        if (tmp_raise_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_33;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 153;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_33;
    }
    branch_no_43:;
    goto branch_end_42;
    branch_no_42:;
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = PyDict_New();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_90;
    }
    branch_end_42:;
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_name_42;
        PyObject *tmp_called_name_43;
        PyObject *tmp_expression_name_69;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        tmp_expression_name_69 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_69 == NULL)) {
            tmp_expression_name_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_33;
        }
        tmp_called_name_43 = LOOKUP_ATTRIBUTE(tmp_expression_name_69, mod_consts[81]);
        if (tmp_called_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_33;
        }
        tmp_args_element_name_27 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_27 == NULL)) {
            tmp_args_element_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_43);

            exception_lineno = 152;

            goto try_except_handler_33;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 152;
        tmp_called_name_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_43, tmp_args_element_name_27);
        Py_DECREF(tmp_called_name_43);
        if (tmp_called_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_33;
        }
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA512_153 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA512_153, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_35;
        }
        tmp_dictset_value = mod_consts[107];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA512_153, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_35;
        }
        if (isFrameUnusable(cache_frame_8ab8daada742baaa93b6b41a323c59a6_11)) {
            Py_XDECREF(cache_frame_8ab8daada742baaa93b6b41a323c59a6_11);

#if _DEBUG_REFCOUNTS
            if (cache_frame_8ab8daada742baaa93b6b41a323c59a6_11 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_8ab8daada742baaa93b6b41a323c59a6_11 = MAKE_FUNCTION_FRAME(codeobj_8ab8daada742baaa93b6b41a323c59a6, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_8ab8daada742baaa93b6b41a323c59a6_11->m_type_description == NULL);
        frame_8ab8daada742baaa93b6b41a323c59a6_11 = cache_frame_8ab8daada742baaa93b6b41a323c59a6_11;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_8ab8daada742baaa93b6b41a323c59a6_11);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_8ab8daada742baaa93b6b41a323c59a6_11) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[108];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA512_153, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA512_153, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA512_153, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_2 = "o";
            goto frame_exception_exit_11;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8ab8daada742baaa93b6b41a323c59a6_11);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_10;

        frame_exception_exit_11:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8ab8daada742baaa93b6b41a323c59a6_11);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8ab8daada742baaa93b6b41a323c59a6_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8ab8daada742baaa93b6b41a323c59a6_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8ab8daada742baaa93b6b41a323c59a6_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8ab8daada742baaa93b6b41a323c59a6_11,
            type_description_2,
            outline_10_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_8ab8daada742baaa93b6b41a323c59a6_11 == cache_frame_8ab8daada742baaa93b6b41a323c59a6_11) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_8ab8daada742baaa93b6b41a323c59a6_11);
            cache_frame_8ab8daada742baaa93b6b41a323c59a6_11 = NULL;
        }

        assertFrameObject(frame_8ab8daada742baaa93b6b41a323c59a6_11);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_10;

        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_35;
        skip_nested_handling_10:;
        {
            nuitka_bool tmp_condition_result_66;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_compexpr_left_11 = tmp_class_creation_11__bases;
            tmp_compexpr_right_11 = mod_consts[49];
            tmp_condition_result_66 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_11, tmp_compexpr_right_11);
            if (tmp_condition_result_66 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto try_except_handler_35;
            }
            if (tmp_condition_result_66 == NUITKA_BOOL_TRUE) {
                goto branch_yes_44;
            } else {
                goto branch_no_44;
            }
            assert(tmp_condition_result_66 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_44:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA512_153, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto try_except_handler_35;
        }
        branch_no_44:;
        {
            PyObject *tmp_assign_source_92;
            PyObject *tmp_called_name_44;
            PyObject *tmp_args_name_22;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_kwargs_name_22;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_name_44 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_33 = mod_consts[107];
            tmp_args_name_22 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_22, 0, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_33 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_name_22, 1, tmp_tuple_element_33);
            tmp_tuple_element_33 = locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA512_153;
            PyTuple_SET_ITEM0(tmp_args_name_22, 2, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_name_22 = tmp_class_creation_11__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 153;
            tmp_assign_source_92 = CALL_FUNCTION(tmp_called_name_44, tmp_args_name_22, tmp_kwargs_name_22);
            Py_DECREF(tmp_args_name_22);
            if (tmp_assign_source_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto try_except_handler_35;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_92;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_args_element_name_28 = outline_10_var___class__;
        Py_INCREF(tmp_args_element_name_28);
        goto try_return_handler_35;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA512_153);
        locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA512_153 = NULL;
        goto try_return_handler_34;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA512_153);
        locals_cryptography$hazmat$primitives$hashes$$$class__11_SHA512_153 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto try_except_handler_34;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 153;
        goto try_except_handler_33;
        outline_result_11:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 152;
        tmp_assign_source_91 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_42, tmp_args_element_name_28);
        Py_DECREF(tmp_called_name_42);
        Py_DECREF(tmp_args_element_name_28);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_33;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_91);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_dircall_arg1_12;
        tmp_dircall_arg1_12 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_12);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
            tmp_assign_source_93 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_36;
        }
        assert(tmp_class_creation_12__bases == NULL);
        tmp_class_creation_12__bases = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = PyDict_New();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_metaclass_name_12;
        nuitka_bool tmp_condition_result_67;
        PyObject *tmp_key_name_34;
        PyObject *tmp_dict_arg_name_34;
        PyObject *tmp_dict_arg_name_35;
        PyObject *tmp_key_name_35;
        nuitka_bool tmp_condition_result_68;
        int tmp_truth_name_12;
        PyObject *tmp_type_arg_23;
        PyObject *tmp_expression_name_70;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_bases_name_12;
        tmp_key_name_34 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_name_34 = tmp_class_creation_12__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_34, tmp_key_name_34);
        assert(!(tmp_res == -1));
        tmp_condition_result_67 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_67 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_23;
        } else {
            goto condexpr_false_23;
        }
        condexpr_true_23:;
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_name_35 = tmp_class_creation_12__class_decl_dict;
        tmp_key_name_35 = mod_consts[50];
        tmp_metaclass_name_12 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_35, tmp_key_name_35);
        if (tmp_metaclass_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_36;
        }
        goto condexpr_end_23;
        condexpr_false_23:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_creation_12__bases);
        if (tmp_truth_name_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_36;
        }
        tmp_condition_result_68 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_24;
        } else {
            goto condexpr_false_24;
        }
        condexpr_true_24:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_expression_name_70 = tmp_class_creation_12__bases;
        tmp_subscript_name_12 = mod_consts[39];
        tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_70, tmp_subscript_name_12, 0);
        if (tmp_type_arg_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_36;
        }
        tmp_metaclass_name_12 = BUILTIN_TYPE1(tmp_type_arg_23);
        Py_DECREF(tmp_type_arg_23);
        if (tmp_metaclass_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_36;
        }
        goto condexpr_end_24;
        condexpr_false_24:;
        tmp_metaclass_name_12 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_12);
        condexpr_end_24:;
        condexpr_end_23:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_bases_name_12 = tmp_class_creation_12__bases;
        tmp_assign_source_95 = SELECT_METACLASS(tmp_metaclass_name_12, tmp_bases_name_12);
        Py_DECREF(tmp_metaclass_name_12);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_36;
        }
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_95;
    }
    {
        nuitka_bool tmp_condition_result_69;
        PyObject *tmp_key_name_36;
        PyObject *tmp_dict_arg_name_36;
        tmp_key_name_36 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_dict_arg_name_36 = tmp_class_creation_12__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_36, tmp_key_name_36);
        assert(!(tmp_res == -1));
        tmp_condition_result_69 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_69 == NUITKA_BOOL_TRUE) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_12__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 160;

        goto try_except_handler_36;
    }
    branch_no_45:;
    {
        nuitka_bool tmp_condition_result_70;
        PyObject *tmp_expression_name_71;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_name_71 = tmp_class_creation_12__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_71, mod_consts[51]);
        tmp_condition_result_70 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_70 == NUITKA_BOOL_TRUE) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_name_45;
        PyObject *tmp_expression_name_72;
        PyObject *tmp_args_name_23;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_kwargs_name_23;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_name_72 = tmp_class_creation_12__metaclass;
        tmp_called_name_45 = LOOKUP_ATTRIBUTE(tmp_expression_name_72, mod_consts[51]);
        if (tmp_called_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_36;
        }
        tmp_tuple_element_34 = mod_consts[109];
        tmp_args_name_23 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_23, 0, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_tuple_element_34 = tmp_class_creation_12__bases;
        PyTuple_SET_ITEM0(tmp_args_name_23, 1, tmp_tuple_element_34);
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_name_23 = tmp_class_creation_12__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 160;
        tmp_assign_source_96 = CALL_FUNCTION(tmp_called_name_45, tmp_args_name_23, tmp_kwargs_name_23);
        Py_DECREF(tmp_called_name_45);
        Py_DECREF(tmp_args_name_23);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_36;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_96;
    }
    {
        nuitka_bool tmp_condition_result_71;
        PyObject *tmp_operand_name_12;
        PyObject *tmp_expression_name_73;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_name_73 = tmp_class_creation_12__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_73, mod_consts[52]);
        tmp_operand_name_12 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_36;
        }
        tmp_condition_result_71 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_71 == NUITKA_BOOL_TRUE) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_tuple_element_35;
        PyObject *tmp_getattr_target_12;
        PyObject *tmp_getattr_attr_12;
        PyObject *tmp_getattr_default_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_left_name_12 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_getattr_target_12 = tmp_class_creation_12__metaclass;
        tmp_getattr_attr_12 = mod_consts[54];
        tmp_getattr_default_12 = mod_consts[55];
        tmp_tuple_element_35 = BUILTIN_GETATTR(tmp_getattr_target_12, tmp_getattr_attr_12, tmp_getattr_default_12);
        if (tmp_tuple_element_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_36;
        }
        tmp_right_name_12 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_74;
            PyObject *tmp_type_arg_24;
            PyTuple_SET_ITEM(tmp_right_name_12, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_24 = tmp_class_creation_12__prepared;
            tmp_expression_name_74 = BUILTIN_TYPE1(tmp_type_arg_24);
            assert(!(tmp_expression_name_74 == NULL));
            tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_74, mod_consts[54]);
            Py_DECREF(tmp_expression_name_74);
            if (tmp_tuple_element_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_right_name_12, 1, tmp_tuple_element_35);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_right_name_12);
        goto try_except_handler_36;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_12, tmp_right_name_12);
        Py_DECREF(tmp_right_name_12);
        if (tmp_raise_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_36;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 160;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_36;
    }
    branch_no_47:;
    goto branch_end_46;
    branch_no_46:;
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = PyDict_New();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_97;
    }
    branch_end_46:;
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_name_46;
        PyObject *tmp_called_name_47;
        PyObject *tmp_expression_name_75;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_args_element_name_30;
        tmp_expression_name_75 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_75 == NULL)) {
            tmp_expression_name_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto try_except_handler_36;
        }
        tmp_called_name_47 = LOOKUP_ATTRIBUTE(tmp_expression_name_75, mod_consts[81]);
        if (tmp_called_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto try_except_handler_36;
        }
        tmp_args_element_name_29 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_29 == NULL)) {
            tmp_args_element_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_47);

            exception_lineno = 159;

            goto try_except_handler_36;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 159;
        tmp_called_name_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_47, tmp_args_element_name_29);
        Py_DECREF(tmp_called_name_47);
        if (tmp_called_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto try_except_handler_36;
        }
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_224_160 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_224_160, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_38;
        }
        tmp_dictset_value = mod_consts[109];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_224_160, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_38;
        }
        if (isFrameUnusable(cache_frame_c1abb48daaceee40850967232c85e60c_12)) {
            Py_XDECREF(cache_frame_c1abb48daaceee40850967232c85e60c_12);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c1abb48daaceee40850967232c85e60c_12 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c1abb48daaceee40850967232c85e60c_12 = MAKE_FUNCTION_FRAME(codeobj_c1abb48daaceee40850967232c85e60c, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c1abb48daaceee40850967232c85e60c_12->m_type_description == NULL);
        frame_c1abb48daaceee40850967232c85e60c_12 = cache_frame_c1abb48daaceee40850967232c85e60c_12;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c1abb48daaceee40850967232c85e60c_12);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c1abb48daaceee40850967232c85e60c_12) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_224_160, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_2 = "o";
            goto frame_exception_exit_12;
        }
        tmp_dictset_value = mod_consts[96];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_224_160, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_2 = "o";
            goto frame_exception_exit_12;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c1abb48daaceee40850967232c85e60c_12);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_11;

        frame_exception_exit_12:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c1abb48daaceee40850967232c85e60c_12);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c1abb48daaceee40850967232c85e60c_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c1abb48daaceee40850967232c85e60c_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c1abb48daaceee40850967232c85e60c_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c1abb48daaceee40850967232c85e60c_12,
            type_description_2,
            outline_11_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c1abb48daaceee40850967232c85e60c_12 == cache_frame_c1abb48daaceee40850967232c85e60c_12) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c1abb48daaceee40850967232c85e60c_12);
            cache_frame_c1abb48daaceee40850967232c85e60c_12 = NULL;
        }

        assertFrameObject(frame_c1abb48daaceee40850967232c85e60c_12);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_11;

        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_38;
        skip_nested_handling_11:;
        {
            nuitka_bool tmp_condition_result_72;
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_compexpr_left_12 = tmp_class_creation_12__bases;
            tmp_compexpr_right_12 = mod_consts[49];
            tmp_condition_result_72 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_12, tmp_compexpr_right_12);
            if (tmp_condition_result_72 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto try_except_handler_38;
            }
            if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
                goto branch_yes_48;
            } else {
                goto branch_no_48;
            }
            assert(tmp_condition_result_72 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_48:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_224_160, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto try_except_handler_38;
        }
        branch_no_48:;
        {
            PyObject *tmp_assign_source_99;
            PyObject *tmp_called_name_48;
            PyObject *tmp_args_name_24;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_kwargs_name_24;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_name_48 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_36 = mod_consts[109];
            tmp_args_name_24 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_24, 0, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_tuple_element_36 = tmp_class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_name_24, 1, tmp_tuple_element_36);
            tmp_tuple_element_36 = locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_224_160;
            PyTuple_SET_ITEM0(tmp_args_name_24, 2, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_name_24 = tmp_class_creation_12__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 160;
            tmp_assign_source_99 = CALL_FUNCTION(tmp_called_name_48, tmp_args_name_24, tmp_kwargs_name_24);
            Py_DECREF(tmp_args_name_24);
            if (tmp_assign_source_99 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto try_except_handler_38;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_99;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_args_element_name_30 = outline_11_var___class__;
        Py_INCREF(tmp_args_element_name_30);
        goto try_return_handler_38;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_38:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_224_160);
        locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_224_160 = NULL;
        goto try_return_handler_37;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_224_160);
        locals_cryptography$hazmat$primitives$hashes$$$class__12_SHA3_224_160 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto try_except_handler_37;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 160;
        goto try_except_handler_36;
        outline_result_12:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 159;
        tmp_assign_source_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_46, tmp_args_element_name_30);
        Py_DECREF(tmp_called_name_46);
        Py_DECREF(tmp_args_element_name_30);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto try_except_handler_36;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_98);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    Py_XDECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_dircall_arg1_13;
        tmp_dircall_arg1_13 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_13);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_13};
            tmp_assign_source_100 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_39;
        }
        assert(tmp_class_creation_13__bases == NULL);
        tmp_class_creation_13__bases = tmp_assign_source_100;
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = PyDict_New();
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_metaclass_name_13;
        nuitka_bool tmp_condition_result_73;
        PyObject *tmp_key_name_37;
        PyObject *tmp_dict_arg_name_37;
        PyObject *tmp_dict_arg_name_38;
        PyObject *tmp_key_name_38;
        nuitka_bool tmp_condition_result_74;
        int tmp_truth_name_13;
        PyObject *tmp_type_arg_25;
        PyObject *tmp_expression_name_76;
        PyObject *tmp_subscript_name_13;
        PyObject *tmp_bases_name_13;
        tmp_key_name_37 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_name_37 = tmp_class_creation_13__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_37, tmp_key_name_37);
        assert(!(tmp_res == -1));
        tmp_condition_result_73 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_73 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_25;
        } else {
            goto condexpr_false_25;
        }
        condexpr_true_25:;
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_name_38 = tmp_class_creation_13__class_decl_dict;
        tmp_key_name_38 = mod_consts[50];
        tmp_metaclass_name_13 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_38, tmp_key_name_38);
        if (tmp_metaclass_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_39;
        }
        goto condexpr_end_25;
        condexpr_false_25:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_creation_13__bases);
        if (tmp_truth_name_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_39;
        }
        tmp_condition_result_74 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_74 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_26;
        } else {
            goto condexpr_false_26;
        }
        condexpr_true_26:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_expression_name_76 = tmp_class_creation_13__bases;
        tmp_subscript_name_13 = mod_consts[39];
        tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_76, tmp_subscript_name_13, 0);
        if (tmp_type_arg_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_39;
        }
        tmp_metaclass_name_13 = BUILTIN_TYPE1(tmp_type_arg_25);
        Py_DECREF(tmp_type_arg_25);
        if (tmp_metaclass_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_39;
        }
        goto condexpr_end_26;
        condexpr_false_26:;
        tmp_metaclass_name_13 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_13);
        condexpr_end_26:;
        condexpr_end_25:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_bases_name_13 = tmp_class_creation_13__bases;
        tmp_assign_source_102 = SELECT_METACLASS(tmp_metaclass_name_13, tmp_bases_name_13);
        Py_DECREF(tmp_metaclass_name_13);
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_39;
        }
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_102;
    }
    {
        nuitka_bool tmp_condition_result_75;
        PyObject *tmp_key_name_39;
        PyObject *tmp_dict_arg_name_39;
        tmp_key_name_39 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_dict_arg_name_39 = tmp_class_creation_13__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_39, tmp_key_name_39);
        assert(!(tmp_res == -1));
        tmp_condition_result_75 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_75 == NUITKA_BOOL_TRUE) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_13__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 166;

        goto try_except_handler_39;
    }
    branch_no_49:;
    {
        nuitka_bool tmp_condition_result_76;
        PyObject *tmp_expression_name_77;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_name_77 = tmp_class_creation_13__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_77, mod_consts[51]);
        tmp_condition_result_76 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_76 == NUITKA_BOOL_TRUE) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
    }
    branch_yes_50:;
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_name_49;
        PyObject *tmp_expression_name_78;
        PyObject *tmp_args_name_25;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_kwargs_name_25;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_name_78 = tmp_class_creation_13__metaclass;
        tmp_called_name_49 = LOOKUP_ATTRIBUTE(tmp_expression_name_78, mod_consts[51]);
        if (tmp_called_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_39;
        }
        tmp_tuple_element_37 = mod_consts[111];
        tmp_args_name_25 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_25, 0, tmp_tuple_element_37);
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_tuple_element_37 = tmp_class_creation_13__bases;
        PyTuple_SET_ITEM0(tmp_args_name_25, 1, tmp_tuple_element_37);
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_kwargs_name_25 = tmp_class_creation_13__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 166;
        tmp_assign_source_103 = CALL_FUNCTION(tmp_called_name_49, tmp_args_name_25, tmp_kwargs_name_25);
        Py_DECREF(tmp_called_name_49);
        Py_DECREF(tmp_args_name_25);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_39;
        }
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_103;
    }
    {
        nuitka_bool tmp_condition_result_77;
        PyObject *tmp_operand_name_13;
        PyObject *tmp_expression_name_79;
        CHECK_OBJECT(tmp_class_creation_13__prepared);
        tmp_expression_name_79 = tmp_class_creation_13__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_79, mod_consts[52]);
        tmp_operand_name_13 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_13);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_39;
        }
        tmp_condition_result_77 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_77 == NUITKA_BOOL_TRUE) {
            goto branch_yes_51;
        } else {
            goto branch_no_51;
        }
    }
    branch_yes_51:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_raise_value_13;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_getattr_target_13;
        PyObject *tmp_getattr_attr_13;
        PyObject *tmp_getattr_default_13;
        tmp_raise_type_13 = PyExc_TypeError;
        tmp_left_name_13 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_getattr_target_13 = tmp_class_creation_13__metaclass;
        tmp_getattr_attr_13 = mod_consts[54];
        tmp_getattr_default_13 = mod_consts[55];
        tmp_tuple_element_38 = BUILTIN_GETATTR(tmp_getattr_target_13, tmp_getattr_attr_13, tmp_getattr_default_13);
        if (tmp_tuple_element_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_39;
        }
        tmp_right_name_13 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_80;
            PyObject *tmp_type_arg_26;
            PyTuple_SET_ITEM(tmp_right_name_13, 0, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_type_arg_26 = tmp_class_creation_13__prepared;
            tmp_expression_name_80 = BUILTIN_TYPE1(tmp_type_arg_26);
            assert(!(tmp_expression_name_80 == NULL));
            tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tmp_expression_name_80, mod_consts[54]);
            Py_DECREF(tmp_expression_name_80);
            if (tmp_tuple_element_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_right_name_13, 1, tmp_tuple_element_38);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_right_name_13);
        goto try_except_handler_39;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_13, tmp_right_name_13);
        Py_DECREF(tmp_right_name_13);
        if (tmp_raise_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_39;
        }
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_value = tmp_raise_value_13;
        exception_lineno = 166;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_39;
    }
    branch_no_51:;
    goto branch_end_50;
    branch_no_50:;
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = PyDict_New();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_104;
    }
    branch_end_50:;
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_called_name_50;
        PyObject *tmp_called_name_51;
        PyObject *tmp_expression_name_81;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_args_element_name_32;
        tmp_expression_name_81 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_81 == NULL)) {
            tmp_expression_name_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_39;
        }
        tmp_called_name_51 = LOOKUP_ATTRIBUTE(tmp_expression_name_81, mod_consts[81]);
        if (tmp_called_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_39;
        }
        tmp_args_element_name_31 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_31 == NULL)) {
            tmp_args_element_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_51);

            exception_lineno = 165;

            goto try_except_handler_39;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 165;
        tmp_called_name_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_51, tmp_args_element_name_31);
        Py_DECREF(tmp_called_name_51);
        if (tmp_called_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_39;
        }
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_256_166 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_256_166, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_41;
        }
        tmp_dictset_value = mod_consts[111];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_256_166, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_41;
        }
        if (isFrameUnusable(cache_frame_dc13fb4c11c6d17a35a11019c23180dd_13)) {
            Py_XDECREF(cache_frame_dc13fb4c11c6d17a35a11019c23180dd_13);

#if _DEBUG_REFCOUNTS
            if (cache_frame_dc13fb4c11c6d17a35a11019c23180dd_13 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_dc13fb4c11c6d17a35a11019c23180dd_13 = MAKE_FUNCTION_FRAME(codeobj_dc13fb4c11c6d17a35a11019c23180dd, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_dc13fb4c11c6d17a35a11019c23180dd_13->m_type_description == NULL);
        frame_dc13fb4c11c6d17a35a11019c23180dd_13 = cache_frame_dc13fb4c11c6d17a35a11019c23180dd_13;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_dc13fb4c11c6d17a35a11019c23180dd_13);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_dc13fb4c11c6d17a35a11019c23180dd_13) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[112];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_256_166, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_2 = "o";
            goto frame_exception_exit_13;
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_256_166, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_2 = "o";
            goto frame_exception_exit_13;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_dc13fb4c11c6d17a35a11019c23180dd_13);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_12;

        frame_exception_exit_13:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_dc13fb4c11c6d17a35a11019c23180dd_13);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_dc13fb4c11c6d17a35a11019c23180dd_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_dc13fb4c11c6d17a35a11019c23180dd_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_dc13fb4c11c6d17a35a11019c23180dd_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_dc13fb4c11c6d17a35a11019c23180dd_13,
            type_description_2,
            outline_12_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_dc13fb4c11c6d17a35a11019c23180dd_13 == cache_frame_dc13fb4c11c6d17a35a11019c23180dd_13) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_dc13fb4c11c6d17a35a11019c23180dd_13);
            cache_frame_dc13fb4c11c6d17a35a11019c23180dd_13 = NULL;
        }

        assertFrameObject(frame_dc13fb4c11c6d17a35a11019c23180dd_13);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_12;

        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_41;
        skip_nested_handling_12:;
        {
            nuitka_bool tmp_condition_result_78;
            PyObject *tmp_compexpr_left_13;
            PyObject *tmp_compexpr_right_13;
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_compexpr_left_13 = tmp_class_creation_13__bases;
            tmp_compexpr_right_13 = mod_consts[49];
            tmp_condition_result_78 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_13, tmp_compexpr_right_13);
            if (tmp_condition_result_78 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto try_except_handler_41;
            }
            if (tmp_condition_result_78 == NUITKA_BOOL_TRUE) {
                goto branch_yes_52;
            } else {
                goto branch_no_52;
            }
            assert(tmp_condition_result_78 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_52:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_256_166, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_41;
        }
        branch_no_52:;
        {
            PyObject *tmp_assign_source_106;
            PyObject *tmp_called_name_52;
            PyObject *tmp_args_name_26;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_kwargs_name_26;
            CHECK_OBJECT(tmp_class_creation_13__metaclass);
            tmp_called_name_52 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_39 = mod_consts[111];
            tmp_args_name_26 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_26, 0, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_tuple_element_39 = tmp_class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_name_26, 1, tmp_tuple_element_39);
            tmp_tuple_element_39 = locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_256_166;
            PyTuple_SET_ITEM0(tmp_args_name_26, 2, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_name_26 = tmp_class_creation_13__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 166;
            tmp_assign_source_106 = CALL_FUNCTION(tmp_called_name_52, tmp_args_name_26, tmp_kwargs_name_26);
            Py_DECREF(tmp_args_name_26);
            if (tmp_assign_source_106 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto try_except_handler_41;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_106;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_args_element_name_32 = outline_12_var___class__;
        Py_INCREF(tmp_args_element_name_32);
        goto try_return_handler_41;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_41:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_256_166);
        locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_256_166 = NULL;
        goto try_return_handler_40;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_39 = exception_type;
        exception_keeper_value_39 = exception_value;
        exception_keeper_tb_39 = exception_tb;
        exception_keeper_lineno_39 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_256_166);
        locals_cryptography$hazmat$primitives$hashes$$$class__13_SHA3_256_166 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;
        exception_lineno = exception_keeper_lineno_39;

        goto try_except_handler_40;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_40:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;
        exception_lineno = exception_keeper_lineno_40;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 166;
        goto try_except_handler_39;
        outline_result_13:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 165;
        tmp_assign_source_105 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_50, tmp_args_element_name_32);
        Py_DECREF(tmp_called_name_50);
        Py_DECREF(tmp_args_element_name_32);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_39;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_105);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    Py_XDECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_dircall_arg1_14;
        tmp_dircall_arg1_14 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_14);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_14};
            tmp_assign_source_107 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_42;
        }
        assert(tmp_class_creation_14__bases == NULL);
        tmp_class_creation_14__bases = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = PyDict_New();
        assert(tmp_class_creation_14__class_decl_dict == NULL);
        tmp_class_creation_14__class_decl_dict = tmp_assign_source_108;
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_metaclass_name_14;
        nuitka_bool tmp_condition_result_79;
        PyObject *tmp_key_name_40;
        PyObject *tmp_dict_arg_name_40;
        PyObject *tmp_dict_arg_name_41;
        PyObject *tmp_key_name_41;
        nuitka_bool tmp_condition_result_80;
        int tmp_truth_name_14;
        PyObject *tmp_type_arg_27;
        PyObject *tmp_expression_name_82;
        PyObject *tmp_subscript_name_14;
        PyObject *tmp_bases_name_14;
        tmp_key_name_40 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_dict_arg_name_40 = tmp_class_creation_14__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_40, tmp_key_name_40);
        assert(!(tmp_res == -1));
        tmp_condition_result_79 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_79 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_27;
        } else {
            goto condexpr_false_27;
        }
        condexpr_true_27:;
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_dict_arg_name_41 = tmp_class_creation_14__class_decl_dict;
        tmp_key_name_41 = mod_consts[50];
        tmp_metaclass_name_14 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_41, tmp_key_name_41);
        if (tmp_metaclass_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_42;
        }
        goto condexpr_end_27;
        condexpr_false_27:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_creation_14__bases);
        if (tmp_truth_name_14 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_42;
        }
        tmp_condition_result_80 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_80 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_28;
        } else {
            goto condexpr_false_28;
        }
        condexpr_true_28:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_expression_name_82 = tmp_class_creation_14__bases;
        tmp_subscript_name_14 = mod_consts[39];
        tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_82, tmp_subscript_name_14, 0);
        if (tmp_type_arg_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_42;
        }
        tmp_metaclass_name_14 = BUILTIN_TYPE1(tmp_type_arg_27);
        Py_DECREF(tmp_type_arg_27);
        if (tmp_metaclass_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_42;
        }
        goto condexpr_end_28;
        condexpr_false_28:;
        tmp_metaclass_name_14 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_14);
        condexpr_end_28:;
        condexpr_end_27:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_bases_name_14 = tmp_class_creation_14__bases;
        tmp_assign_source_109 = SELECT_METACLASS(tmp_metaclass_name_14, tmp_bases_name_14);
        Py_DECREF(tmp_metaclass_name_14);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_42;
        }
        assert(tmp_class_creation_14__metaclass == NULL);
        tmp_class_creation_14__metaclass = tmp_assign_source_109;
    }
    {
        nuitka_bool tmp_condition_result_81;
        PyObject *tmp_key_name_42;
        PyObject *tmp_dict_arg_name_42;
        tmp_key_name_42 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_dict_arg_name_42 = tmp_class_creation_14__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_42, tmp_key_name_42);
        assert(!(tmp_res == -1));
        tmp_condition_result_81 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_81 == NUITKA_BOOL_TRUE) {
            goto branch_yes_53;
        } else {
            goto branch_no_53;
        }
    }
    branch_yes_53:;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_14__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 172;

        goto try_except_handler_42;
    }
    branch_no_53:;
    {
        nuitka_bool tmp_condition_result_82;
        PyObject *tmp_expression_name_83;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_name_83 = tmp_class_creation_14__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_83, mod_consts[51]);
        tmp_condition_result_82 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_82 == NUITKA_BOOL_TRUE) {
            goto branch_yes_54;
        } else {
            goto branch_no_54;
        }
    }
    branch_yes_54:;
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_called_name_53;
        PyObject *tmp_expression_name_84;
        PyObject *tmp_args_name_27;
        PyObject *tmp_tuple_element_40;
        PyObject *tmp_kwargs_name_27;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_name_84 = tmp_class_creation_14__metaclass;
        tmp_called_name_53 = LOOKUP_ATTRIBUTE(tmp_expression_name_84, mod_consts[51]);
        if (tmp_called_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_42;
        }
        tmp_tuple_element_40 = mod_consts[113];
        tmp_args_name_27 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_27, 0, tmp_tuple_element_40);
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_tuple_element_40 = tmp_class_creation_14__bases;
        PyTuple_SET_ITEM0(tmp_args_name_27, 1, tmp_tuple_element_40);
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_kwargs_name_27 = tmp_class_creation_14__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 172;
        tmp_assign_source_110 = CALL_FUNCTION(tmp_called_name_53, tmp_args_name_27, tmp_kwargs_name_27);
        Py_DECREF(tmp_called_name_53);
        Py_DECREF(tmp_args_name_27);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_42;
        }
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_110;
    }
    {
        nuitka_bool tmp_condition_result_83;
        PyObject *tmp_operand_name_14;
        PyObject *tmp_expression_name_85;
        CHECK_OBJECT(tmp_class_creation_14__prepared);
        tmp_expression_name_85 = tmp_class_creation_14__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_85, mod_consts[52]);
        tmp_operand_name_14 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_14);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_42;
        }
        tmp_condition_result_83 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_83 == NUITKA_BOOL_TRUE) {
            goto branch_yes_55;
        } else {
            goto branch_no_55;
        }
    }
    branch_yes_55:;
    {
        PyObject *tmp_raise_type_14;
        PyObject *tmp_raise_value_14;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_getattr_target_14;
        PyObject *tmp_getattr_attr_14;
        PyObject *tmp_getattr_default_14;
        tmp_raise_type_14 = PyExc_TypeError;
        tmp_left_name_14 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_getattr_target_14 = tmp_class_creation_14__metaclass;
        tmp_getattr_attr_14 = mod_consts[54];
        tmp_getattr_default_14 = mod_consts[55];
        tmp_tuple_element_41 = BUILTIN_GETATTR(tmp_getattr_target_14, tmp_getattr_attr_14, tmp_getattr_default_14);
        if (tmp_tuple_element_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_42;
        }
        tmp_right_name_14 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_86;
            PyObject *tmp_type_arg_28;
            PyTuple_SET_ITEM(tmp_right_name_14, 0, tmp_tuple_element_41);
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_type_arg_28 = tmp_class_creation_14__prepared;
            tmp_expression_name_86 = BUILTIN_TYPE1(tmp_type_arg_28);
            assert(!(tmp_expression_name_86 == NULL));
            tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tmp_expression_name_86, mod_consts[54]);
            Py_DECREF(tmp_expression_name_86);
            if (tmp_tuple_element_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_right_name_14, 1, tmp_tuple_element_41);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_right_name_14);
        goto try_except_handler_42;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_14, tmp_right_name_14);
        Py_DECREF(tmp_right_name_14);
        if (tmp_raise_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_42;
        }
        exception_type = tmp_raise_type_14;
        Py_INCREF(tmp_raise_type_14);
        exception_value = tmp_raise_value_14;
        exception_lineno = 172;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_42;
    }
    branch_no_55:;
    goto branch_end_54;
    branch_no_54:;
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = PyDict_New();
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_111;
    }
    branch_end_54:;
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_called_name_54;
        PyObject *tmp_called_name_55;
        PyObject *tmp_expression_name_87;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_args_element_name_34;
        tmp_expression_name_87 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_87 == NULL)) {
            tmp_expression_name_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_42;
        }
        tmp_called_name_55 = LOOKUP_ATTRIBUTE(tmp_expression_name_87, mod_consts[81]);
        if (tmp_called_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_42;
        }
        tmp_args_element_name_33 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_33 == NULL)) {
            tmp_args_element_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_55);

            exception_lineno = 171;

            goto try_except_handler_42;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 171;
        tmp_called_name_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_55, tmp_args_element_name_33);
        Py_DECREF(tmp_called_name_55);
        if (tmp_called_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_42;
        }
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_set_locals_14 = tmp_class_creation_14__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_384_172 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_384_172, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_44;
        }
        tmp_dictset_value = mod_consts[113];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_384_172, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_44;
        }
        if (isFrameUnusable(cache_frame_6fa823bf701770f9b62be3f854d31658_14)) {
            Py_XDECREF(cache_frame_6fa823bf701770f9b62be3f854d31658_14);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6fa823bf701770f9b62be3f854d31658_14 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6fa823bf701770f9b62be3f854d31658_14 = MAKE_FUNCTION_FRAME(codeobj_6fa823bf701770f9b62be3f854d31658, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6fa823bf701770f9b62be3f854d31658_14->m_type_description == NULL);
        frame_6fa823bf701770f9b62be3f854d31658_14 = cache_frame_6fa823bf701770f9b62be3f854d31658_14;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_6fa823bf701770f9b62be3f854d31658_14);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6fa823bf701770f9b62be3f854d31658_14) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[114];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_384_172, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_2 = "o";
            goto frame_exception_exit_14;
        }
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_384_172, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_2 = "o";
            goto frame_exception_exit_14;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6fa823bf701770f9b62be3f854d31658_14);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_13;

        frame_exception_exit_14:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6fa823bf701770f9b62be3f854d31658_14);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6fa823bf701770f9b62be3f854d31658_14, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6fa823bf701770f9b62be3f854d31658_14->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6fa823bf701770f9b62be3f854d31658_14, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6fa823bf701770f9b62be3f854d31658_14,
            type_description_2,
            outline_13_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_6fa823bf701770f9b62be3f854d31658_14 == cache_frame_6fa823bf701770f9b62be3f854d31658_14) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_6fa823bf701770f9b62be3f854d31658_14);
            cache_frame_6fa823bf701770f9b62be3f854d31658_14 = NULL;
        }

        assertFrameObject(frame_6fa823bf701770f9b62be3f854d31658_14);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_13;

        frame_no_exception_13:;
        goto skip_nested_handling_13;
        nested_frame_exit_13:;

        goto try_except_handler_44;
        skip_nested_handling_13:;
        {
            nuitka_bool tmp_condition_result_84;
            PyObject *tmp_compexpr_left_14;
            PyObject *tmp_compexpr_right_14;
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_compexpr_left_14 = tmp_class_creation_14__bases;
            tmp_compexpr_right_14 = mod_consts[49];
            tmp_condition_result_84 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_14, tmp_compexpr_right_14);
            if (tmp_condition_result_84 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto try_except_handler_44;
            }
            if (tmp_condition_result_84 == NUITKA_BOOL_TRUE) {
                goto branch_yes_56;
            } else {
                goto branch_no_56;
            }
            assert(tmp_condition_result_84 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_56:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_384_172, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_44;
        }
        branch_no_56:;
        {
            PyObject *tmp_assign_source_113;
            PyObject *tmp_called_name_56;
            PyObject *tmp_args_name_28;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_kwargs_name_28;
            CHECK_OBJECT(tmp_class_creation_14__metaclass);
            tmp_called_name_56 = tmp_class_creation_14__metaclass;
            tmp_tuple_element_42 = mod_consts[113];
            tmp_args_name_28 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_28, 0, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_tuple_element_42 = tmp_class_creation_14__bases;
            PyTuple_SET_ITEM0(tmp_args_name_28, 1, tmp_tuple_element_42);
            tmp_tuple_element_42 = locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_384_172;
            PyTuple_SET_ITEM0(tmp_args_name_28, 2, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
            tmp_kwargs_name_28 = tmp_class_creation_14__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 172;
            tmp_assign_source_113 = CALL_FUNCTION(tmp_called_name_56, tmp_args_name_28, tmp_kwargs_name_28);
            Py_DECREF(tmp_args_name_28);
            if (tmp_assign_source_113 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto try_except_handler_44;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_113;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_args_element_name_34 = outline_13_var___class__;
        Py_INCREF(tmp_args_element_name_34);
        goto try_return_handler_44;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_44:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_384_172);
        locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_384_172 = NULL;
        goto try_return_handler_43;
        // Exception handler code:
        try_except_handler_44:;
        exception_keeper_type_42 = exception_type;
        exception_keeper_value_42 = exception_value;
        exception_keeper_tb_42 = exception_tb;
        exception_keeper_lineno_42 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_384_172);
        locals_cryptography$hazmat$primitives$hashes$$$class__14_SHA3_384_172 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_42;
        exception_value = exception_keeper_value_42;
        exception_tb = exception_keeper_tb_42;
        exception_lineno = exception_keeper_lineno_42;

        goto try_except_handler_43;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_43:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_43:;
        exception_keeper_type_43 = exception_type;
        exception_keeper_value_43 = exception_value;
        exception_keeper_tb_43 = exception_tb;
        exception_keeper_lineno_43 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_43;
        exception_value = exception_keeper_value_43;
        exception_tb = exception_keeper_tb_43;
        exception_lineno = exception_keeper_lineno_43;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 172;
        goto try_except_handler_42;
        outline_result_14:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 171;
        tmp_assign_source_112 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_54, tmp_args_element_name_34);
        Py_DECREF(tmp_called_name_54);
        Py_DECREF(tmp_args_element_name_34);
        if (tmp_assign_source_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_42;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_112);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    Py_XDECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_44;
    exception_value = exception_keeper_value_44;
    exception_tb = exception_keeper_tb_44;
    exception_lineno = exception_keeper_lineno_44;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    Py_XDECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    Py_XDECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_14__prepared);
    Py_DECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_dircall_arg1_15;
        tmp_dircall_arg1_15 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_15);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_15};
            tmp_assign_source_114 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_45;
        }
        assert(tmp_class_creation_15__bases == NULL);
        tmp_class_creation_15__bases = tmp_assign_source_114;
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = PyDict_New();
        assert(tmp_class_creation_15__class_decl_dict == NULL);
        tmp_class_creation_15__class_decl_dict = tmp_assign_source_115;
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_metaclass_name_15;
        nuitka_bool tmp_condition_result_85;
        PyObject *tmp_key_name_43;
        PyObject *tmp_dict_arg_name_43;
        PyObject *tmp_dict_arg_name_44;
        PyObject *tmp_key_name_44;
        nuitka_bool tmp_condition_result_86;
        int tmp_truth_name_15;
        PyObject *tmp_type_arg_29;
        PyObject *tmp_expression_name_88;
        PyObject *tmp_subscript_name_15;
        PyObject *tmp_bases_name_15;
        tmp_key_name_43 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_dict_arg_name_43 = tmp_class_creation_15__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_43, tmp_key_name_43);
        assert(!(tmp_res == -1));
        tmp_condition_result_85 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_85 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_29;
        } else {
            goto condexpr_false_29;
        }
        condexpr_true_29:;
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_dict_arg_name_44 = tmp_class_creation_15__class_decl_dict;
        tmp_key_name_44 = mod_consts[50];
        tmp_metaclass_name_15 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_44, tmp_key_name_44);
        if (tmp_metaclass_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_45;
        }
        goto condexpr_end_29;
        condexpr_false_29:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_creation_15__bases);
        if (tmp_truth_name_15 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_45;
        }
        tmp_condition_result_86 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_86 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_30;
        } else {
            goto condexpr_false_30;
        }
        condexpr_true_30:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_expression_name_88 = tmp_class_creation_15__bases;
        tmp_subscript_name_15 = mod_consts[39];
        tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_88, tmp_subscript_name_15, 0);
        if (tmp_type_arg_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_45;
        }
        tmp_metaclass_name_15 = BUILTIN_TYPE1(tmp_type_arg_29);
        Py_DECREF(tmp_type_arg_29);
        if (tmp_metaclass_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_45;
        }
        goto condexpr_end_30;
        condexpr_false_30:;
        tmp_metaclass_name_15 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_15);
        condexpr_end_30:;
        condexpr_end_29:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_bases_name_15 = tmp_class_creation_15__bases;
        tmp_assign_source_116 = SELECT_METACLASS(tmp_metaclass_name_15, tmp_bases_name_15);
        Py_DECREF(tmp_metaclass_name_15);
        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_45;
        }
        assert(tmp_class_creation_15__metaclass == NULL);
        tmp_class_creation_15__metaclass = tmp_assign_source_116;
    }
    {
        nuitka_bool tmp_condition_result_87;
        PyObject *tmp_key_name_45;
        PyObject *tmp_dict_arg_name_45;
        tmp_key_name_45 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_dict_arg_name_45 = tmp_class_creation_15__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_45, tmp_key_name_45);
        assert(!(tmp_res == -1));
        tmp_condition_result_87 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_87 == NUITKA_BOOL_TRUE) {
            goto branch_yes_57;
        } else {
            goto branch_no_57;
        }
    }
    branch_yes_57:;
    CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_15__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 178;

        goto try_except_handler_45;
    }
    branch_no_57:;
    {
        nuitka_bool tmp_condition_result_88;
        PyObject *tmp_expression_name_89;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_name_89 = tmp_class_creation_15__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_89, mod_consts[51]);
        tmp_condition_result_88 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_88 == NUITKA_BOOL_TRUE) {
            goto branch_yes_58;
        } else {
            goto branch_no_58;
        }
    }
    branch_yes_58:;
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_called_name_57;
        PyObject *tmp_expression_name_90;
        PyObject *tmp_args_name_29;
        PyObject *tmp_tuple_element_43;
        PyObject *tmp_kwargs_name_29;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_name_90 = tmp_class_creation_15__metaclass;
        tmp_called_name_57 = LOOKUP_ATTRIBUTE(tmp_expression_name_90, mod_consts[51]);
        if (tmp_called_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_45;
        }
        tmp_tuple_element_43 = mod_consts[115];
        tmp_args_name_29 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_29, 0, tmp_tuple_element_43);
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_tuple_element_43 = tmp_class_creation_15__bases;
        PyTuple_SET_ITEM0(tmp_args_name_29, 1, tmp_tuple_element_43);
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_kwargs_name_29 = tmp_class_creation_15__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 178;
        tmp_assign_source_117 = CALL_FUNCTION(tmp_called_name_57, tmp_args_name_29, tmp_kwargs_name_29);
        Py_DECREF(tmp_called_name_57);
        Py_DECREF(tmp_args_name_29);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_45;
        }
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_117;
    }
    {
        nuitka_bool tmp_condition_result_89;
        PyObject *tmp_operand_name_15;
        PyObject *tmp_expression_name_91;
        CHECK_OBJECT(tmp_class_creation_15__prepared);
        tmp_expression_name_91 = tmp_class_creation_15__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_91, mod_consts[52]);
        tmp_operand_name_15 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_15);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_45;
        }
        tmp_condition_result_89 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_89 == NUITKA_BOOL_TRUE) {
            goto branch_yes_59;
        } else {
            goto branch_no_59;
        }
    }
    branch_yes_59:;
    {
        PyObject *tmp_raise_type_15;
        PyObject *tmp_raise_value_15;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        PyObject *tmp_tuple_element_44;
        PyObject *tmp_getattr_target_15;
        PyObject *tmp_getattr_attr_15;
        PyObject *tmp_getattr_default_15;
        tmp_raise_type_15 = PyExc_TypeError;
        tmp_left_name_15 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_getattr_target_15 = tmp_class_creation_15__metaclass;
        tmp_getattr_attr_15 = mod_consts[54];
        tmp_getattr_default_15 = mod_consts[55];
        tmp_tuple_element_44 = BUILTIN_GETATTR(tmp_getattr_target_15, tmp_getattr_attr_15, tmp_getattr_default_15);
        if (tmp_tuple_element_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_45;
        }
        tmp_right_name_15 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_92;
            PyObject *tmp_type_arg_30;
            PyTuple_SET_ITEM(tmp_right_name_15, 0, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_type_arg_30 = tmp_class_creation_15__prepared;
            tmp_expression_name_92 = BUILTIN_TYPE1(tmp_type_arg_30);
            assert(!(tmp_expression_name_92 == NULL));
            tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tmp_expression_name_92, mod_consts[54]);
            Py_DECREF(tmp_expression_name_92);
            if (tmp_tuple_element_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_right_name_15, 1, tmp_tuple_element_44);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_right_name_15);
        goto try_except_handler_45;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_raise_value_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_15, tmp_right_name_15);
        Py_DECREF(tmp_right_name_15);
        if (tmp_raise_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_45;
        }
        exception_type = tmp_raise_type_15;
        Py_INCREF(tmp_raise_type_15);
        exception_value = tmp_raise_value_15;
        exception_lineno = 178;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_45;
    }
    branch_no_59:;
    goto branch_end_58;
    branch_no_58:;
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = PyDict_New();
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_118;
    }
    branch_end_58:;
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_name_58;
        PyObject *tmp_called_name_59;
        PyObject *tmp_expression_name_93;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_args_element_name_36;
        tmp_expression_name_93 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_93 == NULL)) {
            tmp_expression_name_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_45;
        }
        tmp_called_name_59 = LOOKUP_ATTRIBUTE(tmp_expression_name_93, mod_consts[81]);
        if (tmp_called_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_45;
        }
        tmp_args_element_name_35 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_35 == NULL)) {
            tmp_args_element_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_59);

            exception_lineno = 177;

            goto try_except_handler_45;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 177;
        tmp_called_name_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_59, tmp_args_element_name_35);
        Py_DECREF(tmp_called_name_59);
        if (tmp_called_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_45;
        }
        {
            PyObject *tmp_set_locals_15;
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_set_locals_15 = tmp_class_creation_15__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__15_SHA3_512_178 = tmp_set_locals_15;
            Py_INCREF(tmp_set_locals_15);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHA3_512_178, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_47;
        }
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHA3_512_178, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_47;
        }
        if (isFrameUnusable(cache_frame_3f365587bfd2ad4e9a8389800a8e0639_15)) {
            Py_XDECREF(cache_frame_3f365587bfd2ad4e9a8389800a8e0639_15);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3f365587bfd2ad4e9a8389800a8e0639_15 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3f365587bfd2ad4e9a8389800a8e0639_15 = MAKE_FUNCTION_FRAME(codeobj_3f365587bfd2ad4e9a8389800a8e0639, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_3f365587bfd2ad4e9a8389800a8e0639_15->m_type_description == NULL);
        frame_3f365587bfd2ad4e9a8389800a8e0639_15 = cache_frame_3f365587bfd2ad4e9a8389800a8e0639_15;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_3f365587bfd2ad4e9a8389800a8e0639_15);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_3f365587bfd2ad4e9a8389800a8e0639_15) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHA3_512_178, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_2 = "o";
            goto frame_exception_exit_15;
        }
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHA3_512_178, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_2 = "o";
            goto frame_exception_exit_15;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3f365587bfd2ad4e9a8389800a8e0639_15);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_14;

        frame_exception_exit_15:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3f365587bfd2ad4e9a8389800a8e0639_15);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3f365587bfd2ad4e9a8389800a8e0639_15, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3f365587bfd2ad4e9a8389800a8e0639_15->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3f365587bfd2ad4e9a8389800a8e0639_15, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3f365587bfd2ad4e9a8389800a8e0639_15,
            type_description_2,
            outline_14_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_3f365587bfd2ad4e9a8389800a8e0639_15 == cache_frame_3f365587bfd2ad4e9a8389800a8e0639_15) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_3f365587bfd2ad4e9a8389800a8e0639_15);
            cache_frame_3f365587bfd2ad4e9a8389800a8e0639_15 = NULL;
        }

        assertFrameObject(frame_3f365587bfd2ad4e9a8389800a8e0639_15);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_14;

        frame_no_exception_14:;
        goto skip_nested_handling_14;
        nested_frame_exit_14:;

        goto try_except_handler_47;
        skip_nested_handling_14:;
        {
            nuitka_bool tmp_condition_result_90;
            PyObject *tmp_compexpr_left_15;
            PyObject *tmp_compexpr_right_15;
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_compexpr_left_15 = tmp_class_creation_15__bases;
            tmp_compexpr_right_15 = mod_consts[49];
            tmp_condition_result_90 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_15, tmp_compexpr_right_15);
            if (tmp_condition_result_90 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto try_except_handler_47;
            }
            if (tmp_condition_result_90 == NUITKA_BOOL_TRUE) {
                goto branch_yes_60;
            } else {
                goto branch_no_60;
            }
            assert(tmp_condition_result_90 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_60:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHA3_512_178, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto try_except_handler_47;
        }
        branch_no_60:;
        {
            PyObject *tmp_assign_source_120;
            PyObject *tmp_called_name_60;
            PyObject *tmp_args_name_30;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_kwargs_name_30;
            CHECK_OBJECT(tmp_class_creation_15__metaclass);
            tmp_called_name_60 = tmp_class_creation_15__metaclass;
            tmp_tuple_element_45 = mod_consts[115];
            tmp_args_name_30 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_30, 0, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_tuple_element_45 = tmp_class_creation_15__bases;
            PyTuple_SET_ITEM0(tmp_args_name_30, 1, tmp_tuple_element_45);
            tmp_tuple_element_45 = locals_cryptography$hazmat$primitives$hashes$$$class__15_SHA3_512_178;
            PyTuple_SET_ITEM0(tmp_args_name_30, 2, tmp_tuple_element_45);
            CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
            tmp_kwargs_name_30 = tmp_class_creation_15__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 178;
            tmp_assign_source_120 = CALL_FUNCTION(tmp_called_name_60, tmp_args_name_30, tmp_kwargs_name_30);
            Py_DECREF(tmp_args_name_30);
            if (tmp_assign_source_120 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto try_except_handler_47;
            }
            assert(outline_14_var___class__ == NULL);
            outline_14_var___class__ = tmp_assign_source_120;
        }
        CHECK_OBJECT(outline_14_var___class__);
        tmp_args_element_name_36 = outline_14_var___class__;
        Py_INCREF(tmp_args_element_name_36);
        goto try_return_handler_47;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_47:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHA3_512_178);
        locals_cryptography$hazmat$primitives$hashes$$$class__15_SHA3_512_178 = NULL;
        goto try_return_handler_46;
        // Exception handler code:
        try_except_handler_47:;
        exception_keeper_type_45 = exception_type;
        exception_keeper_value_45 = exception_value;
        exception_keeper_tb_45 = exception_tb;
        exception_keeper_lineno_45 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__15_SHA3_512_178);
        locals_cryptography$hazmat$primitives$hashes$$$class__15_SHA3_512_178 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_45;
        exception_value = exception_keeper_value_45;
        exception_tb = exception_keeper_tb_45;
        exception_lineno = exception_keeper_lineno_45;

        goto try_except_handler_46;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_46:;
        CHECK_OBJECT(outline_14_var___class__);
        Py_DECREF(outline_14_var___class__);
        outline_14_var___class__ = NULL;
        goto outline_result_15;
        // Exception handler code:
        try_except_handler_46:;
        exception_keeper_type_46 = exception_type;
        exception_keeper_value_46 = exception_value;
        exception_keeper_tb_46 = exception_tb;
        exception_keeper_lineno_46 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_46;
        exception_value = exception_keeper_value_46;
        exception_tb = exception_keeper_tb_46;
        exception_lineno = exception_keeper_lineno_46;

        goto outline_exception_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_15:;
        exception_lineno = 178;
        goto try_except_handler_45;
        outline_result_15:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 177;
        tmp_assign_source_119 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_58, tmp_args_element_name_36);
        Py_DECREF(tmp_called_name_58);
        Py_DECREF(tmp_args_element_name_36);
        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_45;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_119);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    Py_XDECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_47;
    exception_value = exception_keeper_value_47;
    exception_tb = exception_keeper_tb_47;
    exception_lineno = exception_keeper_lineno_47;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    Py_XDECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    Py_XDECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_15__prepared);
    Py_DECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_dircall_arg1_16;
        tmp_dircall_arg1_16 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_16);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_16};
            tmp_assign_source_121 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_48;
        }
        assert(tmp_class_creation_16__bases == NULL);
        tmp_class_creation_16__bases = tmp_assign_source_121;
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = PyDict_New();
        assert(tmp_class_creation_16__class_decl_dict == NULL);
        tmp_class_creation_16__class_decl_dict = tmp_assign_source_122;
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_metaclass_name_16;
        nuitka_bool tmp_condition_result_91;
        PyObject *tmp_key_name_46;
        PyObject *tmp_dict_arg_name_46;
        PyObject *tmp_dict_arg_name_47;
        PyObject *tmp_key_name_47;
        nuitka_bool tmp_condition_result_92;
        int tmp_truth_name_16;
        PyObject *tmp_type_arg_31;
        PyObject *tmp_expression_name_94;
        PyObject *tmp_subscript_name_16;
        PyObject *tmp_bases_name_16;
        tmp_key_name_46 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_dict_arg_name_46 = tmp_class_creation_16__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_46, tmp_key_name_46);
        assert(!(tmp_res == -1));
        tmp_condition_result_91 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_91 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_31;
        } else {
            goto condexpr_false_31;
        }
        condexpr_true_31:;
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_dict_arg_name_47 = tmp_class_creation_16__class_decl_dict;
        tmp_key_name_47 = mod_consts[50];
        tmp_metaclass_name_16 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_47, tmp_key_name_47);
        if (tmp_metaclass_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_48;
        }
        goto condexpr_end_31;
        condexpr_false_31:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_creation_16__bases);
        if (tmp_truth_name_16 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_48;
        }
        tmp_condition_result_92 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_92 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_32;
        } else {
            goto condexpr_false_32;
        }
        condexpr_true_32:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_expression_name_94 = tmp_class_creation_16__bases;
        tmp_subscript_name_16 = mod_consts[39];
        tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_94, tmp_subscript_name_16, 0);
        if (tmp_type_arg_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_48;
        }
        tmp_metaclass_name_16 = BUILTIN_TYPE1(tmp_type_arg_31);
        Py_DECREF(tmp_type_arg_31);
        if (tmp_metaclass_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_48;
        }
        goto condexpr_end_32;
        condexpr_false_32:;
        tmp_metaclass_name_16 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_16);
        condexpr_end_32:;
        condexpr_end_31:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_bases_name_16 = tmp_class_creation_16__bases;
        tmp_assign_source_123 = SELECT_METACLASS(tmp_metaclass_name_16, tmp_bases_name_16);
        Py_DECREF(tmp_metaclass_name_16);
        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_48;
        }
        assert(tmp_class_creation_16__metaclass == NULL);
        tmp_class_creation_16__metaclass = tmp_assign_source_123;
    }
    {
        nuitka_bool tmp_condition_result_93;
        PyObject *tmp_key_name_48;
        PyObject *tmp_dict_arg_name_48;
        tmp_key_name_48 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_dict_arg_name_48 = tmp_class_creation_16__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_48, tmp_key_name_48);
        assert(!(tmp_res == -1));
        tmp_condition_result_93 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_93 == NUITKA_BOOL_TRUE) {
            goto branch_yes_61;
        } else {
            goto branch_no_61;
        }
    }
    branch_yes_61:;
    CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_16__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 185;

        goto try_except_handler_48;
    }
    branch_no_61:;
    {
        nuitka_bool tmp_condition_result_94;
        PyObject *tmp_expression_name_95;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_name_95 = tmp_class_creation_16__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_95, mod_consts[51]);
        tmp_condition_result_94 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_94 == NUITKA_BOOL_TRUE) {
            goto branch_yes_62;
        } else {
            goto branch_no_62;
        }
    }
    branch_yes_62:;
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_called_name_61;
        PyObject *tmp_expression_name_96;
        PyObject *tmp_args_name_31;
        PyObject *tmp_tuple_element_46;
        PyObject *tmp_kwargs_name_31;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_name_96 = tmp_class_creation_16__metaclass;
        tmp_called_name_61 = LOOKUP_ATTRIBUTE(tmp_expression_name_96, mod_consts[51]);
        if (tmp_called_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_48;
        }
        tmp_tuple_element_46 = mod_consts[117];
        tmp_args_name_31 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_31, 0, tmp_tuple_element_46);
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_tuple_element_46 = tmp_class_creation_16__bases;
        PyTuple_SET_ITEM0(tmp_args_name_31, 1, tmp_tuple_element_46);
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_kwargs_name_31 = tmp_class_creation_16__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 185;
        tmp_assign_source_124 = CALL_FUNCTION(tmp_called_name_61, tmp_args_name_31, tmp_kwargs_name_31);
        Py_DECREF(tmp_called_name_61);
        Py_DECREF(tmp_args_name_31);
        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_48;
        }
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_124;
    }
    {
        nuitka_bool tmp_condition_result_95;
        PyObject *tmp_operand_name_16;
        PyObject *tmp_expression_name_97;
        CHECK_OBJECT(tmp_class_creation_16__prepared);
        tmp_expression_name_97 = tmp_class_creation_16__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_97, mod_consts[52]);
        tmp_operand_name_16 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_16);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_48;
        }
        tmp_condition_result_95 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_95 == NUITKA_BOOL_TRUE) {
            goto branch_yes_63;
        } else {
            goto branch_no_63;
        }
    }
    branch_yes_63:;
    {
        PyObject *tmp_raise_type_16;
        PyObject *tmp_raise_value_16;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        PyObject *tmp_tuple_element_47;
        PyObject *tmp_getattr_target_16;
        PyObject *tmp_getattr_attr_16;
        PyObject *tmp_getattr_default_16;
        tmp_raise_type_16 = PyExc_TypeError;
        tmp_left_name_16 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_getattr_target_16 = tmp_class_creation_16__metaclass;
        tmp_getattr_attr_16 = mod_consts[54];
        tmp_getattr_default_16 = mod_consts[55];
        tmp_tuple_element_47 = BUILTIN_GETATTR(tmp_getattr_target_16, tmp_getattr_attr_16, tmp_getattr_default_16);
        if (tmp_tuple_element_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_48;
        }
        tmp_right_name_16 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_98;
            PyObject *tmp_type_arg_32;
            PyTuple_SET_ITEM(tmp_right_name_16, 0, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_type_arg_32 = tmp_class_creation_16__prepared;
            tmp_expression_name_98 = BUILTIN_TYPE1(tmp_type_arg_32);
            assert(!(tmp_expression_name_98 == NULL));
            tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tmp_expression_name_98, mod_consts[54]);
            Py_DECREF(tmp_expression_name_98);
            if (tmp_tuple_element_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_right_name_16, 1, tmp_tuple_element_47);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_right_name_16);
        goto try_except_handler_48;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_16, tmp_right_name_16);
        Py_DECREF(tmp_right_name_16);
        if (tmp_raise_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_48;
        }
        exception_type = tmp_raise_type_16;
        Py_INCREF(tmp_raise_type_16);
        exception_value = tmp_raise_value_16;
        exception_lineno = 185;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_48;
    }
    branch_no_63:;
    goto branch_end_62;
    branch_no_62:;
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = PyDict_New();
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_125;
    }
    branch_end_62:;
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_called_name_62;
        PyObject *tmp_called_name_63;
        PyObject *tmp_expression_name_99;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_called_name_64;
        PyObject *tmp_called_name_65;
        PyObject *tmp_expression_name_100;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_args_element_name_40;
        tmp_expression_name_99 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_99 == NULL)) {
            tmp_expression_name_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_48;
        }
        tmp_called_name_63 = LOOKUP_ATTRIBUTE(tmp_expression_name_99, mod_consts[81]);
        if (tmp_called_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_48;
        }
        tmp_args_element_name_37 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_37 == NULL)) {
            tmp_args_element_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_63);

            exception_lineno = 183;

            goto try_except_handler_48;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 183;
        tmp_called_name_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_63, tmp_args_element_name_37);
        Py_DECREF(tmp_called_name_63);
        if (tmp_called_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_48;
        }
        tmp_expression_name_100 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_100 == NULL)) {
            tmp_expression_name_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_62);

            exception_lineno = 184;

            goto try_except_handler_48;
        }
        tmp_called_name_65 = LOOKUP_ATTRIBUTE(tmp_expression_name_100, mod_consts[81]);
        if (tmp_called_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_62);

            exception_lineno = 184;

            goto try_except_handler_48;
        }
        tmp_args_element_name_39 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_args_element_name_39 == NULL)) {
            tmp_args_element_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_args_element_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_62);
            Py_DECREF(tmp_called_name_65);

            exception_lineno = 184;

            goto try_except_handler_48;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 184;
        tmp_called_name_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_65, tmp_args_element_name_39);
        Py_DECREF(tmp_called_name_65);
        if (tmp_called_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_62);

            exception_lineno = 184;

            goto try_except_handler_48;
        }
        {
            PyObject *tmp_set_locals_16;
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_set_locals_16 = tmp_class_creation_16__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE128_185 = tmp_set_locals_16;
            Py_INCREF(tmp_set_locals_16);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE128_185, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_50;
        }
        tmp_dictset_value = mod_consts[117];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE128_185, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_50;
        }
        if (isFrameUnusable(cache_frame_89ff903c8701cd022d741fca21c110b0_16)) {
            Py_XDECREF(cache_frame_89ff903c8701cd022d741fca21c110b0_16);

#if _DEBUG_REFCOUNTS
            if (cache_frame_89ff903c8701cd022d741fca21c110b0_16 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_89ff903c8701cd022d741fca21c110b0_16 = MAKE_FUNCTION_FRAME(codeobj_89ff903c8701cd022d741fca21c110b0, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_89ff903c8701cd022d741fca21c110b0_16->m_type_description == NULL);
        frame_89ff903c8701cd022d741fca21c110b0_16 = cache_frame_89ff903c8701cd022d741fca21c110b0_16;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_89ff903c8701cd022d741fca21c110b0_16);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_89ff903c8701cd022d741fca21c110b0_16) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[118];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE128_185, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_2 = "o";
            goto frame_exception_exit_16;
        }


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__11___init__();

        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE128_185, mod_consts[83], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_2 = "o";
            goto frame_exception_exit_16;
        }
        {
            PyObject *tmp_called_instance_8;
            tmp_called_instance_8 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE128_185, mod_consts[14]);

            if (tmp_called_instance_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_8 == NULL)) {
                        tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                    }

                    if (tmp_called_instance_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 197;
                        type_description_2 = "o";
                        goto frame_exception_exit_16;
                    }
                    Py_INCREF(tmp_called_instance_8);
                } else {
                    goto frame_exception_exit_16;
                }
            }

            frame_89ff903c8701cd022d741fca21c110b0_16->m_frame.f_lineno = 197;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_8,
                mod_consts[85],
                PyTuple_GET_ITEM(mod_consts[120], 0)
            );

            Py_DECREF(tmp_called_instance_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_16;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE128_185, mod_consts[66], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_16;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_89ff903c8701cd022d741fca21c110b0_16);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_15;

        frame_exception_exit_16:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_89ff903c8701cd022d741fca21c110b0_16);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_89ff903c8701cd022d741fca21c110b0_16, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_89ff903c8701cd022d741fca21c110b0_16->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_89ff903c8701cd022d741fca21c110b0_16, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_89ff903c8701cd022d741fca21c110b0_16,
            type_description_2,
            outline_15_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_89ff903c8701cd022d741fca21c110b0_16 == cache_frame_89ff903c8701cd022d741fca21c110b0_16) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_89ff903c8701cd022d741fca21c110b0_16);
            cache_frame_89ff903c8701cd022d741fca21c110b0_16 = NULL;
        }

        assertFrameObject(frame_89ff903c8701cd022d741fca21c110b0_16);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_15;

        frame_no_exception_15:;
        goto skip_nested_handling_15;
        nested_frame_exit_15:;

        goto try_except_handler_50;
        skip_nested_handling_15:;
        {
            nuitka_bool tmp_condition_result_96;
            PyObject *tmp_compexpr_left_16;
            PyObject *tmp_compexpr_right_16;
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_compexpr_left_16 = tmp_class_creation_16__bases;
            tmp_compexpr_right_16 = mod_consts[49];
            tmp_condition_result_96 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_16, tmp_compexpr_right_16);
            if (tmp_condition_result_96 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto try_except_handler_50;
            }
            if (tmp_condition_result_96 == NUITKA_BOOL_TRUE) {
                goto branch_yes_64;
            } else {
                goto branch_no_64;
            }
            assert(tmp_condition_result_96 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_64:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE128_185, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_50;
        }
        branch_no_64:;
        {
            PyObject *tmp_assign_source_127;
            PyObject *tmp_called_name_66;
            PyObject *tmp_args_name_32;
            PyObject *tmp_tuple_element_48;
            PyObject *tmp_kwargs_name_32;
            CHECK_OBJECT(tmp_class_creation_16__metaclass);
            tmp_called_name_66 = tmp_class_creation_16__metaclass;
            tmp_tuple_element_48 = mod_consts[117];
            tmp_args_name_32 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_32, 0, tmp_tuple_element_48);
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_tuple_element_48 = tmp_class_creation_16__bases;
            PyTuple_SET_ITEM0(tmp_args_name_32, 1, tmp_tuple_element_48);
            tmp_tuple_element_48 = locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE128_185;
            PyTuple_SET_ITEM0(tmp_args_name_32, 2, tmp_tuple_element_48);
            CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
            tmp_kwargs_name_32 = tmp_class_creation_16__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 185;
            tmp_assign_source_127 = CALL_FUNCTION(tmp_called_name_66, tmp_args_name_32, tmp_kwargs_name_32);
            Py_DECREF(tmp_args_name_32);
            if (tmp_assign_source_127 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto try_except_handler_50;
            }
            assert(outline_15_var___class__ == NULL);
            outline_15_var___class__ = tmp_assign_source_127;
        }
        CHECK_OBJECT(outline_15_var___class__);
        tmp_args_element_name_40 = outline_15_var___class__;
        Py_INCREF(tmp_args_element_name_40);
        goto try_return_handler_50;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_50:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE128_185);
        locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE128_185 = NULL;
        goto try_return_handler_49;
        // Exception handler code:
        try_except_handler_50:;
        exception_keeper_type_48 = exception_type;
        exception_keeper_value_48 = exception_value;
        exception_keeper_tb_48 = exception_tb;
        exception_keeper_lineno_48 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE128_185);
        locals_cryptography$hazmat$primitives$hashes$$$class__16_SHAKE128_185 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_48;
        exception_value = exception_keeper_value_48;
        exception_tb = exception_keeper_tb_48;
        exception_lineno = exception_keeper_lineno_48;

        goto try_except_handler_49;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_49:;
        CHECK_OBJECT(outline_15_var___class__);
        Py_DECREF(outline_15_var___class__);
        outline_15_var___class__ = NULL;
        goto outline_result_16;
        // Exception handler code:
        try_except_handler_49:;
        exception_keeper_type_49 = exception_type;
        exception_keeper_value_49 = exception_value;
        exception_keeper_tb_49 = exception_tb;
        exception_keeper_lineno_49 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_49;
        exception_value = exception_keeper_value_49;
        exception_tb = exception_keeper_tb_49;
        exception_lineno = exception_keeper_lineno_49;

        goto outline_exception_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_16:;
        exception_lineno = 185;
        goto try_except_handler_48;
        outline_result_16:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 184;
        tmp_args_element_name_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_64, tmp_args_element_name_40);
        Py_DECREF(tmp_called_name_64);
        Py_DECREF(tmp_args_element_name_40);
        if (tmp_args_element_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_62);

            exception_lineno = 184;

            goto try_except_handler_48;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 183;
        tmp_assign_source_126 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_62, tmp_args_element_name_38);
        Py_DECREF(tmp_called_name_62);
        Py_DECREF(tmp_args_element_name_38);
        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto try_except_handler_48;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_126);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_keeper_lineno_50 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    Py_XDECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_50;
    exception_value = exception_keeper_value_50;
    exception_tb = exception_keeper_tb_50;
    exception_lineno = exception_keeper_lineno_50;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    Py_XDECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    Py_XDECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_16__prepared);
    Py_DECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_dircall_arg1_17;
        tmp_dircall_arg1_17 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_17);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_17};
            tmp_assign_source_128 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_51;
        }
        assert(tmp_class_creation_17__bases == NULL);
        tmp_class_creation_17__bases = tmp_assign_source_128;
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = PyDict_New();
        assert(tmp_class_creation_17__class_decl_dict == NULL);
        tmp_class_creation_17__class_decl_dict = tmp_assign_source_129;
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_metaclass_name_17;
        nuitka_bool tmp_condition_result_97;
        PyObject *tmp_key_name_49;
        PyObject *tmp_dict_arg_name_49;
        PyObject *tmp_dict_arg_name_50;
        PyObject *tmp_key_name_50;
        nuitka_bool tmp_condition_result_98;
        int tmp_truth_name_17;
        PyObject *tmp_type_arg_33;
        PyObject *tmp_expression_name_101;
        PyObject *tmp_subscript_name_17;
        PyObject *tmp_bases_name_17;
        tmp_key_name_49 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
        tmp_dict_arg_name_49 = tmp_class_creation_17__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_49, tmp_key_name_49);
        assert(!(tmp_res == -1));
        tmp_condition_result_97 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_97 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_33;
        } else {
            goto condexpr_false_33;
        }
        condexpr_true_33:;
        CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
        tmp_dict_arg_name_50 = tmp_class_creation_17__class_decl_dict;
        tmp_key_name_50 = mod_consts[50];
        tmp_metaclass_name_17 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_50, tmp_key_name_50);
        if (tmp_metaclass_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_51;
        }
        goto condexpr_end_33;
        condexpr_false_33:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_creation_17__bases);
        if (tmp_truth_name_17 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_51;
        }
        tmp_condition_result_98 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_98 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_34;
        } else {
            goto condexpr_false_34;
        }
        condexpr_true_34:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_expression_name_101 = tmp_class_creation_17__bases;
        tmp_subscript_name_17 = mod_consts[39];
        tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_101, tmp_subscript_name_17, 0);
        if (tmp_type_arg_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_51;
        }
        tmp_metaclass_name_17 = BUILTIN_TYPE1(tmp_type_arg_33);
        Py_DECREF(tmp_type_arg_33);
        if (tmp_metaclass_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_51;
        }
        goto condexpr_end_34;
        condexpr_false_34:;
        tmp_metaclass_name_17 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_17);
        condexpr_end_34:;
        condexpr_end_33:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_bases_name_17 = tmp_class_creation_17__bases;
        tmp_assign_source_130 = SELECT_METACLASS(tmp_metaclass_name_17, tmp_bases_name_17);
        Py_DECREF(tmp_metaclass_name_17);
        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_51;
        }
        assert(tmp_class_creation_17__metaclass == NULL);
        tmp_class_creation_17__metaclass = tmp_assign_source_130;
    }
    {
        nuitka_bool tmp_condition_result_99;
        PyObject *tmp_key_name_51;
        PyObject *tmp_dict_arg_name_51;
        tmp_key_name_51 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
        tmp_dict_arg_name_51 = tmp_class_creation_17__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_51, tmp_key_name_51);
        assert(!(tmp_res == -1));
        tmp_condition_result_99 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_99 == NUITKA_BOOL_TRUE) {
            goto branch_yes_65;
        } else {
            goto branch_no_65;
        }
    }
    branch_yes_65:;
    CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_17__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 202;

        goto try_except_handler_51;
    }
    branch_no_65:;
    {
        nuitka_bool tmp_condition_result_100;
        PyObject *tmp_expression_name_102;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_name_102 = tmp_class_creation_17__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_102, mod_consts[51]);
        tmp_condition_result_100 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_100 == NUITKA_BOOL_TRUE) {
            goto branch_yes_66;
        } else {
            goto branch_no_66;
        }
    }
    branch_yes_66:;
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_called_name_67;
        PyObject *tmp_expression_name_103;
        PyObject *tmp_args_name_33;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_kwargs_name_33;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_name_103 = tmp_class_creation_17__metaclass;
        tmp_called_name_67 = LOOKUP_ATTRIBUTE(tmp_expression_name_103, mod_consts[51]);
        if (tmp_called_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_51;
        }
        tmp_tuple_element_49 = mod_consts[121];
        tmp_args_name_33 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_33, 0, tmp_tuple_element_49);
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_tuple_element_49 = tmp_class_creation_17__bases;
        PyTuple_SET_ITEM0(tmp_args_name_33, 1, tmp_tuple_element_49);
        CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
        tmp_kwargs_name_33 = tmp_class_creation_17__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 202;
        tmp_assign_source_131 = CALL_FUNCTION(tmp_called_name_67, tmp_args_name_33, tmp_kwargs_name_33);
        Py_DECREF(tmp_called_name_67);
        Py_DECREF(tmp_args_name_33);
        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_51;
        }
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_131;
    }
    {
        nuitka_bool tmp_condition_result_101;
        PyObject *tmp_operand_name_17;
        PyObject *tmp_expression_name_104;
        CHECK_OBJECT(tmp_class_creation_17__prepared);
        tmp_expression_name_104 = tmp_class_creation_17__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_104, mod_consts[52]);
        tmp_operand_name_17 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_17);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_51;
        }
        tmp_condition_result_101 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_101 == NUITKA_BOOL_TRUE) {
            goto branch_yes_67;
        } else {
            goto branch_no_67;
        }
    }
    branch_yes_67:;
    {
        PyObject *tmp_raise_type_17;
        PyObject *tmp_raise_value_17;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        PyObject *tmp_tuple_element_50;
        PyObject *tmp_getattr_target_17;
        PyObject *tmp_getattr_attr_17;
        PyObject *tmp_getattr_default_17;
        tmp_raise_type_17 = PyExc_TypeError;
        tmp_left_name_17 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_getattr_target_17 = tmp_class_creation_17__metaclass;
        tmp_getattr_attr_17 = mod_consts[54];
        tmp_getattr_default_17 = mod_consts[55];
        tmp_tuple_element_50 = BUILTIN_GETATTR(tmp_getattr_target_17, tmp_getattr_attr_17, tmp_getattr_default_17);
        if (tmp_tuple_element_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_51;
        }
        tmp_right_name_17 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_105;
            PyObject *tmp_type_arg_34;
            PyTuple_SET_ITEM(tmp_right_name_17, 0, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_type_arg_34 = tmp_class_creation_17__prepared;
            tmp_expression_name_105 = BUILTIN_TYPE1(tmp_type_arg_34);
            assert(!(tmp_expression_name_105 == NULL));
            tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tmp_expression_name_105, mod_consts[54]);
            Py_DECREF(tmp_expression_name_105);
            if (tmp_tuple_element_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_right_name_17, 1, tmp_tuple_element_50);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_right_name_17);
        goto try_except_handler_51;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_raise_value_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_17, tmp_right_name_17);
        Py_DECREF(tmp_right_name_17);
        if (tmp_raise_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_51;
        }
        exception_type = tmp_raise_type_17;
        Py_INCREF(tmp_raise_type_17);
        exception_value = tmp_raise_value_17;
        exception_lineno = 202;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_51;
    }
    branch_no_67:;
    goto branch_end_66;
    branch_no_66:;
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = PyDict_New();
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_132;
    }
    branch_end_66:;
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_called_name_68;
        PyObject *tmp_called_name_69;
        PyObject *tmp_expression_name_106;
        PyObject *tmp_args_element_name_41;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_called_name_70;
        PyObject *tmp_called_name_71;
        PyObject *tmp_expression_name_107;
        PyObject *tmp_args_element_name_43;
        PyObject *tmp_args_element_name_44;
        tmp_expression_name_106 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_106 == NULL)) {
            tmp_expression_name_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_51;
        }
        tmp_called_name_69 = LOOKUP_ATTRIBUTE(tmp_expression_name_106, mod_consts[81]);
        if (tmp_called_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_51;
        }
        tmp_args_element_name_41 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_41 == NULL)) {
            tmp_args_element_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_69);

            exception_lineno = 200;

            goto try_except_handler_51;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 200;
        tmp_called_name_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_69, tmp_args_element_name_41);
        Py_DECREF(tmp_called_name_69);
        if (tmp_called_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_51;
        }
        tmp_expression_name_107 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_107 == NULL)) {
            tmp_expression_name_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_68);

            exception_lineno = 201;

            goto try_except_handler_51;
        }
        tmp_called_name_71 = LOOKUP_ATTRIBUTE(tmp_expression_name_107, mod_consts[81]);
        if (tmp_called_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_68);

            exception_lineno = 201;

            goto try_except_handler_51;
        }
        tmp_args_element_name_43 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_args_element_name_43 == NULL)) {
            tmp_args_element_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_args_element_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_68);
            Py_DECREF(tmp_called_name_71);

            exception_lineno = 201;

            goto try_except_handler_51;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 201;
        tmp_called_name_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_71, tmp_args_element_name_43);
        Py_DECREF(tmp_called_name_71);
        if (tmp_called_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_68);

            exception_lineno = 201;

            goto try_except_handler_51;
        }
        {
            PyObject *tmp_set_locals_17;
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_set_locals_17 = tmp_class_creation_17__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__17_SHAKE256_202 = tmp_set_locals_17;
            Py_INCREF(tmp_set_locals_17);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__17_SHAKE256_202, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_53;
        }
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__17_SHAKE256_202, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_53;
        }
        if (isFrameUnusable(cache_frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17)) {
            Py_XDECREF(cache_frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17);

#if _DEBUG_REFCOUNTS
            if (cache_frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17 = MAKE_FUNCTION_FRAME(codeobj_82dd8ecfbebcf2da30cbdb8c1ef9b874, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17->m_type_description == NULL);
        frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17 = cache_frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[122];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__17_SHAKE256_202, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_2 = "o";
            goto frame_exception_exit_17;
        }


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__12___init__();

        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__17_SHAKE256_202, mod_consts[83], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_2 = "o";
            goto frame_exception_exit_17;
        }
        {
            PyObject *tmp_called_instance_9;
            tmp_called_instance_9 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__17_SHAKE256_202, mod_consts[14]);

            if (tmp_called_instance_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_9 == NULL)) {
                        tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                    }

                    if (tmp_called_instance_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 214;
                        type_description_2 = "o";
                        goto frame_exception_exit_17;
                    }
                    Py_INCREF(tmp_called_instance_9);
                } else {
                    goto frame_exception_exit_17;
                }
            }

            frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17->m_frame.f_lineno = 214;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_9,
                mod_consts[85],
                PyTuple_GET_ITEM(mod_consts[120], 0)
            );

            Py_DECREF(tmp_called_instance_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__17_SHAKE256_202, mod_consts[66], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_17;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_16;

        frame_exception_exit_17:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17,
            type_description_2,
            outline_16_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17 == cache_frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17);
            cache_frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17 = NULL;
        }

        assertFrameObject(frame_82dd8ecfbebcf2da30cbdb8c1ef9b874_17);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_16;

        frame_no_exception_16:;
        goto skip_nested_handling_16;
        nested_frame_exit_16:;

        goto try_except_handler_53;
        skip_nested_handling_16:;
        {
            nuitka_bool tmp_condition_result_102;
            PyObject *tmp_compexpr_left_17;
            PyObject *tmp_compexpr_right_17;
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_compexpr_left_17 = tmp_class_creation_17__bases;
            tmp_compexpr_right_17 = mod_consts[49];
            tmp_condition_result_102 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_17, tmp_compexpr_right_17);
            if (tmp_condition_result_102 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto try_except_handler_53;
            }
            if (tmp_condition_result_102 == NUITKA_BOOL_TRUE) {
                goto branch_yes_68;
            } else {
                goto branch_no_68;
            }
            assert(tmp_condition_result_102 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_68:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__17_SHAKE256_202, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_53;
        }
        branch_no_68:;
        {
            PyObject *tmp_assign_source_134;
            PyObject *tmp_called_name_72;
            PyObject *tmp_args_name_34;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_kwargs_name_34;
            CHECK_OBJECT(tmp_class_creation_17__metaclass);
            tmp_called_name_72 = tmp_class_creation_17__metaclass;
            tmp_tuple_element_51 = mod_consts[121];
            tmp_args_name_34 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_34, 0, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_tuple_element_51 = tmp_class_creation_17__bases;
            PyTuple_SET_ITEM0(tmp_args_name_34, 1, tmp_tuple_element_51);
            tmp_tuple_element_51 = locals_cryptography$hazmat$primitives$hashes$$$class__17_SHAKE256_202;
            PyTuple_SET_ITEM0(tmp_args_name_34, 2, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
            tmp_kwargs_name_34 = tmp_class_creation_17__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 202;
            tmp_assign_source_134 = CALL_FUNCTION(tmp_called_name_72, tmp_args_name_34, tmp_kwargs_name_34);
            Py_DECREF(tmp_args_name_34);
            if (tmp_assign_source_134 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto try_except_handler_53;
            }
            assert(outline_16_var___class__ == NULL);
            outline_16_var___class__ = tmp_assign_source_134;
        }
        CHECK_OBJECT(outline_16_var___class__);
        tmp_args_element_name_44 = outline_16_var___class__;
        Py_INCREF(tmp_args_element_name_44);
        goto try_return_handler_53;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_53:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__17_SHAKE256_202);
        locals_cryptography$hazmat$primitives$hashes$$$class__17_SHAKE256_202 = NULL;
        goto try_return_handler_52;
        // Exception handler code:
        try_except_handler_53:;
        exception_keeper_type_51 = exception_type;
        exception_keeper_value_51 = exception_value;
        exception_keeper_tb_51 = exception_tb;
        exception_keeper_lineno_51 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__17_SHAKE256_202);
        locals_cryptography$hazmat$primitives$hashes$$$class__17_SHAKE256_202 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_51;
        exception_value = exception_keeper_value_51;
        exception_tb = exception_keeper_tb_51;
        exception_lineno = exception_keeper_lineno_51;

        goto try_except_handler_52;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_52:;
        CHECK_OBJECT(outline_16_var___class__);
        Py_DECREF(outline_16_var___class__);
        outline_16_var___class__ = NULL;
        goto outline_result_17;
        // Exception handler code:
        try_except_handler_52:;
        exception_keeper_type_52 = exception_type;
        exception_keeper_value_52 = exception_value;
        exception_keeper_tb_52 = exception_tb;
        exception_keeper_lineno_52 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_52;
        exception_value = exception_keeper_value_52;
        exception_tb = exception_keeper_tb_52;
        exception_lineno = exception_keeper_lineno_52;

        goto outline_exception_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_17:;
        exception_lineno = 202;
        goto try_except_handler_51;
        outline_result_17:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 201;
        tmp_args_element_name_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_70, tmp_args_element_name_44);
        Py_DECREF(tmp_called_name_70);
        Py_DECREF(tmp_args_element_name_44);
        if (tmp_args_element_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_68);

            exception_lineno = 201;

            goto try_except_handler_51;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 200;
        tmp_assign_source_133 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_68, tmp_args_element_name_42);
        Py_DECREF(tmp_called_name_68);
        Py_DECREF(tmp_args_element_name_42);
        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_51;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_133);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    Py_XDECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    Py_XDECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    Py_XDECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_17__prepared);
    Py_DECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_dircall_arg1_18;
        tmp_dircall_arg1_18 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_18);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_18};
            tmp_assign_source_135 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto try_except_handler_54;
        }
        assert(tmp_class_creation_18__bases == NULL);
        tmp_class_creation_18__bases = tmp_assign_source_135;
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = PyDict_New();
        assert(tmp_class_creation_18__class_decl_dict == NULL);
        tmp_class_creation_18__class_decl_dict = tmp_assign_source_136;
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_metaclass_name_18;
        nuitka_bool tmp_condition_result_103;
        PyObject *tmp_key_name_52;
        PyObject *tmp_dict_arg_name_52;
        PyObject *tmp_dict_arg_name_53;
        PyObject *tmp_key_name_53;
        nuitka_bool tmp_condition_result_104;
        int tmp_truth_name_18;
        PyObject *tmp_type_arg_35;
        PyObject *tmp_expression_name_108;
        PyObject *tmp_subscript_name_18;
        PyObject *tmp_bases_name_18;
        tmp_key_name_52 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
        tmp_dict_arg_name_52 = tmp_class_creation_18__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_52, tmp_key_name_52);
        assert(!(tmp_res == -1));
        tmp_condition_result_103 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_103 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_35;
        } else {
            goto condexpr_false_35;
        }
        condexpr_true_35:;
        CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
        tmp_dict_arg_name_53 = tmp_class_creation_18__class_decl_dict;
        tmp_key_name_53 = mod_consts[50];
        tmp_metaclass_name_18 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_53, tmp_key_name_53);
        if (tmp_metaclass_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto try_except_handler_54;
        }
        goto condexpr_end_35;
        condexpr_false_35:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_truth_name_18 = CHECK_IF_TRUE(tmp_class_creation_18__bases);
        if (tmp_truth_name_18 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto try_except_handler_54;
        }
        tmp_condition_result_104 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_104 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_36;
        } else {
            goto condexpr_false_36;
        }
        condexpr_true_36:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_expression_name_108 = tmp_class_creation_18__bases;
        tmp_subscript_name_18 = mod_consts[39];
        tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_108, tmp_subscript_name_18, 0);
        if (tmp_type_arg_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto try_except_handler_54;
        }
        tmp_metaclass_name_18 = BUILTIN_TYPE1(tmp_type_arg_35);
        Py_DECREF(tmp_type_arg_35);
        if (tmp_metaclass_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto try_except_handler_54;
        }
        goto condexpr_end_36;
        condexpr_false_36:;
        tmp_metaclass_name_18 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_18);
        condexpr_end_36:;
        condexpr_end_35:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_bases_name_18 = tmp_class_creation_18__bases;
        tmp_assign_source_137 = SELECT_METACLASS(tmp_metaclass_name_18, tmp_bases_name_18);
        Py_DECREF(tmp_metaclass_name_18);
        if (tmp_assign_source_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto try_except_handler_54;
        }
        assert(tmp_class_creation_18__metaclass == NULL);
        tmp_class_creation_18__metaclass = tmp_assign_source_137;
    }
    {
        nuitka_bool tmp_condition_result_105;
        PyObject *tmp_key_name_54;
        PyObject *tmp_dict_arg_name_54;
        tmp_key_name_54 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
        tmp_dict_arg_name_54 = tmp_class_creation_18__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_54, tmp_key_name_54);
        assert(!(tmp_res == -1));
        tmp_condition_result_105 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_105 == NUITKA_BOOL_TRUE) {
            goto branch_yes_69;
        } else {
            goto branch_no_69;
        }
    }
    branch_yes_69:;
    CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_18__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 218;

        goto try_except_handler_54;
    }
    branch_no_69:;
    {
        nuitka_bool tmp_condition_result_106;
        PyObject *tmp_expression_name_109;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_name_109 = tmp_class_creation_18__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_109, mod_consts[51]);
        tmp_condition_result_106 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_106 == NUITKA_BOOL_TRUE) {
            goto branch_yes_70;
        } else {
            goto branch_no_70;
        }
    }
    branch_yes_70:;
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_called_name_73;
        PyObject *tmp_expression_name_110;
        PyObject *tmp_args_name_35;
        PyObject *tmp_tuple_element_52;
        PyObject *tmp_kwargs_name_35;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_name_110 = tmp_class_creation_18__metaclass;
        tmp_called_name_73 = LOOKUP_ATTRIBUTE(tmp_expression_name_110, mod_consts[51]);
        if (tmp_called_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto try_except_handler_54;
        }
        tmp_tuple_element_52 = mod_consts[124];
        tmp_args_name_35 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_35, 0, tmp_tuple_element_52);
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_tuple_element_52 = tmp_class_creation_18__bases;
        PyTuple_SET_ITEM0(tmp_args_name_35, 1, tmp_tuple_element_52);
        CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
        tmp_kwargs_name_35 = tmp_class_creation_18__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 218;
        tmp_assign_source_138 = CALL_FUNCTION(tmp_called_name_73, tmp_args_name_35, tmp_kwargs_name_35);
        Py_DECREF(tmp_called_name_73);
        Py_DECREF(tmp_args_name_35);
        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto try_except_handler_54;
        }
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_138;
    }
    {
        nuitka_bool tmp_condition_result_107;
        PyObject *tmp_operand_name_18;
        PyObject *tmp_expression_name_111;
        CHECK_OBJECT(tmp_class_creation_18__prepared);
        tmp_expression_name_111 = tmp_class_creation_18__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_111, mod_consts[52]);
        tmp_operand_name_18 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_18);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto try_except_handler_54;
        }
        tmp_condition_result_107 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_107 == NUITKA_BOOL_TRUE) {
            goto branch_yes_71;
        } else {
            goto branch_no_71;
        }
    }
    branch_yes_71:;
    {
        PyObject *tmp_raise_type_18;
        PyObject *tmp_raise_value_18;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_18;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_getattr_target_18;
        PyObject *tmp_getattr_attr_18;
        PyObject *tmp_getattr_default_18;
        tmp_raise_type_18 = PyExc_TypeError;
        tmp_left_name_18 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_getattr_target_18 = tmp_class_creation_18__metaclass;
        tmp_getattr_attr_18 = mod_consts[54];
        tmp_getattr_default_18 = mod_consts[55];
        tmp_tuple_element_53 = BUILTIN_GETATTR(tmp_getattr_target_18, tmp_getattr_attr_18, tmp_getattr_default_18);
        if (tmp_tuple_element_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto try_except_handler_54;
        }
        tmp_right_name_18 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_112;
            PyObject *tmp_type_arg_36;
            PyTuple_SET_ITEM(tmp_right_name_18, 0, tmp_tuple_element_53);
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_type_arg_36 = tmp_class_creation_18__prepared;
            tmp_expression_name_112 = BUILTIN_TYPE1(tmp_type_arg_36);
            assert(!(tmp_expression_name_112 == NULL));
            tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tmp_expression_name_112, mod_consts[54]);
            Py_DECREF(tmp_expression_name_112);
            if (tmp_tuple_element_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_right_name_18, 1, tmp_tuple_element_53);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_right_name_18);
        goto try_except_handler_54;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_raise_value_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_18, tmp_right_name_18);
        Py_DECREF(tmp_right_name_18);
        if (tmp_raise_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto try_except_handler_54;
        }
        exception_type = tmp_raise_type_18;
        Py_INCREF(tmp_raise_type_18);
        exception_value = tmp_raise_value_18;
        exception_lineno = 218;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_54;
    }
    branch_no_71:;
    goto branch_end_70;
    branch_no_70:;
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = PyDict_New();
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_139;
    }
    branch_end_70:;
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_called_name_74;
        PyObject *tmp_called_name_75;
        PyObject *tmp_expression_name_113;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_args_element_name_46;
        tmp_expression_name_113 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_113 == NULL)) {
            tmp_expression_name_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_54;
        }
        tmp_called_name_75 = LOOKUP_ATTRIBUTE(tmp_expression_name_113, mod_consts[81]);
        if (tmp_called_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_54;
        }
        tmp_args_element_name_45 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_45 == NULL)) {
            tmp_args_element_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_75);

            exception_lineno = 217;

            goto try_except_handler_54;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 217;
        tmp_called_name_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_75, tmp_args_element_name_45);
        Py_DECREF(tmp_called_name_75);
        if (tmp_called_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_54;
        }
        {
            PyObject *tmp_set_locals_18;
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_set_locals_18 = tmp_class_creation_18__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__18_MD5_218 = tmp_set_locals_18;
            Py_INCREF(tmp_set_locals_18);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_MD5_218, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto try_except_handler_56;
        }
        tmp_dictset_value = mod_consts[124];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_MD5_218, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto try_except_handler_56;
        }
        if (isFrameUnusable(cache_frame_45b10d6a330c885bf2cec77d91a9a6b2_18)) {
            Py_XDECREF(cache_frame_45b10d6a330c885bf2cec77d91a9a6b2_18);

#if _DEBUG_REFCOUNTS
            if (cache_frame_45b10d6a330c885bf2cec77d91a9a6b2_18 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_45b10d6a330c885bf2cec77d91a9a6b2_18 = MAKE_FUNCTION_FRAME(codeobj_45b10d6a330c885bf2cec77d91a9a6b2, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_45b10d6a330c885bf2cec77d91a9a6b2_18->m_type_description == NULL);
        frame_45b10d6a330c885bf2cec77d91a9a6b2_18 = cache_frame_45b10d6a330c885bf2cec77d91a9a6b2_18;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_45b10d6a330c885bf2cec77d91a9a6b2_18);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_45b10d6a330c885bf2cec77d91a9a6b2_18) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[125];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_MD5_218, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_2 = "o";
            goto frame_exception_exit_18;
        }
        tmp_dictset_value = mod_consts[126];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_MD5_218, mod_consts[66], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_2 = "o";
            goto frame_exception_exit_18;
        }
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_MD5_218, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_2 = "o";
            goto frame_exception_exit_18;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_45b10d6a330c885bf2cec77d91a9a6b2_18);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_17;

        frame_exception_exit_18:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_45b10d6a330c885bf2cec77d91a9a6b2_18);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_45b10d6a330c885bf2cec77d91a9a6b2_18, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_45b10d6a330c885bf2cec77d91a9a6b2_18->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_45b10d6a330c885bf2cec77d91a9a6b2_18, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_45b10d6a330c885bf2cec77d91a9a6b2_18,
            type_description_2,
            outline_17_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_45b10d6a330c885bf2cec77d91a9a6b2_18 == cache_frame_45b10d6a330c885bf2cec77d91a9a6b2_18) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_45b10d6a330c885bf2cec77d91a9a6b2_18);
            cache_frame_45b10d6a330c885bf2cec77d91a9a6b2_18 = NULL;
        }

        assertFrameObject(frame_45b10d6a330c885bf2cec77d91a9a6b2_18);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_17;

        frame_no_exception_17:;
        goto skip_nested_handling_17;
        nested_frame_exit_17:;

        goto try_except_handler_56;
        skip_nested_handling_17:;
        {
            nuitka_bool tmp_condition_result_108;
            PyObject *tmp_compexpr_left_18;
            PyObject *tmp_compexpr_right_18;
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_compexpr_left_18 = tmp_class_creation_18__bases;
            tmp_compexpr_right_18 = mod_consts[49];
            tmp_condition_result_108 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_18, tmp_compexpr_right_18);
            if (tmp_condition_result_108 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto try_except_handler_56;
            }
            if (tmp_condition_result_108 == NUITKA_BOOL_TRUE) {
                goto branch_yes_72;
            } else {
                goto branch_no_72;
            }
            assert(tmp_condition_result_108 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_72:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__18_MD5_218, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto try_except_handler_56;
        }
        branch_no_72:;
        {
            PyObject *tmp_assign_source_141;
            PyObject *tmp_called_name_76;
            PyObject *tmp_args_name_36;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_kwargs_name_36;
            CHECK_OBJECT(tmp_class_creation_18__metaclass);
            tmp_called_name_76 = tmp_class_creation_18__metaclass;
            tmp_tuple_element_54 = mod_consts[124];
            tmp_args_name_36 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_36, 0, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_tuple_element_54 = tmp_class_creation_18__bases;
            PyTuple_SET_ITEM0(tmp_args_name_36, 1, tmp_tuple_element_54);
            tmp_tuple_element_54 = locals_cryptography$hazmat$primitives$hashes$$$class__18_MD5_218;
            PyTuple_SET_ITEM0(tmp_args_name_36, 2, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
            tmp_kwargs_name_36 = tmp_class_creation_18__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 218;
            tmp_assign_source_141 = CALL_FUNCTION(tmp_called_name_76, tmp_args_name_36, tmp_kwargs_name_36);
            Py_DECREF(tmp_args_name_36);
            if (tmp_assign_source_141 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto try_except_handler_56;
            }
            assert(outline_17_var___class__ == NULL);
            outline_17_var___class__ = tmp_assign_source_141;
        }
        CHECK_OBJECT(outline_17_var___class__);
        tmp_args_element_name_46 = outline_17_var___class__;
        Py_INCREF(tmp_args_element_name_46);
        goto try_return_handler_56;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_56:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__18_MD5_218);
        locals_cryptography$hazmat$primitives$hashes$$$class__18_MD5_218 = NULL;
        goto try_return_handler_55;
        // Exception handler code:
        try_except_handler_56:;
        exception_keeper_type_54 = exception_type;
        exception_keeper_value_54 = exception_value;
        exception_keeper_tb_54 = exception_tb;
        exception_keeper_lineno_54 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__18_MD5_218);
        locals_cryptography$hazmat$primitives$hashes$$$class__18_MD5_218 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_54;
        exception_value = exception_keeper_value_54;
        exception_tb = exception_keeper_tb_54;
        exception_lineno = exception_keeper_lineno_54;

        goto try_except_handler_55;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_55:;
        CHECK_OBJECT(outline_17_var___class__);
        Py_DECREF(outline_17_var___class__);
        outline_17_var___class__ = NULL;
        goto outline_result_18;
        // Exception handler code:
        try_except_handler_55:;
        exception_keeper_type_55 = exception_type;
        exception_keeper_value_55 = exception_value;
        exception_keeper_tb_55 = exception_tb;
        exception_keeper_lineno_55 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_55;
        exception_value = exception_keeper_value_55;
        exception_tb = exception_keeper_tb_55;
        exception_lineno = exception_keeper_lineno_55;

        goto outline_exception_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_18:;
        exception_lineno = 218;
        goto try_except_handler_54;
        outline_result_18:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 217;
        tmp_assign_source_140 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_74, tmp_args_element_name_46);
        Py_DECREF(tmp_called_name_74);
        Py_DECREF(tmp_args_element_name_46);
        if (tmp_assign_source_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_54;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_140);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_type_56 = exception_type;
    exception_keeper_value_56 = exception_value;
    exception_keeper_tb_56 = exception_tb;
    exception_keeper_lineno_56 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    Py_XDECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_56;
    exception_value = exception_keeper_value_56;
    exception_tb = exception_keeper_tb_56;
    exception_lineno = exception_keeper_lineno_56;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    Py_XDECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    Py_XDECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_18__prepared);
    Py_DECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_dircall_arg1_19;
        tmp_dircall_arg1_19 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_19);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_19};
            tmp_assign_source_142 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_57;
        }
        assert(tmp_class_creation_19__bases == NULL);
        tmp_class_creation_19__bases = tmp_assign_source_142;
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = PyDict_New();
        assert(tmp_class_creation_19__class_decl_dict == NULL);
        tmp_class_creation_19__class_decl_dict = tmp_assign_source_143;
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_metaclass_name_19;
        nuitka_bool tmp_condition_result_109;
        PyObject *tmp_key_name_55;
        PyObject *tmp_dict_arg_name_55;
        PyObject *tmp_dict_arg_name_56;
        PyObject *tmp_key_name_56;
        nuitka_bool tmp_condition_result_110;
        int tmp_truth_name_19;
        PyObject *tmp_type_arg_37;
        PyObject *tmp_expression_name_114;
        PyObject *tmp_subscript_name_19;
        PyObject *tmp_bases_name_19;
        tmp_key_name_55 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
        tmp_dict_arg_name_55 = tmp_class_creation_19__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_55, tmp_key_name_55);
        assert(!(tmp_res == -1));
        tmp_condition_result_109 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_109 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_37;
        } else {
            goto condexpr_false_37;
        }
        condexpr_true_37:;
        CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
        tmp_dict_arg_name_56 = tmp_class_creation_19__class_decl_dict;
        tmp_key_name_56 = mod_consts[50];
        tmp_metaclass_name_19 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_56, tmp_key_name_56);
        if (tmp_metaclass_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_57;
        }
        goto condexpr_end_37;
        condexpr_false_37:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_truth_name_19 = CHECK_IF_TRUE(tmp_class_creation_19__bases);
        if (tmp_truth_name_19 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_57;
        }
        tmp_condition_result_110 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_110 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_38;
        } else {
            goto condexpr_false_38;
        }
        condexpr_true_38:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_expression_name_114 = tmp_class_creation_19__bases;
        tmp_subscript_name_19 = mod_consts[39];
        tmp_type_arg_37 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_114, tmp_subscript_name_19, 0);
        if (tmp_type_arg_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_57;
        }
        tmp_metaclass_name_19 = BUILTIN_TYPE1(tmp_type_arg_37);
        Py_DECREF(tmp_type_arg_37);
        if (tmp_metaclass_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_57;
        }
        goto condexpr_end_38;
        condexpr_false_38:;
        tmp_metaclass_name_19 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_19);
        condexpr_end_38:;
        condexpr_end_37:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_bases_name_19 = tmp_class_creation_19__bases;
        tmp_assign_source_144 = SELECT_METACLASS(tmp_metaclass_name_19, tmp_bases_name_19);
        Py_DECREF(tmp_metaclass_name_19);
        if (tmp_assign_source_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_57;
        }
        assert(tmp_class_creation_19__metaclass == NULL);
        tmp_class_creation_19__metaclass = tmp_assign_source_144;
    }
    {
        nuitka_bool tmp_condition_result_111;
        PyObject *tmp_key_name_57;
        PyObject *tmp_dict_arg_name_57;
        tmp_key_name_57 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
        tmp_dict_arg_name_57 = tmp_class_creation_19__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_57, tmp_key_name_57);
        assert(!(tmp_res == -1));
        tmp_condition_result_111 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_111 == NUITKA_BOOL_TRUE) {
            goto branch_yes_73;
        } else {
            goto branch_no_73;
        }
    }
    branch_yes_73:;
    CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_19__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 225;

        goto try_except_handler_57;
    }
    branch_no_73:;
    {
        nuitka_bool tmp_condition_result_112;
        PyObject *tmp_expression_name_115;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_name_115 = tmp_class_creation_19__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_115, mod_consts[51]);
        tmp_condition_result_112 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_112 == NUITKA_BOOL_TRUE) {
            goto branch_yes_74;
        } else {
            goto branch_no_74;
        }
    }
    branch_yes_74:;
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_called_name_77;
        PyObject *tmp_expression_name_116;
        PyObject *tmp_args_name_37;
        PyObject *tmp_tuple_element_55;
        PyObject *tmp_kwargs_name_37;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_name_116 = tmp_class_creation_19__metaclass;
        tmp_called_name_77 = LOOKUP_ATTRIBUTE(tmp_expression_name_116, mod_consts[51]);
        if (tmp_called_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_57;
        }
        tmp_tuple_element_55 = mod_consts[127];
        tmp_args_name_37 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_37, 0, tmp_tuple_element_55);
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_tuple_element_55 = tmp_class_creation_19__bases;
        PyTuple_SET_ITEM0(tmp_args_name_37, 1, tmp_tuple_element_55);
        CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
        tmp_kwargs_name_37 = tmp_class_creation_19__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 225;
        tmp_assign_source_145 = CALL_FUNCTION(tmp_called_name_77, tmp_args_name_37, tmp_kwargs_name_37);
        Py_DECREF(tmp_called_name_77);
        Py_DECREF(tmp_args_name_37);
        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_57;
        }
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_145;
    }
    {
        nuitka_bool tmp_condition_result_113;
        PyObject *tmp_operand_name_19;
        PyObject *tmp_expression_name_117;
        CHECK_OBJECT(tmp_class_creation_19__prepared);
        tmp_expression_name_117 = tmp_class_creation_19__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_117, mod_consts[52]);
        tmp_operand_name_19 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_19);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_57;
        }
        tmp_condition_result_113 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_113 == NUITKA_BOOL_TRUE) {
            goto branch_yes_75;
        } else {
            goto branch_no_75;
        }
    }
    branch_yes_75:;
    {
        PyObject *tmp_raise_type_19;
        PyObject *tmp_raise_value_19;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        PyObject *tmp_tuple_element_56;
        PyObject *tmp_getattr_target_19;
        PyObject *tmp_getattr_attr_19;
        PyObject *tmp_getattr_default_19;
        tmp_raise_type_19 = PyExc_TypeError;
        tmp_left_name_19 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_getattr_target_19 = tmp_class_creation_19__metaclass;
        tmp_getattr_attr_19 = mod_consts[54];
        tmp_getattr_default_19 = mod_consts[55];
        tmp_tuple_element_56 = BUILTIN_GETATTR(tmp_getattr_target_19, tmp_getattr_attr_19, tmp_getattr_default_19);
        if (tmp_tuple_element_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_57;
        }
        tmp_right_name_19 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_118;
            PyObject *tmp_type_arg_38;
            PyTuple_SET_ITEM(tmp_right_name_19, 0, tmp_tuple_element_56);
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_type_arg_38 = tmp_class_creation_19__prepared;
            tmp_expression_name_118 = BUILTIN_TYPE1(tmp_type_arg_38);
            assert(!(tmp_expression_name_118 == NULL));
            tmp_tuple_element_56 = LOOKUP_ATTRIBUTE(tmp_expression_name_118, mod_consts[54]);
            Py_DECREF(tmp_expression_name_118);
            if (tmp_tuple_element_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_right_name_19, 1, tmp_tuple_element_56);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_right_name_19);
        goto try_except_handler_57;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_raise_value_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_19, tmp_right_name_19);
        Py_DECREF(tmp_right_name_19);
        if (tmp_raise_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_57;
        }
        exception_type = tmp_raise_type_19;
        Py_INCREF(tmp_raise_type_19);
        exception_value = tmp_raise_value_19;
        exception_lineno = 225;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_57;
    }
    branch_no_75:;
    goto branch_end_74;
    branch_no_74:;
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = PyDict_New();
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_146;
    }
    branch_end_74:;
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_called_name_78;
        PyObject *tmp_called_name_79;
        PyObject *tmp_expression_name_119;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_args_element_name_48;
        tmp_expression_name_119 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_119 == NULL)) {
            tmp_expression_name_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto try_except_handler_57;
        }
        tmp_called_name_79 = LOOKUP_ATTRIBUTE(tmp_expression_name_119, mod_consts[81]);
        if (tmp_called_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto try_except_handler_57;
        }
        tmp_args_element_name_47 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_47 == NULL)) {
            tmp_args_element_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_79);

            exception_lineno = 224;

            goto try_except_handler_57;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 224;
        tmp_called_name_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_79, tmp_args_element_name_47);
        Py_DECREF(tmp_called_name_79);
        if (tmp_called_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto try_except_handler_57;
        }
        {
            PyObject *tmp_set_locals_19;
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_set_locals_19 = tmp_class_creation_19__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225 = tmp_set_locals_19;
            Py_INCREF(tmp_set_locals_19);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_59;
        }
        tmp_dictset_value = mod_consts[127];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_59;
        }
        if (isFrameUnusable(cache_frame_71df0384a1f8ecfcfe71b95afaa036de_19)) {
            Py_XDECREF(cache_frame_71df0384a1f8ecfcfe71b95afaa036de_19);

#if _DEBUG_REFCOUNTS
            if (cache_frame_71df0384a1f8ecfcfe71b95afaa036de_19 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_71df0384a1f8ecfcfe71b95afaa036de_19 = MAKE_FUNCTION_FRAME(codeobj_71df0384a1f8ecfcfe71b95afaa036de, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_71df0384a1f8ecfcfe71b95afaa036de_19->m_type_description == NULL);
        frame_71df0384a1f8ecfcfe71b95afaa036de_19 = cache_frame_71df0384a1f8ecfcfe71b95afaa036de_19;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_71df0384a1f8ecfcfe71b95afaa036de_19);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_71df0384a1f8ecfcfe71b95afaa036de_19) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_2 = "o";
            goto frame_exception_exit_19;
        }
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225, mod_consts[129], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_2 = "o";
            goto frame_exception_exit_19;
        }
        tmp_dictset_value = mod_consts[25];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_2 = "o";
            goto frame_exception_exit_19;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_2 = "o";
            goto frame_exception_exit_19;
        }


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__13___init__();

        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225, mod_consts[83], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_2 = "o";
            goto frame_exception_exit_19;
        }
        {
            PyObject *tmp_called_instance_10;
            tmp_called_instance_10 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225, mod_consts[14]);

            if (tmp_called_instance_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_10 == NULL)) {
                        tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                    }

                    if (tmp_called_instance_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 238;
                        type_description_2 = "o";
                        goto frame_exception_exit_19;
                    }
                    Py_INCREF(tmp_called_instance_10);
                } else {
                    goto frame_exception_exit_19;
                }
            }

            frame_71df0384a1f8ecfcfe71b95afaa036de_19->m_frame.f_lineno = 238;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_10,
                mod_consts[85],
                PyTuple_GET_ITEM(mod_consts[120], 0)
            );

            Py_DECREF(tmp_called_instance_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_19;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225, mod_consts[66], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto frame_exception_exit_19;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_71df0384a1f8ecfcfe71b95afaa036de_19);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_18;

        frame_exception_exit_19:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_71df0384a1f8ecfcfe71b95afaa036de_19);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_71df0384a1f8ecfcfe71b95afaa036de_19, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_71df0384a1f8ecfcfe71b95afaa036de_19->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_71df0384a1f8ecfcfe71b95afaa036de_19, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_71df0384a1f8ecfcfe71b95afaa036de_19,
            type_description_2,
            outline_18_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_71df0384a1f8ecfcfe71b95afaa036de_19 == cache_frame_71df0384a1f8ecfcfe71b95afaa036de_19) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_71df0384a1f8ecfcfe71b95afaa036de_19);
            cache_frame_71df0384a1f8ecfcfe71b95afaa036de_19 = NULL;
        }

        assertFrameObject(frame_71df0384a1f8ecfcfe71b95afaa036de_19);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_18;

        frame_no_exception_18:;
        goto skip_nested_handling_18;
        nested_frame_exit_18:;

        goto try_except_handler_59;
        skip_nested_handling_18:;
        {
            nuitka_bool tmp_condition_result_114;
            PyObject *tmp_compexpr_left_19;
            PyObject *tmp_compexpr_right_19;
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_compexpr_left_19 = tmp_class_creation_19__bases;
            tmp_compexpr_right_19 = mod_consts[49];
            tmp_condition_result_114 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_19, tmp_compexpr_right_19);
            if (tmp_condition_result_114 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto try_except_handler_59;
            }
            if (tmp_condition_result_114 == NUITKA_BOOL_TRUE) {
                goto branch_yes_76;
            } else {
                goto branch_no_76;
            }
            assert(tmp_condition_result_114 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_76:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto try_except_handler_59;
        }
        branch_no_76:;
        {
            PyObject *tmp_assign_source_148;
            PyObject *tmp_called_name_80;
            PyObject *tmp_args_name_38;
            PyObject *tmp_tuple_element_57;
            PyObject *tmp_kwargs_name_38;
            CHECK_OBJECT(tmp_class_creation_19__metaclass);
            tmp_called_name_80 = tmp_class_creation_19__metaclass;
            tmp_tuple_element_57 = mod_consts[127];
            tmp_args_name_38 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_38, 0, tmp_tuple_element_57);
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_tuple_element_57 = tmp_class_creation_19__bases;
            PyTuple_SET_ITEM0(tmp_args_name_38, 1, tmp_tuple_element_57);
            tmp_tuple_element_57 = locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225;
            PyTuple_SET_ITEM0(tmp_args_name_38, 2, tmp_tuple_element_57);
            CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
            tmp_kwargs_name_38 = tmp_class_creation_19__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 225;
            tmp_assign_source_148 = CALL_FUNCTION(tmp_called_name_80, tmp_args_name_38, tmp_kwargs_name_38);
            Py_DECREF(tmp_args_name_38);
            if (tmp_assign_source_148 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto try_except_handler_59;
            }
            assert(outline_18_var___class__ == NULL);
            outline_18_var___class__ = tmp_assign_source_148;
        }
        CHECK_OBJECT(outline_18_var___class__);
        tmp_args_element_name_48 = outline_18_var___class__;
        Py_INCREF(tmp_args_element_name_48);
        goto try_return_handler_59;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_59:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225);
        locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225 = NULL;
        goto try_return_handler_58;
        // Exception handler code:
        try_except_handler_59:;
        exception_keeper_type_57 = exception_type;
        exception_keeper_value_57 = exception_value;
        exception_keeper_tb_57 = exception_tb;
        exception_keeper_lineno_57 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225);
        locals_cryptography$hazmat$primitives$hashes$$$class__19_BLAKE2b_225 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_57;
        exception_value = exception_keeper_value_57;
        exception_tb = exception_keeper_tb_57;
        exception_lineno = exception_keeper_lineno_57;

        goto try_except_handler_58;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_58:;
        CHECK_OBJECT(outline_18_var___class__);
        Py_DECREF(outline_18_var___class__);
        outline_18_var___class__ = NULL;
        goto outline_result_19;
        // Exception handler code:
        try_except_handler_58:;
        exception_keeper_type_58 = exception_type;
        exception_keeper_value_58 = exception_value;
        exception_keeper_tb_58 = exception_tb;
        exception_keeper_lineno_58 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_58;
        exception_value = exception_keeper_value_58;
        exception_tb = exception_keeper_tb_58;
        exception_lineno = exception_keeper_lineno_58;

        goto outline_exception_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_19:;
        exception_lineno = 225;
        goto try_except_handler_57;
        outline_result_19:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 224;
        tmp_assign_source_147 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_78, tmp_args_element_name_48);
        Py_DECREF(tmp_called_name_78);
        Py_DECREF(tmp_args_element_name_48);
        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto try_except_handler_57;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_147);
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_type_59 = exception_type;
    exception_keeper_value_59 = exception_value;
    exception_keeper_tb_59 = exception_tb;
    exception_keeper_lineno_59 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    Py_XDECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_59;
    exception_value = exception_keeper_value_59;
    exception_tb = exception_keeper_tb_59;
    exception_lineno = exception_keeper_lineno_59;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    Py_XDECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    Py_XDECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_19__prepared);
    Py_DECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_dircall_arg1_20;
        tmp_dircall_arg1_20 = mod_consts[49];
        Py_INCREF(tmp_dircall_arg1_20);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_20};
            tmp_assign_source_149 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_60;
        }
        assert(tmp_class_creation_20__bases == NULL);
        tmp_class_creation_20__bases = tmp_assign_source_149;
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = PyDict_New();
        assert(tmp_class_creation_20__class_decl_dict == NULL);
        tmp_class_creation_20__class_decl_dict = tmp_assign_source_150;
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_metaclass_name_20;
        nuitka_bool tmp_condition_result_115;
        PyObject *tmp_key_name_58;
        PyObject *tmp_dict_arg_name_58;
        PyObject *tmp_dict_arg_name_59;
        PyObject *tmp_key_name_59;
        nuitka_bool tmp_condition_result_116;
        int tmp_truth_name_20;
        PyObject *tmp_type_arg_39;
        PyObject *tmp_expression_name_120;
        PyObject *tmp_subscript_name_20;
        PyObject *tmp_bases_name_20;
        tmp_key_name_58 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
        tmp_dict_arg_name_58 = tmp_class_creation_20__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_58, tmp_key_name_58);
        assert(!(tmp_res == -1));
        tmp_condition_result_115 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_115 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_39;
        } else {
            goto condexpr_false_39;
        }
        condexpr_true_39:;
        CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
        tmp_dict_arg_name_59 = tmp_class_creation_20__class_decl_dict;
        tmp_key_name_59 = mod_consts[50];
        tmp_metaclass_name_20 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_59, tmp_key_name_59);
        if (tmp_metaclass_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_60;
        }
        goto condexpr_end_39;
        condexpr_false_39:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_truth_name_20 = CHECK_IF_TRUE(tmp_class_creation_20__bases);
        if (tmp_truth_name_20 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_60;
        }
        tmp_condition_result_116 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_116 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_40;
        } else {
            goto condexpr_false_40;
        }
        condexpr_true_40:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_expression_name_120 = tmp_class_creation_20__bases;
        tmp_subscript_name_20 = mod_consts[39];
        tmp_type_arg_39 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_120, tmp_subscript_name_20, 0);
        if (tmp_type_arg_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_60;
        }
        tmp_metaclass_name_20 = BUILTIN_TYPE1(tmp_type_arg_39);
        Py_DECREF(tmp_type_arg_39);
        if (tmp_metaclass_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_60;
        }
        goto condexpr_end_40;
        condexpr_false_40:;
        tmp_metaclass_name_20 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_20);
        condexpr_end_40:;
        condexpr_end_39:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_bases_name_20 = tmp_class_creation_20__bases;
        tmp_assign_source_151 = SELECT_METACLASS(tmp_metaclass_name_20, tmp_bases_name_20);
        Py_DECREF(tmp_metaclass_name_20);
        if (tmp_assign_source_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_60;
        }
        assert(tmp_class_creation_20__metaclass == NULL);
        tmp_class_creation_20__metaclass = tmp_assign_source_151;
    }
    {
        nuitka_bool tmp_condition_result_117;
        PyObject *tmp_key_name_60;
        PyObject *tmp_dict_arg_name_60;
        tmp_key_name_60 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
        tmp_dict_arg_name_60 = tmp_class_creation_20__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_60, tmp_key_name_60);
        assert(!(tmp_res == -1));
        tmp_condition_result_117 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_117 == NUITKA_BOOL_TRUE) {
            goto branch_yes_77;
        } else {
            goto branch_no_77;
        }
    }
    branch_yes_77:;
    CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_20__class_decl_dict;
    tmp_dictdel_key = mod_consts[50];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 242;

        goto try_except_handler_60;
    }
    branch_no_77:;
    {
        nuitka_bool tmp_condition_result_118;
        PyObject *tmp_expression_name_121;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_name_121 = tmp_class_creation_20__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_121, mod_consts[51]);
        tmp_condition_result_118 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_118 == NUITKA_BOOL_TRUE) {
            goto branch_yes_78;
        } else {
            goto branch_no_78;
        }
    }
    branch_yes_78:;
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_called_name_81;
        PyObject *tmp_expression_name_122;
        PyObject *tmp_args_name_39;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_kwargs_name_39;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_name_122 = tmp_class_creation_20__metaclass;
        tmp_called_name_81 = LOOKUP_ATTRIBUTE(tmp_expression_name_122, mod_consts[51]);
        if (tmp_called_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_60;
        }
        tmp_tuple_element_58 = mod_consts[132];
        tmp_args_name_39 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_39, 0, tmp_tuple_element_58);
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_tuple_element_58 = tmp_class_creation_20__bases;
        PyTuple_SET_ITEM0(tmp_args_name_39, 1, tmp_tuple_element_58);
        CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
        tmp_kwargs_name_39 = tmp_class_creation_20__class_decl_dict;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 242;
        tmp_assign_source_152 = CALL_FUNCTION(tmp_called_name_81, tmp_args_name_39, tmp_kwargs_name_39);
        Py_DECREF(tmp_called_name_81);
        Py_DECREF(tmp_args_name_39);
        if (tmp_assign_source_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_60;
        }
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_152;
    }
    {
        nuitka_bool tmp_condition_result_119;
        PyObject *tmp_operand_name_20;
        PyObject *tmp_expression_name_123;
        CHECK_OBJECT(tmp_class_creation_20__prepared);
        tmp_expression_name_123 = tmp_class_creation_20__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_123, mod_consts[52]);
        tmp_operand_name_20 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_20);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_60;
        }
        tmp_condition_result_119 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_119 == NUITKA_BOOL_TRUE) {
            goto branch_yes_79;
        } else {
            goto branch_no_79;
        }
    }
    branch_yes_79:;
    {
        PyObject *tmp_raise_type_20;
        PyObject *tmp_raise_value_20;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_20;
        PyObject *tmp_tuple_element_59;
        PyObject *tmp_getattr_target_20;
        PyObject *tmp_getattr_attr_20;
        PyObject *tmp_getattr_default_20;
        tmp_raise_type_20 = PyExc_TypeError;
        tmp_left_name_20 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_getattr_target_20 = tmp_class_creation_20__metaclass;
        tmp_getattr_attr_20 = mod_consts[54];
        tmp_getattr_default_20 = mod_consts[55];
        tmp_tuple_element_59 = BUILTIN_GETATTR(tmp_getattr_target_20, tmp_getattr_attr_20, tmp_getattr_default_20);
        if (tmp_tuple_element_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_60;
        }
        tmp_right_name_20 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_124;
            PyObject *tmp_type_arg_40;
            PyTuple_SET_ITEM(tmp_right_name_20, 0, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_type_arg_40 = tmp_class_creation_20__prepared;
            tmp_expression_name_124 = BUILTIN_TYPE1(tmp_type_arg_40);
            assert(!(tmp_expression_name_124 == NULL));
            tmp_tuple_element_59 = LOOKUP_ATTRIBUTE(tmp_expression_name_124, mod_consts[54]);
            Py_DECREF(tmp_expression_name_124);
            if (tmp_tuple_element_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_right_name_20, 1, tmp_tuple_element_59);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_right_name_20);
        goto try_except_handler_60;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_raise_value_20 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_20, tmp_right_name_20);
        Py_DECREF(tmp_right_name_20);
        if (tmp_raise_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_60;
        }
        exception_type = tmp_raise_type_20;
        Py_INCREF(tmp_raise_type_20);
        exception_value = tmp_raise_value_20;
        exception_lineno = 242;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_60;
    }
    branch_no_79:;
    goto branch_end_78;
    branch_no_78:;
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = PyDict_New();
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_153;
    }
    branch_end_78:;
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_called_name_82;
        PyObject *tmp_called_name_83;
        PyObject *tmp_expression_name_125;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_args_element_name_50;
        tmp_expression_name_125 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_name_125 == NULL)) {
            tmp_expression_name_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_name_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_60;
        }
        tmp_called_name_83 = LOOKUP_ATTRIBUTE(tmp_expression_name_125, mod_consts[81]);
        if (tmp_called_name_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_60;
        }
        tmp_args_element_name_49 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_name_49 == NULL)) {
            tmp_args_element_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_83);

            exception_lineno = 241;

            goto try_except_handler_60;
        }
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 241;
        tmp_called_name_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_83, tmp_args_element_name_49);
        Py_DECREF(tmp_called_name_83);
        if (tmp_called_name_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_60;
        }
        {
            PyObject *tmp_set_locals_20;
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_set_locals_20 = tmp_class_creation_20__prepared;
            locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242 = tmp_set_locals_20;
            Py_INCREF(tmp_set_locals_20);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242, mod_consts[59], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_62;
        }
        tmp_dictset_value = mod_consts[132];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242, mod_consts[60], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_62;
        }
        if (isFrameUnusable(cache_frame_86dfff9a60103501f21105c50d464681_20)) {
            Py_XDECREF(cache_frame_86dfff9a60103501f21105c50d464681_20);

#if _DEBUG_REFCOUNTS
            if (cache_frame_86dfff9a60103501f21105c50d464681_20 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_86dfff9a60103501f21105c50d464681_20 = MAKE_FUNCTION_FRAME(codeobj_86dfff9a60103501f21105c50d464681, module_cryptography$hazmat$primitives$hashes, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_86dfff9a60103501f21105c50d464681_20->m_type_description == NULL);
        frame_86dfff9a60103501f21105c50d464681_20 = cache_frame_86dfff9a60103501f21105c50d464681_20;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_86dfff9a60103501f21105c50d464681_20);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_86dfff9a60103501f21105c50d464681_20) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_2 = "o";
            goto frame_exception_exit_20;
        }
        tmp_dictset_value = mod_consts[28];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242, mod_consts[93], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_2 = "o";
            goto frame_exception_exit_20;
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242, mod_consts[129], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_2 = "o";
            goto frame_exception_exit_20;
        }
        tmp_dictset_value = mod_consts[25];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_2 = "o";
            goto frame_exception_exit_20;
        }


        tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$hashes$$$function__14___init__();

        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242, mod_consts[83], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_2 = "o";
            goto frame_exception_exit_20;
        }
        {
            PyObject *tmp_called_instance_11;
            tmp_called_instance_11 = PyObject_GetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242, mod_consts[14]);

            if (tmp_called_instance_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[14]);

                    if (unlikely(tmp_called_instance_11 == NULL)) {
                        tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                    }

                    if (tmp_called_instance_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 255;
                        type_description_2 = "o";
                        goto frame_exception_exit_20;
                    }
                    Py_INCREF(tmp_called_instance_11);
                } else {
                    goto frame_exception_exit_20;
                }
            }

            frame_86dfff9a60103501f21105c50d464681_20->m_frame.f_lineno = 255;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_11,
                mod_consts[85],
                PyTuple_GET_ITEM(mod_consts[120], 0)
            );

            Py_DECREF(tmp_called_instance_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
            tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242, mod_consts[66], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_2 = "o";
                goto frame_exception_exit_20;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_86dfff9a60103501f21105c50d464681_20);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_19;

        frame_exception_exit_20:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_86dfff9a60103501f21105c50d464681_20);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_86dfff9a60103501f21105c50d464681_20, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_86dfff9a60103501f21105c50d464681_20->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_86dfff9a60103501f21105c50d464681_20, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_86dfff9a60103501f21105c50d464681_20,
            type_description_2,
            outline_19_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_86dfff9a60103501f21105c50d464681_20 == cache_frame_86dfff9a60103501f21105c50d464681_20) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_86dfff9a60103501f21105c50d464681_20);
            cache_frame_86dfff9a60103501f21105c50d464681_20 = NULL;
        }

        assertFrameObject(frame_86dfff9a60103501f21105c50d464681_20);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_19;

        frame_no_exception_19:;
        goto skip_nested_handling_19;
        nested_frame_exit_19:;

        goto try_except_handler_62;
        skip_nested_handling_19:;
        {
            nuitka_bool tmp_condition_result_120;
            PyObject *tmp_compexpr_left_20;
            PyObject *tmp_compexpr_right_20;
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_compexpr_left_20 = tmp_class_creation_20__bases;
            tmp_compexpr_right_20 = mod_consts[49];
            tmp_condition_result_120 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_20, tmp_compexpr_right_20);
            if (tmp_condition_result_120 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto try_except_handler_62;
            }
            if (tmp_condition_result_120 == NUITKA_BOOL_TRUE) {
                goto branch_yes_80;
            } else {
                goto branch_no_80;
            }
            assert(tmp_condition_result_120 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_80:;
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242, mod_consts[68], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_62;
        }
        branch_no_80:;
        {
            PyObject *tmp_assign_source_155;
            PyObject *tmp_called_name_84;
            PyObject *tmp_args_name_40;
            PyObject *tmp_tuple_element_60;
            PyObject *tmp_kwargs_name_40;
            CHECK_OBJECT(tmp_class_creation_20__metaclass);
            tmp_called_name_84 = tmp_class_creation_20__metaclass;
            tmp_tuple_element_60 = mod_consts[132];
            tmp_args_name_40 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_40, 0, tmp_tuple_element_60);
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_tuple_element_60 = tmp_class_creation_20__bases;
            PyTuple_SET_ITEM0(tmp_args_name_40, 1, tmp_tuple_element_60);
            tmp_tuple_element_60 = locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242;
            PyTuple_SET_ITEM0(tmp_args_name_40, 2, tmp_tuple_element_60);
            CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
            tmp_kwargs_name_40 = tmp_class_creation_20__class_decl_dict;
            frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 242;
            tmp_assign_source_155 = CALL_FUNCTION(tmp_called_name_84, tmp_args_name_40, tmp_kwargs_name_40);
            Py_DECREF(tmp_args_name_40);
            if (tmp_assign_source_155 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto try_except_handler_62;
            }
            assert(outline_19_var___class__ == NULL);
            outline_19_var___class__ = tmp_assign_source_155;
        }
        CHECK_OBJECT(outline_19_var___class__);
        tmp_args_element_name_50 = outline_19_var___class__;
        Py_INCREF(tmp_args_element_name_50);
        goto try_return_handler_62;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_62:;
        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242);
        locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242 = NULL;
        goto try_return_handler_61;
        // Exception handler code:
        try_except_handler_62:;
        exception_keeper_type_60 = exception_type;
        exception_keeper_value_60 = exception_value;
        exception_keeper_tb_60 = exception_tb;
        exception_keeper_lineno_60 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242);
        locals_cryptography$hazmat$primitives$hashes$$$class__20_BLAKE2s_242 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_60;
        exception_value = exception_keeper_value_60;
        exception_tb = exception_keeper_tb_60;
        exception_lineno = exception_keeper_lineno_60;

        goto try_except_handler_61;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_61:;
        CHECK_OBJECT(outline_19_var___class__);
        Py_DECREF(outline_19_var___class__);
        outline_19_var___class__ = NULL;
        goto outline_result_20;
        // Exception handler code:
        try_except_handler_61:;
        exception_keeper_type_61 = exception_type;
        exception_keeper_value_61 = exception_value;
        exception_keeper_tb_61 = exception_tb;
        exception_keeper_lineno_61 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_61;
        exception_value = exception_keeper_value_61;
        exception_tb = exception_keeper_tb_61;
        exception_lineno = exception_keeper_lineno_61;

        goto outline_exception_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_20:;
        exception_lineno = 242;
        goto try_except_handler_60;
        outline_result_20:;
        frame_937a89ff17c61fd3fc82e277543422e2->m_frame.f_lineno = 241;
        tmp_assign_source_154 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_82, tmp_args_element_name_50);
        Py_DECREF(tmp_called_name_82);
        Py_DECREF(tmp_args_element_name_50);
        if (tmp_assign_source_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_60;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$hashes, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_154);
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_60:;
    exception_keeper_type_62 = exception_type;
    exception_keeper_value_62 = exception_value;
    exception_keeper_tb_62 = exception_tb;
    exception_keeper_lineno_62 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    Py_XDECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_62;
    exception_value = exception_keeper_value_62;
    exception_tb = exception_keeper_tb_62;
    exception_lineno = exception_keeper_lineno_62;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_937a89ff17c61fd3fc82e277543422e2);
#endif
    popFrameStack();

    assertFrameObject(frame_937a89ff17c61fd3fc82e277543422e2);

    goto frame_no_exception_20;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_937a89ff17c61fd3fc82e277543422e2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_937a89ff17c61fd3fc82e277543422e2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_937a89ff17c61fd3fc82e277543422e2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_937a89ff17c61fd3fc82e277543422e2, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_20:;
    Py_XDECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    Py_XDECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_20__prepared);
    Py_DECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;

    return module_cryptography$hazmat$primitives$hashes;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

