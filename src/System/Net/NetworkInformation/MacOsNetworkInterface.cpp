// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.MacOsNetworkInterface
#include "System/Net/NetworkInformation/MacOsNetworkInterface.hpp"
// Including type: System.Net.NetworkInformation.IPInterfaceProperties
#include "System/Net/NetworkInformation/IPInterfaceProperties.hpp"
// Including type: System.Net.NetworkInformation.OperationalStatus
#include "System/Net/NetworkInformation/OperationalStatus.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.NetworkInformation.MacOsNetworkInterface..ctor
System::Net::NetworkInformation::MacOsNetworkInterface* System::Net::NetworkInformation::MacOsNetworkInterface::New_ctor(::Il2CppString* name, uint ifa_flags) {
  return THROW_UNLESS(il2cpp_utils::New<MacOsNetworkInterface*>(name, ifa_flags));
}
// Autogenerated method: System.Net.NetworkInformation.MacOsNetworkInterface.GetIPProperties
System::Net::NetworkInformation::IPInterfaceProperties* System::Net::NetworkInformation::MacOsNetworkInterface::GetIPProperties() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::NetworkInformation::IPInterfaceProperties*>(this, "GetIPProperties"));
}
// Autogenerated method: System.Net.NetworkInformation.MacOsNetworkInterface.get_OperationalStatus
System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::MacOsNetworkInterface::get_OperationalStatus() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::NetworkInformation::OperationalStatus>(this, "get_OperationalStatus"));
}