// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 1; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 1 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 1; i++) {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 1 * sizeof(PyObject *));
            memcpy(python_pars + 1, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 1)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL) {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 1 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 1; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 1 * sizeof(PyObject *));
                memcpy(python_pars+1 + 1, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 1)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 1);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 1, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 1);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 1);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 2; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 2 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 2; i++) {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 2 * sizeof(PyObject *));
            memcpy(python_pars + 2, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 2)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL) {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 2 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 2; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 2 * sizeof(PyObject *));
                memcpy(python_pars+1 + 2, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 2)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 2);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 2, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 2);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 2);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 3; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 3 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 3; i++) {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 3 * sizeof(PyObject *));
            memcpy(python_pars + 3, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 3)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL) {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 3 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 3; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 3 * sizeof(PyObject *));
                memcpy(python_pars+1 + 3, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 3)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 3);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 3, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 3);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 3);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 4; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 4 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 4; i++) {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 4 * sizeof(PyObject *));
            memcpy(python_pars + 4, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 4)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL) {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 4 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 4; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 4 * sizeof(PyObject *));
                memcpy(python_pars+1 + 4, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 4)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 4);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 4, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 4);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 4);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 5; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 5 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 5; i++) {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 5 * sizeof(PyObject *));
            memcpy(python_pars + 5, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++) {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 5)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL) {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 5 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 5; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 5 * sizeof(PyObject *));
                memcpy(python_pars+1 + 5, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 5)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 5);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 5, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 5);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    SET_CURRENT_EXCEPTION_TYPE0_STR(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 5);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_METHOD_WITH_ARGS1(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 1; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    1
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS1(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    1
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS1(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS2(PyObject *source, PyObject *attr_name, PyObject **args) {
    CHECK_OBJECT(source);
    CHECK_OBJECT(attr_name);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 2; i++) {
        CHECK_OBJECT(args[i]);
    }
#endif

    PyTypeObject *type = Py_TYPE(source);

    if (type->tp_getattro == PyObject_GenericGetAttr) {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely(type->tp_dict == NULL)) {
            if (unlikely(PyType_Ready(type) < 0)) {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup(type, attr_name);
        descrgetfunc func = NULL;

        if (descr != NULL)
        {
            Py_INCREF(descr);

#if PYTHON_VERSION < 300
            if (PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)) {
#endif
                func = Py_TYPE(descr)->tp_descr_get;

                if (func != NULL && PyDescr_IsData(descr))
                {
                    PyObject *called_object = func(descr, source, (PyObject *)type);
                    Py_DECREF(descr);

                    PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                        called_object,
                        args
                    );
                    Py_DECREF(called_object);
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if (dict != NULL)
        {
            CHECK_OBJECT(dict);

            Py_INCREF(dict);

            PyObject *called_object = PyDict_GetItem(dict, attr_name);

            if (called_object != NULL)
            {
                Py_INCREF(called_object);
                Py_XDECREF(descr);
                Py_DECREF(dict);

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF(called_object);
                return result;
            }

            Py_DECREF(dict);
        }

        if (func != NULL) {
            if (func == Nuitka_Function_Type.tp_descr_get) {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    2
                );

                Py_DECREF(descr);

                return result;
            } else {
                PyObject *called_object = func(descr, source, (PyObject *)type);
                CHECK_OBJECT(called_object);

                Py_DECREF(descr);

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF(called_object);

                return result;
            }
        }

        if (descr != NULL) {
            CHECK_OBJECT(descr);

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                descr,
                args
            );
            Py_DECREF(descr);

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if (type == &PyInstance_Type) {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert(attr_name != const_str_plain___dict__);
        assert(attr_name != const_str_plain___class__);

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            return CALL_FUNCTION_WITH_ARGS2(called_object, args);
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if (called_object != NULL) {
            descrgetfunc descr_get = Py_TYPE(called_object)->tp_descr_get;

            if (descr_get == Nuitka_Function_Type.tp_descr_get) {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    2
                );
            } else if (descr_get != NULL) {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely(method == NULL)) {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(method, args);
                Py_DECREF(method);
                return result;
            } else {
                return CALL_FUNCTION_WITH_ARGS2(called_object, args);
            }

        } else if (unlikely(source_instance->in_class->cl_getattr == NULL)) {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        } else {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely(called_object == NULL))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                called_object,
                args
            );
            Py_DECREF(called_object);
            return result;
        }
    }
#endif
    else if (type->tp_getattro != NULL) {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely(called_object == NULL)) {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else if (type->tp_getattr != NULL) {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked(attr_name)
        );

        if (unlikely(called_object == NULL))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF(called_object);
        return result;
    } else {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked(attr_name)
        );

        return NULL;
    }
}
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.h"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *);
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, },
    {"_asyncio", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_bisect", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_blake2", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_bz2", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_cn", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_hk", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_iso2022", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_jp", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_kr", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_tw", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_crypt", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_csv", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_ctypes", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_datetime", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_decimal", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_elementtree", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_hashlib", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_heapq", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_json", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_lsprof", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_multibytecodec", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_multiprocessing", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_opcode", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_pickle", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_posixsubprocess", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_random", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_sha3", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_socket", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_sqlite3", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_ssl", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_struct", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"array", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"audioop", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"binascii", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"datetime", NULL, 2441, 54505, NUITKA_BYTECODE_FLAG},
    {"fcntl", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"glob", NULL, 56946, 4253, NUITKA_BYTECODE_FLAG},
    {"grp", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"math", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"mmap", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"os", NULL, 61199, 29622, NUITKA_BYTECODE_FLAG},
    {"pyexpat", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"select", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"site", NULL, 90821, 12681, NUITKA_BYTECODE_FLAG},
    {"smtplib", NULL, 103502, 35334, NUITKA_BYTECODE_FLAG},
    {"sqlite3", NULL, 138836, 146, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"subprocess", NULL, 138982, 35479, NUITKA_BYTECODE_FLAG},
    {"termios", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"unicodedata", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"zlib", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"__future__", NULL, 174461, 4161, NUITKA_BYTECODE_FLAG},
    {"_bootlocale", NULL, 178622, 974, NUITKA_BYTECODE_FLAG},
    {"_collections_abc", NULL, 179596, 28791, NUITKA_BYTECODE_FLAG},
    {"_compat_pickle", NULL, 208387, 6560, NUITKA_BYTECODE_FLAG},
    {"_compression", NULL, 214947, 4098, NUITKA_BYTECODE_FLAG},
    {"_dummy_thread", NULL, 219045, 4845, NUITKA_BYTECODE_FLAG},
    {"_markupbase", NULL, 223890, 7985, NUITKA_BYTECODE_FLAG},
    {"_osx_support", NULL, 231875, 9700, NUITKA_BYTECODE_FLAG},
    {"_pyio", NULL, 241575, 71380, NUITKA_BYTECODE_FLAG},
    {"_sitebuiltins", NULL, 312955, 3429, NUITKA_BYTECODE_FLAG},
    {"_strptime", NULL, 316384, 15957, NUITKA_BYTECODE_FLAG},
    {"_sysconfigdata_m_linux_x86_64-linux-gnu", NULL, 332341, 16315, NUITKA_BYTECODE_FLAG},
    {"_threading_local", NULL, 348656, 6419, NUITKA_BYTECODE_FLAG},
    {"_weakrefset", NULL, 355075, 7822, NUITKA_BYTECODE_FLAG},
    {"abc", NULL, 362897, 7509, NUITKA_BYTECODE_FLAG},
    {"aifc", NULL, 370406, 25937, NUITKA_BYTECODE_FLAG},
    {"argparse", NULL, 396343, 60184, NUITKA_BYTECODE_FLAG},
    {"ast", NULL, 456527, 11698, NUITKA_BYTECODE_FLAG},
    {"asynchat", NULL, 468225, 6809, NUITKA_BYTECODE_FLAG},
    {"asyncio", NULL, 475034, 772, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"asyncio.base_events", NULL, 475806, 39339, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_futures", NULL, 515145, 2041, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_subprocess", NULL, 517186, 9256, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_tasks", NULL, 526442, 1855, NUITKA_BYTECODE_FLAG},
    {"asyncio.compat", NULL, 528297, 726, NUITKA_BYTECODE_FLAG},
    {"asyncio.constants", NULL, 529023, 245, NUITKA_BYTECODE_FLAG},
    {"asyncio.coroutines", NULL, 529268, 8546, NUITKA_BYTECODE_FLAG},
    {"asyncio.events", NULL, 537814, 25332, NUITKA_BYTECODE_FLAG},
    {"asyncio.futures", NULL, 563146, 13741, NUITKA_BYTECODE_FLAG},
    {"asyncio.locks", NULL, 576887, 15442, NUITKA_BYTECODE_FLAG},
    {"asyncio.log", NULL, 592329, 212, NUITKA_BYTECODE_FLAG},
    {"asyncio.proactor_events", NULL, 592541, 16816, NUITKA_BYTECODE_FLAG},
    {"asyncio.protocols", NULL, 609357, 5971, NUITKA_BYTECODE_FLAG},
    {"asyncio.queues", NULL, 615328, 8398, NUITKA_BYTECODE_FLAG},
    {"asyncio.selector_events", NULL, 623726, 29561, NUITKA_BYTECODE_FLAG},
    {"asyncio.sslproto", NULL, 653287, 20337, NUITKA_BYTECODE_FLAG},
    {"asyncio.streams", NULL, 673624, 19909, NUITKA_BYTECODE_FLAG},
    {"asyncio.subprocess", NULL, 693533, 6818, NUITKA_BYTECODE_FLAG},
    {"asyncio.tasks", NULL, 700351, 19087, NUITKA_BYTECODE_FLAG},
    {"asyncio.transports", NULL, 719438, 12054, NUITKA_BYTECODE_FLAG},
    {"asyncio.unix_events", NULL, 731492, 30549, NUITKA_BYTECODE_FLAG},
    {"asyncore", NULL, 762041, 15832, NUITKA_BYTECODE_FLAG},
    {"base64", NULL, 777873, 17053, NUITKA_BYTECODE_FLAG},
    {"bdb", NULL, 794926, 17027, NUITKA_BYTECODE_FLAG},
    {"binhex", NULL, 811953, 12080, NUITKA_BYTECODE_FLAG},
    {"bisect", NULL, 824033, 2670, NUITKA_BYTECODE_FLAG},
    {"bz2", NULL, 826703, 11276, NUITKA_BYTECODE_FLAG},
    {"cProfile", NULL, 837979, 4288, NUITKA_BYTECODE_FLAG},
    {"calendar", NULL, 842267, 25876, NUITKA_BYTECODE_FLAG},
    {"cgi", NULL, 868143, 28410, NUITKA_BYTECODE_FLAG},
    {"cgitb", NULL, 896553, 10074, NUITKA_BYTECODE_FLAG},
    {"chunk", NULL, 906627, 4894, NUITKA_BYTECODE_FLAG},
    {"cmd", NULL, 911521, 12569, NUITKA_BYTECODE_FLAG},
    {"code", NULL, 924090, 9830, NUITKA_BYTECODE_FLAG},
    {"codecs", NULL, 933920, 33894, NUITKA_BYTECODE_FLAG},
    {"codeop", NULL, 967814, 6264, NUITKA_BYTECODE_FLAG},
    {"collections", NULL, 974078, 45810, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"collections.abc", NULL, 179596, 28791, NUITKA_BYTECODE_FLAG},
    {"colorsys", NULL, 1019888, 3305, NUITKA_BYTECODE_FLAG},
    {"compileall", NULL, 1023193, 8272, NUITKA_BYTECODE_FLAG},
    {"concurrent", NULL, 1031465, 118, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures", NULL, 1031583, 634, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures._base", NULL, 1032217, 20626, NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.process", NULL, 1052843, 15823, NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.thread", NULL, 1068666, 3906, NUITKA_BYTECODE_FLAG},
    {"configparser", NULL, 1072572, 45238, NUITKA_BYTECODE_FLAG},
    {"contextlib", NULL, 1117810, 11152, NUITKA_BYTECODE_FLAG},
    {"copy", NULL, 1128962, 7073, NUITKA_BYTECODE_FLAG},
    {"copyreg", NULL, 1136035, 4238, NUITKA_BYTECODE_FLAG},
    {"crypt", NULL, 1140273, 2236, NUITKA_BYTECODE_FLAG},
    {"csv", NULL, 1142509, 11849, NUITKA_BYTECODE_FLAG},
    {"ctypes", NULL, 1154358, 16054, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes._endian", NULL, 1170412, 1918, NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib", NULL, 1172330, 285, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes.macholib.dyld", NULL, 1172615, 4325, NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib.dylib", NULL, 1176940, 1912, NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib.framework", NULL, 1178852, 2192, NUITKA_BYTECODE_FLAG},
    {"ctypes.util", NULL, 1181044, 7220, NUITKA_BYTECODE_FLAG},
    {"datetime", NULL, 2441, 54505, NUITKA_BYTECODE_FLAG},
    {"dbm", NULL, 1188264, 4163, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dbm.dumb", NULL, 1192427, 8207, NUITKA_BYTECODE_FLAG},
    {"decimal", NULL, 1200634, 163396, NUITKA_BYTECODE_FLAG},
    {"difflib", NULL, 1364030, 59636, NUITKA_BYTECODE_FLAG},
    {"dis", NULL, 1423666, 14175, NUITKA_BYTECODE_FLAG},
    {"distutils", NULL, 1437841, 370, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.archive_util", NULL, 1438211, 6519, NUITKA_BYTECODE_FLAG},
    {"distutils.bcppcompiler", NULL, 1444730, 6473, NUITKA_BYTECODE_FLAG},
    {"distutils.ccompiler", NULL, 1451203, 33339, NUITKA_BYTECODE_FLAG},
    {"distutils.cmd", NULL, 1484542, 14980, NUITKA_BYTECODE_FLAG},
    {"distutils.command", NULL, 1499522, 527, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.command.bdist", NULL, 1500049, 3773, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_dumb", NULL, 1503822, 3735, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_rpm", NULL, 1507557, 13062, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_wininst", NULL, 1520619, 8322, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build", NULL, 1528941, 4057, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_clib", NULL, 1532998, 4963, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_ext", NULL, 1537961, 16550, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_py", NULL, 1554511, 10510, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_scripts", NULL, 1565021, 4326, NUITKA_BYTECODE_FLAG},
    {"distutils.command.check", NULL, 1569347, 5217, NUITKA_BYTECODE_FLAG},
    {"distutils.command.clean", NULL, 1574564, 2171, NUITKA_BYTECODE_FLAG},
    {"distutils.command.config", NULL, 1576735, 10306, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install", NULL, 1587041, 14060, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_data", NULL, 1601101, 2316, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_egg_info", NULL, 1603417, 2977, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_headers", NULL, 1606394, 1716, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_lib", NULL, 1608110, 5168, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_scripts", NULL, 1613278, 2182, NUITKA_BYTECODE_FLAG},
    {"distutils.command.register", NULL, 1615460, 8404, NUITKA_BYTECODE_FLAG},
    {"distutils.command.sdist", NULL, 1623864, 13101, NUITKA_BYTECODE_FLAG},
    {"distutils.command.upload", NULL, 1636965, 5042, NUITKA_BYTECODE_FLAG},
    {"distutils.config", NULL, 1642007, 3479, NUITKA_BYTECODE_FLAG},
    {"distutils.core", NULL, 1645486, 6795, NUITKA_BYTECODE_FLAG},
    {"distutils.cygwinccompiler", NULL, 1652281, 8500, NUITKA_BYTECODE_FLAG},
    {"distutils.debug", NULL, 1660781, 180, NUITKA_BYTECODE_FLAG},
    {"distutils.dep_util", NULL, 1660961, 2696, NUITKA_BYTECODE_FLAG},
    {"distutils.dir_util", NULL, 1663657, 5796, NUITKA_BYTECODE_FLAG},
    {"distutils.dist", NULL, 1669453, 34205, NUITKA_BYTECODE_FLAG},
    {"distutils.errors", NULL, 1703658, 5466, NUITKA_BYTECODE_FLAG},
    {"distutils.extension", NULL, 1709124, 6942, NUITKA_BYTECODE_FLAG},
    {"distutils.fancy_getopt", NULL, 1716066, 10645, NUITKA_BYTECODE_FLAG},
    {"distutils.file_util", NULL, 1726711, 5889, NUITKA_BYTECODE_FLAG},
    {"distutils.filelist", NULL, 1732600, 9857, NUITKA_BYTECODE_FLAG},
    {"distutils.log", NULL, 1742457, 2291, NUITKA_BYTECODE_FLAG},
    {"distutils.msvccompiler", NULL, 1744748, 14560, NUITKA_BYTECODE_FLAG},
    {"distutils.spawn", NULL, 1759308, 4985, NUITKA_BYTECODE_FLAG},
    {"distutils.sysconfig", NULL, 1764293, 11871, NUITKA_BYTECODE_FLAG},
    {"distutils.text_file", NULL, 1776164, 8450, NUITKA_BYTECODE_FLAG},
    {"distutils.unixccompiler", NULL, 1784614, 6522, NUITKA_BYTECODE_FLAG},
    {"distutils.util", NULL, 1791136, 15515, NUITKA_BYTECODE_FLAG},
    {"distutils.version", NULL, 1806651, 7346, NUITKA_BYTECODE_FLAG},
    {"distutils.versionpredicate", NULL, 1813997, 5075, NUITKA_BYTECODE_FLAG},
    {"doctest", NULL, 1819072, 75583, NUITKA_BYTECODE_FLAG},
    {"dummy_threading", NULL, 1894655, 1096, NUITKA_BYTECODE_FLAG},
    {"email", NULL, 1895751, 1663, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email._encoded_words", NULL, 1897414, 5578, NUITKA_BYTECODE_FLAG},
    {"email._header_value_parser", NULL, 1902992, 76030, NUITKA_BYTECODE_FLAG},
    {"email._parseaddr", NULL, 1979022, 12434, NUITKA_BYTECODE_FLAG},
    {"email._policybase", NULL, 1991456, 14822, NUITKA_BYTECODE_FLAG},
    {"email.base64mime", NULL, 2006278, 3212, NUITKA_BYTECODE_FLAG},
    {"email.charset", NULL, 2009490, 11505, NUITKA_BYTECODE_FLAG},
    {"email.contentmanager", NULL, 2020995, 7282, NUITKA_BYTECODE_FLAG},
    {"email.encoders", NULL, 2028277, 1634, NUITKA_BYTECODE_FLAG},
    {"email.errors", NULL, 2029911, 6163, NUITKA_BYTECODE_FLAG},
    {"email.feedparser", NULL, 2036074, 10638, NUITKA_BYTECODE_FLAG},
    {"email.generator", NULL, 2046712, 12507, NUITKA_BYTECODE_FLAG},
    {"email.header", NULL, 2059219, 16474, NUITKA_BYTECODE_FLAG},
    {"email.headerregistry", NULL, 2075693, 21272, NUITKA_BYTECODE_FLAG},
    {"email.iterators", NULL, 2096965, 1904, NUITKA_BYTECODE_FLAG},
    {"email.message", NULL, 2098869, 37986, NUITKA_BYTECODE_FLAG},
    {"email.mime", NULL, 2136855, 118, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email.mime.application", NULL, 2136973, 1429, NUITKA_BYTECODE_FLAG},
    {"email.mime.audio", NULL, 2138402, 2588, NUITKA_BYTECODE_FLAG},
    {"email.mime.base", NULL, 2140990, 1054, NUITKA_BYTECODE_FLAG},
    {"email.mime.image", NULL, 2142044, 1874, NUITKA_BYTECODE_FLAG},
    {"email.mime.message", NULL, 2143918, 1303, NUITKA_BYTECODE_FLAG},
    {"email.mime.multipart", NULL, 2145221, 1525, NUITKA_BYTECODE_FLAG},
    {"email.mime.nonmultipart", NULL, 2146746, 740, NUITKA_BYTECODE_FLAG},
    {"email.mime.text", NULL, 2147486, 1287, NUITKA_BYTECODE_FLAG},
    {"email.parser", NULL, 2148773, 5719, NUITKA_BYTECODE_FLAG},
    {"email.policy", NULL, 2154492, 9612, NUITKA_BYTECODE_FLAG},
    {"email.quoprimime", NULL, 2164104, 7674, NUITKA_BYTECODE_FLAG},
    {"email.utils", NULL, 2171778, 9868, NUITKA_BYTECODE_FLAG},
    {"encodings", NULL, 2181646, 3924, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"encodings.aliases", NULL, 2185570, 6268, NUITKA_BYTECODE_FLAG},
    {"encodings.ascii", NULL, 2191838, 1856, NUITKA_BYTECODE_FLAG},
    {"encodings.base64_codec", NULL, 2193694, 2395, NUITKA_BYTECODE_FLAG},
    {"encodings.big5", NULL, 2196089, 1416, NUITKA_BYTECODE_FLAG},
    {"encodings.big5hkscs", NULL, 2197505, 1426, NUITKA_BYTECODE_FLAG},
    {"encodings.bz2_codec", NULL, 2198931, 3257, NUITKA_BYTECODE_FLAG},
    {"encodings.charmap", NULL, 2202188, 2909, NUITKA_BYTECODE_FLAG},
    {"encodings.cp037", NULL, 2205097, 2401, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1006", NULL, 2207498, 2477, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1026", NULL, 2209975, 2405, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1125", NULL, 2212380, 8098, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1140", NULL, 2220478, 2391, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1250", NULL, 2222869, 2428, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1251", NULL, 2225297, 2425, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1252", NULL, 2227722, 2428, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1253", NULL, 2230150, 2441, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1254", NULL, 2232591, 2430, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1255", NULL, 2235021, 2449, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1256", NULL, 2237470, 2427, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1257", NULL, 2239897, 2435, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1258", NULL, 2242332, 2433, NUITKA_BYTECODE_FLAG},
    {"encodings.cp273", NULL, 2244765, 2387, NUITKA_BYTECODE_FLAG},
    {"encodings.cp424", NULL, 2247152, 2431, NUITKA_BYTECODE_FLAG},
    {"encodings.cp437", NULL, 2249583, 7815, NUITKA_BYTECODE_FLAG},
    {"encodings.cp500", NULL, 2257398, 2401, NUITKA_BYTECODE_FLAG},
    {"encodings.cp720", NULL, 2259799, 2498, NUITKA_BYTECODE_FLAG},
    {"encodings.cp737", NULL, 2262297, 8137, NUITKA_BYTECODE_FLAG},
    {"encodings.cp775", NULL, 2270434, 7845, NUITKA_BYTECODE_FLAG},
    {"encodings.cp850", NULL, 2278279, 7476, NUITKA_BYTECODE_FLAG},
    {"encodings.cp852", NULL, 2285755, 7853, NUITKA_BYTECODE_FLAG},
    {"encodings.cp855", NULL, 2293608, 8106, NUITKA_BYTECODE_FLAG},
    {"encodings.cp856", NULL, 2301714, 2463, NUITKA_BYTECODE_FLAG},
    {"encodings.cp857", NULL, 2304177, 7458, NUITKA_BYTECODE_FLAG},
    {"encodings.cp858", NULL, 2311635, 7446, NUITKA_BYTECODE_FLAG},
    {"encodings.cp860", NULL, 2319081, 7794, NUITKA_BYTECODE_FLAG},
    {"encodings.cp861", NULL, 2326875, 7809, NUITKA_BYTECODE_FLAG},
    {"encodings.cp862", NULL, 2334684, 7998, NUITKA_BYTECODE_FLAG},
    {"encodings.cp863", NULL, 2342682, 7809, NUITKA_BYTECODE_FLAG},
    {"encodings.cp864", NULL, 2350491, 7955, NUITKA_BYTECODE_FLAG},
    {"encodings.cp865", NULL, 2358446, 7809, NUITKA_BYTECODE_FLAG},
    {"encodings.cp866", NULL, 2366255, 8142, NUITKA_BYTECODE_FLAG},
    {"encodings.cp869", NULL, 2374397, 7835, NUITKA_BYTECODE_FLAG},
    {"encodings.cp874", NULL, 2382232, 2529, NUITKA_BYTECODE_FLAG},
    {"encodings.cp875", NULL, 2384761, 2398, NUITKA_BYTECODE_FLAG},
    {"encodings.cp932", NULL, 2387159, 1418, NUITKA_BYTECODE_FLAG},
    {"encodings.cp949", NULL, 2388577, 1418, NUITKA_BYTECODE_FLAG},
    {"encodings.cp950", NULL, 2389995, 1418, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jis_2004", NULL, 2391413, 1432, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jisx0213", NULL, 2392845, 1432, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jp", NULL, 2394277, 1420, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_kr", NULL, 2395697, 1420, NUITKA_BYTECODE_FLAG},
    {"encodings.gb18030", NULL, 2397117, 1422, NUITKA_BYTECODE_FLAG},
    {"encodings.gb2312", NULL, 2398539, 1420, NUITKA_BYTECODE_FLAG},
    {"encodings.gbk", NULL, 2399959, 1414, NUITKA_BYTECODE_FLAG},
    {"encodings.hex_codec", NULL, 2401373, 2382, NUITKA_BYTECODE_FLAG},
    {"encodings.hp_roman8", NULL, 2403755, 2602, NUITKA_BYTECODE_FLAG},
    {"encodings.hz", NULL, 2406357, 1412, NUITKA_BYTECODE_FLAG},
    {"encodings.idna", NULL, 2407769, 5759, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp", NULL, 2413528, 1433, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_1", NULL, 2414961, 1437, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2", NULL, 2416398, 1437, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2004", NULL, 2417835, 1443, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_3", NULL, 2419278, 1437, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_ext", NULL, 2420715, 1441, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_kr", NULL, 2422156, 1433, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_1", NULL, 2423589, 2400, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_10", NULL, 2425989, 2405, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_11", NULL, 2428394, 2499, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_13", NULL, 2430893, 2408, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_14", NULL, 2433301, 2426, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_15", NULL, 2435727, 2405, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_16", NULL, 2438132, 2407, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_2", NULL, 2440539, 2400, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_3", NULL, 2442939, 2407, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_4", NULL, 2445346, 2400, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_5", NULL, 2447746, 2401, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_6", NULL, 2450147, 2445, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_7", NULL, 2452592, 2408, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_8", NULL, 2455000, 2439, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_9", NULL, 2457439, 2400, NUITKA_BYTECODE_FLAG},
    {"encodings.johab", NULL, 2459839, 1418, NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_r", NULL, 2461257, 2452, NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_t", NULL, 2463709, 2363, NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_u", NULL, 2466072, 2438, NUITKA_BYTECODE_FLAG},
    {"encodings.kz1048", NULL, 2468510, 2415, NUITKA_BYTECODE_FLAG},
    {"encodings.latin_1", NULL, 2470925, 1868, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_arabic", NULL, 2472793, 7709, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_centeuro", NULL, 2480502, 2439, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_croatian", NULL, 2482941, 2447, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_cyrillic", NULL, 2485388, 2437, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_farsi", NULL, 2487825, 2381, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_greek", NULL, 2490206, 2421, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_iceland", NULL, 2492627, 2440, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_latin2", NULL, 2495067, 2581, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_roman", NULL, 2497648, 2438, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_romanian", NULL, 2500086, 2448, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_turkish", NULL, 2502534, 2441, NUITKA_BYTECODE_FLAG},
    {"encodings.palmos", NULL, 2504975, 2428, NUITKA_BYTECODE_FLAG},
    {"encodings.ptcp154", NULL, 2507403, 2522, NUITKA_BYTECODE_FLAG},
    {"encodings.punycode", NULL, 2509925, 6439, NUITKA_BYTECODE_FLAG},
    {"encodings.quopri_codec", NULL, 2516364, 2415, NUITKA_BYTECODE_FLAG},
    {"encodings.raw_unicode_escape", NULL, 2518779, 1741, NUITKA_BYTECODE_FLAG},
    {"encodings.rot_13", NULL, 2520520, 2973, NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis", NULL, 2523493, 1426, NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis_2004", NULL, 2524919, 1436, NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jisx0213", NULL, 2526355, 1436, NUITKA_BYTECODE_FLAG},
    {"encodings.tis_620", NULL, 2527791, 2490, NUITKA_BYTECODE_FLAG},
    {"encodings.undefined", NULL, 2530281, 2135, NUITKA_BYTECODE_FLAG},
    {"encodings.unicode_escape", NULL, 2532416, 1721, NUITKA_BYTECODE_FLAG},
    {"encodings.unicode_internal", NULL, 2534137, 1731, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16", NULL, 2535868, 4805, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_be", NULL, 2540673, 1606, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_le", NULL, 2542279, 1606, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32", NULL, 2543885, 4698, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_be", NULL, 2548583, 1499, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_le", NULL, 2550082, 1499, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_7", NULL, 2551581, 1527, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8", NULL, 2553108, 1586, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8_sig", NULL, 2554694, 4503, NUITKA_BYTECODE_FLAG},
    {"encodings.uu_codec", NULL, 2559197, 3199, NUITKA_BYTECODE_FLAG},
    {"encodings.zlib_codec", NULL, 2562396, 3095, NUITKA_BYTECODE_FLAG},
    {"enum", NULL, 2565491, 23447, NUITKA_BYTECODE_FLAG},
    {"filecmp", NULL, 2588938, 8299, NUITKA_BYTECODE_FLAG},
    {"fileinput", NULL, 2597237, 13146, NUITKA_BYTECODE_FLAG},
    {"fnmatch", NULL, 2610383, 2868, NUITKA_BYTECODE_FLAG},
    {"formatter", NULL, 2613251, 17573, NUITKA_BYTECODE_FLAG},
    {"fractions", NULL, 2630824, 18420, NUITKA_BYTECODE_FLAG},
    {"ftplib", NULL, 2649244, 28193, NUITKA_BYTECODE_FLAG},
    {"functools", NULL, 2677437, 24056, NUITKA_BYTECODE_FLAG},
    {"genericpath", NULL, 2701493, 3720, NUITKA_BYTECODE_FLAG},
    {"getopt", NULL, 2705213, 6211, NUITKA_BYTECODE_FLAG},
    {"getpass", NULL, 2711424, 4171, NUITKA_BYTECODE_FLAG},
    {"gettext", NULL, 2715595, 14191, NUITKA_BYTECODE_FLAG},
    {"glob", NULL, 56946, 4253, NUITKA_BYTECODE_FLAG},
    {"gzip", NULL, 2729786, 16220, NUITKA_BYTECODE_FLAG},
    {"hashlib", NULL, 2746006, 6686, NUITKA_BYTECODE_FLAG},
    {"heapq", NULL, 2752692, 14286, NUITKA_BYTECODE_FLAG},
    {"hmac", NULL, 2766978, 4830, NUITKA_BYTECODE_FLAG},
    {"html", NULL, 2771808, 3371, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"html.entities", NULL, 2775179, 50441, NUITKA_BYTECODE_FLAG},
    {"html.parser", NULL, 2825620, 11158, NUITKA_BYTECODE_FLAG},
    {"http", NULL, 2836778, 6521, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"http.client", NULL, 2843299, 34536, NUITKA_BYTECODE_FLAG},
    {"http.cookiejar", NULL, 2877835, 54081, NUITKA_BYTECODE_FLAG},
    {"http.cookies", NULL, 2931916, 16146, NUITKA_BYTECODE_FLAG},
    {"http.server", NULL, 2948062, 32212, NUITKA_BYTECODE_FLAG},
    {"imaplib", NULL, 2980274, 42132, NUITKA_BYTECODE_FLAG},
    {"imghdr", NULL, 3022406, 4144, NUITKA_BYTECODE_FLAG},
    {"imp", NULL, 3026550, 9690, NUITKA_BYTECODE_FLAG},
    {"importlib", NULL, 3036240, 3594, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"importlib._bootstrap", NULL, 3039834, 29108, NUITKA_BYTECODE_FLAG},
    {"importlib._bootstrap_external", NULL, 3068942, 38895, NUITKA_BYTECODE_FLAG},
    {"importlib.abc", NULL, 3107837, 11287, NUITKA_BYTECODE_FLAG},
    {"importlib.machinery", NULL, 3119124, 944, NUITKA_BYTECODE_FLAG},
    {"importlib.util", NULL, 3120068, 8894, NUITKA_BYTECODE_FLAG},
    {"inspect", NULL, 3128962, 79733, NUITKA_BYTECODE_FLAG},
    {"io", NULL, 3208695, 3381, NUITKA_BYTECODE_FLAG},
    {"ipaddress", NULL, 3212076, 62366, NUITKA_BYTECODE_FLAG},
    {"json", NULL, 3274442, 12635, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"json.decoder", NULL, 3287077, 9949, NUITKA_BYTECODE_FLAG},
    {"json.encoder", NULL, 3297026, 11251, NUITKA_BYTECODE_FLAG},
    {"json.scanner", NULL, 3308277, 1964, NUITKA_BYTECODE_FLAG},
    {"json.tool", NULL, 3310241, 1539, NUITKA_BYTECODE_FLAG},
    {"keyword", NULL, 3311780, 1759, NUITKA_BYTECODE_FLAG},
    {"lib2to3", NULL, 3313539, 115, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.btm_matcher", NULL, 3313654, 4926, NUITKA_BYTECODE_FLAG},
    {"lib2to3.btm_utils", NULL, 3318580, 6125, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_base", NULL, 3324705, 6217, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_util", NULL, 3330922, 12030, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes", NULL, 3342952, 121, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.fixes.fix_apply", NULL, 3343073, 1669, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_asserts", NULL, 3344742, 1244, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_basestring", NULL, 3345986, 634, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_buffer", NULL, 3346620, 779, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_dict", NULL, 3347399, 3302, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_except", NULL, 3350701, 2789, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exec", NULL, 3353490, 1120, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_execfile", NULL, 3354610, 1676, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exitfunc", NULL, 3356286, 2267, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_filter", NULL, 3358553, 2332, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_funcattrs", NULL, 3360885, 945, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_future", NULL, 3361830, 755, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_getcwdu", NULL, 3362585, 759, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_has_key", NULL, 3363344, 2889, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_idioms", NULL, 3366233, 3874, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_import", NULL, 3370107, 2761, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports", NULL, 3372868, 4320, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports2", NULL, 3377188, 519, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_input", NULL, 3377707, 921, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_intern", NULL, 3378628, 1133, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_isinstance", NULL, 3379761, 1531, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools", NULL, 3381292, 1525, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools_imports", NULL, 3382817, 1580, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_long", NULL, 3384397, 676, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_map", NULL, 3385073, 3064, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_metaclass", NULL, 3388137, 5347, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_methodattrs", NULL, 3393484, 907, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ne", NULL, 3394391, 778, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_next", NULL, 3395169, 3031, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_nonzero", NULL, 3398200, 894, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_numliterals", NULL, 3399094, 1000, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_operator", NULL, 3400094, 4208, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_paren", NULL, 3404302, 1361, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_print", NULL, 3405663, 2301, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raise", NULL, 3407964, 2220, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raw_input", NULL, 3410184, 766, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reduce", NULL, 3410950, 1101, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reload", NULL, 3412051, 1133, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_renames", NULL, 3413184, 1964, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_repr", NULL, 3415148, 816, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_set_literal", NULL, 3415964, 1658, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_standarderror", NULL, 3417622, 691, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_sys_exc", NULL, 3418313, 1372, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_throw", NULL, 3419685, 1773, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_tuple_params", NULL, 3421458, 4567, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_types", NULL, 3426025, 1800, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_unicode", NULL, 3427825, 1514, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_urllib", NULL, 3429339, 5959, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ws_comma", NULL, 3435298, 1094, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xrange", NULL, 3436392, 2509, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xreadlines", NULL, 3438901, 1088, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_zip", NULL, 3439989, 1552, NUITKA_BYTECODE_FLAG},
    {"lib2to3.main", NULL, 3441541, 8524, NUITKA_BYTECODE_FLAG},
    {"lib2to3.patcomp", NULL, 3450065, 5596, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2", NULL, 3455661, 151, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.pgen2.driver", NULL, 3455812, 5120, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.grammar", NULL, 3460932, 7049, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.literals", NULL, 3467981, 1526, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.parse", NULL, 3469507, 6321, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.pgen", NULL, 3475828, 9777, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.token", NULL, 3485605, 1844, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.tokenize", NULL, 3487449, 15378, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pygram", NULL, 3502827, 1170, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pytree", NULL, 3503997, 25128, NUITKA_BYTECODE_FLAG},
    {"lib2to3.refactor", NULL, 3529125, 20783, NUITKA_BYTECODE_FLAG},
    {"linecache", NULL, 3549908, 3772, NUITKA_BYTECODE_FLAG},
    {"locale", NULL, 3553680, 34039, NUITKA_BYTECODE_FLAG},
    {"logging", NULL, 3587719, 60389, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"logging.config", NULL, 3648108, 23382, NUITKA_BYTECODE_FLAG},
    {"logging.handlers", NULL, 3671490, 43246, NUITKA_BYTECODE_FLAG},
    {"macpath", NULL, 3714736, 5635, NUITKA_BYTECODE_FLAG},
    {"macurl2path", NULL, 3720371, 1861, NUITKA_BYTECODE_FLAG},
    {"mailbox", NULL, 3722232, 63746, NUITKA_BYTECODE_FLAG},
    {"mailcap", NULL, 3785978, 6472, NUITKA_BYTECODE_FLAG},
    {"mimetypes", NULL, 3792450, 15547, NUITKA_BYTECODE_FLAG},
    {"modulefinder", NULL, 3807997, 15360, NUITKA_BYTECODE_FLAG},
    {"multiprocessing", NULL, 3823357, 499, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.connection", NULL, 3823856, 24796, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.context", NULL, 3848652, 13090, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.dummy", NULL, 3861742, 3709, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.dummy.connection", NULL, 3865451, 2489, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.forkserver", NULL, 3867940, 6830, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.heap", NULL, 3874770, 6071, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.managers", NULL, 3880841, 33314, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.pool", NULL, 3914155, 20815, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_fork", NULL, 3934970, 2124, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_forkserver", NULL, 3937094, 2320, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_spawn_posix", NULL, 3939414, 2100, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.process", NULL, 3941514, 8133, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.queues", NULL, 3949647, 8939, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.reduction", NULL, 3958586, 7951, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_sharer", NULL, 3966537, 5148, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.semaphore_tracker", NULL, 3971685, 3661, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.sharedctypes", NULL, 3975346, 6868, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.spawn", NULL, 3982214, 6435, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.synchronize", NULL, 3988649, 11560, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.util", NULL, 4000209, 9792, NUITKA_BYTECODE_FLAG},
    {"netrc", NULL, 4010001, 3830, NUITKA_BYTECODE_FLAG},
    {"nntplib", NULL, 4013831, 33774, NUITKA_BYTECODE_FLAG},
    {"ntpath", NULL, 4047605, 13744, NUITKA_BYTECODE_FLAG},
    {"nturl2path", NULL, 4061349, 1493, NUITKA_BYTECODE_FLAG},
    {"numbers", NULL, 4062842, 12136, NUITKA_BYTECODE_FLAG},
    {"opcode", NULL, 4074978, 5407, NUITKA_BYTECODE_FLAG},
    {"operator", NULL, 4080385, 13907, NUITKA_BYTECODE_FLAG},
    {"optparse", NULL, 4094292, 48048, NUITKA_BYTECODE_FLAG},
    {"os", NULL, 61199, 29622, NUITKA_BYTECODE_FLAG},
    {"pathlib", NULL, 4142340, 42001, NUITKA_BYTECODE_FLAG},
    {"pdb", NULL, 4184341, 46088, NUITKA_BYTECODE_FLAG},
    {"pickle", NULL, 4230429, 42685, NUITKA_BYTECODE_FLAG},
    {"pickletools", NULL, 4273114, 66014, NUITKA_BYTECODE_FLAG},
    {"pipes", NULL, 4339128, 7802, NUITKA_BYTECODE_FLAG},
    {"pkgutil", NULL, 4346930, 16255, NUITKA_BYTECODE_FLAG},
    {"platform", NULL, 4363185, 28625, NUITKA_BYTECODE_FLAG},
    {"plistlib", NULL, 4391810, 27612, NUITKA_BYTECODE_FLAG},
    {"poplib", NULL, 4419422, 13323, NUITKA_BYTECODE_FLAG},
    {"posixpath", NULL, 4432745, 10417, NUITKA_BYTECODE_FLAG},
    {"pprint", NULL, 4443162, 15818, NUITKA_BYTECODE_FLAG},
    {"profile", NULL, 4458980, 13895, NUITKA_BYTECODE_FLAG},
    {"pstats", NULL, 4472875, 21851, NUITKA_BYTECODE_FLAG},
    {"pty", NULL, 4494726, 3855, NUITKA_BYTECODE_FLAG},
    {"py_compile", NULL, 4498581, 6538, NUITKA_BYTECODE_FLAG},
    {"pyclbr", NULL, 4505119, 8359, NUITKA_BYTECODE_FLAG},
    {"pydoc", NULL, 4513478, 84225, NUITKA_BYTECODE_FLAG},
    {"pydoc_data", NULL, 4597703, 118, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pydoc_data.topics", NULL, 4597821, 400506, NUITKA_BYTECODE_FLAG},
    {"queue", NULL, 4998327, 8749, NUITKA_BYTECODE_FLAG},
    {"quopri", NULL, 5007076, 5767, NUITKA_BYTECODE_FLAG},
    {"random", NULL, 5012843, 19324, NUITKA_BYTECODE_FLAG},
    {"re", NULL, 5032167, 14052, NUITKA_BYTECODE_FLAG},
    {"reprlib", NULL, 5046219, 5394, NUITKA_BYTECODE_FLAG},
    {"rlcompleter", NULL, 5051613, 5774, NUITKA_BYTECODE_FLAG},
    {"runpy", NULL, 5057387, 7976, NUITKA_BYTECODE_FLAG},
    {"sched", NULL, 5065363, 6558, NUITKA_BYTECODE_FLAG},
    {"secrets", NULL, 5071921, 2156, NUITKA_BYTECODE_FLAG},
    {"selectors", NULL, 5074077, 17691, NUITKA_BYTECODE_FLAG},
    {"shelve", NULL, 5091768, 9452, NUITKA_BYTECODE_FLAG},
    {"shlex", NULL, 5101220, 6964, NUITKA_BYTECODE_FLAG},
    {"shutil", NULL, 5108184, 30698, NUITKA_BYTECODE_FLAG},
    {"signal", NULL, 5138882, 2509, NUITKA_BYTECODE_FLAG},
    {"site", NULL, 90821, 12681, NUITKA_BYTECODE_FLAG},
    {"smtpd", NULL, 5141391, 26677, NUITKA_BYTECODE_FLAG},
    {"smtplib", NULL, 103502, 35334, NUITKA_BYTECODE_FLAG},
    {"sndhdr", NULL, 5168068, 6907, NUITKA_BYTECODE_FLAG},
    {"socket", NULL, 5174975, 22007, NUITKA_BYTECODE_FLAG},
    {"socketserver", NULL, 5196982, 24244, NUITKA_BYTECODE_FLAG},
    {"sqlite3", NULL, 138836, 146, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"sqlite3.dbapi2", NULL, 5221226, 2465, NUITKA_BYTECODE_FLAG},
    {"sqlite3.dump", NULL, 5223691, 1908, NUITKA_BYTECODE_FLAG},
    {"sre_compile", NULL, 5225599, 10272, NUITKA_BYTECODE_FLAG},
    {"sre_constants", NULL, 5235871, 5966, NUITKA_BYTECODE_FLAG},
    {"sre_parse", NULL, 5241837, 20352, NUITKA_BYTECODE_FLAG},
    {"ssl", NULL, 5262189, 36496, NUITKA_BYTECODE_FLAG},
    {"stat", NULL, 5298685, 3845, NUITKA_BYTECODE_FLAG},
    {"statistics", NULL, 5302530, 18168, NUITKA_BYTECODE_FLAG},
    {"string", NULL, 5320698, 7958, NUITKA_BYTECODE_FLAG},
    {"stringprep", NULL, 5328656, 10024, NUITKA_BYTECODE_FLAG},
    {"struct", NULL, 5338680, 306, NUITKA_BYTECODE_FLAG},
    {"subprocess", NULL, 138982, 35479, NUITKA_BYTECODE_FLAG},
    {"sunau", NULL, 5338986, 16932, NUITKA_BYTECODE_FLAG},
    {"symbol", NULL, 5355918, 2511, NUITKA_BYTECODE_FLAG},
    {"symtable", NULL, 5358429, 10422, NUITKA_BYTECODE_FLAG},
    {"sysconfig", NULL, 5368851, 15825, NUITKA_BYTECODE_FLAG},
    {"tabnanny", NULL, 5384676, 6969, NUITKA_BYTECODE_FLAG},
    {"tarfile", NULL, 5391645, 62641, NUITKA_BYTECODE_FLAG},
    {"telnetlib", NULL, 5454286, 18091, NUITKA_BYTECODE_FLAG},
    {"tempfile", NULL, 5472377, 22221, NUITKA_BYTECODE_FLAG},
    {"textwrap", NULL, 5494598, 13678, NUITKA_BYTECODE_FLAG},
    {"this", NULL, 5508276, 1259, NUITKA_BYTECODE_FLAG},
    {"threading", NULL, 5509535, 37228, NUITKA_BYTECODE_FLAG},
    {"timeit", NULL, 5546763, 11597, NUITKA_BYTECODE_FLAG},
    {"token", NULL, 5558360, 3314, NUITKA_BYTECODE_FLAG},
    {"tokenize", NULL, 5561674, 18641, NUITKA_BYTECODE_FLAG},
    {"trace", NULL, 5580315, 19489, NUITKA_BYTECODE_FLAG},
    {"traceback", NULL, 5599804, 19640, NUITKA_BYTECODE_FLAG},
    {"tracemalloc", NULL, 5619444, 17223, NUITKA_BYTECODE_FLAG},
    {"tty", NULL, 5636667, 1066, NUITKA_BYTECODE_FLAG},
    {"types", NULL, 5637733, 8195, NUITKA_BYTECODE_FLAG},
    {"typing", NULL, 5645928, 73300, NUITKA_BYTECODE_FLAG},
    {"unittest", NULL, 5719228, 2983, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"unittest.case", NULL, 5722211, 47643, NUITKA_BYTECODE_FLAG},
    {"unittest.loader", NULL, 5769854, 13860, NUITKA_BYTECODE_FLAG},
    {"unittest.main", NULL, 5783714, 7006, NUITKA_BYTECODE_FLAG},
    {"unittest.mock", NULL, 5790720, 61780, NUITKA_BYTECODE_FLAG},
    {"unittest.result", NULL, 5852500, 7220, NUITKA_BYTECODE_FLAG},
    {"unittest.runner", NULL, 5859720, 6850, NUITKA_BYTECODE_FLAG},
    {"unittest.signals", NULL, 5866570, 2166, NUITKA_BYTECODE_FLAG},
    {"unittest.suite", NULL, 5868736, 9165, NUITKA_BYTECODE_FLAG},
    {"unittest.util", NULL, 5877901, 4747, NUITKA_BYTECODE_FLAG},
    {"urllib", NULL, 5882648, 114, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib.error", NULL, 5882762, 2748, NUITKA_BYTECODE_FLAG},
    {"urllib.parse", NULL, 5885510, 30484, NUITKA_BYTECODE_FLAG},
    {"urllib.request", NULL, 5915994, 72626, NUITKA_BYTECODE_FLAG},
    {"urllib.response", NULL, 5988620, 3221, NUITKA_BYTECODE_FLAG},
    {"urllib.robotparser", NULL, 5991841, 7045, NUITKA_BYTECODE_FLAG},
    {"uu", NULL, 5998886, 3492, NUITKA_BYTECODE_FLAG},
    {"uuid", NULL, 6002378, 20912, NUITKA_BYTECODE_FLAG},
    {"venv", NULL, 6023290, 13630, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"warnings", NULL, 6036920, 13252, NUITKA_BYTECODE_FLAG},
    {"wave", NULL, 6050172, 17879, NUITKA_BYTECODE_FLAG},
    {"weakref", NULL, 6068051, 19137, NUITKA_BYTECODE_FLAG},
    {"webbrowser", NULL, 6087188, 15791, NUITKA_BYTECODE_FLAG},
    {"wsgiref", NULL, 6102979, 710, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"wsgiref.handlers", NULL, 6103689, 16142, NUITKA_BYTECODE_FLAG},
    {"wsgiref.headers", NULL, 6119831, 7731, NUITKA_BYTECODE_FLAG},
    {"wsgiref.simple_server", NULL, 6127562, 5187, NUITKA_BYTECODE_FLAG},
    {"wsgiref.util", NULL, 6132749, 5186, NUITKA_BYTECODE_FLAG},
    {"wsgiref.validate", NULL, 6137935, 14794, NUITKA_BYTECODE_FLAG},
    {"xdrlib", NULL, 6152729, 8296, NUITKA_BYTECODE_FLAG},
    {"xml", NULL, 6161025, 678, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom", NULL, 6161703, 5425, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom.NodeFilter", NULL, 6167128, 945, NUITKA_BYTECODE_FLAG},
    {"xml.dom.domreg", NULL, 6168073, 2815, NUITKA_BYTECODE_FLAG},
    {"xml.dom.expatbuilder", NULL, 6170888, 27138, NUITKA_BYTECODE_FLAG},
    {"xml.dom.minicompat", NULL, 6198026, 2783, NUITKA_BYTECODE_FLAG},
    {"xml.dom.minidom", NULL, 6200809, 55840, NUITKA_BYTECODE_FLAG},
    {"xml.dom.pulldom", NULL, 6256649, 10529, NUITKA_BYTECODE_FLAG},
    {"xml.dom.xmlbuilder", NULL, 6267178, 13545, NUITKA_BYTECODE_FLAG},
    {"xml.etree", NULL, 6280723, 117, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.etree.ElementInclude", NULL, 6280840, 1553, NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementPath", NULL, 6282393, 6129, NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementTree", NULL, 6288522, 44722, NUITKA_BYTECODE_FLAG},
    {"xml.etree.cElementTree", NULL, 6333244, 159, NUITKA_BYTECODE_FLAG},
    {"xml.parsers", NULL, 6333403, 291, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.parsers.expat", NULL, 6333694, 320, NUITKA_BYTECODE_FLAG},
    {"xml.sax", NULL, 6334014, 3154, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.sax._exceptions", NULL, 6337168, 5459, NUITKA_BYTECODE_FLAG},
    {"xml.sax.expatreader", NULL, 6342627, 12387, NUITKA_BYTECODE_FLAG},
    {"xml.sax.handler", NULL, 6355014, 12307, NUITKA_BYTECODE_FLAG},
    {"xml.sax.saxutils", NULL, 6367321, 12801, NUITKA_BYTECODE_FLAG},
    {"xml.sax.xmlreader", NULL, 6380122, 16916, NUITKA_BYTECODE_FLAG},
    {"xmlrpc", NULL, 6397038, 114, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xmlrpc.client", NULL, 6397152, 34657, NUITKA_BYTECODE_FLAG},
    {"xmlrpc.server", NULL, 6431809, 29548, NUITKA_BYTECODE_FLAG},
    {"zipapp", NULL, 6461357, 5528, NUITKA_BYTECODE_FLAG},
    {"zipfile", NULL, 6466885, 48664, NUITKA_BYTECODE_FLAG},
    {NULL, NULL, 0, 0, 0}
};

void setupMetaPathBasedLoader(void) {
    static bool init_done = false;

    if (init_done == false) {
        registerMetaPathBasedUnfreezer(meta_path_loader_entries);
        init_done = true;
    }
}
