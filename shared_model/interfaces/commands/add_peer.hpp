/**
 * Copyright Soramitsu Co., Ltd. 2017 All Rights Reserved.
 * http://soramitsu.co.jp
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IROHA_SHARED_MODEL_ADD_PEER_HPP
#define IROHA_SHARED_MODEL_ADD_PEER_HPP

#include "interfaces/common_objects/types.hpp"
#include "interfaces/primitive.hpp"
#include "model/commands/add_peer.hpp"

namespace shared_model {
  namespace interface {

    /**
     * Add amount of asset to an account
     */
    class AddPeer : public Primitive<AddPeer, iroha::model::AddPeer> {
     public:
      /**
       * @return Peer key, acts like peer identifier
       */
      virtual const types::PubkeyType &peer_key() const = 0;

      /// Type of peer address
      using AddressType = std::string;
      /**
       * @return peer address
       */
      virtual const AddressType &address() const = 0;
    };
  }  // namespace interface
}  // namespace shared_model

#endif  // IROHA_SHARED_MODEL_ADD_PEER_HPP