// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.ConfigurationElementCollection
#include "System/Configuration/ConfigurationElementCollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Forward declaring type: ConnectionManagementElementCollection
  class ConnectionManagementElementCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Configuration::ConnectionManagementElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::ConnectionManagementElementCollection*, "System.Net.Configuration", "ConnectionManagementElementCollection");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.ConnectionManagementElementCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [ConfigurationCollectionAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 107C858
  class ConnectionManagementElementCollection : public ::System::Configuration::ConfigurationElementCollection {
    public:
    // public System.Void .ctor()
    // Offset: 0x1A95370
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectionManagementElementCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::ConnectionManagementElementCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectionManagementElementCollection*, creationType>()));
    }
  }; // System.Net.Configuration.ConnectionManagementElementCollection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::ConnectionManagementElementCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
