/*******************************************************************************
*  (c) 2020 Zondax GmbH
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define CLA                  0xA0

#define HDPATH_LEN_DEFAULT   5
#define HDPATH_0_DEFAULT     (0x80000000 | 0x2c)
#define HDPATH_1_DEFAULT     (0x80000000 | 0x1b2)       // 434 - Polkadex
#define HDPATH_1_RECOVERY    (0x80000000 | 0x162)       // 354 - Polkadot

#define SK_LEN_25519         64u
#define SCALAR_LEN_ED25519   32u
#define SIG_PLUS_TYPE_LEN    65u

#define PK_LEN_25519         32u
#define MAX_SIGN_SIZE        256u
#define BLAKE2B_DIGEST_SIZE  32u

typedef enum {
    key_ed25519     = 0,

#if defined(SUPPORT_SR25519)
    key_sr25519     = 1
#endif

} key_kind_e;

// Coin Specific
#define PK_ADDRESS_TYPE                     COIN_ADDR_TYPE
#define SUPPORTED_TX_VERSION_CURRENT        LEDGER_MAJOR_VERSION
#define SUPPORTED_TX_VERSION_PREVIOUS       (LEDGER_MAJOR_VERSION - 1)
#define SUPPORTED_SPEC_VERSION              (LEDGER_MINOR_VERSION + 0)
#define SUPPORTED_MINIMUM_SPEC_VERSION      0

#define COIN_AMOUNT_DECIMAL_PLACES          12

#define COIN_GENESIS_HASH                   "0000000000000000000000000000000000000000000000000000000000000000"
#define COIN_NAME                           "Polkadex"
#define COIN_TICKER                         "MUNIT "

#define COIN_SECRET_REQUIRED_CLICKS         0

#include "coin_standard.h"

#ifdef __cplusplus
}
#endif
