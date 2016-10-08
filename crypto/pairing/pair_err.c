/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2016 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/pairing.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_PAIRING,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_PAIRING,0,reason)

static ERR_STRING_DATA PAIRING_str_functs[] = {
    {ERR_FUNC(PAIRING_F_BB1CIPHERTEXTBLOCK_HASH_TO_RANGE),
     "BB1CiphertextBlock_hash_to_range"},
    {ERR_FUNC(PAIRING_F_BB1IBE_DECRYPT), "BB1IBE_decrypt"},
    {ERR_FUNC(PAIRING_F_BB1IBE_DOUBLE_HASH), "BB1IBE_double_hash"},
    {ERR_FUNC(PAIRING_F_BB1IBE_DO_DECRYPT), "BB1IBE_do_decrypt"},
    {ERR_FUNC(PAIRING_F_BB1IBE_DO_ENCRYPT), "BB1IBE_do_encrypt"},
    {ERR_FUNC(PAIRING_F_BB1IBE_ENCRYPT), "BB1IBE_encrypt"},
    {ERR_FUNC(PAIRING_F_BB1IBE_EXTRACT_PRIVATE_KEY),
     "BB1IBE_extract_private_key"},
    {ERR_FUNC(PAIRING_F_BB1IBE_SETUP), "BB1IBE_setup"},
    {ERR_FUNC(PAIRING_F_BFIBE_DECRYPT), "BFIBE_decrypt"},
    {ERR_FUNC(PAIRING_F_BFIBE_DO_DECRYPT), "BFIBE_do_decrypt"},
    {ERR_FUNC(PAIRING_F_BFIBE_DO_ENCRYPT), "BFIBE_do_encrypt"},
    {ERR_FUNC(PAIRING_F_BFIBE_ENCRYPT), "BFIBE_encrypt"},
    {ERR_FUNC(PAIRING_F_BFIBE_EXTRACT_PRIVATE_KEY),
     "BFIBE_extract_private_key"},
    {ERR_FUNC(PAIRING_F_BFIBE_SETUP), "BFIBE_setup"},
    {ERR_FUNC(PAIRING_F_BN_GFP2_ADD_BN), "BN_GFP2_add_bn"},
    {ERR_FUNC(PAIRING_F_BN_GFP2_DIV_BN), "BN_GFP2_div_bn"},
    {ERR_FUNC(PAIRING_F_BN_GFP2_MUL_BN), "BN_GFP2_mul_bn"},
    {ERR_FUNC(PAIRING_F_BN_GFP2_SET_BN), "BN_GFP2_set_bn"},
    {ERR_FUNC(PAIRING_F_BN_GFP2_SUB_BN), "BN_GFP2_sub_bn"},
    {ERR_FUNC(PAIRING_F_PAIRING_COMPUTE_TATE_TYPE1CURVE),
     "PAIRING_compute_tate_type1curve"},
    {ERR_FUNC(PAIRING_F_PAIRING_TYPE1CURVE_TATE), "PAIRING_type1curve_tate"},
    {ERR_FUNC(PAIRING_F_TYPE1CURVE_EVAL_LINE_TEXTBOOK),
     "type1curve_eval_line_textbook"},
    {ERR_FUNC(PAIRING_F_TYPE1CURVE_EVAL_MILLER_TEXTBOOK),
     "type1curve_eval_miller_textbook"},
    {ERR_FUNC(PAIRING_F_TYPE1CURVE_PHI), "type1curve_phi"},
    {0, NULL}
};

static ERR_STRING_DATA PAIRING_str_reasons[] = {
    {ERR_REASON(PAIRING_R_BB1CIPHERTEXT_INVALID_MAC),
     "bb1ciphertext invalid mac"},
    {ERR_REASON(PAIRING_R_BB1IBE_HASH_FAILURE), "bb1ibe hash failure"},
    {ERR_REASON(PAIRING_R_BFIBE_CIPHERTEXT_FAILURE),
     "bfibe ciphertext failure"},
    {ERR_REASON(PAIRING_R_BFIBE_FAILURE), "bfibe failure"},
    {ERR_REASON(PAIRING_R_BUFFER_TOO_SMALL), "buffer too small"},
    {ERR_REASON(PAIRING_R_COMPUTE_OUTLEN_FAILURE), "compute outlen failure"},
    {ERR_REASON(PAIRING_R_COMPUTE_TATE_FAILURE), "compute tate failure"},
    {ERR_REASON(PAIRING_R_D2I_FAILURE), "d2i failure"},
    {ERR_REASON(PAIRING_R_DECRYPT_FAILURE), "decrypt failure"},
    {ERR_REASON(PAIRING_R_DOUBLE_HASH_FAILURE), "double hash failure"},
    {ERR_REASON(PAIRING_R_ENCRYPT_FAILURE), "encrypt failure"},
    {ERR_REASON(PAIRING_R_GET_TYPE1CURVE_ZETA_FAILURE),
     "get type1curve zeta failure"},
    {ERR_REASON(PAIRING_R_HASH_BYTES_FAILURE), "hash bytes failure"},
    {ERR_REASON(PAIRING_R_I2D_FAILURE), "i2d failure"},
    {ERR_REASON(PAIRING_R_INVALID_BFIBE_HASHFUNC), "invalid bfibe hashfunc"},
    {ERR_REASON(PAIRING_R_INVALID_CIPHERTEXT), "invalid ciphertext"},
    {ERR_REASON(PAIRING_R_INVALID_INPUT), "invalid input"},
    {ERR_REASON(PAIRING_R_INVALID_MD), "invalid md"},
    {ERR_REASON(PAIRING_R_INVALID_OUTPUT_BUFFER), "invalid output buffer"},
    {ERR_REASON(PAIRING_R_INVALID_TYPE1CURVE), "invalid type1curve"},
    {ERR_REASON(PAIRING_R_KDF_FAILURE), "kdf failure"},
    {ERR_REASON(PAIRING_R_NOT_IMPLEMENTED), "not implemented"},
    {ERR_REASON(PAIRING_R_NOT_NAMED_CURVE), "not named curve"},
    {ERR_REASON(PAIRING_R_PARSE_CURVE_FAILURE), "parse curve failure"},
    {ERR_REASON(PAIRING_R_PARSE_MPK_FAILURE), "parse mpk failure"},
    {ERR_REASON(PAIRING_R_PARSE_PAIRING), "parse pairing"},
    {ERR_REASON(PAIRING_R_RAND_FAILURE), "rand failure"},
    {0, NULL}
};

#endif

int ERR_load_PAIRING_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(PAIRING_str_functs[0].error) == NULL) {
        ERR_load_strings(0, PAIRING_str_functs);
        ERR_load_strings(0, PAIRING_str_reasons);
    }
#endif
    return 1;
}