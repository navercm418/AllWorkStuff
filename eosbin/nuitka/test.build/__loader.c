
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 590 > 0
static unsigned char *bytecode_data[590];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$chardistribution(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$codingstatemachine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$cp949prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$enums(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escsm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$eucjpprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$hebrewprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jisfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jpcntx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langbulgarianmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langcyrillicmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langgreekmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langhebrewmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langthaimodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langturkishmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$latin1prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcssm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sjisprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$universaldetector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$utf8prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$__about__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$_der(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$_oid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$interfaces(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$aead(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$backend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ciphers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$cmac(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$decode_asn1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$dh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$dsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ed25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ed448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$encode_asn1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$hashes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$hmac(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ocsp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$poly1305(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$rsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x509(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl$_conditional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl$binding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$dh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$dsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ed25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ed448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$padding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$rsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$x25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$x448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$aead(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$algorithms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$modes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$constant_time(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$hashes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$kdf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$kdf$scrypt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization$ssh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$certificate_transparency(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$general_name(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$name(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$ocsp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$oid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_google(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$idnadata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$intranges(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$package_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$uts46data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$__version__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$_internal_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$adapters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$auth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$certs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$cookies(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$hooks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$sessions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$status_codes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$structures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$decoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$encoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$errors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$ordered_dict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$raw_json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$scanner(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connectionpool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$_appengine_environ(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$appengine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$pyopenssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$socks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$filepost(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$backports(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$backports$makefile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname$_implementation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$poolmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$queue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$retry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssl_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$timeout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$url(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$wait(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"_asyncio", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_bz2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_cn", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_hk", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_iso2022", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_jp", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_kr", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_codecs_tw", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_contextvars", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_crypt", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_ctypes", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_curses", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_curses_panel", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_dbm", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_decimal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_hashlib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_json", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_lsprof", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_lzma", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_multibytecodec", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_multiprocessing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_opcode", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_posixshmem", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_queue", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_sqlite3", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_ssl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_uuid", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"_zoneinfo", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"audioop", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet", modulecode_chardet, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"chardet.big5freq", modulecode_chardet$big5freq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.big5prober", modulecode_chardet$big5prober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.chardistribution", modulecode_chardet$chardistribution, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.charsetgroupprober", modulecode_chardet$charsetgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.charsetprober", modulecode_chardet$charsetprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.codingstatemachine", modulecode_chardet$codingstatemachine, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.compat", modulecode_chardet$compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.cp949prober", modulecode_chardet$cp949prober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.enums", modulecode_chardet$enums, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.escprober", modulecode_chardet$escprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.escsm", modulecode_chardet$escsm, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.eucjpprober", modulecode_chardet$eucjpprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.euckrfreq", modulecode_chardet$euckrfreq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.euckrprober", modulecode_chardet$euckrprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.euctwfreq", modulecode_chardet$euctwfreq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.euctwprober", modulecode_chardet$euctwprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.gb2312freq", modulecode_chardet$gb2312freq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.gb2312prober", modulecode_chardet$gb2312prober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.hebrewprober", modulecode_chardet$hebrewprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.jisfreq", modulecode_chardet$jisfreq, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.jpcntx", modulecode_chardet$jpcntx, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langbulgarianmodel", modulecode_chardet$langbulgarianmodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langcyrillicmodel", modulecode_chardet$langcyrillicmodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langgreekmodel", modulecode_chardet$langgreekmodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langhebrewmodel", modulecode_chardet$langhebrewmodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langthaimodel", modulecode_chardet$langthaimodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.langturkishmodel", modulecode_chardet$langturkishmodel, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.latin1prober", modulecode_chardet$latin1prober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.mbcharsetprober", modulecode_chardet$mbcharsetprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.mbcsgroupprober", modulecode_chardet$mbcsgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.mbcssm", modulecode_chardet$mbcssm, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.sbcharsetprober", modulecode_chardet$sbcharsetprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.sbcsgroupprober", modulecode_chardet$sbcsgroupprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.sjisprober", modulecode_chardet$sjisprober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.universaldetector", modulecode_chardet$universaldetector, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.utf8prober", modulecode_chardet$utf8prober, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"chardet.version", modulecode_chardet$version, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography", modulecode_cryptography, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.__about__", modulecode_cryptography$__about__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.exceptions", modulecode_cryptography$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat", modulecode_cryptography$hazmat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat._der", modulecode_cryptography$hazmat$_der, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat._oid", modulecode_cryptography$hazmat$_oid, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends", modulecode_cryptography$hazmat$backends, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.backends.interfaces", modulecode_cryptography$hazmat$backends$interfaces, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl", modulecode_cryptography$hazmat$backends$openssl, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.backends.openssl.aead", modulecode_cryptography$hazmat$backends$openssl$aead, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.backend", modulecode_cryptography$hazmat$backends$openssl$backend, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.ciphers", modulecode_cryptography$hazmat$backends$openssl$ciphers, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.cmac", modulecode_cryptography$hazmat$backends$openssl$cmac, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.decode_asn1", modulecode_cryptography$hazmat$backends$openssl$decode_asn1, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.dh", modulecode_cryptography$hazmat$backends$openssl$dh, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.dsa", modulecode_cryptography$hazmat$backends$openssl$dsa, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.ec", modulecode_cryptography$hazmat$backends$openssl$ec, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.ed25519", modulecode_cryptography$hazmat$backends$openssl$ed25519, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.ed448", modulecode_cryptography$hazmat$backends$openssl$ed448, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.encode_asn1", modulecode_cryptography$hazmat$backends$openssl$encode_asn1, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.hashes", modulecode_cryptography$hazmat$backends$openssl$hashes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.hmac", modulecode_cryptography$hazmat$backends$openssl$hmac, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.ocsp", modulecode_cryptography$hazmat$backends$openssl$ocsp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.poly1305", modulecode_cryptography$hazmat$backends$openssl$poly1305, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.rsa", modulecode_cryptography$hazmat$backends$openssl$rsa, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.utils", modulecode_cryptography$hazmat$backends$openssl$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.x25519", modulecode_cryptography$hazmat$backends$openssl$x25519, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.x448", modulecode_cryptography$hazmat$backends$openssl$x448, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.backends.openssl.x509", modulecode_cryptography$hazmat$backends$openssl$x509, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.bindings", modulecode_cryptography$hazmat$bindings, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.bindings._constant_time", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"cryptography.hazmat.bindings._openssl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"cryptography.hazmat.bindings.openssl", modulecode_cryptography$hazmat$bindings$openssl, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.bindings.openssl._conditional", modulecode_cryptography$hazmat$bindings$openssl$_conditional, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.bindings.openssl.binding", modulecode_cryptography$hazmat$bindings$openssl$binding, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives", modulecode_cryptography$hazmat$primitives, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.asymmetric", modulecode_cryptography$hazmat$primitives$asymmetric, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.dh", modulecode_cryptography$hazmat$primitives$asymmetric$dh, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.dsa", modulecode_cryptography$hazmat$primitives$asymmetric$dsa, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.ec", modulecode_cryptography$hazmat$primitives$asymmetric$ec, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.ed25519", modulecode_cryptography$hazmat$primitives$asymmetric$ed25519, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.ed448", modulecode_cryptography$hazmat$primitives$asymmetric$ed448, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.padding", modulecode_cryptography$hazmat$primitives$asymmetric$padding, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.rsa", modulecode_cryptography$hazmat$primitives$asymmetric$rsa, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.utils", modulecode_cryptography$hazmat$primitives$asymmetric$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.x25519", modulecode_cryptography$hazmat$primitives$asymmetric$x25519, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.x448", modulecode_cryptography$hazmat$primitives$asymmetric$x448, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.ciphers", modulecode_cryptography$hazmat$primitives$ciphers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.ciphers.aead", modulecode_cryptography$hazmat$primitives$ciphers$aead, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.ciphers.algorithms", modulecode_cryptography$hazmat$primitives$ciphers$algorithms, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.ciphers.base", modulecode_cryptography$hazmat$primitives$ciphers$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.ciphers.modes", modulecode_cryptography$hazmat$primitives$ciphers$modes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.constant_time", modulecode_cryptography$hazmat$primitives$constant_time, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.hashes", modulecode_cryptography$hazmat$primitives$hashes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.kdf", modulecode_cryptography$hazmat$primitives$kdf, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.kdf.scrypt", modulecode_cryptography$hazmat$primitives$kdf$scrypt, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.serialization", modulecode_cryptography$hazmat$primitives$serialization, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.serialization.base", modulecode_cryptography$hazmat$primitives$serialization$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.hazmat.primitives.serialization.ssh", modulecode_cryptography$hazmat$primitives$serialization$ssh, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.utils", modulecode_cryptography$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.x509", modulecode_cryptography$x509, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"cryptography.x509.base", modulecode_cryptography$x509$base, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.x509.certificate_transparency", modulecode_cryptography$x509$certificate_transparency, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.x509.extensions", modulecode_cryptography$x509$extensions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.x509.general_name", modulecode_cryptography$x509$general_name, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.x509.name", modulecode_cryptography$x509$name, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.x509.ocsp", modulecode_cryptography$x509$ocsp, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"cryptography.x509.oid", modulecode_cryptography$x509$oid, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"google", modulecode_google, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"idna", modulecode_idna, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"idna.core", modulecode_idna$core, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.idnadata", modulecode_idna$idnadata, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.intranges", modulecode_idna$intranges, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.package_data", modulecode_idna$package_data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"idna.uts46data", modulecode_idna$uts46data, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"mmap", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"readline", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"requests", modulecode_requests, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"requests.__version__", modulecode_requests$__version__, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests._internal_utils", modulecode_requests$_internal_utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.adapters", modulecode_requests$adapters, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.api", modulecode_requests$api, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.auth", modulecode_requests$auth, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.certs", modulecode_requests$certs, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.compat", modulecode_requests$compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.cookies", modulecode_requests$cookies, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.exceptions", modulecode_requests$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.hooks", modulecode_requests$hooks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.models", modulecode_requests$models, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.packages", modulecode_requests$packages, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.sessions", modulecode_requests$sessions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.status_codes", modulecode_requests$status_codes, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.structures", modulecode_requests$structures, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"requests.utils", modulecode_requests$utils, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"simplejson", modulecode_simplejson, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"simplejson.compat", modulecode_simplejson$compat, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"simplejson.decoder", modulecode_simplejson$decoder, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"simplejson.encoder", modulecode_simplejson$encoder, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"simplejson.errors", modulecode_simplejson$errors, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"simplejson.ordered_dict", modulecode_simplejson$ordered_dict, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"simplejson.raw_json", modulecode_simplejson$raw_json, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"simplejson.scanner", modulecode_simplejson$scanner, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"termios", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_SHLIB_FLAG},
    {"urllib3", modulecode_urllib3, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3._collections", modulecode_urllib3$_collections, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.connection", modulecode_urllib3$connection, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.connectionpool", modulecode_urllib3$connectionpool, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib", modulecode_urllib3$contrib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.contrib._appengine_environ", modulecode_urllib3$contrib$_appengine_environ, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib.appengine", modulecode_urllib3$contrib$appengine, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib.pyopenssl", modulecode_urllib3$contrib$pyopenssl, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.contrib.socks", modulecode_urllib3$contrib$socks, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.exceptions", modulecode_urllib3$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.fields", modulecode_urllib3$fields, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.filepost", modulecode_urllib3$filepost, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.packages", modulecode_urllib3$packages, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports", modulecode_urllib3$packages$backports, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports.makefile", modulecode_urllib3$packages$backports$makefile, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.packages.ssl_match_hostname", modulecode_urllib3$packages$ssl_match_hostname, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.ssl_match_hostname._implementation", modulecode_urllib3$packages$ssl_match_hostname$_implementation, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.poolmanager", modulecode_urllib3$poolmanager, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.request", modulecode_urllib3$request, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.response", modulecode_urllib3$response, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util", modulecode_urllib3$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib3.util.connection", modulecode_urllib3$util$connection, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.queue", modulecode_urllib3$util$queue, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.request", modulecode_urllib3$util$request, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.response", modulecode_urllib3$util$response, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.retry", modulecode_urllib3$util$retry, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.ssl_", modulecode_urllib3$util$ssl_, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.timeout", modulecode_urllib3$util$timeout, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.url", modulecode_urllib3$util$url, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"urllib3.util.wait", modulecode_urllib3$util$wait, 0, 0, NUITKA_TRANSLATED_FLAG},
    {"__future__", NULL, 0, 4089, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_aix_support", NULL, 1, 2841, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_bootlocale", NULL, 2, 1190, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_bootsubprocess", NULL, 3, 2208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_collections_abc", NULL, 4, 31669, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_compat_pickle", NULL, 5, 5451, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_compression", NULL, 6, 4161, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_markupbase", NULL, 7, 7734, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_osx_support", NULL, 8, 11546, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_py_abc", NULL, 9, 4619, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_pyio", NULL, 10, 74446, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_sitebuiltins", NULL, 11, 3464, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_strptime", NULL, 12, 15972, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_sysconfigdata__linux_x86_64-linux-gnu", NULL, 13, 21557, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_sysconfigdata__x86_64-linux-gnu", NULL, 14, 21551, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_threading_local", NULL, 15, 6469, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"_weakrefset", NULL, 16, 7636, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"abc", NULL, 17, 5301, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"aifc", NULL, 18, 25229, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"argparse", NULL, 19, 63671, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ast", NULL, 20, 52269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asynchat", NULL, 21, 6785, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio", NULL, 22, 735, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"asyncio.base_events", NULL, 23, 51987, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_futures", NULL, 24, 1873, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_subprocess", NULL, 25, 9375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.base_tasks", NULL, 26, 1909, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.constants", NULL, 27, 546, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.coroutines", NULL, 28, 6602, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.events", NULL, 29, 28066, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.exceptions", NULL, 30, 2518, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.format_helpers", NULL, 31, 2289, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.futures", NULL, 32, 11794, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.locks", NULL, 33, 14394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.log", NULL, 34, 191, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.proactor_events", NULL, 35, 24314, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.protocols", NULL, 36, 8579, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.queues", NULL, 37, 8481, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.runners", NULL, 38, 2171, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.selector_events", NULL, 39, 29796, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.sslproto", NULL, 40, 21521, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.staggered", NULL, 41, 4125, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.streams", NULL, 42, 20551, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.subprocess", NULL, 43, 7299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.tasks", NULL, 44, 24138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.threads", NULL, 45, 943, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.transports", NULL, 46, 12211, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.trsock", NULL, 47, 8534, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncio.unix_events", NULL, 48, 42020, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"asyncore", NULL, 49, 15999, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"base64", NULL, 50, 16418, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bdb", NULL, 51, 24503, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"binhex", NULL, 52, 12928, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bisect", NULL, 53, 2313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"bz2", NULL, 54, 11390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cProfile", NULL, 55, 5058, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"calendar", NULL, 56, 26994, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cgi", NULL, 57, 26445, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cgitb", NULL, 58, 10149, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"chunk", NULL, 59, 4804, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"cmd", NULL, 60, 12639, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"code", NULL, 61, 9879, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"codecs", NULL, 62, 33851, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"codeop", NULL, 63, 6421, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"collections", NULL, 64, 48055, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"collections.abc", NULL, 65, 31668, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"colorsys", NULL, 66, 3223, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"compileall", NULL, 67, 12509, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent", NULL, 68, 88, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures", NULL, 69, 1064, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures._base", NULL, 70, 22287, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.process", NULL, 71, 20705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.thread", NULL, 72, 5725, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"configparser", NULL, 73, 45617, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"contextlib", NULL, 74, 19451, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"contextvars", NULL, 75, 208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"copy", NULL, 76, 6937, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"copyreg", NULL, 77, 4393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"crypt", NULL, 78, 3476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"csv", NULL, 79, 11812, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes", NULL, 80, 16388, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes._aix", NULL, 81, 9799, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes._endian", NULL, 82, 1894, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ctypes.util", NULL, 83, 8298, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"curses", NULL, 84, 1815, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"curses.ascii", NULL, 85, 3796, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"curses.has_key", NULL, 86, 4252, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"curses.panel", NULL, 87, 188, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"curses.textpad", NULL, 88, 5870, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dataclasses", NULL, 89, 23148, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"datetime", NULL, 90, 58060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dbm", NULL, 91, 4187, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dbm.dumb", NULL, 92, 7878, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dbm.ndbm", NULL, 93, 167, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"decimal", NULL, 94, 160573, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"difflib", NULL, 95, 59584, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"dis", NULL, 96, 15783, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils", NULL, 97, 340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.archive_util", NULL, 98, 6550, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.bcppcompiler", NULL, 99, 6461, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.ccompiler", NULL, 100, 33150, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.cmd", NULL, 101, 13889, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command", NULL, 102, 429, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.command.bdist", NULL, 103, 3568, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_dumb", NULL, 104, 3551, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_rpm", NULL, 105, 12188, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_wininst", NULL, 106, 8670, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build", NULL, 107, 3844, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_clib", NULL, 108, 4763, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_ext", NULL, 109, 16165, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_py", NULL, 110, 10396, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_scripts", NULL, 111, 4293, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.check", NULL, 112, 4872, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.clean", NULL, 113, 2045, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.config", NULL, 114, 10175, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install", NULL, 115, 14559, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_data", NULL, 116, 2248, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_egg_info", NULL, 117, 3397, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_headers", NULL, 118, 1673, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_lib", NULL, 119, 5172, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_scripts", NULL, 120, 2096, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.register", NULL, 121, 8416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.sdist", NULL, 122, 14443, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.command.upload", NULL, 123, 5166, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.config", NULL, 124, 3492, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.core", NULL, 125, 6617, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.cygwinccompiler", NULL, 126, 8466, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.debug", NULL, 127, 159, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dep_util", NULL, 128, 2679, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dir_util", NULL, 129, 6134, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.dist", NULL, 130, 34311, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.errors", NULL, 131, 5215, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.extension", NULL, 132, 6880, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.fancy_getopt", NULL, 133, 10588, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.file_util", NULL, 134, 5946, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.filelist", NULL, 135, 9798, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.log", NULL, 136, 2278, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.msvccompiler", NULL, 137, 14670, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.spawn", NULL, 138, 3310, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.sysconfig", NULL, 139, 12717, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.text_file", NULL, 140, 8404, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.unixccompiler", NULL, 141, 7060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.util", NULL, 142, 15553, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.version", NULL, 143, 7304, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"distutils.versionpredicate", NULL, 144, 5088, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"doctest", NULL, 145, 75969, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email", NULL, 146, 1621, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email._encoded_words", NULL, 147, 5645, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._header_value_parser", NULL, 148, 79746, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._parseaddr", NULL, 149, 12334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email._policybase", NULL, 150, 14771, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.base64mime", NULL, 151, 3202, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.charset", NULL, 152, 11416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.contentmanager", NULL, 153, 7328, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.encoders", NULL, 154, 1585, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.errors", NULL, 155, 5874, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.feedparser", NULL, 156, 10572, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.generator", NULL, 157, 12548, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.header", NULL, 158, 16395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.headerregistry", NULL, 159, 21929, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.iterators", NULL, 160, 1894, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.message", NULL, 161, 37803, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime", NULL, 162, 88, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email.mime.application", NULL, 163, 1424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.audio", NULL, 164, 2589, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.base", NULL, 165, 1010, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.image", NULL, 166, 1869, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.message", NULL, 167, 1247, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.multipart", NULL, 168, 1467, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.nonmultipart", NULL, 169, 729, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.mime.text", NULL, 170, 1274, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.parser", NULL, 171, 5709, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.policy", NULL, 172, 9602, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.quoprimime", NULL, 173, 7637, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"email.utils", NULL, 174, 9403, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings", NULL, 175, 3851, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"encodings.aliases", NULL, 176, 6293, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.ascii", NULL, 177, 1846, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.base64_codec", NULL, 178, 2333, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.big5", NULL, 179, 1374, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.big5hkscs", NULL, 180, 1384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.bz2_codec", NULL, 181, 3222, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.charmap", NULL, 182, 2856, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp037", NULL, 183, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1006", NULL, 184, 2463, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1026", NULL, 185, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1125", NULL, 186, 8094, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1140", NULL, 187, 2377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1250", NULL, 188, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1251", NULL, 189, 2411, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1252", NULL, 190, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1253", NULL, 191, 2427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1254", NULL, 192, 2416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1255", NULL, 193, 2435, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1256", NULL, 194, 2413, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1257", NULL, 195, 2421, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp1258", NULL, 196, 2419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp273", NULL, 197, 2373, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp424", NULL, 198, 2417, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp437", NULL, 199, 7811, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp500", NULL, 200, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp720", NULL, 201, 2484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp737", NULL, 202, 8133, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp775", NULL, 203, 7841, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp850", NULL, 204, 7472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp852", NULL, 205, 7849, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp855", NULL, 206, 8102, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp856", NULL, 207, 2449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp857", NULL, 208, 7452, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp858", NULL, 209, 7442, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp860", NULL, 210, 7790, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp861", NULL, 211, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp862", NULL, 212, 7994, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp863", NULL, 213, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp864", NULL, 214, 7949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp865", NULL, 215, 7805, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp866", NULL, 216, 8138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp869", NULL, 217, 7829, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp874", NULL, 218, 2515, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp875", NULL, 219, 2384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp932", NULL, 220, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp949", NULL, 221, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.cp950", NULL, 222, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jis_2004", NULL, 223, 1390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jisx0213", NULL, 224, 1390, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jp", NULL, 225, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.euc_kr", NULL, 226, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gb18030", NULL, 227, 1380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gb2312", NULL, 228, 1378, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.gbk", NULL, 229, 1372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hex_codec", NULL, 230, 2320, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hp_roman8", NULL, 231, 2588, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.hz", NULL, 232, 1370, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.idna", NULL, 233, 5562, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp", NULL, 234, 1391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_1", NULL, 235, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2", NULL, 236, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2004", NULL, 237, 1401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_3", NULL, 238, 1395, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_ext", NULL, 239, 1399, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_kr", NULL, 240, 1391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_1", NULL, 241, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_10", NULL, 242, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_11", NULL, 243, 2485, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_13", NULL, 244, 2394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_14", NULL, 245, 2412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_15", NULL, 246, 2391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_16", NULL, 247, 2393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_2", NULL, 248, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_3", NULL, 249, 2393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_4", NULL, 250, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_5", NULL, 251, 2387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_6", NULL, 252, 2431, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_7", NULL, 253, 2394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_8", NULL, 254, 2425, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_9", NULL, 255, 2386, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.johab", NULL, 256, 1376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_r", NULL, 257, 2438, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_t", NULL, 258, 2349, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_u", NULL, 259, 2424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.kz1048", NULL, 260, 2401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.latin_1", NULL, 261, 1858, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_arabic", NULL, 262, 7705, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_croatian", NULL, 263, 2433, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_cyrillic", NULL, 264, 2423, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_farsi", NULL, 265, 2367, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_greek", NULL, 266, 2407, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_iceland", NULL, 267, 2426, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_latin2", NULL, 268, 2567, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_roman", NULL, 269, 2424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_romanian", NULL, 270, 2434, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.mac_turkish", NULL, 271, 2427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.palmos", NULL, 272, 2414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.ptcp154", NULL, 273, 2508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.punycode", NULL, 274, 6272, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.quopri_codec", NULL, 275, 2359, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.raw_unicode_escape", NULL, 276, 1727, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.rot_13", NULL, 277, 2966, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis", NULL, 278, 1384, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis_2004", NULL, 279, 1394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jisx0213", NULL, 280, 1394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.tis_620", NULL, 281, 2476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.undefined", NULL, 282, 2060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.unicode_escape", NULL, 283, 1707, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16", NULL, 284, 4835, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_be", NULL, 285, 1615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_le", NULL, 286, 1615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32", NULL, 287, 4728, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_be", NULL, 288, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_le", NULL, 289, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_7", NULL, 290, 1536, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8", NULL, 291, 1595, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8_sig", NULL, 292, 4507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.uu_codec", NULL, 293, 3195, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"encodings.zlib_codec", NULL, 294, 3043, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"enum", NULL, 295, 25657, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"filecmp", NULL, 296, 8460, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fileinput", NULL, 297, 13753, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fnmatch", NULL, 298, 3905, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"formatter", NULL, 299, 17502, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"fractions", NULL, 300, 18012, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ftplib", NULL, 301, 28657, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"functools", NULL, 302, 28145, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"genericpath", NULL, 303, 3987, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"getopt", NULL, 304, 6223, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"getpass", NULL, 305, 4162, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gettext", NULL, 306, 18151, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"glob", NULL, 307, 4307, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"graphlib", NULL, 308, 7531, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"gzip", NULL, 309, 18457, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"hashlib", NULL, 310, 6654, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"heapq", NULL, 311, 14003, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"hmac", NULL, 312, 6763, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"html", NULL, 313, 3079, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"html.entities", NULL, 314, 50484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"html.parser", NULL, 315, 10818, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http", NULL, 316, 6367, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"http.client", NULL, 317, 34619, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http.cookiejar", NULL, 318, 53468, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http.cookies", NULL, 319, 15253, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"http.server", NULL, 320, 34360, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imaplib", NULL, 321, 42375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imghdr", NULL, 322, 4103, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"imp", NULL, 323, 9814, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib", NULL, 324, 3787, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"importlib._bootstrap", NULL, 325, 28931, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib._bootstrap_external", NULL, 326, 45127, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib._common", NULL, 327, 1662, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.abc", NULL, 328, 16780, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.machinery", NULL, 329, 927, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.metadata", NULL, 330, 21584, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.resources", NULL, 331, 6354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"importlib.util", NULL, 332, 9285, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"inspect", NULL, 333, 81354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"io", NULL, 334, 3371, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ipaddress", NULL, 335, 62456, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json", NULL, 336, 12247, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"json.decoder", NULL, 337, 9771, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.encoder", NULL, 338, 11094, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.scanner", NULL, 339, 1916, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"json.tool", NULL, 340, 2690, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"keyword", NULL, 341, 879, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3", NULL, 342, 256, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.btm_matcher", NULL, 343, 4840, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.btm_utils", NULL, 344, 6111, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_base", NULL, 345, 6218, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_util", NULL, 346, 12133, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes", NULL, 347, 91, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.fixes.fix_apply", NULL, 348, 1622, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_asserts", NULL, 349, 1237, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_basestring", NULL, 350, 621, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_buffer", NULL, 351, 766, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_dict", NULL, 352, 3269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_except", NULL, 353, 2764, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exec", NULL, 354, 1091, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_execfile", NULL, 355, 1639, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exitfunc", NULL, 356, 2264, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_filter", NULL, 357, 2400, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_funcattrs", NULL, 358, 934, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_future", NULL, 359, 742, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_getcwdu", NULL, 360, 746, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_has_key", NULL, 361, 2861, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_idioms", NULL, 362, 3863, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_import", NULL, 363, 2741, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports", NULL, 364, 4345, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports2", NULL, 365, 504, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_input", NULL, 366, 908, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_intern", NULL, 367, 1092, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_isinstance", NULL, 368, 1509, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools", NULL, 369, 1508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools_imports", NULL, 370, 1520, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_long", NULL, 371, 663, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_map", NULL, 372, 3055, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_metaclass", NULL, 373, 5289, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_methodattrs", NULL, 374, 896, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ne", NULL, 375, 769, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_next", NULL, 376, 3013, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_nonzero", NULL, 377, 881, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_numliterals", NULL, 378, 981, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_operator", NULL, 379, 4178, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_paren", NULL, 380, 1348, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_print", NULL, 381, 2281, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raise", NULL, 382, 2207, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raw_input", NULL, 383, 753, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reduce", NULL, 384, 1086, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reload", NULL, 385, 1104, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_renames", NULL, 386, 1961, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_repr", NULL, 387, 803, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_set_literal", NULL, 388, 1637, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_standarderror", NULL, 389, 678, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_sys_exc", NULL, 390, 1365, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_throw", NULL, 391, 1762, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_tuple_params", NULL, 392, 4539, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_types", NULL, 393, 1791, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_unicode", NULL, 394, 1507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_urllib", NULL, 395, 5818, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ws_comma", NULL, 396, 1077, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xrange", NULL, 397, 2487, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xreadlines", NULL, 398, 1077, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_zip", NULL, 399, 1537, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.main", NULL, 400, 8652, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.patcomp", NULL, 401, 5568, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2", NULL, 402, 121, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.pgen2.driver", NULL, 403, 4943, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.grammar", NULL, 404, 5670, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.literals", NULL, 405, 1494, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.parse", NULL, 406, 6443, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.pgen", NULL, 407, 9685, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.token", NULL, 408, 1852, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.tokenize", NULL, 409, 15112, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pygram", NULL, 410, 1225, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.pytree", NULL, 411, 24258, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lib2to3.refactor", NULL, 412, 20606, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"linecache", NULL, 413, 3990, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"locale", NULL, 414, 34644, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"logging", NULL, 415, 66282, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"logging.config", NULL, 416, 23220, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"logging.handlers", NULL, 417, 43834, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"lzma", NULL, 418, 11941, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mailbox", NULL, 419, 60563, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mailcap", NULL, 420, 6472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"mimetypes", NULL, 421, 16006, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"modulefinder", NULL, 422, 16091, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing", NULL, 423, 608, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.connection", NULL, 424, 25623, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.context", NULL, 425, 12983, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.dummy", NULL, 426, 3819, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.dummy.connection", NULL, 427, 2548, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.forkserver", NULL, 428, 8380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.heap", NULL, 429, 7598, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.managers", NULL, 430, 40855, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.pool", NULL, 431, 25101, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_fork", NULL, 432, 2475, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_forkserver", NULL, 433, 2408, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_spawn_posix", NULL, 434, 2311, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.process", NULL, 435, 10972, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.queues", NULL, 436, 10157, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.reduction", NULL, 437, 8248, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_sharer", NULL, 438, 5247, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_tracker", NULL, 439, 5457, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.shared_memory", NULL, 440, 14405, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.sharedctypes", NULL, 441, 7060, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.spawn", NULL, 442, 6684, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.synchronize", NULL, 443, 11351, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"multiprocessing.util", NULL, 444, 11470, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"netrc", NULL, 445, 3746, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"nntplib", NULL, 446, 31726, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ntpath", NULL, 447, 14505, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"nturl2path", NULL, 448, 1709, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"numbers", NULL, 449, 12188, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"opcode", NULL, 450, 5186, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"operator", NULL, 451, 13711, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"optparse", NULL, 452, 47906, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"os", NULL, 453, 31609, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pathlib", NULL, 454, 44632, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pdb", NULL, 455, 47102, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pickle", NULL, 456, 47062, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pickletools", NULL, 457, 67070, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pipes", NULL, 458, 7758, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pkgutil", NULL, 459, 18502, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"platform", NULL, 460, 26366, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"plistlib", NULL, 461, 23510, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"poplib", NULL, 462, 13620, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"posixpath", NULL, 463, 10292, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pprint", NULL, 464, 16793, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"profile", NULL, 465, 14353, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pstats", NULL, 466, 23715, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pty", NULL, 467, 3919, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"py_compile", NULL, 468, 7327, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pyclbr", NULL, 469, 10412, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pydoc", NULL, 470, 85429, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"pydoc_data", NULL, 471, 88, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pydoc_data.topics", NULL, 472, 429440, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"queue", NULL, 473, 10826, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"quopri", NULL, 474, 5710, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"random", NULL, 475, 22012, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"re", NULL, 476, 14325, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"reprlib", NULL, 477, 5270, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"rlcompleter", NULL, 478, 5712, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"runpy", NULL, 479, 8472, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sched", NULL, 480, 6596, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"secrets", NULL, 481, 2143, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"selectors", NULL, 482, 17208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shelve", NULL, 483, 9507, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shlex", NULL, 484, 7697, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"shutil", NULL, 485, 37764, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"signal", NULL, 486, 2786, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"site", NULL, 487, 14037, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sitecustomize", NULL, 488, 183, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"smtpd", NULL, 489, 26487, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"smtplib", NULL, 490, 35754, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sndhdr", NULL, 491, 6956, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"socket", NULL, 492, 29051, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"socketserver", NULL, 493, 25478, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sqlite3", NULL, 494, 116, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"sqlite3.dbapi2", NULL, 495, 2461, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sqlite3.dump", NULL, 496, 1886, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_compile", NULL, 497, 15016, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_constants", NULL, 498, 6280, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sre_parse", NULL, 499, 21566, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"ssl", NULL, 500, 44555, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"stat", NULL, 501, 4335, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"statistics", NULL, 502, 31942, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"string", NULL, 503, 7128, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"stringprep", NULL, 504, 9949, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"struct", NULL, 505, 269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"subprocess", NULL, 506, 44118, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sunau", NULL, 507, 16780, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"symbol", NULL, 508, 2542, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"symtable", NULL, 509, 11129, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"sysconfig", NULL, 510, 16088, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tabnanny", NULL, 511, 7028, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tarfile", NULL, 512, 63037, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"telnetlib", NULL, 513, 18294, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tempfile", NULL, 514, 26376, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"textwrap", NULL, 515, 13484, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"this", NULL, 516, 1222, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"threading", NULL, 517, 41443, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"timeit", NULL, 518, 11719, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"token", NULL, 519, 2459, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tokenize", NULL, 520, 17100, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"trace", NULL, 521, 19702, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"traceback", NULL, 522, 20166, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tracemalloc", NULL, 523, 17898, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"tty", NULL, 524, 1041, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"types", NULL, 525, 9184, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"typing", NULL, 526, 71276, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest", NULL, 527, 3352, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"unittest._log", NULL, 528, 2486, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.async_case", NULL, 529, 4196, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.case", NULL, 530, 48071, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.loader", NULL, 531, 14481, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.main", NULL, 532, 7475, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.mock", NULL, 533, 77936, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.result", NULL, 534, 7254, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.runner", NULL, 535, 7029, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.signals", NULL, 536, 2205, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.suite", NULL, 537, 10208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"unittest.util", NULL, 538, 4401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib", NULL, 539, 84, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib.error", NULL, 540, 2789, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.parse", NULL, 541, 34834, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.request", NULL, 542, 72209, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.response", NULL, 543, 3419, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"urllib.robotparser", NULL, 544, 7290, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"uu", NULL, 545, 3629, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"uuid", NULL, 546, 22473, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"venv", NULL, 547, 15921, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"warnings", NULL, 548, 13568, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wave", NULL, 549, 17836, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"weakref", NULL, 550, 20121, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"webbrowser", NULL, 551, 17097, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref", NULL, 552, 680, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"wsgiref.handlers", NULL, 553, 16339, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.headers", NULL, 554, 7697, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.simple_server", NULL, 555, 5264, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.util", NULL, 556, 5358, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"wsgiref.validate", NULL, 557, 14720, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xdrlib", NULL, 558, 8206, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml", NULL, 559, 646, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom", NULL, 560, 5492, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom.NodeFilter", NULL, 561, 932, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.domreg", NULL, 562, 2813, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.expatbuilder", NULL, 563, 27273, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.minicompat", NULL, 564, 2704, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.minidom", NULL, 565, 56274, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.pulldom", NULL, 566, 10654, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.dom.xmlbuilder", NULL, 567, 12440, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree", NULL, 568, 87, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.etree.ElementInclude", NULL, 569, 2397, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementPath", NULL, 570, 8377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementTree", NULL, 571, 56203, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.etree.cElementTree", NULL, 572, 138, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.parsers", NULL, 573, 261, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.parsers.expat", NULL, 574, 299, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax", NULL, 575, 3154, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.sax._exceptions", NULL, 576, 5409, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.expatreader", NULL, 577, 12545, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.handler", NULL, 578, 12387, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.saxutils", NULL, 579, 12886, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xml.sax.xmlreader", NULL, 580, 16809, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xmlrpc", NULL, 581, 84, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xmlrpc.client", NULL, 582, 34532, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"xmlrpc.server", NULL, 583, 29337, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zipapp", NULL, 584, 5948, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zipfile", NULL, 585, 58857, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zoneinfo", NULL, 586, 765, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"zoneinfo._common", NULL, 587, 3069, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zoneinfo._tzpath", NULL, 588, 4010, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {"zoneinfo._zoneinfo", NULL, 589, 15431, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob()
{
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }


}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {
    {"_collections_abc", 4, 31669},
    {"_compression", 6, 4161},
    {"_weakrefset", 16, 7636},
    {"abc", 17, 5301},
    {"ast", 20, 52269},
    {"base64", 50, 16418},
    {"bz2", 54, 11390},
    {"codecs", 62, 33851},
    {"collections", 64, -48055},
    {"collections.abc", 65, 31668},
    {"contextlib", 74, 19451},
    {"copyreg", 77, 4393},
    {"dis", 96, 15783},
    {"encodings", 175, -3851},
    {"encodings.aliases", 176, 6293},
    {"encodings.ascii", 177, 1846},
    {"encodings.base64_codec", 178, 2333},
    {"encodings.big5", 179, 1374},
    {"encodings.big5hkscs", 180, 1384},
    {"encodings.bz2_codec", 181, 3222},
    {"encodings.charmap", 182, 2856},
    {"encodings.cp037", 183, 2387},
    {"encodings.cp1006", 184, 2463},
    {"encodings.cp1026", 185, 2391},
    {"encodings.cp1125", 186, 8094},
    {"encodings.cp1140", 187, 2377},
    {"encodings.cp1250", 188, 2414},
    {"encodings.cp1251", 189, 2411},
    {"encodings.cp1252", 190, 2414},
    {"encodings.cp1253", 191, 2427},
    {"encodings.cp1254", 192, 2416},
    {"encodings.cp1255", 193, 2435},
    {"encodings.cp1256", 194, 2413},
    {"encodings.cp1257", 195, 2421},
    {"encodings.cp1258", 196, 2419},
    {"encodings.cp273", 197, 2373},
    {"encodings.cp424", 198, 2417},
    {"encodings.cp437", 199, 7811},
    {"encodings.cp500", 200, 2387},
    {"encodings.cp720", 201, 2484},
    {"encodings.cp737", 202, 8133},
    {"encodings.cp775", 203, 7841},
    {"encodings.cp850", 204, 7472},
    {"encodings.cp852", 205, 7849},
    {"encodings.cp855", 206, 8102},
    {"encodings.cp856", 207, 2449},
    {"encodings.cp857", 208, 7452},
    {"encodings.cp858", 209, 7442},
    {"encodings.cp860", 210, 7790},
    {"encodings.cp861", 211, 7805},
    {"encodings.cp862", 212, 7994},
    {"encodings.cp863", 213, 7805},
    {"encodings.cp864", 214, 7949},
    {"encodings.cp865", 215, 7805},
    {"encodings.cp866", 216, 8138},
    {"encodings.cp869", 217, 7829},
    {"encodings.cp874", 218, 2515},
    {"encodings.cp875", 219, 2384},
    {"encodings.cp932", 220, 1376},
    {"encodings.cp949", 221, 1376},
    {"encodings.cp950", 222, 1376},
    {"encodings.euc_jis_2004", 223, 1390},
    {"encodings.euc_jisx0213", 224, 1390},
    {"encodings.euc_jp", 225, 1378},
    {"encodings.euc_kr", 226, 1378},
    {"encodings.gb18030", 227, 1380},
    {"encodings.gb2312", 228, 1378},
    {"encodings.gbk", 229, 1372},
    {"encodings.hex_codec", 230, 2320},
    {"encodings.hp_roman8", 231, 2588},
    {"encodings.hz", 232, 1370},
    {"encodings.idna", 233, 5562},
    {"encodings.iso2022_jp", 234, 1391},
    {"encodings.iso2022_jp_1", 235, 1395},
    {"encodings.iso2022_jp_2", 236, 1395},
    {"encodings.iso2022_jp_2004", 237, 1401},
    {"encodings.iso2022_jp_3", 238, 1395},
    {"encodings.iso2022_jp_ext", 239, 1399},
    {"encodings.iso2022_kr", 240, 1391},
    {"encodings.iso8859_1", 241, 2386},
    {"encodings.iso8859_10", 242, 2391},
    {"encodings.iso8859_11", 243, 2485},
    {"encodings.iso8859_13", 244, 2394},
    {"encodings.iso8859_14", 245, 2412},
    {"encodings.iso8859_15", 246, 2391},
    {"encodings.iso8859_16", 247, 2393},
    {"encodings.iso8859_2", 248, 2386},
    {"encodings.iso8859_3", 249, 2393},
    {"encodings.iso8859_4", 250, 2386},
    {"encodings.iso8859_5", 251, 2387},
    {"encodings.iso8859_6", 252, 2431},
    {"encodings.iso8859_7", 253, 2394},
    {"encodings.iso8859_8", 254, 2425},
    {"encodings.iso8859_9", 255, 2386},
    {"encodings.johab", 256, 1376},
    {"encodings.koi8_r", 257, 2438},
    {"encodings.koi8_t", 258, 2349},
    {"encodings.koi8_u", 259, 2424},
    {"encodings.kz1048", 260, 2401},
    {"encodings.latin_1", 261, 1858},
    {"encodings.mac_arabic", 262, 7705},
    {"encodings.mac_croatian", 263, 2433},
    {"encodings.mac_cyrillic", 264, 2423},
    {"encodings.mac_farsi", 265, 2367},
    {"encodings.mac_greek", 266, 2407},
    {"encodings.mac_iceland", 267, 2426},
    {"encodings.mac_latin2", 268, 2567},
    {"encodings.mac_roman", 269, 2424},
    {"encodings.mac_romanian", 270, 2434},
    {"encodings.mac_turkish", 271, 2427},
    {"encodings.palmos", 272, 2414},
    {"encodings.ptcp154", 273, 2508},
    {"encodings.punycode", 274, 6272},
    {"encodings.quopri_codec", 275, 2359},
    {"encodings.raw_unicode_escape", 276, 1727},
    {"encodings.rot_13", 277, 2966},
    {"encodings.shift_jis", 278, 1384},
    {"encodings.shift_jis_2004", 279, 1394},
    {"encodings.shift_jisx0213", 280, 1394},
    {"encodings.tis_620", 281, 2476},
    {"encodings.undefined", 282, 2060},
    {"encodings.unicode_escape", 283, 1707},
    {"encodings.utf_16", 284, 4835},
    {"encodings.utf_16_be", 285, 1615},
    {"encodings.utf_16_le", 286, 1615},
    {"encodings.utf_32", 287, 4728},
    {"encodings.utf_32_be", 288, 1508},
    {"encodings.utf_32_le", 289, 1508},
    {"encodings.utf_7", 290, 1536},
    {"encodings.utf_8", 291, 1595},
    {"encodings.utf_8_sig", 292, 4507},
    {"encodings.uu_codec", 293, 3195},
    {"encodings.zlib_codec", 294, 3043},
    {"enum", 295, 25657},
    {"functools", 302, 28145},
    {"genericpath", 303, 3987},
    {"heapq", 311, 14003},
    {"importlib", 324, -3787},
    {"importlib._bootstrap", 325, 28931},
    {"importlib._bootstrap_external", 326, 45127},
    {"importlib.machinery", 329, 927},
    {"inspect", 333, 81354},
    {"io", 334, 3371},
    {"keyword", 341, 879},
    {"linecache", 413, 3990},
    {"locale", 414, 34644},
    {"opcode", 450, 5186},
    {"operator", 451, 13711},
    {"os", 453, 31609},
    {"posixpath", 463, 10292},
    {"quopri", 474, 5710},
    {"re", 476, 14325},
    {"reprlib", 477, 5270},
    {"sre_compile", 497, 15016},
    {"sre_constants", 498, 6280},
    {"sre_parse", 499, 21566},
    {"stat", 501, 4335},
    {"stringprep", 504, 9949},
    {"struct", 505, 269},
    {"threading", 517, 41443},
    {"token", 519, 2459},
    {"tokenize", 520, 17100},
    {"types", 525, 9184},
    {"warnings", 548, 13568},
    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}


