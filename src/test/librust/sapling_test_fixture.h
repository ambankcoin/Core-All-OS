// Copyright (c) 2020 The AMBANKCOIN developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef AMBANKCOIN_SAPLING_TEST_FIXTURE_H
#define AMBANKCOIN_SAPLING_TEST_FIXTURE_H

#include "test/test_ambankcoin.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup {
    SaplingTestingSetup();
    ~SaplingTestingSetup();
};


#endif //AMBANKCOIN_SAPLING_TEST_FIXTURE_H
