/*
 * Common.h
 *
 *      Author: ancelmo
 */

#pragma once

#include <libdevcore/FixedHash.h>
#include <libnetwork/Common.h>

namespace dev
{
namespace p2p
{
enum DisconnectReason
{
    TOPIC_NOT_FOUND = 101
};

typedef dev::network::NodeID NodeID;
typedef dev::network::Options Options;
typedef dev::network::NetworkException NetworkException;
typedef dev::network::NodeIPEndpoint NodeIPEndpoint;

using NodeIDs = std::vector<NodeID>;

#define P2PMSG_LOG(LEVEL) LOG(LEVEL) << "[P2P][P2PMessage] "
#define SERVICE_LOG(LEVEL) LOG(LEVEL) << "[P2P][Service] "

struct P2PSessionInfo
{
    NodeID nodeID;
    dev::network::NodeIPEndpoint nodeIPEndpoint;
    std::set<std::string> topics;
    P2PSessionInfo(
        NodeID _nodeID, dev::network::NodeIPEndpoint _nodeIPEndpoint, std::set<std::string> _topics)
    {
        nodeID = _nodeID;
        nodeIPEndpoint = _nodeIPEndpoint;
        topics = _topics;
    }
};
using P2PSessionInfos = std::vector<P2PSessionInfo>;

}  // namespace p2p
}  // namespace dev
