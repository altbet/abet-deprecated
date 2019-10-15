// Copyright (c) 2012-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2017 The PIVX developers
// Copyright (c) 2019 The Altbet Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

/**
 * network protocol versioning
 */
static const int PROTOCOL_VERSION = 72013;

//! initial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 209;

//! In this version, 'getheaders' was introduced.
static const int GETHEADERS_VERSION = 70077;

//! disconnect from peers older than this proto version
static const int MIN_PEER_PROTO_VERSION_BEFORE_ENFORCEMENT = 72012;
static const int MIN_PEER_PROTO_VERSION_AFTER_ENFORCEMENT = 72013;

static const int MIN_PEER_VERSION_FIXED_SIGTIME = 72006;

//! masternodes older than this proto version use old strMessage format for mnannounce
static const int MIN_PEER_MNANNOUNCE = 70003;
//! In this version, "Fake Stake" vulnerability mitigations were introduced.
static const int FAKE_STAKE_VERSION = 72001;

// In this version we change the min amount to stake with from any amount to 30 coins
static const int STAKEV2_VERSION = 72001;

//! nTime field added to CAddress, starting with this version;
//! if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

//! only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 32000;
static const int NOBLKS_VERSION_END = 70700;

//! BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

//! "mempool" command, enhanced "getdata" behavior starts with this version
static const int MEMPOOL_GD_VERSION = 60002;

//! "filter*" commands are disabled without NODE_BLOOM after and including this version
static const int NO_BLOOM_VERSION = 70005;

//! This is block time 07/20/2019 @ 9:17am (UTC) block 10500
//static const int BLOCK_TIME_TARGET = 1563614223;

//! When we fully accepted staking on segwit. This is unix time: 07/16/2019 @ 1:00am (UTC)
static const int STAKING_ON_SEGWIT = 1563238800;

#endif // BITCOIN_VERSION_H
