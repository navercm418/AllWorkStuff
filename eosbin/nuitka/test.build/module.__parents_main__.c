/* Generated code for Python module '__parents_main__'
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

/* The "module___parents_main__" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___parents_main__;
PyDictObject *moduledict___parents_main__;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[190];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[190];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("__parents_main__"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 190; i++) {
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
void checkModuleConstants___parents_main__(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 190; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_457e398445b5047531f4b613cc4cf6d6;
static PyCodeObject *codeobj_bd1c47c2f029182a6dc7e3f7fa8f1a0e;
static PyCodeObject *codeobj_4d8051a63edd0ef3db08b72e705d2289;
static PyCodeObject *codeobj_7a34c9c59aea696239b3c1462397c8ed;
static PyCodeObject *codeobj_2aab9cb3151bede7d9a8423253a366bf;
static PyCodeObject *codeobj_4a56b89437cd42d903f11e200858c2c5;
static PyCodeObject *codeobj_df1fcafae5442887c667e617e3e7c7c9;
static PyCodeObject *codeobj_7d7cc981838887ec9a435cfb6fc1ac73;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[181]); CHECK_OBJECT(module_filename_obj);
    codeobj_457e398445b5047531f4b613cc4cf6d6 = MAKE_CODEOBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[182], NULL, 1, 0, 0);
    codeobj_bd1c47c2f029182a6dc7e3f7fa8f1a0e = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[183], NULL, NULL, 0, 0, 0);
    codeobj_4d8051a63edd0ef3db08b72e705d2289 = MAKE_CODEOBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[184], NULL, 0, 0, 0);
    codeobj_7a34c9c59aea696239b3c1462397c8ed = MAKE_CODEOBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[185], NULL, 1, 0, 0);
    codeobj_2aab9cb3151bede7d9a8423253a366bf = MAKE_CODEOBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[127], mod_consts[186], NULL, 1, 0, 0);
    codeobj_4a56b89437cd42d903f11e200858c2c5 = MAKE_CODEOBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], mod_consts[187], NULL, 1, 0, 0);
    codeobj_df1fcafae5442887c667e617e3e7c7c9 = MAKE_CODEOBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], mod_consts[188], NULL, 1, 0, 0);
    codeobj_7d7cc981838887ec9a435cfb6fc1ac73 = MAKE_CODEOBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[189], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION___parents_main__$$$function__1_zvFileUtil(PyObject *defaults);


static PyObject *MAKE_FUNCTION___parents_main__$$$function__2_LvAudit();


static PyObject *MAKE_FUNCTION___parents_main__$$$function__3_Login();


static PyObject *MAKE_FUNCTION___parents_main__$$$function__4_UpdateLvHistory();


static PyObject *MAKE_FUNCTION___parents_main__$$$function__5_UpdateAll();


static PyObject *MAKE_FUNCTION___parents_main__$$$function__6_process_line();


static PyObject *MAKE_FUNCTION___parents_main__$$$function__7_lambda();


// The module function definitions.
static PyObject *impl___parents_main__$$$function__1_zvFileUtil(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_file = python_pars[0];
    PyObject *par_action = python_pars[1];
    PyObject *par_data = python_pars[2];
    PyObject *var__file = NULL;
    PyObject *var__wrt = NULL;
    struct Nuitka_FrameObject *frame_7d7cc981838887ec9a435cfb6fc1ac73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7d7cc981838887ec9a435cfb6fc1ac73 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7d7cc981838887ec9a435cfb6fc1ac73)) {
        Py_XDECREF(cache_frame_7d7cc981838887ec9a435cfb6fc1ac73);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d7cc981838887ec9a435cfb6fc1ac73 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d7cc981838887ec9a435cfb6fc1ac73 = MAKE_FUNCTION_FRAME(codeobj_7d7cc981838887ec9a435cfb6fc1ac73, module___parents_main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7d7cc981838887ec9a435cfb6fc1ac73->m_type_description == NULL);
    frame_7d7cc981838887ec9a435cfb6fc1ac73 = cache_frame_7d7cc981838887ec9a435cfb6fc1ac73;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7d7cc981838887ec9a435cfb6fc1ac73);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7d7cc981838887ec9a435cfb6fc1ac73) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT(par_file);
        tmp_open_filename_1 = par_file;
        CHECK_OBJECT(par_action);
        tmp_open_mode_1 = par_action;
        tmp_assign_source_1 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var__file == NULL);
        var__file = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(par_data);
        tmp_assign_source_2 = par_data;
        assert(var__wrt == NULL);
        Py_INCREF(tmp_assign_source_2);
        var__wrt = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_action);
        tmp_compexpr_left_1 = par_action;
        tmp_compexpr_right_1 = mod_consts[0];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 18;
            type_description_1 = "ooooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var__file);
        tmp_called_instance_1 = var__file;
        CHECK_OBJECT(var__wrt);
        tmp_args_element_name_1 = var__wrt;
        frame_7d7cc981838887ec9a435cfb6fc1ac73->m_frame.f_lineno = 19;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_action);
        tmp_compexpr_left_2 = par_action;
        tmp_compexpr_right_2 = mod_consts[2];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 20;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        if (var__file == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = var__file;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var__wrt == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = var__wrt;
        frame_7d7cc981838887ec9a435cfb6fc1ac73->m_frame.f_lineno = 21;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_action);
        tmp_compexpr_left_3 = par_action;
        tmp_compexpr_right_3 = mod_consts[5];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 22;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        if (var__file == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 23;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = var__file;
        frame_7d7cc981838887ec9a435cfb6fc1ac73->m_frame.f_lineno = 23;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[6]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var__wrt;
            var__wrt = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    CHECK_OBJECT(var__wrt);
    tmp_return_value = var__wrt;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        if (var__file == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var__file;
        frame_7d7cc981838887ec9a435cfb6fc1ac73->m_frame.f_lineno = 25;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[7]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d7cc981838887ec9a435cfb6fc1ac73);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d7cc981838887ec9a435cfb6fc1ac73);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d7cc981838887ec9a435cfb6fc1ac73);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7d7cc981838887ec9a435cfb6fc1ac73, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d7cc981838887ec9a435cfb6fc1ac73->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d7cc981838887ec9a435cfb6fc1ac73, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d7cc981838887ec9a435cfb6fc1ac73,
        type_description_1,
        par_file,
        par_action,
        par_data,
        var__file,
        var__wrt
    );


    // Release cached frame if used for exception.
    if (frame_7d7cc981838887ec9a435cfb6fc1ac73 == cache_frame_7d7cc981838887ec9a435cfb6fc1ac73) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7d7cc981838887ec9a435cfb6fc1ac73);
        cache_frame_7d7cc981838887ec9a435cfb6fc1ac73 = NULL;
    }

    assertFrameObject(frame_7d7cc981838887ec9a435cfb6fc1ac73);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var__file);
    var__file = NULL;
    Py_XDECREF(var__wrt);
    var__wrt = NULL;
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

    Py_XDECREF(var__file);
    var__file = NULL;
    Py_XDECREF(var__wrt);
    var__wrt = NULL;
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
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_action);
    Py_DECREF(par_action);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_action);
    Py_DECREF(par_action);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___parents_main__$$$function__2_LvAudit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    struct Nuitka_FrameObject *frame_7a34c9c59aea696239b3c1462397c8ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7a34c9c59aea696239b3c1462397c8ed = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7a34c9c59aea696239b3c1462397c8ed)) {
        Py_XDECREF(cache_frame_7a34c9c59aea696239b3c1462397c8ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a34c9c59aea696239b3c1462397c8ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a34c9c59aea696239b3c1462397c8ed = MAKE_FUNCTION_FRAME(codeobj_7a34c9c59aea696239b3c1462397c8ed, module___parents_main__, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7a34c9c59aea696239b3c1462397c8ed->m_type_description == NULL);
    frame_7a34c9c59aea696239b3c1462397c8ed = cache_frame_7a34c9c59aea696239b3c1462397c8ed;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7a34c9c59aea696239b3c1462397c8ed);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7a34c9c59aea696239b3c1462397c8ed) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = mod_consts[9];
        tmp_args_element_name_2 = mod_consts[0];
        CHECK_OBJECT(par_text);
        tmp_args_element_name_3 = par_text;
        frame_7a34c9c59aea696239b3c1462397c8ed->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_3;
        tmp_called_name_2 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_name_2 != NULL);
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7a34c9c59aea696239b3c1462397c8ed->m_frame.f_lineno = 58;
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_name_3, mod_consts[11]);

        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7a34c9c59aea696239b3c1462397c8ed->m_frame.f_lineno = 58;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7a34c9c59aea696239b3c1462397c8ed);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7a34c9c59aea696239b3c1462397c8ed);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7a34c9c59aea696239b3c1462397c8ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a34c9c59aea696239b3c1462397c8ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a34c9c59aea696239b3c1462397c8ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a34c9c59aea696239b3c1462397c8ed,
        type_description_1,
        par_text
    );


    // Release cached frame if used for exception.
    if (frame_7a34c9c59aea696239b3c1462397c8ed == cache_frame_7a34c9c59aea696239b3c1462397c8ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7a34c9c59aea696239b3c1462397c8ed);
        cache_frame_7a34c9c59aea696239b3c1462397c8ed = NULL;
    }

    assertFrameObject(frame_7a34c9c59aea696239b3c1462397c8ed);

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
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___parents_main__$$$function__3_Login(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_file = NULL;
    PyObject *var_zvSessionId = NULL;
    PyObject *var_FR = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_4d8051a63edd0ef3db08b72e705d2289;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4d8051a63edd0ef3db08b72e705d2289 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4d8051a63edd0ef3db08b72e705d2289)) {
        Py_XDECREF(cache_frame_4d8051a63edd0ef3db08b72e705d2289);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d8051a63edd0ef3db08b72e705d2289 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d8051a63edd0ef3db08b72e705d2289 = MAKE_FUNCTION_FRAME(codeobj_4d8051a63edd0ef3db08b72e705d2289, module___parents_main__, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4d8051a63edd0ef3db08b72e705d2289->m_type_description == NULL);
    frame_4d8051a63edd0ef3db08b72e705d2289 = cache_frame_4d8051a63edd0ef3db08b72e705d2289;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4d8051a63edd0ef3db08b72e705d2289);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4d8051a63edd0ef3db08b72e705d2289) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        tmp_open_filename_1 = mod_consts[12];
        tmp_open_mode_1 = mod_consts[5];
        tmp_assign_source_1 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_1 = tmp_with_1__source;
        tmp_called_name_1 = LOOKUP_SPECIAL(tmp_expression_name_1, mod_consts[13]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_4d8051a63edd0ef3db08b72e705d2289->m_frame.f_lineno = 64;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_2 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_name_2, mod_consts[14]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_5 = tmp_with_1__enter;
        assert(var_file == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_file = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_file);
        tmp_called_instance_2 = var_file;
        frame_4d8051a63edd0ef3db08b72e705d2289->m_frame.f_lineno = 66;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[6]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        frame_4d8051a63edd0ef3db08b72e705d2289->m_frame.f_lineno = 66;
        tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        assert(var_zvSessionId == NULL);
        var_zvSessionId = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        frame_4d8051a63edd0ef3db08b72e705d2289->m_frame.f_lineno = 67;
        tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        assert(var_FR == NULL);
        var_FR = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        tmp_left_name_4 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_left_name_4 == NULL)) {
            tmp_left_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_FR);
        tmp_args_element_name_1 = var_FR;
        frame_4d8051a63edd0ef3db08b72e705d2289->m_frame.f_lineno = 68;
        tmp_expression_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_1);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[20]);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_right_name_1 = PyObject_Unicode(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_right_name_2 = mod_consts[21];
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_3, tmp_right_name_2);
        Py_DECREF(tmp_left_name_3);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_zvSessionId);
        tmp_right_name_3 = var_zvSessionId;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_right_name_4 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_right_name_4 == NULL)) {
            tmp_right_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_4);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_8);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_4d8051a63edd0ef3db08b72e705d2289, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_4d8051a63edd0ef3db08b72e705d2289, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_4 = tmp_with_1__exit;
        tmp_args_element_name_2 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_3 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_4 = EXC_TRACEBACK(PyThreadState_GET());
        frame_4d8051a63edd0ef3db08b72e705d2289->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 68;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4d8051a63edd0ef3db08b72e705d2289->m_frame) frame_4d8051a63edd0ef3db08b72e705d2289->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 64;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4d8051a63edd0ef3db08b72e705d2289->m_frame) frame_4d8051a63edd0ef3db08b72e705d2289->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_5 = tmp_with_1__exit;
        frame_4d8051a63edd0ef3db08b72e705d2289->m_frame.f_lineno = 68;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_name_5, mod_consts[23]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_6 = tmp_with_1__exit;
        frame_4d8051a63edd0ef3db08b72e705d2289->m_frame.f_lineno = 68;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_name_6, mod_consts[23]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    if (var_zvSessionId == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 69;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_zvSessionId;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4d8051a63edd0ef3db08b72e705d2289);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4d8051a63edd0ef3db08b72e705d2289);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4d8051a63edd0ef3db08b72e705d2289);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4d8051a63edd0ef3db08b72e705d2289, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d8051a63edd0ef3db08b72e705d2289->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d8051a63edd0ef3db08b72e705d2289, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d8051a63edd0ef3db08b72e705d2289,
        type_description_1,
        var_file,
        var_zvSessionId,
        var_FR
    );


    // Release cached frame if used for exception.
    if (frame_4d8051a63edd0ef3db08b72e705d2289 == cache_frame_4d8051a63edd0ef3db08b72e705d2289) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4d8051a63edd0ef3db08b72e705d2289);
        cache_frame_4d8051a63edd0ef3db08b72e705d2289 = NULL;
    }

    assertFrameObject(frame_4d8051a63edd0ef3db08b72e705d2289);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_file);
    Py_DECREF(var_file);
    var_file = NULL;
    Py_XDECREF(var_zvSessionId);
    var_zvSessionId = NULL;
    Py_XDECREF(var_FR);
    var_FR = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_file);
    var_file = NULL;
    Py_XDECREF(var_zvSessionId);
    var_zvSessionId = NULL;
    Py_XDECREF(var_FR);
    var_FR = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___parents_main__$$$function__4_UpdateLvHistory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *var_zvLvh = NULL;
    PyObject *var_zvRtn = NULL;
    PyObject *var_zvTxt = NULL;
    PyObject *var_zvLvSh = NULL;
    PyObject *var_FR = NULL;
    PyObject *var_zvShTxt = NULL;
    PyObject *var_zvShRun = NULL;
    PyObject *var_zvShOut = NULL;
    struct Nuitka_FrameObject *frame_4a56b89437cd42d903f11e200858c2c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4a56b89437cd42d903f11e200858c2c5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4a56b89437cd42d903f11e200858c2c5)) {
        Py_XDECREF(cache_frame_4a56b89437cd42d903f11e200858c2c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a56b89437cd42d903f11e200858c2c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a56b89437cd42d903f11e200858c2c5 = MAKE_FUNCTION_FRAME(codeobj_4a56b89437cd42d903f11e200858c2c5, module___parents_main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4a56b89437cd42d903f11e200858c2c5->m_type_description == NULL);
    frame_4a56b89437cd42d903f11e200858c2c5 = cache_frame_4a56b89437cd42d903f11e200858c2c5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4a56b89437cd42d903f11e200858c2c5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4a56b89437cd42d903f11e200858c2c5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_data);
        tmp_called_instance_1 = par_data;
        frame_4a56b89437cd42d903f11e200858c2c5->m_frame.f_lineno = 82;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_data;
            assert(old != NULL);
            par_data = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_data);
        tmp_called_instance_2 = par_data;
        frame_4a56b89437cd42d903f11e200858c2c5->m_frame.f_lineno = 83;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[26], 0)
        );

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_data;
            assert(old != NULL);
            par_data = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_data);
        tmp_called_instance_3 = par_data;
        frame_4a56b89437cd42d903f11e200858c2c5->m_frame.f_lineno = 85;
        tmp_expression_name_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[29];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_zvLvh == NULL);
        var_zvLvh = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_data);
        tmp_called_instance_4 = par_data;
        frame_4a56b89437cd42d903f11e200858c2c5->m_frame.f_lineno = 86;
        tmp_expression_name_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = mod_consts[30];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_2, 1);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_zvRtn == NULL);
        var_zvRtn = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(par_data);
        tmp_called_instance_5 = par_data;
        frame_4a56b89437cd42d903f11e200858c2c5->m_frame.f_lineno = 87;
        tmp_expression_name_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = mod_consts[31];
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_3, 2);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_zvTxt == NULL);
        var_zvTxt = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[32];
        assert(var_zvLvSh == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_zvLvSh = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4a56b89437cd42d903f11e200858c2c5->m_frame.f_lineno = 91;
        tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_FR == NULL);
        var_FR = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        tmp_left_name_9 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_left_name_9 == NULL)) {
            tmp_left_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_left_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_FR);
        tmp_args_element_name_1 = var_FR;
        frame_4a56b89437cd42d903f11e200858c2c5->m_frame.f_lineno = 92;
        tmp_expression_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[20]);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyObject_Unicode(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_9, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_left_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[33];
        tmp_left_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_8, tmp_right_name_2);
        Py_DECREF(tmp_left_name_8);
        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = mod_consts[34];
        tmp_left_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_7, tmp_right_name_3);
        Py_DECREF(tmp_left_name_7);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvLvh);
        tmp_right_name_4 = var_zvLvh;
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_4);
        Py_DECREF(tmp_left_name_6);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = mod_consts[35];
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_left_name_5);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvRtn);
        tmp_right_name_6 = var_zvRtn;
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_6);
        Py_DECREF(tmp_left_name_4);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_7 = mod_consts[36];
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_3, tmp_right_name_7);
        Py_DECREF(tmp_left_name_3);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvTxt);
        tmp_right_name_8 = var_zvTxt;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_8);
        Py_DECREF(tmp_left_name_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_9 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_right_name_9 == NULL)) {
            tmp_right_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_right_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_9);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[37];
        assert(var_zvShTxt == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_zvShTxt = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_10;
        PyObject *tmp_right_name_11;
        CHECK_OBJECT(var_zvShTxt);
        tmp_left_name_11 = var_zvShTxt;
        tmp_right_name_10 = mod_consts[38];
        tmp_left_name_10 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_11, tmp_right_name_10);
        assert(!(tmp_left_name_10 == NULL));
        tmp_right_name_11 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_right_name_11 == NULL)) {
            tmp_right_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_right_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_10);

            exception_lineno = 97;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_10, tmp_right_name_11);
        Py_DECREF(tmp_left_name_10);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvShTxt;
            assert(old != NULL);
            var_zvShTxt = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_12;
        PyObject *tmp_right_name_13;
        CHECK_OBJECT(var_zvShTxt);
        tmp_left_name_13 = var_zvShTxt;
        tmp_right_name_12 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_right_name_12 == NULL)) {
            tmp_right_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_right_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_13, tmp_right_name_12);
        if (tmp_left_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_13 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_right_name_13 == NULL)) {
            tmp_right_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_right_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_12);

            exception_lineno = 98;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_12, tmp_right_name_13);
        Py_DECREF(tmp_left_name_12);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvShTxt;
            assert(old != NULL);
            var_zvShTxt = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_14;
        PyObject *tmp_right_name_15;
        CHECK_OBJECT(var_zvShTxt);
        tmp_left_name_15 = var_zvShTxt;
        tmp_right_name_14 = mod_consts[40];
        tmp_left_name_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_15, tmp_right_name_14);
        if (tmp_left_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_15 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_right_name_15 == NULL)) {
            tmp_right_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_right_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_14);

            exception_lineno = 99;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_14, tmp_right_name_15);
        Py_DECREF(tmp_left_name_14);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvShTxt;
            assert(old != NULL);
            var_zvShTxt = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_16;
        PyObject *tmp_right_name_17;
        CHECK_OBJECT(var_zvShTxt);
        tmp_left_name_17 = var_zvShTxt;
        tmp_right_name_16 = mod_consts[41];
        tmp_left_name_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_17, tmp_right_name_16);
        if (tmp_left_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_17 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_right_name_17 == NULL)) {
            tmp_right_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_right_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_16);

            exception_lineno = 100;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_16, tmp_right_name_17);
        Py_DECREF(tmp_left_name_16);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvShTxt;
            assert(old != NULL);
            var_zvShTxt = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_left_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_left_name_22;
        PyObject *tmp_left_name_23;
        PyObject *tmp_left_name_24;
        PyObject *tmp_left_name_25;
        PyObject *tmp_right_name_18;
        PyObject *tmp_right_name_19;
        PyObject *tmp_right_name_20;
        PyObject *tmp_right_name_21;
        PyObject *tmp_right_name_22;
        PyObject *tmp_right_name_23;
        PyObject *tmp_right_name_24;
        PyObject *tmp_right_name_25;
        CHECK_OBJECT(var_zvShTxt);
        tmp_left_name_25 = var_zvShTxt;
        tmp_right_name_18 = mod_consts[42];
        tmp_left_name_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_25, tmp_right_name_18);
        if (tmp_left_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvLvh);
        tmp_right_name_19 = var_zvLvh;
        tmp_left_name_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_24, tmp_right_name_19);
        Py_DECREF(tmp_left_name_24);
        if (tmp_left_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_20 = mod_consts[43];
        tmp_left_name_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_23, tmp_right_name_20);
        Py_DECREF(tmp_left_name_23);
        if (tmp_left_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvRtn);
        tmp_right_name_21 = var_zvRtn;
        tmp_left_name_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_22, tmp_right_name_21);
        Py_DECREF(tmp_left_name_22);
        if (tmp_left_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_22 = mod_consts[44];
        tmp_left_name_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_21, tmp_right_name_22);
        Py_DECREF(tmp_left_name_21);
        if (tmp_left_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvTxt);
        tmp_right_name_23 = var_zvTxt;
        tmp_left_name_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_20, tmp_right_name_23);
        Py_DECREF(tmp_left_name_20);
        if (tmp_left_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_24 = mod_consts[45];
        tmp_left_name_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_19, tmp_right_name_24);
        Py_DECREF(tmp_left_name_19);
        if (tmp_left_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_25 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_right_name_25 == NULL)) {
            tmp_right_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_right_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_18);

            exception_lineno = 101;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_18, tmp_right_name_25);
        Py_DECREF(tmp_left_name_18);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvShTxt;
            assert(old != NULL);
            var_zvShTxt = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_26;
        PyObject *tmp_left_name_27;
        PyObject *tmp_right_name_26;
        PyObject *tmp_right_name_27;
        CHECK_OBJECT(var_zvShTxt);
        tmp_left_name_27 = var_zvShTxt;
        tmp_right_name_26 = mod_consts[46];
        tmp_left_name_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_27, tmp_right_name_26);
        if (tmp_left_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_27 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_right_name_27 == NULL)) {
            tmp_right_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_right_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_26);

            exception_lineno = 102;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_26, tmp_right_name_27);
        Py_DECREF(tmp_left_name_26);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvShTxt;
            assert(old != NULL);
            var_zvShTxt = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_name_28;
        PyObject *tmp_right_name_28;
        CHECK_OBJECT(var_zvShTxt);
        tmp_left_name_28 = var_zvShTxt;
        tmp_right_name_28 = mod_consts[47];
        tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_28, tmp_right_name_28);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvShTxt;
            assert(old != NULL);
            var_zvShTxt = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = mod_consts[48];
        tmp_args_element_name_3 = mod_consts[0];
        CHECK_OBJECT(var_zvShTxt);
        tmp_args_element_name_4 = var_zvShTxt;
        frame_4a56b89437cd42d903f11e200858c2c5->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_or_left_value_1_object_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_or_right_value_1_object_1;
        int tmp_truth_name_2;
        tmp_compexpr_left_1 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_compexpr_left_1 == NULL)) {
            tmp_compexpr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[50];
        tmp_tmp_or_left_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_or_left_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_or_left_value_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_left_value_1_object_1);

            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_left_value_1_object_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_compexpr_left_2 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_compexpr_left_2 == NULL)) {
            tmp_compexpr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[51];
        tmp_tmp_or_right_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_or_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_or_right_value_1_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_right_value_1_object_1);

            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_right_value_1_object_1);
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_name_6;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[53]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvLvSh);
        tmp_kw_call_arg_value_0_1 = var_zvLvSh;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 109;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[54]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 109;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4a56b89437cd42d903f11e200858c2c5->m_frame.f_lineno = 109;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_name_4, args, kw_values, mod_consts[55]);
        }

        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_zvShRun == NULL);
        var_zvShRun = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(var_zvShRun);
        tmp_expression_name_7 = var_zvShRun;
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[56]);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4a56b89437cd42d903f11e200858c2c5->m_frame.f_lineno = 110;
        tmp_assign_source_18 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[6]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_zvShOut == NULL);
        var_zvShOut = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_5;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4a56b89437cd42d903f11e200858c2c5->m_frame.f_lineno = 111;
        tmp_assign_source_19 = CALL_FUNCTION_NO_ARGS(tmp_called_name_5);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_FR;
            assert(old != NULL);
            var_FR = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_name_29;
        PyObject *tmp_left_name_30;
        PyObject *tmp_left_name_31;
        PyObject *tmp_left_name_32;
        PyObject *tmp_left_name_33;
        PyObject *tmp_left_name_34;
        PyObject *tmp_right_name_29;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_right_name_30;
        PyObject *tmp_right_name_31;
        PyObject *tmp_unicode_arg_3;
        PyObject *tmp_right_name_32;
        PyObject *tmp_right_name_33;
        PyObject *tmp_unicode_arg_4;
        PyObject *tmp_right_name_34;
        tmp_left_name_34 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_left_name_34 == NULL)) {
            tmp_left_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_left_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_FR);
        tmp_args_element_name_5 = var_FR;
        frame_4a56b89437cd42d903f11e200858c2c5->m_frame.f_lineno = 112;
        tmp_expression_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_5);
        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_unicode_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[20]);
        Py_DECREF(tmp_expression_name_8);
        if (tmp_unicode_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_29 = PyObject_Unicode(tmp_unicode_arg_2);
        Py_DECREF(tmp_unicode_arg_2);
        if (tmp_right_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_33 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_34, tmp_right_name_29);
        Py_DECREF(tmp_right_name_29);
        if (tmp_left_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_30 = mod_consts[33];
        tmp_left_name_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_33, tmp_right_name_30);
        Py_DECREF(tmp_left_name_33);
        if (tmp_left_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvLvh);
        tmp_unicode_arg_3 = var_zvLvh;
        tmp_right_name_31 = PyObject_Unicode(tmp_unicode_arg_3);
        if (tmp_right_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_32);

            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_32, tmp_right_name_31);
        Py_DECREF(tmp_left_name_32);
        Py_DECREF(tmp_right_name_31);
        if (tmp_left_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_32 = mod_consts[57];
        tmp_left_name_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_31, tmp_right_name_32);
        Py_DECREF(tmp_left_name_31);
        if (tmp_left_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvRtn);
        tmp_unicode_arg_4 = var_zvRtn;
        tmp_right_name_33 = PyObject_Unicode(tmp_unicode_arg_4);
        if (tmp_right_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_30);

            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_30, tmp_right_name_33);
        Py_DECREF(tmp_left_name_30);
        Py_DECREF(tmp_right_name_33);
        if (tmp_left_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_34 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_right_name_34 == NULL)) {
            tmp_right_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_right_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_29);

            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_29, tmp_right_name_34);
        Py_DECREF(tmp_left_name_29);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_35;
        PyObject *tmp_left_name_36;
        PyObject *tmp_left_name_37;
        PyObject *tmp_left_name_38;
        PyObject *tmp_right_name_35;
        PyObject *tmp_unicode_arg_5;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_right_name_36;
        PyObject *tmp_right_name_37;
        PyObject *tmp_unicode_arg_6;
        PyObject *tmp_right_name_38;
        tmp_left_name_38 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_left_name_38 == NULL)) {
            tmp_left_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        assert(!(tmp_left_name_38 == NULL));
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_FR);
        tmp_args_element_name_6 = var_FR;
        frame_4a56b89437cd42d903f11e200858c2c5->m_frame.f_lineno = 113;
        tmp_expression_name_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_6);
        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_unicode_arg_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[20]);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_unicode_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_35 = PyObject_Unicode(tmp_unicode_arg_5);
        Py_DECREF(tmp_unicode_arg_5);
        if (tmp_right_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_37 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_38, tmp_right_name_35);
        Py_DECREF(tmp_right_name_35);
        if (tmp_left_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_36 = mod_consts[58];
        tmp_left_name_36 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_37, tmp_right_name_36);
        Py_DECREF(tmp_left_name_37);
        if (tmp_left_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvShOut);
        tmp_unicode_arg_6 = var_zvShOut;
        tmp_right_name_37 = PyObject_Unicode(tmp_unicode_arg_6);
        if (tmp_right_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_36);

            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_35 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_36, tmp_right_name_37);
        Py_DECREF(tmp_left_name_36);
        Py_DECREF(tmp_right_name_37);
        if (tmp_left_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_38 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_right_name_38 == NULL)) {
            tmp_right_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_right_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_35);

            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_35, tmp_right_name_38);
        Py_DECREF(tmp_left_name_35);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_21);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_expression_name_12;
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[53]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvLvSh);
        tmp_kw_call_arg_value_0_2 = var_zvLvSh;
        tmp_kw_call_dict_value_0_2 = Py_False;
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 115;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[54]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 115;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 115;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[59]);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 115;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4a56b89437cd42d903f11e200858c2c5->m_frame.f_lineno = 115;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_name_8, args, kw_values, mod_consts[60]);
        }

        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_zvShRun == NULL);
        var_zvShRun = tmp_assign_source_22;
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4a56b89437cd42d903f11e200858c2c5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4a56b89437cd42d903f11e200858c2c5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4a56b89437cd42d903f11e200858c2c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a56b89437cd42d903f11e200858c2c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a56b89437cd42d903f11e200858c2c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a56b89437cd42d903f11e200858c2c5,
        type_description_1,
        par_data,
        var_zvLvh,
        var_zvRtn,
        var_zvTxt,
        var_zvLvSh,
        var_FR,
        var_zvShTxt,
        var_zvShRun,
        var_zvShOut
    );


    // Release cached frame if used for exception.
    if (frame_4a56b89437cd42d903f11e200858c2c5 == cache_frame_4a56b89437cd42d903f11e200858c2c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4a56b89437cd42d903f11e200858c2c5);
        cache_frame_4a56b89437cd42d903f11e200858c2c5 = NULL;
    }

    assertFrameObject(frame_4a56b89437cd42d903f11e200858c2c5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    CHECK_OBJECT(var_zvLvh);
    Py_DECREF(var_zvLvh);
    var_zvLvh = NULL;
    CHECK_OBJECT(var_zvRtn);
    Py_DECREF(var_zvRtn);
    var_zvRtn = NULL;
    CHECK_OBJECT(var_zvTxt);
    Py_DECREF(var_zvTxt);
    var_zvTxt = NULL;
    Py_XDECREF(var_zvLvSh);
    var_zvLvSh = NULL;
    Py_XDECREF(var_FR);
    var_FR = NULL;
    CHECK_OBJECT(var_zvShTxt);
    Py_DECREF(var_zvShTxt);
    var_zvShTxt = NULL;
    Py_XDECREF(var_zvShRun);
    var_zvShRun = NULL;
    Py_XDECREF(var_zvShOut);
    var_zvShOut = NULL;
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

    Py_XDECREF(par_data);
    par_data = NULL;
    Py_XDECREF(var_zvLvh);
    var_zvLvh = NULL;
    Py_XDECREF(var_zvRtn);
    var_zvRtn = NULL;
    Py_XDECREF(var_zvTxt);
    var_zvTxt = NULL;
    Py_XDECREF(var_zvLvSh);
    var_zvLvSh = NULL;
    Py_XDECREF(var_FR);
    var_FR = NULL;
    Py_XDECREF(var_zvShTxt);
    var_zvShTxt = NULL;
    Py_XDECREF(var_zvShRun);
    var_zvShRun = NULL;
    Py_XDECREF(var_zvShOut);
    var_zvShOut = NULL;
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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___parents_main__$$$function__5_UpdateAll(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *var_zvFullErr = NULL;
    PyObject *var_zvSessionId = NULL;
    PyObject *var_zvLvh = NULL;
    PyObject *var_zvAcc = NULL;
    PyObject *var_url = NULL;
    PyObject *var_headers = NULL;
    PyObject *var_zvUdtLst = NULL;
    PyObject *var_zvFldLst = NULL;
    PyObject *var_zvPhnLst = NULL;
    PyObject *var_zvPerLst = NULL;
    PyObject *var_zvCstLst = NULL;
    PyObject *var_zvDefLst = NULL;
    PyObject *var_f = NULL;
    PyObject *var_zvFld = NULL;
    PyObject *var_zvVal = NULL;
    PyObject *var_zvCat = NULL;
    PyObject *var_zvPhnPld = NULL;
    PyObject *var_zvFulLst = NULL;
    PyObject *var_payload = NULL;
    PyObject *var_r = NULL;
    PyObject *var_zvRtn = NULL;
    PyObject *var_FR = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_2aab9cb3151bede7d9a8423253a366bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2aab9cb3151bede7d9a8423253a366bf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[37];
        assert(var_zvFullErr == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_zvFullErr = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_2aab9cb3151bede7d9a8423253a366bf)) {
        Py_XDECREF(cache_frame_2aab9cb3151bede7d9a8423253a366bf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2aab9cb3151bede7d9a8423253a366bf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2aab9cb3151bede7d9a8423253a366bf = MAKE_FUNCTION_FRAME(codeobj_2aab9cb3151bede7d9a8423253a366bf, module___parents_main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2aab9cb3151bede7d9a8423253a366bf->m_type_description == NULL);
    frame_2aab9cb3151bede7d9a8423253a366bf = cache_frame_2aab9cb3151bede7d9a8423253a366bf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2aab9cb3151bede7d9a8423253a366bf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2aab9cb3151bede7d9a8423253a366bf) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 127;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_zvSessionId == NULL);
        var_zvSessionId = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_data);
        tmp_called_instance_1 = par_data;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 129;
        tmp_expression_name_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[31];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 2);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_zvLvh == NULL);
        var_zvLvh = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_data);
        tmp_called_instance_2 = par_data;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 130;
        tmp_expression_name_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = mod_consts[29];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_2, 0);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_zvAcc == NULL);
        var_zvAcc = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_zvSessionId);
        tmp_compexpr_left_1 = var_zvSessionId;
        tmp_compexpr_right_1 = mod_consts[62];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = mod_consts[63];
        CHECK_OBJECT(var_zvAcc);
        tmp_right_name_1 = var_zvAcc;
        tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_url == NULL);
        var_url = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[64];
        tmp_dict_value_1 = mod_consts[65];
        tmp_assign_source_6 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[66];
        CHECK_OBJECT(var_zvSessionId);
        tmp_dict_value_1 = var_zvSessionId;
        tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_headers == NULL);
        var_headers = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(par_data);
        tmp_called_instance_3 = par_data;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 138;
        tmp_expression_name_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = mod_consts[30];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_3, 1);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_zvUdtLst == NULL);
        var_zvUdtLst = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT(var_zvUdtLst);
        tmp_called_instance_4 = var_zvUdtLst;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 139;
        tmp_expression_name_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = mod_consts[29];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_4, tmp_subscript_name_4, 0);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_zvFldLst == NULL);
        var_zvFldLst = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT(var_zvUdtLst);
        tmp_called_instance_5 = var_zvUdtLst;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 140;
        tmp_expression_name_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = mod_consts[30];
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_5, tmp_subscript_name_5, 1);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_zvPhnLst == NULL);
        var_zvPhnLst = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(var_zvFldLst);
        tmp_called_instance_7 = var_zvFldLst;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 143;
        tmp_called_instance_6 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_7,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[68], 0)
        );

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 143;
        tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_6,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        Py_DECREF(tmp_called_instance_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvFldLst;
            assert(old != NULL);
            var_zvFldLst = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_8;
        CHECK_OBJECT(var_zvFldLst);
        tmp_called_instance_8 = var_zvFldLst;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 144;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[70], 0)
        );

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvFldLst;
            assert(old != NULL);
            var_zvFldLst = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_called_instance_10;
        CHECK_OBJECT(var_zvPhnLst);
        tmp_called_instance_10 = var_zvPhnLst;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 146;
        tmp_called_instance_9 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_10,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[68], 0)
        );

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 146;
        tmp_assign_source_12 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_9,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        Py_DECREF(tmp_called_instance_9);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvPhnLst;
            assert(old != NULL);
            var_zvPhnLst = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_11;
        CHECK_OBJECT(var_zvPhnLst);
        tmp_called_instance_11 = var_zvPhnLst;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 147;
        tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[70], 0)
        );

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvPhnLst;
            assert(old != NULL);
            var_zvPhnLst = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[37];
        assert(var_zvPerLst == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_zvPerLst = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[37];
        assert(var_zvCstLst == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_zvCstLst = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[37];
        assert(var_zvDefLst == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_zvDefLst = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_zvFldLst);
        tmp_iter_arg_1 = var_zvFldLst;
        tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_17;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_18 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooo";
                exception_lineno = 153;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_19 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_f;
            var_f = tmp_assign_source_19;
            Py_INCREF(var_f);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_subscript_name_6;
        CHECK_OBJECT(var_f);
        tmp_called_instance_12 = var_f;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 155;
        tmp_expression_name_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_12,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[71], 0)
        );

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_6 = mod_consts[29];
        tmp_assign_source_20 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_6, 0);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_zvFld;
            var_zvFld = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT(var_f);
        tmp_called_instance_13 = var_f;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 156;
        tmp_expression_name_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_13,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[71], 0)
        );

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_7 = mod_consts[30];
        tmp_assign_source_21 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_7, tmp_subscript_name_7, 1);
        Py_DECREF(tmp_expression_name_7);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_zvVal;
            var_zvVal = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT(var_f);
        tmp_called_instance_14 = var_f;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 157;
        tmp_expression_name_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_14,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[71], 0)
        );

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_name_8 = mod_consts[31];
        tmp_assign_source_22 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_8, tmp_subscript_name_8, 2);
        Py_DECREF(tmp_expression_name_8);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_zvCat;
            var_zvCat = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_right_name_3;
        tmp_left_name_3 = mod_consts[72];
        CHECK_OBJECT(var_zvFld);
        tmp_unicode_arg_1 = var_zvFld;
        tmp_right_name_2 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_3 = mod_consts[72];
        tmp_assign_source_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_zvFld;
            assert(old != NULL);
            var_zvFld = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_right_name_5;
        tmp_left_name_5 = mod_consts[72];
        CHECK_OBJECT(var_zvVal);
        tmp_unicode_arg_2 = var_zvVal;
        tmp_right_name_4 = PyObject_Unicode(tmp_unicode_arg_2);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_5, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_5 = mod_consts[72];
        tmp_assign_source_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_4, tmp_right_name_5);
        Py_DECREF(tmp_left_name_4);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_zvVal;
            assert(old != NULL);
            var_zvVal = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_zvCat);
        tmp_compexpr_left_2 = var_zvCat;
        tmp_compexpr_right_2 = mod_consts[73];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        if (var_zvPerLst == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_9 = var_zvPerLst;
        CHECK_OBJECT(var_zvFld);
        tmp_right_name_6 = var_zvFld;
        tmp_left_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_9, tmp_right_name_6);
        if (tmp_left_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_7 = mod_consts[75];
        tmp_left_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_8, tmp_right_name_7);
        Py_DECREF(tmp_left_name_8);
        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_zvVal);
        tmp_right_name_8 = var_zvVal;
        tmp_left_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_7, tmp_right_name_8);
        Py_DECREF(tmp_left_name_7);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_9 = mod_consts[76];
        tmp_assign_source_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_6, tmp_right_name_9);
        Py_DECREF(tmp_left_name_6);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_zvPerLst;
            var_zvPerLst = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_zvCat);
        tmp_compexpr_left_3 = var_zvCat;
        tmp_compexpr_right_3 = mod_consts[77];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 169;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_left_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_10;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        PyObject *tmp_right_name_13;
        PyObject *tmp_right_name_14;
        if (var_zvCstLst == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_14 = var_zvCstLst;
        tmp_right_name_10 = mod_consts[79];
        tmp_left_name_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_14, tmp_right_name_10);
        if (tmp_left_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_zvFld == NULL) {
            Py_DECREF(tmp_left_name_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_right_name_11 = var_zvFld;
        tmp_left_name_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_13, tmp_right_name_11);
        Py_DECREF(tmp_left_name_13);
        if (tmp_left_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_12 = mod_consts[81];
        tmp_left_name_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_12, tmp_right_name_12);
        Py_DECREF(tmp_left_name_12);
        if (tmp_left_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_zvVal == NULL) {
            Py_DECREF(tmp_left_name_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_right_name_13 = var_zvVal;
        tmp_left_name_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_11, tmp_right_name_13);
        Py_DECREF(tmp_left_name_11);
        if (tmp_left_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_14 = mod_consts[83];
        tmp_assign_source_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_10, tmp_right_name_14);
        Py_DECREF(tmp_left_name_10);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_zvCstLst;
            var_zvCstLst = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_zvCat);
        tmp_compexpr_left_4 = var_zvCat;
        tmp_compexpr_right_4 = mod_consts[84];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_15;
        PyObject *tmp_right_name_16;
        PyObject *tmp_right_name_17;
        PyObject *tmp_right_name_18;
        if (var_zvDefLst == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_name_18 = var_zvDefLst;
        if (var_zvFld == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_right_name_15 = var_zvFld;
        tmp_left_name_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_18, tmp_right_name_15);
        if (tmp_left_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_16 = mod_consts[75];
        tmp_left_name_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_17, tmp_right_name_16);
        Py_DECREF(tmp_left_name_17);
        if (tmp_left_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_zvVal == NULL) {
            Py_DECREF(tmp_left_name_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_right_name_17 = var_zvVal;
        tmp_left_name_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_16, tmp_right_name_17);
        Py_DECREF(tmp_left_name_16);
        if (tmp_left_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_18 = mod_consts[76];
        tmp_assign_source_27 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_15, tmp_right_name_18);
        Py_DECREF(tmp_left_name_15);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_zvDefLst;
            var_zvDefLst = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 153;
        type_description_1 = "ooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_condition_result_5_object_1;
        if (var_zvPerLst == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = var_zvPerLst;
        tmp_compexpr_left_5 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = mod_consts[30];
        tmp_tmp_condition_result_5_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        assert(!(tmp_tmp_condition_result_5_object_1 == NULL));
        tmp_condition_result_5 = CHECK_IF_TRUE(tmp_tmp_condition_result_5_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_5_object_1);
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_subscript_name_9;
        if (var_zvPerLst == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = var_zvPerLst;
        tmp_subscript_name_9 = mod_consts[86];
        tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tmp_expression_name_9, tmp_subscript_name_9);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvPerLst;
            var_zvPerLst = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_left_name_19;
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_19;
        PyObject *tmp_right_name_20;
        tmp_left_name_20 = mod_consts[87];
        CHECK_OBJECT(var_zvPerLst);
        tmp_right_name_19 = var_zvPerLst;
        tmp_left_name_19 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_20, tmp_right_name_19);
        if (tmp_left_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_20 = mod_consts[88];
        tmp_assign_source_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_19, tmp_right_name_20);
        Py_DECREF(tmp_left_name_19);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvPerLst;
            assert(old != NULL);
            var_zvPerLst = tmp_assign_source_29;
            Py_DECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[37];
        {
            PyObject *old = var_zvPerLst;
            var_zvPerLst = tmp_assign_source_30;
            Py_INCREF(var_zvPerLst);
            Py_XDECREF(old);
        }

    }
    branch_end_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_tmp_condition_result_6_object_1;
        if (var_zvCstLst == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_2 = var_zvCstLst;
        tmp_compexpr_left_6 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_compexpr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = mod_consts[30];
        tmp_tmp_condition_result_6_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        Py_DECREF(tmp_compexpr_left_6);
        assert(!(tmp_tmp_condition_result_6_object_1 == NULL));
        tmp_condition_result_6 = CHECK_IF_TRUE(tmp_tmp_condition_result_6_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_6_object_1);
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_subscript_name_10;
        if (var_zvCstLst == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = var_zvCstLst;
        tmp_subscript_name_10 = mod_consts[86];
        tmp_assign_source_31 = LOOKUP_SUBSCRIPT(tmp_expression_name_10, tmp_subscript_name_10);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvCstLst;
            var_zvCstLst = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_tmp_condition_result_7_object_1;
        CHECK_OBJECT(var_zvPerLst);
        tmp_len_arg_3 = var_zvPerLst;
        tmp_compexpr_left_7 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_compexpr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_7 = mod_consts[30];
        tmp_tmp_condition_result_7_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
        Py_DECREF(tmp_compexpr_left_7);
        assert(!(tmp_tmp_condition_result_7_object_1 == NULL));
        tmp_condition_result_7 = CHECK_IF_TRUE(tmp_tmp_condition_result_7_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_7_object_1);
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_left_name_21;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_21;
        PyObject *tmp_right_name_22;
        tmp_left_name_22 = mod_consts[89];
        CHECK_OBJECT(var_zvCstLst);
        tmp_right_name_21 = var_zvCstLst;
        tmp_left_name_21 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_22, tmp_right_name_21);
        if (tmp_left_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_22 = mod_consts[90];
        tmp_assign_source_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_21, tmp_right_name_22);
        Py_DECREF(tmp_left_name_21);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvCstLst;
            assert(old != NULL);
            var_zvCstLst = tmp_assign_source_32;
            Py_DECREF(old);
        }

    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_left_name_23;
        PyObject *tmp_left_name_24;
        PyObject *tmp_right_name_23;
        PyObject *tmp_right_name_24;
        tmp_left_name_24 = mod_consts[91];
        CHECK_OBJECT(var_zvCstLst);
        tmp_right_name_23 = var_zvCstLst;
        tmp_left_name_23 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_24, tmp_right_name_23);
        if (tmp_left_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_24 = mod_consts[90];
        tmp_assign_source_33 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_23, tmp_right_name_24);
        Py_DECREF(tmp_left_name_23);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvCstLst;
            assert(old != NULL);
            var_zvCstLst = tmp_assign_source_33;
            Py_DECREF(old);
        }

    }
    branch_end_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[37];
        {
            PyObject *old = var_zvCstLst;
            var_zvCstLst = tmp_assign_source_34;
            Py_INCREF(var_zvCstLst);
            Py_XDECREF(old);
        }

    }
    branch_end_6:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_len_arg_4;
        PyObject *tmp_tmp_condition_result_8_object_1;
        if (var_zvDefLst == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_4 = var_zvDefLst;
        tmp_compexpr_left_8 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_compexpr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_8 = mod_consts[30];
        tmp_tmp_condition_result_8_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        Py_DECREF(tmp_compexpr_left_8);
        assert(!(tmp_tmp_condition_result_8_object_1 == NULL));
        tmp_condition_result_8 = CHECK_IF_TRUE(tmp_tmp_condition_result_8_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_8_object_1);
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_subscript_name_11;
        if (var_zvDefLst == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 196;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_11 = var_zvDefLst;
        tmp_subscript_name_11 = mod_consts[86];
        tmp_assign_source_35 = LOOKUP_SUBSCRIPT(tmp_expression_name_11, tmp_subscript_name_11);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvDefLst;
            var_zvDefLst = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_9;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_len_arg_5;
        PyObject *tmp_tmp_or_left_value_1_object_1;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_len_arg_6;
        PyObject *tmp_tmp_or_right_value_1_object_1;
        if (var_zvPerLst == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_5 = var_zvPerLst;
        tmp_compexpr_left_9 = BUILTIN_LEN(tmp_len_arg_5);
        if (tmp_compexpr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_9 = mod_consts[30];
        tmp_tmp_or_left_value_1_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
        Py_DECREF(tmp_compexpr_left_9);
        assert(!(tmp_tmp_or_left_value_1_object_1 == NULL));
        tmp_or_left_value_1 = CHECK_IF_TRUE(tmp_tmp_or_left_value_1_object_1) == 1;
        Py_DECREF(tmp_tmp_or_left_value_1_object_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (var_zvCstLst == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_6 = var_zvCstLst;
        tmp_compexpr_left_10 = BUILTIN_LEN(tmp_len_arg_6);
        if (tmp_compexpr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_10 = mod_consts[30];
        tmp_tmp_or_right_value_1_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_10, tmp_compexpr_right_10);
        Py_DECREF(tmp_compexpr_left_10);
        assert(!(tmp_tmp_or_right_value_1_object_1 == NULL));
        tmp_or_right_value_1 = CHECK_IF_TRUE(tmp_tmp_or_right_value_1_object_1) == 1;
        Py_DECREF(tmp_tmp_or_right_value_1_object_1);
        tmp_condition_result_9 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_9 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_left_name_25;
        PyObject *tmp_right_name_25;
        tmp_left_name_25 = mod_consts[92];
        CHECK_OBJECT(var_zvDefLst);
        tmp_right_name_25 = var_zvDefLst;
        tmp_assign_source_36 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_25, tmp_right_name_25);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvDefLst;
            assert(old != NULL);
            var_zvDefLst = tmp_assign_source_36;
            Py_DECREF(old);
        }

    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[37];
        {
            PyObject *old = var_zvDefLst;
            var_zvDefLst = tmp_assign_source_37;
            Py_INCREF(var_zvDefLst);
            Py_XDECREF(old);
        }

    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_subscript_name_13;
        tmp_dict_key_2 = mod_consts[93];
        tmp_dict_key_3 = mod_consts[93];
        CHECK_OBJECT(var_zvPhnLst);
        tmp_expression_name_13 = var_zvPhnLst;
        tmp_subscript_name_12 = mod_consts[29];
        tmp_called_instance_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_13, tmp_subscript_name_12, 0);
        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 203;
        tmp_expression_name_12 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_15,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[71], 0)
        );

        Py_DECREF(tmp_called_instance_15);
        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_13 = mod_consts[29];
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_12, tmp_subscript_name_13, 0);
        Py_DECREF(tmp_expression_name_12);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_name_14;
            PyObject *tmp_called_instance_16;
            PyObject *tmp_expression_name_15;
            PyObject *tmp_subscript_name_14;
            PyObject *tmp_subscript_name_15;
            PyObject *tmp_expression_name_16;
            PyObject *tmp_called_instance_17;
            PyObject *tmp_expression_name_17;
            PyObject *tmp_subscript_name_16;
            PyObject *tmp_subscript_name_17;
            PyObject *tmp_expression_name_18;
            PyObject *tmp_called_instance_18;
            PyObject *tmp_expression_name_19;
            PyObject *tmp_subscript_name_18;
            PyObject *tmp_subscript_name_19;
            tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[94];
            CHECK_OBJECT(var_zvPhnLst);
            tmp_expression_name_15 = var_zvPhnLst;
            tmp_subscript_name_14 = mod_consts[29];
            tmp_called_instance_16 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_15, tmp_subscript_name_14, 0);
            if (tmp_called_instance_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "ooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 203;
            tmp_expression_name_14 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_16,
                mod_consts[27],
                PyTuple_GET_ITEM(mod_consts[71], 0)
            );

            Py_DECREF(tmp_called_instance_16);
            if (tmp_expression_name_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "ooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_name_15 = mod_consts[30];
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_14, tmp_subscript_name_15, 1);
            Py_DECREF(tmp_expression_name_14);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "ooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[95];
            CHECK_OBJECT(var_zvPhnLst);
            tmp_expression_name_17 = var_zvPhnLst;
            tmp_subscript_name_16 = mod_consts[29];
            tmp_called_instance_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_17, tmp_subscript_name_16, 0);
            if (tmp_called_instance_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "ooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 203;
            tmp_expression_name_16 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_17,
                mod_consts[27],
                PyTuple_GET_ITEM(mod_consts[71], 0)
            );

            Py_DECREF(tmp_called_instance_17);
            if (tmp_expression_name_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "ooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_name_17 = mod_consts[31];
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_16, tmp_subscript_name_17, 2);
            Py_DECREF(tmp_expression_name_16);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "ooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[96];
            CHECK_OBJECT(var_zvPhnLst);
            tmp_expression_name_19 = var_zvPhnLst;
            tmp_subscript_name_18 = mod_consts[29];
            tmp_called_instance_18 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_19, tmp_subscript_name_18, 0);
            if (tmp_called_instance_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "ooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 203;
            tmp_expression_name_18 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_18,
                mod_consts[27],
                PyTuple_GET_ITEM(mod_consts[71], 0)
            );

            Py_DECREF(tmp_called_instance_18);
            if (tmp_expression_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "ooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_subscript_name_19 = mod_consts[97];
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_18, tmp_subscript_name_19, 3);
            Py_DECREF(tmp_expression_name_18);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "ooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_list_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        tmp_dict_value_2 = PyList_New(10);
        {
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_name_20;
            PyObject *tmp_called_instance_19;
            PyObject *tmp_expression_name_21;
            PyObject *tmp_subscript_name_20;
            PyObject *tmp_subscript_name_21;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_name_28;
            PyObject *tmp_called_instance_23;
            PyObject *tmp_expression_name_29;
            PyObject *tmp_subscript_name_28;
            PyObject *tmp_subscript_name_29;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_name_36;
            PyObject *tmp_called_instance_27;
            PyObject *tmp_expression_name_37;
            PyObject *tmp_subscript_name_36;
            PyObject *tmp_subscript_name_37;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_name_44;
            PyObject *tmp_called_instance_31;
            PyObject *tmp_expression_name_45;
            PyObject *tmp_subscript_name_44;
            PyObject *tmp_subscript_name_45;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_name_52;
            PyObject *tmp_called_instance_35;
            PyObject *tmp_expression_name_53;
            PyObject *tmp_subscript_name_52;
            PyObject *tmp_subscript_name_53;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_name_60;
            PyObject *tmp_called_instance_39;
            PyObject *tmp_expression_name_61;
            PyObject *tmp_subscript_name_60;
            PyObject *tmp_subscript_name_61;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_name_68;
            PyObject *tmp_called_instance_43;
            PyObject *tmp_expression_name_69;
            PyObject *tmp_subscript_name_68;
            PyObject *tmp_subscript_name_69;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_expression_name_76;
            PyObject *tmp_called_instance_47;
            PyObject *tmp_expression_name_77;
            PyObject *tmp_subscript_name_76;
            PyObject *tmp_subscript_name_77;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_expression_name_84;
            PyObject *tmp_called_instance_51;
            PyObject *tmp_expression_name_85;
            PyObject *tmp_subscript_name_84;
            PyObject *tmp_subscript_name_85;
            PyList_SET_ITEM(tmp_dict_value_2, 0, tmp_list_element_1);
            tmp_dict_key_4 = mod_consts[93];
            CHECK_OBJECT(var_zvPhnLst);
            tmp_expression_name_21 = var_zvPhnLst;
            tmp_subscript_name_20 = mod_consts[30];
            tmp_called_instance_19 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_21, tmp_subscript_name_20, 1);
            if (tmp_called_instance_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 204;
            tmp_expression_name_20 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_19,
                mod_consts[27],
                PyTuple_GET_ITEM(mod_consts[71], 0)
            );

            Py_DECREF(tmp_called_instance_19);
            if (tmp_expression_name_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_subscript_name_21 = mod_consts[29];
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_20, tmp_subscript_name_21, 0);
            Py_DECREF(tmp_expression_name_20);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_name_22;
                PyObject *tmp_called_instance_20;
                PyObject *tmp_expression_name_23;
                PyObject *tmp_subscript_name_22;
                PyObject *tmp_subscript_name_23;
                PyObject *tmp_expression_name_24;
                PyObject *tmp_called_instance_21;
                PyObject *tmp_expression_name_25;
                PyObject *tmp_subscript_name_24;
                PyObject *tmp_subscript_name_25;
                PyObject *tmp_expression_name_26;
                PyObject *tmp_called_instance_22;
                PyObject *tmp_expression_name_27;
                PyObject *tmp_subscript_name_26;
                PyObject *tmp_subscript_name_27;
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[94];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_23 = var_zvPhnLst;
                tmp_subscript_name_22 = mod_consts[30];
                tmp_called_instance_20 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_23, tmp_subscript_name_22, 1);
                if (tmp_called_instance_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_2;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 204;
                tmp_expression_name_22 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_20,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_20);
                if (tmp_expression_name_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_2;
                }
                tmp_subscript_name_23 = mod_consts[30];
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_22, tmp_subscript_name_23, 1);
                Py_DECREF(tmp_expression_name_22);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[95];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_25 = var_zvPhnLst;
                tmp_subscript_name_24 = mod_consts[30];
                tmp_called_instance_21 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_25, tmp_subscript_name_24, 1);
                if (tmp_called_instance_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_2;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 204;
                tmp_expression_name_24 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_21,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_21);
                if (tmp_expression_name_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_2;
                }
                tmp_subscript_name_25 = mod_consts[31];
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_24, tmp_subscript_name_25, 2);
                Py_DECREF(tmp_expression_name_24);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[96];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_27 = var_zvPhnLst;
                tmp_subscript_name_26 = mod_consts[30];
                tmp_called_instance_22 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_27, tmp_subscript_name_26, 1);
                if (tmp_called_instance_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_2;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 204;
                tmp_expression_name_26 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_22,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_22);
                if (tmp_expression_name_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_2;
                }
                tmp_subscript_name_27 = mod_consts[97];
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_26, tmp_subscript_name_27, 3);
                Py_DECREF(tmp_expression_name_26);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 204;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            PyList_SET_ITEM(tmp_dict_value_2, 1, tmp_list_element_1);
            tmp_dict_key_5 = mod_consts[93];
            CHECK_OBJECT(var_zvPhnLst);
            tmp_expression_name_29 = var_zvPhnLst;
            tmp_subscript_name_28 = mod_consts[31];
            tmp_called_instance_23 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_29, tmp_subscript_name_28, 2);
            if (tmp_called_instance_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 205;
            tmp_expression_name_28 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_23,
                mod_consts[27],
                PyTuple_GET_ITEM(mod_consts[71], 0)
            );

            Py_DECREF(tmp_called_instance_23);
            if (tmp_expression_name_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_subscript_name_29 = mod_consts[29];
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_28, tmp_subscript_name_29, 0);
            Py_DECREF(tmp_expression_name_28);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_name_30;
                PyObject *tmp_called_instance_24;
                PyObject *tmp_expression_name_31;
                PyObject *tmp_subscript_name_30;
                PyObject *tmp_subscript_name_31;
                PyObject *tmp_expression_name_32;
                PyObject *tmp_called_instance_25;
                PyObject *tmp_expression_name_33;
                PyObject *tmp_subscript_name_32;
                PyObject *tmp_subscript_name_33;
                PyObject *tmp_expression_name_34;
                PyObject *tmp_called_instance_26;
                PyObject *tmp_expression_name_35;
                PyObject *tmp_subscript_name_34;
                PyObject *tmp_subscript_name_35;
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[94];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_31 = var_zvPhnLst;
                tmp_subscript_name_30 = mod_consts[31];
                tmp_called_instance_24 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_31, tmp_subscript_name_30, 2);
                if (tmp_called_instance_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_3;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 205;
                tmp_expression_name_30 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_24,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_24);
                if (tmp_expression_name_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_3;
                }
                tmp_subscript_name_31 = mod_consts[30];
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_30, tmp_subscript_name_31, 1);
                Py_DECREF(tmp_expression_name_30);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[95];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_33 = var_zvPhnLst;
                tmp_subscript_name_32 = mod_consts[31];
                tmp_called_instance_25 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_33, tmp_subscript_name_32, 2);
                if (tmp_called_instance_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_3;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 205;
                tmp_expression_name_32 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_25,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_25);
                if (tmp_expression_name_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_3;
                }
                tmp_subscript_name_33 = mod_consts[31];
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_32, tmp_subscript_name_33, 2);
                Py_DECREF(tmp_expression_name_32);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[96];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_35 = var_zvPhnLst;
                tmp_subscript_name_34 = mod_consts[31];
                tmp_called_instance_26 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_35, tmp_subscript_name_34, 2);
                if (tmp_called_instance_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_3;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 205;
                tmp_expression_name_34 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_26,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_26);
                if (tmp_expression_name_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_3;
                }
                tmp_subscript_name_35 = mod_consts[97];
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_34, tmp_subscript_name_35, 3);
                Py_DECREF(tmp_expression_name_34);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;
            PyList_SET_ITEM(tmp_dict_value_2, 2, tmp_list_element_1);
            tmp_dict_key_6 = mod_consts[93];
            CHECK_OBJECT(var_zvPhnLst);
            tmp_expression_name_37 = var_zvPhnLst;
            tmp_subscript_name_36 = mod_consts[97];
            tmp_called_instance_27 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_37, tmp_subscript_name_36, 3);
            if (tmp_called_instance_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 206;
            tmp_expression_name_36 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_27,
                mod_consts[27],
                PyTuple_GET_ITEM(mod_consts[71], 0)
            );

            Py_DECREF(tmp_called_instance_27);
            if (tmp_expression_name_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_subscript_name_37 = mod_consts[29];
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_36, tmp_subscript_name_37, 0);
            Py_DECREF(tmp_expression_name_36);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_name_38;
                PyObject *tmp_called_instance_28;
                PyObject *tmp_expression_name_39;
                PyObject *tmp_subscript_name_38;
                PyObject *tmp_subscript_name_39;
                PyObject *tmp_expression_name_40;
                PyObject *tmp_called_instance_29;
                PyObject *tmp_expression_name_41;
                PyObject *tmp_subscript_name_40;
                PyObject *tmp_subscript_name_41;
                PyObject *tmp_expression_name_42;
                PyObject *tmp_called_instance_30;
                PyObject *tmp_expression_name_43;
                PyObject *tmp_subscript_name_42;
                PyObject *tmp_subscript_name_43;
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[94];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_39 = var_zvPhnLst;
                tmp_subscript_name_38 = mod_consts[97];
                tmp_called_instance_28 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_39, tmp_subscript_name_38, 3);
                if (tmp_called_instance_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_4;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 206;
                tmp_expression_name_38 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_28,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_28);
                if (tmp_expression_name_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_4;
                }
                tmp_subscript_name_39 = mod_consts[30];
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_38, tmp_subscript_name_39, 1);
                Py_DECREF(tmp_expression_name_38);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[95];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_41 = var_zvPhnLst;
                tmp_subscript_name_40 = mod_consts[97];
                tmp_called_instance_29 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_41, tmp_subscript_name_40, 3);
                if (tmp_called_instance_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_4;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 206;
                tmp_expression_name_40 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_29,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_29);
                if (tmp_expression_name_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_4;
                }
                tmp_subscript_name_41 = mod_consts[31];
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_40, tmp_subscript_name_41, 2);
                Py_DECREF(tmp_expression_name_40);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[96];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_43 = var_zvPhnLst;
                tmp_subscript_name_42 = mod_consts[97];
                tmp_called_instance_30 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_43, tmp_subscript_name_42, 3);
                if (tmp_called_instance_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_4;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 206;
                tmp_expression_name_42 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_30,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_30);
                if (tmp_expression_name_42 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_4;
                }
                tmp_subscript_name_43 = mod_consts[97];
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_42, tmp_subscript_name_43, 3);
                Py_DECREF(tmp_expression_name_42);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            PyList_SET_ITEM(tmp_dict_value_2, 3, tmp_list_element_1);
            tmp_dict_key_7 = mod_consts[93];
            CHECK_OBJECT(var_zvPhnLst);
            tmp_expression_name_45 = var_zvPhnLst;
            tmp_subscript_name_44 = mod_consts[98];
            tmp_called_instance_31 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_45, tmp_subscript_name_44, 4);
            if (tmp_called_instance_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 207;
            tmp_expression_name_44 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_31,
                mod_consts[27],
                PyTuple_GET_ITEM(mod_consts[71], 0)
            );

            Py_DECREF(tmp_called_instance_31);
            if (tmp_expression_name_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_subscript_name_45 = mod_consts[29];
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_44, tmp_subscript_name_45, 0);
            Py_DECREF(tmp_expression_name_44);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_name_46;
                PyObject *tmp_called_instance_32;
                PyObject *tmp_expression_name_47;
                PyObject *tmp_subscript_name_46;
                PyObject *tmp_subscript_name_47;
                PyObject *tmp_expression_name_48;
                PyObject *tmp_called_instance_33;
                PyObject *tmp_expression_name_49;
                PyObject *tmp_subscript_name_48;
                PyObject *tmp_subscript_name_49;
                PyObject *tmp_expression_name_50;
                PyObject *tmp_called_instance_34;
                PyObject *tmp_expression_name_51;
                PyObject *tmp_subscript_name_50;
                PyObject *tmp_subscript_name_51;
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[94];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_47 = var_zvPhnLst;
                tmp_subscript_name_46 = mod_consts[98];
                tmp_called_instance_32 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_47, tmp_subscript_name_46, 4);
                if (tmp_called_instance_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_5;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 207;
                tmp_expression_name_46 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_32,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_32);
                if (tmp_expression_name_46 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_5;
                }
                tmp_subscript_name_47 = mod_consts[30];
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_46, tmp_subscript_name_47, 1);
                Py_DECREF(tmp_expression_name_46);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[95];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_49 = var_zvPhnLst;
                tmp_subscript_name_48 = mod_consts[98];
                tmp_called_instance_33 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_49, tmp_subscript_name_48, 4);
                if (tmp_called_instance_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_5;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 207;
                tmp_expression_name_48 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_33,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_33);
                if (tmp_expression_name_48 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_5;
                }
                tmp_subscript_name_49 = mod_consts[31];
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_48, tmp_subscript_name_49, 2);
                Py_DECREF(tmp_expression_name_48);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[96];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_51 = var_zvPhnLst;
                tmp_subscript_name_50 = mod_consts[98];
                tmp_called_instance_34 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_51, tmp_subscript_name_50, 4);
                if (tmp_called_instance_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_5;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 207;
                tmp_expression_name_50 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_34,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_34);
                if (tmp_expression_name_50 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_5;
                }
                tmp_subscript_name_51 = mod_consts[97];
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_50, tmp_subscript_name_51, 3);
                Py_DECREF(tmp_expression_name_50);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 207;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            PyList_SET_ITEM(tmp_dict_value_2, 4, tmp_list_element_1);
            tmp_dict_key_8 = mod_consts[93];
            CHECK_OBJECT(var_zvPhnLst);
            tmp_expression_name_53 = var_zvPhnLst;
            tmp_subscript_name_52 = mod_consts[99];
            tmp_called_instance_35 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_53, tmp_subscript_name_52, 5);
            if (tmp_called_instance_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 208;
            tmp_expression_name_52 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_35,
                mod_consts[27],
                PyTuple_GET_ITEM(mod_consts[71], 0)
            );

            Py_DECREF(tmp_called_instance_35);
            if (tmp_expression_name_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_subscript_name_53 = mod_consts[29];
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_52, tmp_subscript_name_53, 0);
            Py_DECREF(tmp_expression_name_52);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_name_54;
                PyObject *tmp_called_instance_36;
                PyObject *tmp_expression_name_55;
                PyObject *tmp_subscript_name_54;
                PyObject *tmp_subscript_name_55;
                PyObject *tmp_expression_name_56;
                PyObject *tmp_called_instance_37;
                PyObject *tmp_expression_name_57;
                PyObject *tmp_subscript_name_56;
                PyObject *tmp_subscript_name_57;
                PyObject *tmp_expression_name_58;
                PyObject *tmp_called_instance_38;
                PyObject *tmp_expression_name_59;
                PyObject *tmp_subscript_name_58;
                PyObject *tmp_subscript_name_59;
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[94];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_55 = var_zvPhnLst;
                tmp_subscript_name_54 = mod_consts[99];
                tmp_called_instance_36 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_55, tmp_subscript_name_54, 5);
                if (tmp_called_instance_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_6;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 208;
                tmp_expression_name_54 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_36,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_36);
                if (tmp_expression_name_54 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_6;
                }
                tmp_subscript_name_55 = mod_consts[30];
                tmp_dict_value_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_54, tmp_subscript_name_55, 1);
                Py_DECREF(tmp_expression_name_54);
                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[95];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_57 = var_zvPhnLst;
                tmp_subscript_name_56 = mod_consts[99];
                tmp_called_instance_37 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_57, tmp_subscript_name_56, 5);
                if (tmp_called_instance_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_6;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 208;
                tmp_expression_name_56 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_37,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_37);
                if (tmp_expression_name_56 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_6;
                }
                tmp_subscript_name_57 = mod_consts[31];
                tmp_dict_value_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_56, tmp_subscript_name_57, 2);
                Py_DECREF(tmp_expression_name_56);
                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[96];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_59 = var_zvPhnLst;
                tmp_subscript_name_58 = mod_consts[99];
                tmp_called_instance_38 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_59, tmp_subscript_name_58, 5);
                if (tmp_called_instance_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_6;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 208;
                tmp_expression_name_58 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_38,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_38);
                if (tmp_expression_name_58 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_6;
                }
                tmp_subscript_name_59 = mod_consts[97];
                tmp_dict_value_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_58, tmp_subscript_name_59, 3);
                Py_DECREF(tmp_expression_name_58);
                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            PyList_SET_ITEM(tmp_dict_value_2, 5, tmp_list_element_1);
            tmp_dict_key_9 = mod_consts[93];
            CHECK_OBJECT(var_zvPhnLst);
            tmp_expression_name_61 = var_zvPhnLst;
            tmp_subscript_name_60 = mod_consts[100];
            tmp_called_instance_39 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_61, tmp_subscript_name_60, 6);
            if (tmp_called_instance_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 209;
            tmp_expression_name_60 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_39,
                mod_consts[27],
                PyTuple_GET_ITEM(mod_consts[71], 0)
            );

            Py_DECREF(tmp_called_instance_39);
            if (tmp_expression_name_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_subscript_name_61 = mod_consts[29];
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_60, tmp_subscript_name_61, 0);
            Py_DECREF(tmp_expression_name_60);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_name_62;
                PyObject *tmp_called_instance_40;
                PyObject *tmp_expression_name_63;
                PyObject *tmp_subscript_name_62;
                PyObject *tmp_subscript_name_63;
                PyObject *tmp_expression_name_64;
                PyObject *tmp_called_instance_41;
                PyObject *tmp_expression_name_65;
                PyObject *tmp_subscript_name_64;
                PyObject *tmp_subscript_name_65;
                PyObject *tmp_expression_name_66;
                PyObject *tmp_called_instance_42;
                PyObject *tmp_expression_name_67;
                PyObject *tmp_subscript_name_66;
                PyObject *tmp_subscript_name_67;
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[94];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_63 = var_zvPhnLst;
                tmp_subscript_name_62 = mod_consts[100];
                tmp_called_instance_40 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_63, tmp_subscript_name_62, 6);
                if (tmp_called_instance_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_7;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 209;
                tmp_expression_name_62 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_40,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_40);
                if (tmp_expression_name_62 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_7;
                }
                tmp_subscript_name_63 = mod_consts[30];
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_62, tmp_subscript_name_63, 1);
                Py_DECREF(tmp_expression_name_62);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[95];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_65 = var_zvPhnLst;
                tmp_subscript_name_64 = mod_consts[100];
                tmp_called_instance_41 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_65, tmp_subscript_name_64, 6);
                if (tmp_called_instance_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_7;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 209;
                tmp_expression_name_64 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_41,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_41);
                if (tmp_expression_name_64 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_7;
                }
                tmp_subscript_name_65 = mod_consts[31];
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_64, tmp_subscript_name_65, 2);
                Py_DECREF(tmp_expression_name_64);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[96];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_67 = var_zvPhnLst;
                tmp_subscript_name_66 = mod_consts[100];
                tmp_called_instance_42 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_67, tmp_subscript_name_66, 6);
                if (tmp_called_instance_42 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_7;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 209;
                tmp_expression_name_66 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_42,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_42);
                if (tmp_expression_name_66 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_7;
                }
                tmp_subscript_name_67 = mod_consts[97];
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_66, tmp_subscript_name_67, 3);
                Py_DECREF(tmp_expression_name_66);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 209;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            PyList_SET_ITEM(tmp_dict_value_2, 6, tmp_list_element_1);
            tmp_dict_key_10 = mod_consts[93];
            CHECK_OBJECT(var_zvPhnLst);
            tmp_expression_name_69 = var_zvPhnLst;
            tmp_subscript_name_68 = mod_consts[101];
            tmp_called_instance_43 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_69, tmp_subscript_name_68, 7);
            if (tmp_called_instance_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 210;
            tmp_expression_name_68 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_43,
                mod_consts[27],
                PyTuple_GET_ITEM(mod_consts[71], 0)
            );

            Py_DECREF(tmp_called_instance_43);
            if (tmp_expression_name_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_subscript_name_69 = mod_consts[29];
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_68, tmp_subscript_name_69, 0);
            Py_DECREF(tmp_expression_name_68);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_name_70;
                PyObject *tmp_called_instance_44;
                PyObject *tmp_expression_name_71;
                PyObject *tmp_subscript_name_70;
                PyObject *tmp_subscript_name_71;
                PyObject *tmp_expression_name_72;
                PyObject *tmp_called_instance_45;
                PyObject *tmp_expression_name_73;
                PyObject *tmp_subscript_name_72;
                PyObject *tmp_subscript_name_73;
                PyObject *tmp_expression_name_74;
                PyObject *tmp_called_instance_46;
                PyObject *tmp_expression_name_75;
                PyObject *tmp_subscript_name_74;
                PyObject *tmp_subscript_name_75;
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[94];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_71 = var_zvPhnLst;
                tmp_subscript_name_70 = mod_consts[101];
                tmp_called_instance_44 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_71, tmp_subscript_name_70, 7);
                if (tmp_called_instance_44 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_8;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 210;
                tmp_expression_name_70 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_44,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_44);
                if (tmp_expression_name_70 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_8;
                }
                tmp_subscript_name_71 = mod_consts[30];
                tmp_dict_value_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_70, tmp_subscript_name_71, 1);
                Py_DECREF(tmp_expression_name_70);
                if (tmp_dict_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[95];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_73 = var_zvPhnLst;
                tmp_subscript_name_72 = mod_consts[101];
                tmp_called_instance_45 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_73, tmp_subscript_name_72, 7);
                if (tmp_called_instance_45 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_8;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 210;
                tmp_expression_name_72 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_45,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_45);
                if (tmp_expression_name_72 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_8;
                }
                tmp_subscript_name_73 = mod_consts[31];
                tmp_dict_value_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_72, tmp_subscript_name_73, 2);
                Py_DECREF(tmp_expression_name_72);
                if (tmp_dict_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[96];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_75 = var_zvPhnLst;
                tmp_subscript_name_74 = mod_consts[101];
                tmp_called_instance_46 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_75, tmp_subscript_name_74, 7);
                if (tmp_called_instance_46 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_8;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 210;
                tmp_expression_name_74 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_46,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_46);
                if (tmp_expression_name_74 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_8;
                }
                tmp_subscript_name_75 = mod_consts[97];
                tmp_dict_value_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_74, tmp_subscript_name_75, 3);
                Py_DECREF(tmp_expression_name_74);
                if (tmp_dict_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 210;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;
            PyList_SET_ITEM(tmp_dict_value_2, 7, tmp_list_element_1);
            tmp_dict_key_11 = mod_consts[93];
            CHECK_OBJECT(var_zvPhnLst);
            tmp_expression_name_77 = var_zvPhnLst;
            tmp_subscript_name_76 = mod_consts[102];
            tmp_called_instance_47 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_77, tmp_subscript_name_76, 8);
            if (tmp_called_instance_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 211;
            tmp_expression_name_76 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_47,
                mod_consts[27],
                PyTuple_GET_ITEM(mod_consts[71], 0)
            );

            Py_DECREF(tmp_called_instance_47);
            if (tmp_expression_name_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_subscript_name_77 = mod_consts[29];
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_76, tmp_subscript_name_77, 0);
            Py_DECREF(tmp_expression_name_76);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_name_78;
                PyObject *tmp_called_instance_48;
                PyObject *tmp_expression_name_79;
                PyObject *tmp_subscript_name_78;
                PyObject *tmp_subscript_name_79;
                PyObject *tmp_expression_name_80;
                PyObject *tmp_called_instance_49;
                PyObject *tmp_expression_name_81;
                PyObject *tmp_subscript_name_80;
                PyObject *tmp_subscript_name_81;
                PyObject *tmp_expression_name_82;
                PyObject *tmp_called_instance_50;
                PyObject *tmp_expression_name_83;
                PyObject *tmp_subscript_name_82;
                PyObject *tmp_subscript_name_83;
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[94];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_79 = var_zvPhnLst;
                tmp_subscript_name_78 = mod_consts[102];
                tmp_called_instance_48 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_79, tmp_subscript_name_78, 8);
                if (tmp_called_instance_48 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_9;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 211;
                tmp_expression_name_78 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_48,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_48);
                if (tmp_expression_name_78 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_9;
                }
                tmp_subscript_name_79 = mod_consts[30];
                tmp_dict_value_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_78, tmp_subscript_name_79, 1);
                Py_DECREF(tmp_expression_name_78);
                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[95];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_81 = var_zvPhnLst;
                tmp_subscript_name_80 = mod_consts[102];
                tmp_called_instance_49 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_81, tmp_subscript_name_80, 8);
                if (tmp_called_instance_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_9;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 211;
                tmp_expression_name_80 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_49,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_49);
                if (tmp_expression_name_80 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_9;
                }
                tmp_subscript_name_81 = mod_consts[31];
                tmp_dict_value_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_80, tmp_subscript_name_81, 2);
                Py_DECREF(tmp_expression_name_80);
                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[96];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_83 = var_zvPhnLst;
                tmp_subscript_name_82 = mod_consts[102];
                tmp_called_instance_50 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_83, tmp_subscript_name_82, 8);
                if (tmp_called_instance_50 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_9;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 211;
                tmp_expression_name_82 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_50,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_50);
                if (tmp_expression_name_82 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_9;
                }
                tmp_subscript_name_83 = mod_consts[97];
                tmp_dict_value_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_82, tmp_subscript_name_83, 3);
                Py_DECREF(tmp_expression_name_82);
                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 211;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;
            PyList_SET_ITEM(tmp_dict_value_2, 8, tmp_list_element_1);
            tmp_dict_key_12 = mod_consts[93];
            CHECK_OBJECT(var_zvPhnLst);
            tmp_expression_name_85 = var_zvPhnLst;
            tmp_subscript_name_84 = mod_consts[103];
            tmp_called_instance_51 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_85, tmp_subscript_name_84, 9);
            if (tmp_called_instance_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 212;
            tmp_expression_name_84 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_51,
                mod_consts[27],
                PyTuple_GET_ITEM(mod_consts[71], 0)
            );

            Py_DECREF(tmp_called_instance_51);
            if (tmp_expression_name_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_subscript_name_85 = mod_consts[29];
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_84, tmp_subscript_name_85, 0);
            Py_DECREF(tmp_expression_name_84);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "ooooooooooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_name_86;
                PyObject *tmp_called_instance_52;
                PyObject *tmp_expression_name_87;
                PyObject *tmp_subscript_name_86;
                PyObject *tmp_subscript_name_87;
                PyObject *tmp_expression_name_88;
                PyObject *tmp_called_instance_53;
                PyObject *tmp_expression_name_89;
                PyObject *tmp_subscript_name_88;
                PyObject *tmp_subscript_name_89;
                PyObject *tmp_expression_name_90;
                PyObject *tmp_called_instance_54;
                PyObject *tmp_expression_name_91;
                PyObject *tmp_subscript_name_90;
                PyObject *tmp_subscript_name_91;
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[94];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_87 = var_zvPhnLst;
                tmp_subscript_name_86 = mod_consts[103];
                tmp_called_instance_52 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_87, tmp_subscript_name_86, 9);
                if (tmp_called_instance_52 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_10;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 212;
                tmp_expression_name_86 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_52,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_52);
                if (tmp_expression_name_86 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_10;
                }
                tmp_subscript_name_87 = mod_consts[30];
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_86, tmp_subscript_name_87, 1);
                Py_DECREF(tmp_expression_name_86);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[95];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_89 = var_zvPhnLst;
                tmp_subscript_name_88 = mod_consts[103];
                tmp_called_instance_53 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_89, tmp_subscript_name_88, 9);
                if (tmp_called_instance_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_10;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 212;
                tmp_expression_name_88 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_53,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_53);
                if (tmp_expression_name_88 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_10;
                }
                tmp_subscript_name_89 = mod_consts[31];
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_88, tmp_subscript_name_89, 2);
                Py_DECREF(tmp_expression_name_88);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[96];
                CHECK_OBJECT(var_zvPhnLst);
                tmp_expression_name_91 = var_zvPhnLst;
                tmp_subscript_name_90 = mod_consts[103];
                tmp_called_instance_54 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_91, tmp_subscript_name_90, 9);
                if (tmp_called_instance_54 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_10;
                }
                frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 212;
                tmp_expression_name_90 = CALL_METHOD_WITH_SINGLE_ARG(
                    tmp_called_instance_54,
                    mod_consts[27],
                    PyTuple_GET_ITEM(mod_consts[71], 0)
                );

                Py_DECREF(tmp_called_instance_54);
                if (tmp_expression_name_90 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_10;
                }
                tmp_subscript_name_91 = mod_consts[97];
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_90, tmp_subscript_name_91, 3);
                Py_DECREF(tmp_expression_name_90);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 212;
                    type_description_1 = "ooooooooooooooooooooooo";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_list_element_1, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;
            PyList_SET_ITEM(tmp_dict_value_2, 9, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_dict_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_assign_source_38 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        assert(var_zvPhnPld == NULL);
        var_zvPhnPld = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_unicode_arg_3;
        CHECK_OBJECT(var_zvPhnPld);
        tmp_unicode_arg_3 = var_zvPhnPld;
        tmp_assign_source_39 = PyObject_Unicode(tmp_unicode_arg_3);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvPhnPld;
            assert(old != NULL);
            var_zvPhnPld = tmp_assign_source_39;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_expression_name_92;
        PyObject *tmp_subscript_name_92;
        CHECK_OBJECT(var_zvPhnPld);
        tmp_expression_name_92 = var_zvPhnPld;
        tmp_subscript_name_92 = mod_consts[86];
        tmp_assign_source_40 = LOOKUP_SUBSCRIPT(tmp_expression_name_92, tmp_subscript_name_92);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvPhnPld;
            assert(old != NULL);
            var_zvPhnPld = tmp_assign_source_40;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_expression_name_93;
        PyObject *tmp_subscript_name_93;
        CHECK_OBJECT(var_zvPhnPld);
        tmp_expression_name_93 = var_zvPhnPld;
        tmp_subscript_name_93 = mod_consts[104];
        tmp_assign_source_41 = LOOKUP_SUBSCRIPT(tmp_expression_name_93, tmp_subscript_name_93);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvPhnPld;
            assert(old != NULL);
            var_zvPhnPld = tmp_assign_source_41;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_instance_55;
        CHECK_OBJECT(var_zvPhnPld);
        tmp_called_instance_55 = var_zvPhnPld;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 218;
        tmp_assign_source_42 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_55,
            mod_consts[15],
            &PyTuple_GET_ITEM(mod_consts[105], 0)
        );

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvPhnPld;
            assert(old != NULL);
            var_zvPhnPld = tmp_assign_source_42;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_left_name_26;
        PyObject *tmp_left_name_27;
        PyObject *tmp_left_name_28;
        PyObject *tmp_left_name_29;
        PyObject *tmp_right_name_26;
        PyObject *tmp_right_name_27;
        PyObject *tmp_right_name_28;
        PyObject *tmp_right_name_29;
        if (var_zvPerLst == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_29 = var_zvPerLst;
        if (var_zvCstLst == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_26 = var_zvCstLst;
        tmp_left_name_28 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_29, tmp_right_name_26);
        if (tmp_left_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_zvDefLst == NULL) {
            Py_DECREF(tmp_left_name_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_27 = var_zvDefLst;
        tmp_left_name_27 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_28, tmp_right_name_27);
        Py_DECREF(tmp_left_name_28);
        if (tmp_left_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_28 = mod_consts[76];
        tmp_left_name_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_27, tmp_right_name_28);
        Py_DECREF(tmp_left_name_27);
        if (tmp_left_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvPhnPld);
        tmp_right_name_29 = var_zvPhnPld;
        tmp_assign_source_43 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_26, tmp_right_name_29);
        Py_DECREF(tmp_left_name_26);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_zvFulLst == NULL);
        var_zvFulLst = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_left_name_30;
        PyObject *tmp_left_name_31;
        PyObject *tmp_right_name_30;
        PyObject *tmp_right_name_31;
        tmp_left_name_31 = mod_consts[106];
        CHECK_OBJECT(var_zvFulLst);
        tmp_right_name_30 = var_zvFulLst;
        tmp_left_name_30 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_31, tmp_right_name_30);
        if (tmp_left_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_31 = mod_consts[107];
        tmp_assign_source_44 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_30, tmp_right_name_31);
        Py_DECREF(tmp_left_name_30);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_payload == NULL);
        var_payload = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_instance_56;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_56 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_called_instance_56 == NULL)) {
            tmp_called_instance_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_called_instance_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_payload);
        tmp_args_element_name_1 = var_payload;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 223;
        tmp_assign_source_45 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_56, mod_consts[109], tmp_args_element_name_1);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_payload;
            assert(old != NULL);
            var_payload = tmp_assign_source_45;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_94;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_called_instance_57;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_name_94 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_expression_name_94 == NULL)) {
            tmp_expression_name_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_expression_name_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_94, mod_consts[111]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_url);
        tmp_kw_call_arg_value_0_1 = var_url;
        tmp_called_instance_57 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_called_instance_57 == NULL)) {
            tmp_called_instance_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_called_instance_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_payload);
        tmp_args_element_name_2 = var_payload;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 225;
        tmp_kw_call_dict_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_57, mod_consts[112], tmp_args_element_name_2);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_headers);
        tmp_kw_call_dict_value_1_1 = var_headers;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 225;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_name_2, args, kw_values, mod_consts[113]);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_unicode_arg_4;
        PyObject *tmp_expression_name_95;
        CHECK_OBJECT(var_r);
        tmp_expression_name_95 = var_r;
        tmp_unicode_arg_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_95, mod_consts[114]);
        if (tmp_unicode_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_47 = PyObject_Unicode(tmp_unicode_arg_4);
        Py_DECREF(tmp_unicode_arg_4);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_zvRtn == NULL);
        var_zvRtn = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_tmp_condition_result_10_object_1;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_zvRtn);
        tmp_compexpr_left_11 = var_zvRtn;
        tmp_compexpr_right_11 = mod_consts[37];
        tmp_tmp_condition_result_10_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_11, tmp_compexpr_right_11);
        if (tmp_tmp_condition_result_10_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_tmp_condition_result_10_object_1);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_10_object_1);

            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_10_object_1);
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[115];
        {
            PyObject *old = var_zvRtn;
            assert(old != NULL);
            var_zvRtn = tmp_assign_source_48;
            Py_INCREF(var_zvRtn);
            Py_DECREF(old);
        }

    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[116];
        {
            PyObject *old = var_zvRtn;
            assert(old != NULL);
            var_zvRtn = tmp_assign_source_49;
            Py_INCREF(var_zvRtn);
            Py_DECREF(old);
        }

    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_left_name_32;
        PyObject *tmp_left_name_33;
        PyObject *tmp_left_name_34;
        PyObject *tmp_right_name_32;
        PyObject *tmp_right_name_33;
        PyObject *tmp_right_name_34;
        PyObject *tmp_expression_name_96;
        tmp_left_name_34 = mod_consts[117];
        CHECK_OBJECT(var_zvRtn);
        tmp_right_name_32 = var_zvRtn;
        tmp_left_name_33 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_34, tmp_right_name_32);
        assert(!(tmp_left_name_33 == NULL));
        tmp_right_name_33 = mod_consts[118];
        tmp_left_name_32 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_33, tmp_right_name_33);
        Py_DECREF(tmp_left_name_33);
        assert(!(tmp_left_name_32 == NULL));
        CHECK_OBJECT(var_r);
        tmp_expression_name_96 = var_r;
        tmp_right_name_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_96, mod_consts[114]);
        if (tmp_right_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_32);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_50 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_32, tmp_right_name_34);
        Py_DECREF(tmp_left_name_32);
        Py_DECREF(tmp_right_name_34);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvFullErr;
            assert(old != NULL);
            var_zvFullErr = tmp_assign_source_50;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_name_3;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 236;
        tmp_assign_source_51 = CALL_FUNCTION_NO_ARGS(tmp_called_name_3);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_FR == NULL);
        var_FR = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_left_name_35;
        PyObject *tmp_left_name_36;
        PyObject *tmp_left_name_37;
        PyObject *tmp_left_name_38;
        PyObject *tmp_left_name_39;
        PyObject *tmp_left_name_40;
        PyObject *tmp_left_name_41;
        PyObject *tmp_left_name_42;
        PyObject *tmp_left_name_43;
        PyObject *tmp_left_name_44;
        PyObject *tmp_right_name_35;
        PyObject *tmp_unicode_arg_5;
        PyObject *tmp_expression_name_97;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_right_name_36;
        PyObject *tmp_right_name_37;
        PyObject *tmp_unicode_arg_6;
        PyObject *tmp_right_name_38;
        PyObject *tmp_right_name_39;
        PyObject *tmp_unicode_arg_7;
        PyObject *tmp_expression_name_98;
        PyObject *tmp_right_name_40;
        PyObject *tmp_right_name_41;
        PyObject *tmp_unicode_arg_8;
        PyObject *tmp_right_name_42;
        PyObject *tmp_right_name_43;
        PyObject *tmp_unicode_arg_9;
        PyObject *tmp_right_name_44;
        tmp_left_name_44 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_left_name_44 == NULL)) {
            tmp_left_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_left_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_FR);
        tmp_args_element_name_3 = var_FR;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 237;
        tmp_expression_name_97 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
        if (tmp_expression_name_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_unicode_arg_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_97, mod_consts[20]);
        Py_DECREF(tmp_expression_name_97);
        if (tmp_unicode_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_35 = PyObject_Unicode(tmp_unicode_arg_5);
        Py_DECREF(tmp_unicode_arg_5);
        if (tmp_right_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_43 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_44, tmp_right_name_35);
        Py_DECREF(tmp_right_name_35);
        if (tmp_left_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_36 = mod_consts[119];
        tmp_left_name_42 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_43, tmp_right_name_36);
        Py_DECREF(tmp_left_name_43);
        if (tmp_left_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvRtn);
        tmp_unicode_arg_6 = var_zvRtn;
        tmp_right_name_37 = PyObject_Unicode(tmp_unicode_arg_6);
        if (tmp_right_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_42);

            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_41 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_42, tmp_right_name_37);
        Py_DECREF(tmp_left_name_42);
        Py_DECREF(tmp_right_name_37);
        if (tmp_left_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_38 = mod_consts[120];
        tmp_left_name_40 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_41, tmp_right_name_38);
        Py_DECREF(tmp_left_name_41);
        if (tmp_left_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_r);
        tmp_expression_name_98 = var_r;
        tmp_unicode_arg_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_98, mod_consts[114]);
        if (tmp_unicode_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_40);

            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_39 = PyObject_Unicode(tmp_unicode_arg_7);
        Py_DECREF(tmp_unicode_arg_7);
        if (tmp_right_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_40);

            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_39 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_40, tmp_right_name_39);
        Py_DECREF(tmp_left_name_40);
        Py_DECREF(tmp_right_name_39);
        if (tmp_left_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_40 = mod_consts[57];
        tmp_left_name_38 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_39, tmp_right_name_40);
        Py_DECREF(tmp_left_name_39);
        if (tmp_left_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_unicode_arg_8 = par_data;
        tmp_right_name_41 = PyObject_Unicode(tmp_unicode_arg_8);
        if (tmp_right_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_38);

            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_37 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_38, tmp_right_name_41);
        Py_DECREF(tmp_left_name_38);
        Py_DECREF(tmp_right_name_41);
        if (tmp_left_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_42 = mod_consts[121];
        tmp_left_name_36 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_37, tmp_right_name_42);
        Py_DECREF(tmp_left_name_37);
        if (tmp_left_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_payload);
        tmp_unicode_arg_9 = var_payload;
        tmp_right_name_43 = PyObject_Unicode(tmp_unicode_arg_9);
        if (tmp_right_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_36);

            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_35 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_36, tmp_right_name_43);
        Py_DECREF(tmp_left_name_36);
        Py_DECREF(tmp_right_name_43);
        if (tmp_left_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_44 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_right_name_44 == NULL)) {
            tmp_right_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_right_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_35);

            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_52 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_35, tmp_right_name_44);
        Py_DECREF(tmp_left_name_35);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_52);
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_45;
        PyObject *tmp_left_name_46;
        PyObject *tmp_left_name_47;
        PyObject *tmp_left_name_48;
        PyObject *tmp_right_name_45;
        PyObject *tmp_right_name_46;
        PyObject *tmp_right_name_47;
        PyObject *tmp_right_name_48;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvLvh);
        tmp_left_name_48 = var_zvLvh;
        tmp_right_name_45 = mod_consts[44];
        tmp_left_name_47 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_48, tmp_right_name_45);
        if (tmp_left_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvRtn);
        tmp_right_name_46 = var_zvRtn;
        tmp_left_name_46 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_47, tmp_right_name_46);
        Py_DECREF(tmp_left_name_47);
        if (tmp_left_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_47 = mod_consts[44];
        tmp_left_name_45 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_46, tmp_right_name_47);
        Py_DECREF(tmp_left_name_46);
        if (tmp_left_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvFullErr);
        tmp_right_name_48 = var_zvFullErr;
        tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_45, tmp_right_name_48);
        Py_DECREF(tmp_left_name_45);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 239;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_49;
        PyObject *tmp_left_name_50;
        PyObject *tmp_left_name_51;
        PyObject *tmp_right_name_49;
        PyObject *tmp_right_name_50;
        PyObject *tmp_right_name_51;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvLvh);
        tmp_left_name_51 = var_zvLvh;
        tmp_right_name_49 = mod_consts[44];
        tmp_left_name_50 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_51, tmp_right_name_49);
        if (tmp_left_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_50 = mod_consts[123];
        tmp_left_name_49 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_50, tmp_right_name_50);
        Py_DECREF(tmp_left_name_50);
        if (tmp_left_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_51 = mod_consts[124];
        tmp_args_element_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_49, tmp_right_name_51);
        Py_DECREF(tmp_left_name_49);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 242;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_name_7;
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 243;
        tmp_assign_source_53 = CALL_FUNCTION_NO_ARGS(tmp_called_name_7);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_FR == NULL);
        var_FR = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_left_name_52;
        PyObject *tmp_left_name_53;
        PyObject *tmp_left_name_54;
        PyObject *tmp_left_name_55;
        PyObject *tmp_left_name_56;
        PyObject *tmp_left_name_57;
        PyObject *tmp_right_name_52;
        PyObject *tmp_unicode_arg_10;
        PyObject *tmp_expression_name_99;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_right_name_53;
        PyObject *tmp_right_name_54;
        PyObject *tmp_unicode_arg_11;
        PyObject *tmp_right_name_55;
        PyObject *tmp_right_name_56;
        PyObject *tmp_right_name_57;
        tmp_left_name_57 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_left_name_57 == NULL)) {
            tmp_left_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_left_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_FR);
        tmp_args_element_name_6 = var_FR;
        frame_2aab9cb3151bede7d9a8423253a366bf->m_frame.f_lineno = 244;
        tmp_expression_name_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_6);
        if (tmp_expression_name_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_unicode_arg_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_99, mod_consts[20]);
        Py_DECREF(tmp_expression_name_99);
        if (tmp_unicode_arg_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_52 = PyObject_Unicode(tmp_unicode_arg_10);
        Py_DECREF(tmp_unicode_arg_10);
        if (tmp_right_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_56 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_57, tmp_right_name_52);
        Py_DECREF(tmp_right_name_52);
        if (tmp_left_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_53 = mod_consts[125];
        tmp_left_name_55 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_56, tmp_right_name_53);
        Py_DECREF(tmp_left_name_56);
        if (tmp_left_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_unicode_arg_11 = par_data;
        tmp_right_name_54 = PyObject_Unicode(tmp_unicode_arg_11);
        if (tmp_right_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_55);

            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_54 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_55, tmp_right_name_54);
        Py_DECREF(tmp_left_name_55);
        Py_DECREF(tmp_right_name_54);
        if (tmp_left_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_55 = mod_consts[121];
        tmp_left_name_53 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_54, tmp_right_name_55);
        Py_DECREF(tmp_left_name_54);
        if (tmp_left_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvSessionId);
        tmp_right_name_56 = var_zvSessionId;
        tmp_left_name_52 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_53, tmp_right_name_56);
        Py_DECREF(tmp_left_name_53);
        if (tmp_left_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_57 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_right_name_57 == NULL)) {
            tmp_right_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_right_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_52);

            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_54 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_52, tmp_right_name_57);
        Py_DECREF(tmp_left_name_52);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_54);
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2aab9cb3151bede7d9a8423253a366bf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2aab9cb3151bede7d9a8423253a366bf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2aab9cb3151bede7d9a8423253a366bf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2aab9cb3151bede7d9a8423253a366bf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2aab9cb3151bede7d9a8423253a366bf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2aab9cb3151bede7d9a8423253a366bf,
        type_description_1,
        par_data,
        var_zvFullErr,
        var_zvSessionId,
        var_zvLvh,
        var_zvAcc,
        var_url,
        var_headers,
        var_zvUdtLst,
        var_zvFldLst,
        var_zvPhnLst,
        var_zvPerLst,
        var_zvCstLst,
        var_zvDefLst,
        var_f,
        var_zvFld,
        var_zvVal,
        var_zvCat,
        var_zvPhnPld,
        var_zvFulLst,
        var_payload,
        var_r,
        var_zvRtn,
        var_FR
    );


    // Release cached frame if used for exception.
    if (frame_2aab9cb3151bede7d9a8423253a366bf == cache_frame_2aab9cb3151bede7d9a8423253a366bf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2aab9cb3151bede7d9a8423253a366bf);
        cache_frame_2aab9cb3151bede7d9a8423253a366bf = NULL;
    }

    assertFrameObject(frame_2aab9cb3151bede7d9a8423253a366bf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_zvFullErr);
    var_zvFullErr = NULL;
    Py_XDECREF(var_zvSessionId);
    var_zvSessionId = NULL;
    Py_XDECREF(var_zvLvh);
    var_zvLvh = NULL;
    Py_XDECREF(var_zvAcc);
    var_zvAcc = NULL;
    Py_XDECREF(var_url);
    var_url = NULL;
    Py_XDECREF(var_headers);
    var_headers = NULL;
    Py_XDECREF(var_zvUdtLst);
    var_zvUdtLst = NULL;
    Py_XDECREF(var_zvFldLst);
    var_zvFldLst = NULL;
    Py_XDECREF(var_zvPhnLst);
    var_zvPhnLst = NULL;
    Py_XDECREF(var_zvPerLst);
    var_zvPerLst = NULL;
    Py_XDECREF(var_zvCstLst);
    var_zvCstLst = NULL;
    Py_XDECREF(var_zvDefLst);
    var_zvDefLst = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_zvFld);
    var_zvFld = NULL;
    Py_XDECREF(var_zvVal);
    var_zvVal = NULL;
    Py_XDECREF(var_zvCat);
    var_zvCat = NULL;
    Py_XDECREF(var_zvPhnPld);
    var_zvPhnPld = NULL;
    Py_XDECREF(var_zvFulLst);
    var_zvFulLst = NULL;
    Py_XDECREF(var_payload);
    var_payload = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_zvRtn);
    var_zvRtn = NULL;
    Py_XDECREF(var_FR);
    var_FR = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_zvFullErr);
    var_zvFullErr = NULL;
    Py_XDECREF(var_zvSessionId);
    var_zvSessionId = NULL;
    Py_XDECREF(var_zvLvh);
    var_zvLvh = NULL;
    Py_XDECREF(var_zvAcc);
    var_zvAcc = NULL;
    Py_XDECREF(var_url);
    var_url = NULL;
    Py_XDECREF(var_headers);
    var_headers = NULL;
    Py_XDECREF(var_zvUdtLst);
    var_zvUdtLst = NULL;
    Py_XDECREF(var_zvFldLst);
    var_zvFldLst = NULL;
    Py_XDECREF(var_zvPhnLst);
    var_zvPhnLst = NULL;
    Py_XDECREF(var_zvPerLst);
    var_zvPerLst = NULL;
    Py_XDECREF(var_zvCstLst);
    var_zvCstLst = NULL;
    Py_XDECREF(var_zvDefLst);
    var_zvDefLst = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_zvFld);
    var_zvFld = NULL;
    Py_XDECREF(var_zvVal);
    var_zvVal = NULL;
    Py_XDECREF(var_zvCat);
    var_zvCat = NULL;
    Py_XDECREF(var_zvPhnPld);
    var_zvPhnPld = NULL;
    Py_XDECREF(var_zvFulLst);
    var_zvFulLst = NULL;
    Py_XDECREF(var_payload);
    var_payload = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_zvRtn);
    var_zvRtn = NULL;
    Py_XDECREF(var_FR);
    var_FR = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___parents_main__$$$function__6_process_line(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_line = python_pars[0];
    PyObject *var_zvLn = NULL;
    struct Nuitka_FrameObject *frame_df1fcafae5442887c667e617e3e7c7c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_df1fcafae5442887c667e617e3e7c7c9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_df1fcafae5442887c667e617e3e7c7c9)) {
        Py_XDECREF(cache_frame_df1fcafae5442887c667e617e3e7c7c9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_df1fcafae5442887c667e617e3e7c7c9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_df1fcafae5442887c667e617e3e7c7c9 = MAKE_FUNCTION_FRAME(codeobj_df1fcafae5442887c667e617e3e7c7c9, module___parents_main__, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_df1fcafae5442887c667e617e3e7c7c9->m_type_description == NULL);
    frame_df1fcafae5442887c667e617e3e7c7c9 = cache_frame_df1fcafae5442887c667e617e3e7c7c9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_df1fcafae5442887c667e617e3e7c7c9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_df1fcafae5442887c667e617e3e7c7c9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_line);
        tmp_called_instance_1 = par_line;
        frame_df1fcafae5442887c667e617e3e7c7c9->m_frame.f_lineno = 253;
        tmp_expression_name_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[126], 0)
        );

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[30];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 1);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_zvLn == NULL);
        var_zvLn = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(var_zvLn);
        tmp_called_instance_2 = var_zvLn;
        frame_df1fcafae5442887c667e617e3e7c7c9->m_frame.f_lineno = 254;
        tmp_expression_name_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[27],
            PyTuple_GET_ITEM(mod_consts[126], 0)
        );

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = mod_consts[29];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_2, 0);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zvLn;
            assert(old != NULL);
            var_zvLn = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_zvLn);
        tmp_args_element_name_1 = var_zvLn;
        frame_df1fcafae5442887c667e617e3e7c7c9->m_frame.f_lineno = 255;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_df1fcafae5442887c667e617e3e7c7c9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_df1fcafae5442887c667e617e3e7c7c9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_df1fcafae5442887c667e617e3e7c7c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_df1fcafae5442887c667e617e3e7c7c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_df1fcafae5442887c667e617e3e7c7c9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_df1fcafae5442887c667e617e3e7c7c9,
        type_description_1,
        par_line,
        var_zvLn
    );


    // Release cached frame if used for exception.
    if (frame_df1fcafae5442887c667e617e3e7c7c9 == cache_frame_df1fcafae5442887c667e617e3e7c7c9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_df1fcafae5442887c667e617e3e7c7c9);
        cache_frame_df1fcafae5442887c667e617e3e7c7c9 = NULL;
    }

    assertFrameObject(frame_df1fcafae5442887c667e617e3e7c7c9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_zvLn);
    Py_DECREF(var_zvLn);
    var_zvLn = NULL;
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

    Py_XDECREF(var_zvLn);
    var_zvLn = NULL;
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
    CHECK_OBJECT(par_line);
    Py_DECREF(par_line);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_line);
    Py_DECREF(par_line);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION___parents_main__$$$function__1_zvFileUtil(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___parents_main__$$$function__1_zvFileUtil,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7d7cc981838887ec9a435cfb6fc1ac73,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___parents_main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___parents_main__$$$function__2_LvAudit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___parents_main__$$$function__2_LvAudit,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7a34c9c59aea696239b3c1462397c8ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___parents_main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___parents_main__$$$function__3_Login() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___parents_main__$$$function__3_Login,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4d8051a63edd0ef3db08b72e705d2289,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___parents_main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___parents_main__$$$function__4_UpdateLvHistory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___parents_main__$$$function__4_UpdateLvHistory,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4a56b89437cd42d903f11e200858c2c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___parents_main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___parents_main__$$$function__5_UpdateAll() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___parents_main__$$$function__5_UpdateAll,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2aab9cb3151bede7d9a8423253a366bf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___parents_main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___parents_main__$$$function__6_process_line() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___parents_main__$$$function__6_process_line,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_df1fcafae5442887c667e617e3e7c7c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___parents_main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___parents_main__$$$function__7_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_457e398445b5047531f4b613cc4cf6d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___parents_main__,
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

function_impl_code functable___parents_main__[] = {
    impl___parents_main__$$$function__1_zvFileUtil,
    impl___parents_main__$$$function__2_LvAudit,
    impl___parents_main__$$$function__3_Login,
    impl___parents_main__$$$function__4_UpdateLvHistory,
    impl___parents_main__$$$function__5_UpdateAll,
    impl___parents_main__$$$function__6_process_line,
    NULL,
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

    function_impl_code *current = functable___parents_main__;
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

    if (offset > sizeof(functable___parents_main__) || offset < 0) {
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
        functable___parents_main__[offset],
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
        module___parents_main__,
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
PyObject *modulecode___parents_main__(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    module___parents_main__ = module;

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
    PRINT_STRING("__parents_main__: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("__parents_main__: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("__parents_main__: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in init__parents_main__\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict___parents_main__ = MODULE_DICT(module___parents_main__);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict___parents_main__,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict___parents_main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict___parents_main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict___parents_main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict___parents_main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module___parents_main__);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict___parents_main__, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict___parents_main__, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict___parents_main__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module___parents_main__);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e = MAKE_MODULE_FRAME(codeobj_bd1c47c2f029182a6dc7e3f7fa8f1a0e, module___parents_main__);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e);
    assert(Py_REFCNT(frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[131], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[132], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[52];
        tmp_globals_arg_name_1 = (PyObject *)moduledict___parents_main__;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[29];
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[110];
        tmp_globals_arg_name_2 = (PyObject *)moduledict___parents_main__;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[29];
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[108];
        tmp_globals_arg_name_3 = (PyObject *)moduledict___parents_main__;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = mod_consts[29];
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 5;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[135];
        tmp_globals_arg_name_4 = (PyObject *)moduledict___parents_main__;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = mod_consts[29];
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[136];
        tmp_globals_arg_name_5 = (PyObject *)moduledict___parents_main__;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[137];
        tmp_level_name_5 = mod_consts[29];
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 8;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict___parents_main__,
                mod_consts[17],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[17]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict___parents_main__,
                mod_consts[19],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[19]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_11);
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[138];
        tmp_globals_arg_name_6 = (PyObject *)moduledict___parents_main__;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = mod_consts[29];
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 9;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        assert(!(tmp_assign_source_12 == NULL));
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[139];
        tmp_globals_arg_name_7 = (PyObject *)moduledict___parents_main__;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[140];
        tmp_level_name_7 = mod_consts[29];
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 10;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_arg_name_7, tmp_locals_arg_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict___parents_main__,
                mod_consts[141],
                mod_consts[29]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[141]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 12;
        tmp_assign_source_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[138]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[143];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_15 = MAKE_FUNCTION___parents_main__$$$function__1_zvFileUtil(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[144]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 30;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[145]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 30;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_16);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        tmp_compexpr_left_1 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_compexpr_left_1 == NULL)) {
            tmp_compexpr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        assert(!(tmp_compexpr_left_1 == NULL));
        tmp_compexpr_right_1 = mod_consts[147];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 31;

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
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[148];
        UPDATE_STRING_DICT0(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_17);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[149];
        UPDATE_STRING_DICT0(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_18);
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[150];
        UPDATE_STRING_DICT0(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[151];
        UPDATE_STRING_DICT0(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 39;
        tmp_assign_source_22 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_args_element_name_2 == NULL)) {
            tmp_args_element_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        assert(!(tmp_args_element_name_2 == NULL));
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 40;
        tmp_expression_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[155]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_args_element_name_3 == NULL)) {
            tmp_args_element_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 41;
        tmp_expression_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[20]);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_26);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_tmp_condition_result_2_object_1;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[158]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[97];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        assert(!(tmp_tmp_condition_result_2_object_1 == NULL));
        tmp_condition_result_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[158]);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[97];
        tmp_assign_source_27 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_5, tmp_subscript_name_1, 3);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        assert(!(tmp_called_instance_3 == NULL));
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 47;
        tmp_assign_source_28 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[159]);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_left_name_1 == NULL)) {
            tmp_left_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_right_name_1 == NULL)) {
            tmp_right_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_29);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_name_5;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 52;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_name_5, mod_consts[160]);

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION___parents_main__$$$function__2_LvAudit();

        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION___parents_main__$$$function__3_Login();

        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION___parents_main__$$$function__4_UpdateLvHistory();

        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION___parents_main__$$$function__5_UpdateAll();

        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION___parents_main__$$$function__6_process_line();

        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_name_6;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 258;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_name_6, mod_consts[164]);

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_36);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_open_filename_1;
        tmp_open_filename_1 = mod_consts[166];
        tmp_assign_source_37 = BUILTIN_OPEN(tmp_open_filename_1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_7 = tmp_with_1__source;
        tmp_called_name_7 = LOOKUP_SPECIAL(tmp_expression_name_7, mod_consts[13]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_2;
        }
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 259;
        tmp_assign_source_38 = CALL_FUNCTION_NO_ARGS(tmp_called_name_7);
        Py_DECREF(tmp_called_name_7);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_expression_name_8;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_name_8 = tmp_with_1__source;
        tmp_assign_source_39 = LOOKUP_SPECIAL(tmp_expression_name_8, mod_consts[14]);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_assign_source_40;
        tmp_assign_source_40 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_41 = tmp_with_1__enter;
        UPDATE_STRING_DICT0(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_41);
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_expression_name_9 == NULL)) {
            tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[165]);
        }

        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_4;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[168]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_4;
        }
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_args_element_name_4 == NULL)) {
            tmp_args_element_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 260;

            goto try_except_handler_4;
        }
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_args_element_name_5 == NULL)) {
            tmp_args_element_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 260;

            goto try_except_handler_4;
        }
        tmp_args_element_name_6 = mod_consts[169];
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 260;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_8, call_args);
        }

        Py_DECREF(tmp_called_name_8);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_42);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e, exception_keeper_lineno_2);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_2, exception_keeper_tb_2);
    PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_assign_source_43;
        tmp_assign_source_43 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_43;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_9 = tmp_with_1__exit;
        tmp_args_element_name_7 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_name_8 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_name_9 = EXC_TRACEBACK(PyThreadState_GET());
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 260;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_9, call_args);
        }

        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_5;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 260;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame) frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_5;
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 259;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame) frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_5;
    branch_end_3:;
    goto try_end_3;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_with_1__indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_name_10;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_10 = tmp_with_1__exit;
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 260;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_name_10, mod_consts[23]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_4);
            Py_XDECREF(exception_keeper_value_4);
            Py_XDECREF(exception_keeper_tb_4);

            exception_lineno = 260;

            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_compexpr_left_5;
        nuitka_bool tmp_compexpr_right_5;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_5 = tmp_with_1__indicator;
        tmp_compexpr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_name_11 = tmp_with_1__exit;
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 260;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_name_11, mod_consts[23]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_6:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_left_name_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_right_name_2;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 263;
        tmp_left_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[138]);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_right_name_2 == NULL)) {
            tmp_right_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_44 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_44);
    }
    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        tmp_called_name_12 = LOOKUP_BUILTIN(mod_consts[10]);
        assert(tmp_called_name_12 != NULL);
        tmp_args_element_name_10 = GET_STRING_DICT_VALUE(moduledict___parents_main__, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_args_element_name_10 == NULL)) {
            tmp_args_element_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        assert(!(tmp_args_element_name_10 == NULL));
        tmp_args_element_name_11 = mod_consts[172];
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 264;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_12, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_ass_subscript_1;
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 266;
        tmp_expression_name_11 = IMPORT_HARD_SYS();
        assert(!(tmp_expression_name_11 == NULL));
        tmp_expression_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[173]);
        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = mod_consts[174];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_10, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_10);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 266;
        tmp_expression_name_12 = IMPORT_HARD_SYS();
        assert(!(tmp_expression_name_12 == NULL));
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[173]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[175];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_name_name_8;


        tmp_assattr_value_3 = MAKE_FUNCTION___parents_main__$$$function__7_lambda();

        tmp_name_name_8 = mod_consts[177];
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 268;
        tmp_expression_name_13 = IMPORT_MODULE1(tmp_name_name_8);
        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[178]);
        Py_DECREF(tmp_expression_name_13);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[179], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_name_name_9;
        PyObject *tmp_call_result_4;
        tmp_name_name_9 = mod_consts[177];
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 269;
        tmp_expression_name_14 = IMPORT_MODULE1(tmp_name_name_9);
        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[178]);
        Py_DECREF(tmp_expression_name_14);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame.f_lineno = 269;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[180]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e);
#endif
    popFrameStack();

    assertFrameObject(frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd1c47c2f029182a6dc7e3f7fa8f1a0e, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module___parents_main__;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

