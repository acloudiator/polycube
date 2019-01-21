/*
 * Copyright 2018 The Polycube Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "base_cube.h"

using polycube::service::TransparentCubeIface;

namespace polycube {
namespace polycubed {

class TransparentCube : public BaseCube, public TransparentCubeIface {
 public:
  explicit TransparentCube(const std::string &name,
                           const std::string &service_name,
                           PatchPanel &patch_panel_ingress_,
                           PatchPanel &patch_panel_egress_, LogLevel level,
                           CubeType type, const service::attach_cb &attach);
  virtual ~TransparentCube();

  void set_next(uint16_t next, ProgramType type);
  void set_parent(PortIface *parent);
  PortIface *get_parent();
  void send_packet_out(const std::vector<uint8_t> &packet, service::Sense sense,
                       bool recirculate = false);

 protected:
  void uninit();
  service::attach_cb attach_;
  PortIface *parent_;
  static std::string get_wrapper_code();
  uint16_t ingress_next_;
  uint16_t egress_next_;
};

}  // namespace polycubed
}  // namespace polycube