#include "test/extensions/clusters/redis/mocks.h"

#include "envoy/config/cluster/redis/redis_cluster.pb.validate.h"
#include "envoy/config/filter/network/redis_proxy/v2/redis_proxy.pb.validate.h"

using testing::_;
using testing::Return;

namespace Envoy {
namespace Extensions {
namespace Clusters {
namespace Redis {

MockClusterSlotUpdateCallBack::MockClusterSlotUpdateCallBack() {
  ON_CALL(*this, onClusterSlotUpdate(_, _)).WillByDefault(Return(true));
}

} // namespace Redis
} // namespace Clusters
} // namespace Extensions
} // namespace Envoy
