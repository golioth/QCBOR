/*==============================================================================
Copyright (c) 2016-2018, The Linux Foundation. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
==============================================================================*/

#ifndef __QCBOR__qcbort_decode_tests__
#define __QCBOR__qcbort_decode_tests__

#include "qcbor.h"


/* 
 Notes:
 
 - All the functions in qcbor.h are called once in the aggregation of all the tests below.
 
 - All the types that are supported are given as input and parsed by these tests
 
 - There is some hostile input such as invalid lengths and CBOR too complex
   and types this parser doesn't handle
 
 */




/*
 Parse a well-known set of integers including those around the boundaries and
 make sure the expected values come out
 */
int IntegerValuesParseTest(void);





/*
 Decode a simple CBOR encoded array and make sure it returns all the correct values.
 This is a decode test.
 */
int SimpleArrayTest(void);


/*
 Make sure a maximally deep array can be parsed and that the
 reported nesting level is correct.  This uses test vector
 of CBOR encoded data with a depth of 10.  This a parse test.
 */
int ParseDeepArrayTest(void);


/*
 See that the correct error is reported when parsing
 an array of depth 11, one too large.
 */
int ParseTooDeepArrayTest(void);


/*
  Try to parse some legit CBOR types that this parsers
  doesn't support.
 */
int UnsupportedCBORDecodeTest(void);


/* 
  This takes the encoded CBOR integers used in the above test and parses
  it over and over with one more byte less each time. It should fail
  every time on incorrect CBOR input. This is a hostile input decode test.
 */
int ShortBufferParseTest(void);


/* 
   Same as ShortBufferParseTest, but with a different encoded CBOR input.
   It is another hostile input test
 */
int ShortBufferParseTest2(void);


/*
  Parses the somewhat complicated CBOR MAP and makes sure all the correct
  values parse out.  About 15 values are tested. This is a decode test.
 */
int ParseMapTest(void);



int FloatValuesTest1(void);



int SimpleValuesTest1(void);



int ParseSimpleTest(void);



/*
 Tests a number of failure cases on bad CBOR to get the right error code
 */
int FailureTests(void);


/*
 Generate all possible input strings up to length x and tries to parse them completely
 */
int ComprehensiveInputTest(void);


/*
 Thest the date types -- epoch and strings
 */
int DateParseTest(void);


/*
  Test optional tags like the CBOR magic number.
 */
int OptTagParseTest(void);


/*
 Parse some big numbers, positive and negative
 */
int BignumParseTest(void);


/*
 Parse some nested maps
 */
int NestedMapTest(void);


int indefinite_length_decode_test(void);
int indefinite_length_decode_string_test(void);


int mempool_test(void);



#endif /* defined(__QCBOR__qcbort_decode_tests__) */
