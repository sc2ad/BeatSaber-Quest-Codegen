// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Sockets.IPProtectionLevel
#include "System/Net/Sockets/IPProtectionLevel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Forward declaring type: SettingsSectionInternal
  class SettingsSectionInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Configuration::SettingsSectionInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::SettingsSectionInternal*, "System.Net.Configuration", "SettingsSectionInternal");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.SettingsSectionInternal
  // [TokenAttribute] Offset: FFFFFFFF
  class SettingsSectionInternal : public ::Il2CppObject {
    public:
    public:
    // readonly System.Boolean HttpListenerUnescapeRequestUrl
    // Size: 0x1
    // Offset: 0x10
    bool HttpListenerUnescapeRequestUrl;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: HttpListenerUnescapeRequestUrl and: IPProtectionLevel
    char __padding0[0x3] = {};
    // readonly System.Net.Sockets.IPProtectionLevel IPProtectionLevel
    // Size: 0x4
    // Offset: 0x14
    ::System::Net::Sockets::IPProtectionLevel IPProtectionLevel;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::IPProtectionLevel) == 0x4);
    public:
    // Get static field: static private readonly System.Net.Configuration.SettingsSectionInternal instance
    static ::System::Net::Configuration::SettingsSectionInternal* _get_instance();
    // Set static field: static private readonly System.Net.Configuration.SettingsSectionInternal instance
    static void _set_instance(::System::Net::Configuration::SettingsSectionInternal* value);
    // Get instance field reference: readonly System.Boolean HttpListenerUnescapeRequestUrl
    [[deprecated("Use field access instead!")]] bool& dyn_HttpListenerUnescapeRequestUrl();
    // Get instance field reference: readonly System.Net.Sockets.IPProtectionLevel IPProtectionLevel
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::IPProtectionLevel& dyn_IPProtectionLevel();
    // static System.Net.Configuration.SettingsSectionInternal get_Section()
    // Offset: 0x1A93534
    static ::System::Net::Configuration::SettingsSectionInternal* get_Section();
    // System.Boolean get_Ipv6Enabled()
    // Offset: 0x1A9359C
    bool get_Ipv6Enabled();
    // public System.Void .ctor()
    // Offset: 0x1A935A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsSectionInternal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::SettingsSectionInternal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsSectionInternal*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1A935BC
    static void _cctor();
  }; // System.Net.Configuration.SettingsSectionInternal
  #pragma pack(pop)
  static check_size<sizeof(SettingsSectionInternal), 20 + sizeof(::System::Net::Sockets::IPProtectionLevel)> __System_Net_Configuration_SettingsSectionInternalSizeCheck;
  static_assert(sizeof(SettingsSectionInternal) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::get_Section
// Il2CppName: get_Section
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::SettingsSectionInternal* (*)()>(&System::Net::Configuration::SettingsSectionInternal::get_Section)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "get_Section", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::get_Ipv6Enabled
// Il2CppName: get_Ipv6Enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Configuration::SettingsSectionInternal::*)()>(&System::Net::Configuration::SettingsSectionInternal::get_Ipv6Enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), "get_Ipv6Enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Configuration::SettingsSectionInternal::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Configuration::SettingsSectionInternal::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SettingsSectionInternal*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
