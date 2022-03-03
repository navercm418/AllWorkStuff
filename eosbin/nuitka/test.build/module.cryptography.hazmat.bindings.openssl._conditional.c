/* Generated code for Python module 'cryptography.hazmat.bindings.openssl._conditional'
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

/* The "module_cryptography$hazmat$bindings$openssl$_conditional" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$bindings$openssl$_conditional;
PyDictObject *moduledict_cryptography$hazmat$bindings$openssl$_conditional;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[145];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[145];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("cryptography.hazmat.bindings.openssl._conditional"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 145; i++) {
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
void checkModuleConstants_cryptography$hazmat$bindings$openssl$_conditional(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 145; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_032255d0f4befe64421f333ece2e9526;
static PyCodeObject *codeobj_c799d9510b13b4353248ecc4198199a5;
static PyCodeObject *codeobj_5af99c60392078b42d9c12baa5e97f6e;
static PyCodeObject *codeobj_bd65b24952ebeef383060d104fd638c3;
static PyCodeObject *codeobj_90d5a7d11434f30851824423300e1bbd;
static PyCodeObject *codeobj_d791116683a5bb63f94e6a10033594ab;
static PyCodeObject *codeobj_108dc4ad0d6c216b709fa31b34fcda9b;
static PyCodeObject *codeobj_ba78a057a28df74c9240c232d9a53f9d;
static PyCodeObject *codeobj_9566ea1c5563e9900562f352937d4cbb;
static PyCodeObject *codeobj_1b563da02682269730c1b931726c0cc6;
static PyCodeObject *codeobj_979539a5533513c52881d92b37adfb57;
static PyCodeObject *codeobj_57d4f35325acf9ca0f9e21cb94920eb2;
static PyCodeObject *codeobj_e951dca4c57b48fcc54469bff6f4f1da;
static PyCodeObject *codeobj_3b5eb9cd1ef60a690e133e562f4020cf;
static PyCodeObject *codeobj_a4ee1b7b5387a9abca11b80387bdb04d;
static PyCodeObject *codeobj_3df8e1efe5bc96e8cc64a0b173f5d816;
static PyCodeObject *codeobj_6e653ca1352e26607881e11b8e39f472;
static PyCodeObject *codeobj_fd77ee7d080fd6a4b5843752b1ac97aa;
static PyCodeObject *codeobj_4e4c9f17a2ad23a9cf2cf82d4d1020fc;
static PyCodeObject *codeobj_890594fd7a5ecfc0fd89500376882722;
static PyCodeObject *codeobj_f91ce143ccf6c83988cd5169b29fba16;
static PyCodeObject *codeobj_37409b9643b4107a43cb2a6ca6322d59;
static PyCodeObject *codeobj_0a595aac289243be13b2393950f18fac;
static PyCodeObject *codeobj_12de695ea3e0dcd89ef743944ebcb430;
static PyCodeObject *codeobj_f38d581690598088083e830a06b33ac2;
static PyCodeObject *codeobj_4ea2fe63cf93406c71af63a821e87c0e;
static PyCodeObject *codeobj_597d7ae50746e60c6fc45cbe873ecd52;
static PyCodeObject *codeobj_a96c18f977085bf3e519587c2b321e71;
static PyCodeObject *codeobj_9fb3249b2c82bbac75336e1afe46c9b6;
static PyCodeObject *codeobj_7e82358f80b319bc0d0e5751cd48a04a;
static PyCodeObject *codeobj_92d392d112ab91b9b45803f486b9f6a4;
static PyCodeObject *codeobj_b44411aaeba2fe8c5571f3217538351d;
static PyCodeObject *codeobj_11fc5bdfa34480d4c5a25a161746b1f8;
static PyCodeObject *codeobj_918d1ea8a33442bcc549712efa253deb;
static PyCodeObject *codeobj_76bb60b5875483005d2929402b172722;
static PyCodeObject *codeobj_0c389d15ec4c98cb6e57dbe1d9226b83;
static PyCodeObject *codeobj_2f79a6e8b925f6f5aa30ab449728cb25;
static PyCodeObject *codeobj_483ddeda5ba899bc62657b2b3ca6e4dd;
static PyCodeObject *codeobj_1d7e969f0dda9cd485885ff36933b39f;
static PyCodeObject *codeobj_3d13a4a28b6abf1277f759d8b6a6ca63;
static PyCodeObject *codeobj_9e2f2294d19d28eec23b12c2d49e21f6;
static PyCodeObject *codeobj_7f4797099c99012b4407c891d0f2cc1d;
static PyCodeObject *codeobj_4945b44ccf5566dac35db7b9f34c849a;
static PyCodeObject *codeobj_4493f5b7cea2f41b0711ffaa071d3384;
static PyCodeObject *codeobj_89fc9e3814e08be5e6b541fc706f621d;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[143]); CHECK_OBJECT(module_filename_obj);
    codeobj_032255d0f4befe64421f333ece2e9526 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[144], NULL, NULL, 0, 0, 0);
    codeobj_c799d9510b13b4353248ecc4198199a5 = MAKE_CODEOBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], NULL, NULL, 0, 0, 0);
    codeobj_5af99c60392078b42d9c12baa5e97f6e = MAKE_CODEOBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], NULL, NULL, 0, 0, 0);
    codeobj_bd65b24952ebeef383060d104fd638c3 = MAKE_CODEOBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], NULL, NULL, 0, 0, 0);
    codeobj_90d5a7d11434f30851824423300e1bbd = MAKE_CODEOBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], NULL, NULL, 0, 0, 0);
    codeobj_d791116683a5bb63f94e6a10033594ab = MAKE_CODEOBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], NULL, NULL, 0, 0, 0);
    codeobj_108dc4ad0d6c216b709fa31b34fcda9b = MAKE_CODEOBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], NULL, NULL, 0, 0, 0);
    codeobj_ba78a057a28df74c9240c232d9a53f9d = MAKE_CODEOBJECT(module_filename_obj, 292, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[90], NULL, NULL, 0, 0, 0);
    codeobj_9566ea1c5563e9900562f352937d4cbb = MAKE_CODEOBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], NULL, NULL, 0, 0, 0);
    codeobj_1b563da02682269730c1b931726c0cc6 = MAKE_CODEOBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], NULL, NULL, 0, 0, 0);
    codeobj_979539a5533513c52881d92b37adfb57 = MAKE_CODEOBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], NULL, NULL, 0, 0, 0);
    codeobj_57d4f35325acf9ca0f9e21cb94920eb2 = MAKE_CODEOBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], NULL, NULL, 0, 0, 0);
    codeobj_e951dca4c57b48fcc54469bff6f4f1da = MAKE_CODEOBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[96], NULL, NULL, 0, 0, 0);
    codeobj_3b5eb9cd1ef60a690e133e562f4020cf = MAKE_CODEOBJECT(module_filename_obj, 257, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], NULL, NULL, 0, 0, 0);
    codeobj_a4ee1b7b5387a9abca11b80387bdb04d = MAKE_CODEOBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], NULL, NULL, 0, 0, 0);
    codeobj_3df8e1efe5bc96e8cc64a0b173f5d816 = MAKE_CODEOBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], NULL, NULL, 0, 0, 0);
    codeobj_6e653ca1352e26607881e11b8e39f472 = MAKE_CODEOBJECT(module_filename_obj, 340, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], NULL, NULL, 0, 0, 0);
    codeobj_fd77ee7d080fd6a4b5843752b1ac97aa = MAKE_CODEOBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], NULL, NULL, 0, 0, 0);
    codeobj_4e4c9f17a2ad23a9cf2cf82d4d1020fc = MAKE_CODEOBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], NULL, NULL, 0, 0, 0);
    codeobj_890594fd7a5ecfc0fd89500376882722 = MAKE_CODEOBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], NULL, NULL, 0, 0, 0);
    codeobj_f91ce143ccf6c83988cd5169b29fba16 = MAKE_CODEOBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], NULL, NULL, 0, 0, 0);
    codeobj_37409b9643b4107a43cb2a6ca6322d59 = MAKE_CODEOBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], NULL, NULL, 0, 0, 0);
    codeobj_0a595aac289243be13b2393950f18fac = MAKE_CODEOBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], NULL, NULL, 0, 0, 0);
    codeobj_12de695ea3e0dcd89ef743944ebcb430 = MAKE_CODEOBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[91], NULL, NULL, 0, 0, 0);
    codeobj_f38d581690598088083e830a06b33ac2 = MAKE_CODEOBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], NULL, NULL, 0, 0, 0);
    codeobj_4ea2fe63cf93406c71af63a821e87c0e = MAKE_CODEOBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], NULL, NULL, 0, 0, 0);
    codeobj_597d7ae50746e60c6fc45cbe873ecd52 = MAKE_CODEOBJECT(module_filename_obj, 331, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], NULL, NULL, 0, 0, 0);
    codeobj_a96c18f977085bf3e519587c2b321e71 = MAKE_CODEOBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], NULL, NULL, 0, 0, 0);
    codeobj_9fb3249b2c82bbac75336e1afe46c9b6 = MAKE_CODEOBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], NULL, NULL, 0, 0, 0);
    codeobj_7e82358f80b319bc0d0e5751cd48a04a = MAKE_CODEOBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], NULL, NULL, 0, 0, 0);
    codeobj_92d392d112ab91b9b45803f486b9f6a4 = MAKE_CODEOBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], NULL, NULL, 0, 0, 0);
    codeobj_b44411aaeba2fe8c5571f3217538351d = MAKE_CODEOBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], NULL, NULL, 0, 0, 0);
    codeobj_11fc5bdfa34480d4c5a25a161746b1f8 = MAKE_CODEOBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], NULL, NULL, 0, 0, 0);
    codeobj_918d1ea8a33442bcc549712efa253deb = MAKE_CODEOBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], NULL, NULL, 0, 0, 0);
    codeobj_76bb60b5875483005d2929402b172722 = MAKE_CODEOBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], NULL, NULL, 0, 0, 0);
    codeobj_0c389d15ec4c98cb6e57dbe1d9226b83 = MAKE_CODEOBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], NULL, NULL, 0, 0, 0);
    codeobj_2f79a6e8b925f6f5aa30ab449728cb25 = MAKE_CODEOBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], NULL, NULL, 0, 0, 0);
    codeobj_483ddeda5ba899bc62657b2b3ca6e4dd = MAKE_CODEOBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], NULL, NULL, 0, 0, 0);
    codeobj_1d7e969f0dda9cd485885ff36933b39f = MAKE_CODEOBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], NULL, NULL, 0, 0, 0);
    codeobj_3d13a4a28b6abf1277f759d8b6a6ca63 = MAKE_CODEOBJECT(module_filename_obj, 361, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], NULL, NULL, 0, 0, 0);
    codeobj_9e2f2294d19d28eec23b12c2d49e21f6 = MAKE_CODEOBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], NULL, NULL, 0, 0, 0);
    codeobj_7f4797099c99012b4407c891d0f2cc1d = MAKE_CODEOBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], NULL, NULL, 0, 0, 0);
    codeobj_4945b44ccf5566dac35db7b9f34c849a = MAKE_CODEOBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], NULL, NULL, 0, 0, 0);
    codeobj_4493f5b7cea2f41b0711ffaa071d3384 = MAKE_CODEOBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], NULL, NULL, 0, 0, 0);
    codeobj_89fc9e3814e08be5e6b541fc706f621d = MAKE_CODEOBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_get_server_tmp_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_102_verification_error_codes();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_102_verification_params();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_110_verification_params();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_v_flag_trusted_first();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_x509_v_flag_partial_chain();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_set_cert_cb();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_ssl_st();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tls_st();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_locking_callbacks();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_scrypt();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_generic_dtls_method();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_evp_pkey_dhx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_mem_functions();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_sct();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_x509_store_ctx_get_issuer();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_x25519();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_x448();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_ed448();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_ed25519();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ec_1_0_2();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_poly1305();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_oneshot_evp_digest_sign_verify();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_evp_digestfinal_xof();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_evp_pkey_get_set_tls_encodedpoint();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_fips();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_ssl_sigalgs();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_psk();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__37_cryptography_has_custom_ext();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__38_cryptography_has_openssl_cleanup();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__39_cryptography_has_cipher_details();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_set_ecdh_auto();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__40_cryptography_has_tlsv13();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__41_cryptography_has_raw_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__42_cryptography_has_evp_r_memory_limit_exceeded();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__43_cryptography_has_engine();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__44_cryptography_has_verified_chain();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_rsa_r_pkcs_decoding_error();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_rsa_oaep_md();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_rsa_oaep_label();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_ssl3_method();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_alpn();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_compression();


// The module function definitions.
static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[0]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ec_1_0_2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[1]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_set_ecdh_auto(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[2]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_rsa_r_pkcs_decoding_error(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[3]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_rsa_oaep_md(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[4]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_rsa_oaep_label(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[5]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_ssl3_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[6]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_alpn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[7]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_compression(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[8]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_get_server_tmp_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[9]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_102_verification_error_codes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[10]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_102_verification_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[11]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_110_verification_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[12]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_v_flag_trusted_first(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[13]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_x509_v_flag_partial_chain(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[14]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_set_cert_cb(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[15]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_ssl_st(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[16]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tls_st(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[17]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_locking_callbacks(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[18]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_scrypt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[19]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_generic_dtls_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[20]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_evp_pkey_dhx(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[21]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_mem_functions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[22]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_sct(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[23]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_x509_store_ctx_get_issuer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[24]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_x25519(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[25]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_x448(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[26]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_ed448(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[27]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_ed25519(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[28]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_poly1305(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[29]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_oneshot_evp_digest_sign_verify(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[30]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_evp_digestfinal_xof(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[31]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_evp_pkey_get_set_tls_encodedpoint(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[32]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_fips(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[33]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_ssl_sigalgs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[34]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_psk(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[35]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__37_cryptography_has_custom_ext(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[36]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__38_cryptography_has_openssl_cleanup(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[37]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__39_cryptography_has_cipher_details(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[38]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__40_cryptography_has_tlsv13(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[39]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__41_cryptography_has_raw_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[40]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__42_cryptography_has_evp_r_memory_limit_exceeded(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[41]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__43_cryptography_has_engine(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[42]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__44_cryptography_has_verified_chain(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[43]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_get_server_tmp_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_get_server_tmp_key,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_890594fd7a5ecfc0fd89500376882722,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_102_verification_error_codes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_102_verification_error_codes,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c799d9510b13b4353248ecc4198199a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_102_verification_params() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_102_verification_params,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5af99c60392078b42d9c12baa5e97f6e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_110_verification_params() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_110_verification_params,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bd65b24952ebeef383060d104fd638c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_v_flag_trusted_first() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_v_flag_trusted_first,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_89fc9e3814e08be5e6b541fc706f621d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_x509_v_flag_partial_chain() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_x509_v_flag_partial_chain,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4493f5b7cea2f41b0711ffaa071d3384,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_set_cert_cb() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_set_cert_cb,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_11fc5bdfa34480d4c5a25a161746b1f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_ssl_st() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_ssl_st,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2f79a6e8b925f6f5aa30ab449728cb25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tls_st() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tls_st,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_483ddeda5ba899bc62657b2b3ca6e4dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_locking_callbacks() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_locking_callbacks,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f91ce143ccf6c83988cd5169b29fba16,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9566ea1c5563e9900562f352937d4cbb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_scrypt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_scrypt,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_92d392d112ab91b9b45803f486b9f6a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_generic_dtls_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_generic_dtls_method,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4e4c9f17a2ad23a9cf2cf82d4d1020fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_evp_pkey_dhx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_evp_pkey_dhx,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a4ee1b7b5387a9abca11b80387bdb04d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_mem_functions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_mem_functions,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_37409b9643b4107a43cb2a6ca6322d59,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_sct() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_sct,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b44411aaeba2fe8c5571f3217538351d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_x509_store_ctx_get_issuer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_x509_store_ctx_get_issuer,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4945b44ccf5566dac35db7b9f34c849a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_x25519() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_x25519,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9e2f2294d19d28eec23b12c2d49e21f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_x448() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_x448,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7f4797099c99012b4407c891d0f2cc1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_ed448() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_ed448,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_57d4f35325acf9ca0f9e21cb94920eb2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_ed25519() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_ed25519,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_979539a5533513c52881d92b37adfb57,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ec_1_0_2() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ec_1_0_2,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1b563da02682269730c1b931726c0cc6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_poly1305() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_poly1305,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f38d581690598088083e830a06b33ac2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_oneshot_evp_digest_sign_verify() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_oneshot_evp_digest_sign_verify,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0a595aac289243be13b2393950f18fac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_evp_digestfinal_xof() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_evp_digestfinal_xof,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3b5eb9cd1ef60a690e133e562f4020cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_evp_pkey_get_set_tls_encodedpoint() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_evp_pkey_get_set_tls_encodedpoint,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3df8e1efe5bc96e8cc64a0b173f5d816,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_fips() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_fips,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fd77ee7d080fd6a4b5843752b1ac97aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_ssl_sigalgs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_ssl_sigalgs,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0c389d15ec4c98cb6e57dbe1d9226b83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_psk() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_psk,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4ea2fe63cf93406c71af63a821e87c0e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__37_cryptography_has_custom_ext() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__37_cryptography_has_custom_ext,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ba78a057a28df74c9240c232d9a53f9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__38_cryptography_has_openssl_cleanup() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__38_cryptography_has_openssl_cleanup,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_12de695ea3e0dcd89ef743944ebcb430,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__39_cryptography_has_cipher_details() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__39_cryptography_has_cipher_details,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d791116683a5bb63f94e6a10033594ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_set_ecdh_auto() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_set_ecdh_auto,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_918d1ea8a33442bcc549712efa253deb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__40_cryptography_has_tlsv13() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__40_cryptography_has_tlsv13,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1d7e969f0dda9cd485885ff36933b39f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__41_cryptography_has_raw_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__41_cryptography_has_raw_key,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_597d7ae50746e60c6fc45cbe873ecd52,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__42_cryptography_has_evp_r_memory_limit_exceeded() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__42_cryptography_has_evp_r_memory_limit_exceeded,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6e653ca1352e26607881e11b8e39f472,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__43_cryptography_has_engine() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__43_cryptography_has_engine,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e951dca4c57b48fcc54469bff6f4f1da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__44_cryptography_has_verified_chain() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__44_cryptography_has_verified_chain,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3d13a4a28b6abf1277f759d8b6a6ca63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_rsa_r_pkcs_decoding_error() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_rsa_r_pkcs_decoding_error,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7e82358f80b319bc0d0e5751cd48a04a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_rsa_oaep_md() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_rsa_oaep_md,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9fb3249b2c82bbac75336e1afe46c9b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_rsa_oaep_label() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_rsa_oaep_label,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a96c18f977085bf3e519587c2b321e71,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_ssl3_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_ssl3_method,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_76bb60b5875483005d2929402b172722,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_alpn() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_alpn,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_90d5a7d11434f30851824423300e1bbd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_compression() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_compression,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_108dc4ad0d6c216b709fa31b34fcda9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
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

function_impl_code functable_cryptography$hazmat$bindings$openssl$_conditional[] = {
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ec_1_0_2,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_set_ecdh_auto,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_rsa_r_pkcs_decoding_error,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_rsa_oaep_md,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_rsa_oaep_label,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_ssl3_method,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_alpn,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_compression,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_get_server_tmp_key,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_102_verification_error_codes,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_102_verification_params,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_110_verification_params,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_v_flag_trusted_first,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_x509_v_flag_partial_chain,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_set_cert_cb,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_ssl_st,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tls_st,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_locking_callbacks,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_scrypt,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_generic_dtls_method,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_evp_pkey_dhx,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_mem_functions,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_sct,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_x509_store_ctx_get_issuer,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_x25519,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_x448,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_ed448,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_ed25519,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_poly1305,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_oneshot_evp_digest_sign_verify,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_evp_digestfinal_xof,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_evp_pkey_get_set_tls_encodedpoint,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_fips,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_ssl_sigalgs,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_psk,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__37_cryptography_has_custom_ext,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__38_cryptography_has_openssl_cleanup,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__39_cryptography_has_cipher_details,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__40_cryptography_has_tlsv13,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__41_cryptography_has_raw_key,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__42_cryptography_has_evp_r_memory_limit_exceeded,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__43_cryptography_has_engine,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__44_cryptography_has_verified_chain,
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

    function_impl_code *current = functable_cryptography$hazmat$bindings$openssl$_conditional;
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

    if (offset > sizeof(functable_cryptography$hazmat$bindings$openssl$_conditional) || offset < 0) {
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
        functable_cryptography$hazmat$bindings$openssl$_conditional[offset],
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
        module_cryptography$hazmat$bindings$openssl$_conditional,
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
PyObject *modulecode_cryptography$hazmat$bindings$openssl$_conditional(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    module_cryptography$hazmat$bindings$openssl$_conditional = module;

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
    PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$hazmat$bindings$openssl$_conditional\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_cryptography$hazmat$bindings$openssl$_conditional = MODULE_DICT(module_cryptography$hazmat$bindings$openssl$_conditional);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_cryptography$hazmat$bindings$openssl$_conditional,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$bindings$openssl$_conditional,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$bindings$openssl$_conditional,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$bindings$openssl$_conditional);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_cryptography$hazmat$bindings$openssl$_conditional);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_032255d0f4befe64421f333ece2e9526;
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
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_032255d0f4befe64421f333ece2e9526 = MAKE_MODULE_FRAME(codeobj_032255d0f4befe64421f333ece2e9526, module_cryptography$hazmat$bindings$openssl$_conditional);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_032255d0f4befe64421f333ece2e9526);
    assert(Py_REFCNT(frame_032255d0f4befe64421f333ece2e9526) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[47], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[48], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        frame_032255d0f4befe64421f333ece2e9526->m_frame.f_lineno = 5;
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
                (PyObject *)moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                mod_consts[50],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[50]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                mod_consts[52],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[52]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                mod_consts[53],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[53]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_7);
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_032255d0f4befe64421f333ece2e9526);
#endif
    popFrameStack();

    assertFrameObject(frame_032255d0f4befe64421f333ece2e9526);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_032255d0f4befe64421f333ece2e9526);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_032255d0f4befe64421f333ece2e9526, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_032255d0f4befe64421f333ece2e9526->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_032255d0f4befe64421f333ece2e9526, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_ec_1_0_2();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_set_ecdh_auto();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_rsa_r_pkcs_decoding_error();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_rsa_oaep_md();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_rsa_oaep_label();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_ssl3_method();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_alpn();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_compression();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_get_server_tmp_key();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_102_verification_error_codes();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_102_verification_params();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_110_verification_params();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_v_flag_trusted_first();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_x509_v_flag_partial_chain();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_set_cert_cb();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_ssl_st();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_tls_st();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_locking_callbacks();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_scrypt();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_generic_dtls_method();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_evp_pkey_dhx();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_mem_functions();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_sct();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_x509_store_ctx_get_issuer();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_x25519();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_x448();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_ed448();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_ed25519();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_poly1305();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;


        tmp_assign_source_38 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_oneshot_evp_digest_sign_verify();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;


        tmp_assign_source_39 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_evp_digestfinal_xof();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;


        tmp_assign_source_40 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__33_cryptography_has_evp_pkey_get_set_tls_encodedpoint();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;


        tmp_assign_source_41 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__34_cryptography_has_fips();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;


        tmp_assign_source_42 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__35_cryptography_has_ssl_sigalgs();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;


        tmp_assign_source_43 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__36_cryptography_has_psk();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__37_cryptography_has_custom_ext();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;


        tmp_assign_source_45 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__38_cryptography_has_openssl_cleanup();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__39_cryptography_has_cipher_details();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;


        tmp_assign_source_47 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__40_cryptography_has_tlsv13();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;


        tmp_assign_source_48 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__41_cryptography_has_raw_key();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;


        tmp_assign_source_49 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__42_cryptography_has_evp_r_memory_limit_exceeded();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;


        tmp_assign_source_50 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__43_cryptography_has_engine();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;


        tmp_assign_source_51 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__44_cryptography_has_verified_chain();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[98];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_assign_source_52 = _PyDict_NewPresized( 44 );
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[99];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[100];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[101];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[102];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[103];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[104];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[105];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[106];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[107];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[108];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[109];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[110];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[111];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[112];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[113];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[114];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[115];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[116];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[117];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[118];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[119];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[120];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[121];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[122];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[123];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[124];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[125];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[126];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[127];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[128];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[129];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[130];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[131];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[132];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[133];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[134];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[135];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[136];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[137];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[138];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[139];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[140];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[141];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_52, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_52);
    }

    return module_cryptography$hazmat$bindings$openssl$_conditional;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

