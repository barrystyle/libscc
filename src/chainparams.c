/*

 The MIT License (MIT)

 Copyright (c) 2017 Jonas Schnelli

 Permission is hereby granted, free of charge, to any person obtaining
 a copy of this software and associated documentation files (the "Software"),
 to deal in the Software without restriction, including without limitation
 the rights to use, copy, modify, merge, publish, distribute, sublicense,
 and/or sell copies of the Software, and to permit persons to whom the
 Software is furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included
 in all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
 OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 OTHER DEALINGS IN THE SOFTWARE.

 */

#include <btc/chainparams.h>

const btc_chainparams btc_chainparams_main = {
    "main",
    0x7d,
    0x75,
    "scc",
    0xfd,
    0x0488ADE4,
    0x0488B21E,
    {0x05, 0x74, 0x43, 0x50},
    {0x4e,0xa5,0x26,0x50,0xc4,0x7c,0x1a,0xbc,0xf6,0x1f,0x2c,0x88,0xd9,0xdb,0x98,0xf8,0x65,0xdf,0x2e,0xe3,0xef,0x36,0x0b,0x45,0x24,0x47,0x71,0xcb,0x50,0x00,0x00},
    40000,
    {{"209.250.224.166", "108.61.212.198", "78.141.211.79", "95.179.209.111"}, 0},
};
const btc_chainparams btc_chainparams_test = {
};
const btc_chainparams btc_chainparams_regtest = {
};


const btc_checkpoint btc_mainnet_checkpoint_array[] = {};
