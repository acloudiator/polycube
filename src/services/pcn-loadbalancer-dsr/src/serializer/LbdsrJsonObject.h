/**
* lbdsr API
* lbdsr API generated from lbdsr.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* LbdsrJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"

#include "FrontendJsonObject.h"
#include "PortsJsonObject.h"
#include "BackendJsonObject.h"
#include <vector>
#include "polycube/services/cube.h"

namespace io {
namespace swagger {
namespace server {
namespace model {


/// <summary>
///
/// </summary>
class  LbdsrJsonObject : public JsonObjectBase {
public:
  LbdsrJsonObject();
  LbdsrJsonObject(const nlohmann::json &json);
  ~LbdsrJsonObject() final = default;
  nlohmann::json toJson() const final;


  /// <summary>
  /// Name of the lbdsr service
  /// </summary>
  std::string getName() const;
  void setName(std::string value);
  bool nameIsSet() const;

  /// <summary>
  /// Entry of the ports table
  /// </summary>
  const std::vector<PortsJsonObject>& getPorts() const;
  void addPorts(PortsJsonObject value);
  bool portsIsSet() const;
  void unsetPorts();

  /// <summary>
  /// Defines the algorithm which LB use to direct requests to the node of the pool (Random, RoundRobin, ..)
  /// </summary>
  std::string getAlgorithm() const;
  void setAlgorithm(std::string value);
  bool algorithmIsSet() const;
  void unsetAlgorithm();

  /// <summary>
  ///
  /// </summary>
  FrontendJsonObject getFrontend() const;
  void setFrontend(FrontendJsonObject value);
  bool frontendIsSet() const;
  void unsetFrontend();

  /// <summary>
  ///
  /// </summary>
  BackendJsonObject getBackend() const;
  void setBackend(BackendJsonObject value);
  bool backendIsSet() const;
  void unsetBackend();

private:
  std::string m_name;
  bool m_nameIsSet;
  std::vector<PortsJsonObject> m_ports;
  bool m_portsIsSet;
  std::string m_algorithm;
  bool m_algorithmIsSet;
  FrontendJsonObject m_frontend;
  bool m_frontendIsSet;
  BackendJsonObject m_backend;
  bool m_backendIsSet;
};

}
}
}
}

