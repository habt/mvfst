/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 */

#include <quic/logging/QLoggerConstants.h>

namespace quic {
folly::StringPiece vantagePointString(VantagePoint vantagePoint) noexcept {
  switch (vantagePoint) {
    case VantagePoint::CLIENT:
      return kQLogClientVantagePoint;
    case VantagePoint::SERVER:
      return kQLogServerVantagePoint;
  }
  folly::assume_unreachable();
}
} // namespace quic
