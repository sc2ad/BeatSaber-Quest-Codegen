// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ActivatedClientTypeEntry
  class ActivatedClientTypeEntry;
  // Forward declaring type: WellKnownClientTypeEntry
  class WellKnownClientTypeEntry;
  // Forward declaring type: ActivatedServiceTypeEntry
  class ActivatedServiceTypeEntry;
  // Forward declaring type: WellKnownServiceTypeEntry
  class WellKnownServiceTypeEntry;
  // Forward declaring type: ChannelData
  class ChannelData;
  // Forward declaring type: ProviderData
  class ProviderData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: RemotingConfiguration
  class RemotingConfiguration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::RemotingConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::RemotingConfiguration*, "System.Runtime.Remoting", "RemotingConfiguration");
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.RemotingConfiguration
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 10708D0
  class RemotingConfiguration : public ::Il2CppObject {
    public:
    // Get static field: static private System.String applicationID
    static ::StringW _get_applicationID();
    // Set static field: static private System.String applicationID
    static void _set_applicationID(::StringW value);
    // Get static field: static private System.String applicationName
    static ::StringW _get_applicationName();
    // Set static field: static private System.String applicationName
    static void _set_applicationName(::StringW value);
    // Get static field: static private System.String processGuid
    static ::StringW _get_processGuid();
    // Set static field: static private System.String processGuid
    static void _set_processGuid(::StringW value);
    // Get static field: static private System.Boolean defaultConfigRead
    static bool _get_defaultConfigRead();
    // Set static field: static private System.Boolean defaultConfigRead
    static void _set_defaultConfigRead(bool value);
    // Get static field: static private System.Boolean defaultDelayedConfigRead
    static bool _get_defaultDelayedConfigRead();
    // Set static field: static private System.Boolean defaultDelayedConfigRead
    static void _set_defaultDelayedConfigRead(bool value);
    // Get static field: static private System.String _errorMode
    static ::StringW _get__errorMode();
    // Set static field: static private System.String _errorMode
    static void _set__errorMode(::StringW value);
    // Get static field: static private System.Collections.Hashtable wellKnownClientEntries
    static ::System::Collections::Hashtable* _get_wellKnownClientEntries();
    // Set static field: static private System.Collections.Hashtable wellKnownClientEntries
    static void _set_wellKnownClientEntries(::System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable activatedClientEntries
    static ::System::Collections::Hashtable* _get_activatedClientEntries();
    // Set static field: static private System.Collections.Hashtable activatedClientEntries
    static void _set_activatedClientEntries(::System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable wellKnownServiceEntries
    static ::System::Collections::Hashtable* _get_wellKnownServiceEntries();
    // Set static field: static private System.Collections.Hashtable wellKnownServiceEntries
    static void _set_wellKnownServiceEntries(::System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable activatedServiceEntries
    static ::System::Collections::Hashtable* _get_activatedServiceEntries();
    // Set static field: static private System.Collections.Hashtable activatedServiceEntries
    static void _set_activatedServiceEntries(::System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable channelTemplates
    static ::System::Collections::Hashtable* _get_channelTemplates();
    // Set static field: static private System.Collections.Hashtable channelTemplates
    static void _set_channelTemplates(::System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable clientProviderTemplates
    static ::System::Collections::Hashtable* _get_clientProviderTemplates();
    // Set static field: static private System.Collections.Hashtable clientProviderTemplates
    static void _set_clientProviderTemplates(::System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable serverProviderTemplates
    static ::System::Collections::Hashtable* _get_serverProviderTemplates();
    // Set static field: static private System.Collections.Hashtable serverProviderTemplates
    static void _set_serverProviderTemplates(::System::Collections::Hashtable* value);
    // static public System.String get_ApplicationName()
    // Offset: 0x18E8950
    static ::StringW get_ApplicationName();
    // static public System.Void set_ApplicationName(System.String value)
    // Offset: 0x18E89B8
    static void set_ApplicationName(::StringW value);
    // static public System.String get_ProcessId()
    // Offset: 0x18E8A24
    static ::StringW get_ProcessId();
    // static private System.Void .cctor()
    // Offset: 0x18EAD4C
    static void _cctor();
    // static System.Void LoadDefaultDelayedChannels()
    // Offset: 0x18E8AEC
    static void LoadDefaultDelayedChannels();
    // static public System.Runtime.Remoting.ActivatedClientTypeEntry IsRemotelyActivatedClientType(System.Type svrType)
    // Offset: 0x18E8DE0
    static ::System::Runtime::Remoting::ActivatedClientTypeEntry* IsRemotelyActivatedClientType(::System::Type* svrType);
    // static public System.Runtime.Remoting.WellKnownClientTypeEntry IsWellKnownClientType(System.Type svrType)
    // Offset: 0x18E8F40
    static ::System::Runtime::Remoting::WellKnownClientTypeEntry* IsWellKnownClientType(::System::Type* svrType);
    // static public System.Void RegisterActivatedClientType(System.Runtime.Remoting.ActivatedClientTypeEntry entry)
    // Offset: 0x18E90A0
    static void RegisterActivatedClientType(::System::Runtime::Remoting::ActivatedClientTypeEntry* entry);
    // static public System.Void RegisterActivatedServiceType(System.Runtime.Remoting.ActivatedServiceTypeEntry entry)
    // Offset: 0x18E92FC
    static void RegisterActivatedServiceType(::System::Runtime::Remoting::ActivatedServiceTypeEntry* entry);
    // static public System.Void RegisterWellKnownClientType(System.Runtime.Remoting.WellKnownClientTypeEntry entry)
    // Offset: 0x18E9420
    static void RegisterWellKnownClientType(::System::Runtime::Remoting::WellKnownClientTypeEntry* entry);
    // static public System.Void RegisterWellKnownServiceType(System.Runtime.Remoting.WellKnownServiceTypeEntry entry)
    // Offset: 0x18E967C
    static void RegisterWellKnownServiceType(::System::Runtime::Remoting::WellKnownServiceTypeEntry* entry);
    // static System.Void RegisterChannelTemplate(System.Runtime.Remoting.ChannelData channel)
    // Offset: 0x18E98E4
    static void RegisterChannelTemplate(::System::Runtime::Remoting::ChannelData* channel);
    // static System.Void RegisterClientProviderTemplate(System.Runtime.Remoting.ProviderData prov)
    // Offset: 0x18E9970
    static void RegisterClientProviderTemplate(::System::Runtime::Remoting::ProviderData* prov);
    // static System.Void RegisterServerProviderTemplate(System.Runtime.Remoting.ProviderData prov)
    // Offset: 0x18E99FC
    static void RegisterServerProviderTemplate(::System::Runtime::Remoting::ProviderData* prov);
    // static System.Void RegisterChannels(System.Collections.ArrayList channels, System.Boolean onlyDelayed)
    // Offset: 0x18E9A88
    static void RegisterChannels(::System::Collections::ArrayList* channels, bool onlyDelayed);
    // static System.Void RegisterTypes(System.Collections.ArrayList types)
    // Offset: 0x18EA69C
    static void RegisterTypes(::System::Collections::ArrayList* types);
    // static public System.Boolean CustomErrorsEnabled(System.Boolean isLocalRequest)
    // Offset: 0x18EAB28
    static bool CustomErrorsEnabled(bool isLocalRequest);
    // static System.Void SetCustomErrorsMode(System.String mode)
    // Offset: 0x18EABF4
    static void SetCustomErrorsMode(::StringW mode);
  }; // System.Runtime.Remoting.RemotingConfiguration
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::get_ApplicationName
// Il2CppName: get_ApplicationName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Runtime::Remoting::RemotingConfiguration::get_ApplicationName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "get_ApplicationName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::set_ApplicationName
// Il2CppName: set_ApplicationName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::Runtime::Remoting::RemotingConfiguration::set_ApplicationName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "set_ApplicationName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::get_ProcessId
// Il2CppName: get_ProcessId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Runtime::Remoting::RemotingConfiguration::get_ProcessId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "get_ProcessId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Remoting::RemotingConfiguration::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::LoadDefaultDelayedChannels
// Il2CppName: LoadDefaultDelayedChannels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Remoting::RemotingConfiguration::LoadDefaultDelayedChannels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "LoadDefaultDelayedChannels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::IsRemotelyActivatedClientType
// Il2CppName: IsRemotelyActivatedClientType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ActivatedClientTypeEntry* (*)(::System::Type*)>(&System::Runtime::Remoting::RemotingConfiguration::IsRemotelyActivatedClientType)> {
  static const MethodInfo* get() {
    static auto* svrType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "IsRemotelyActivatedClientType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{svrType});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::IsWellKnownClientType
// Il2CppName: IsWellKnownClientType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::WellKnownClientTypeEntry* (*)(::System::Type*)>(&System::Runtime::Remoting::RemotingConfiguration::IsWellKnownClientType)> {
  static const MethodInfo* get() {
    static auto* svrType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "IsWellKnownClientType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{svrType});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::RegisterActivatedClientType
// Il2CppName: RegisterActivatedClientType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::ActivatedClientTypeEntry*)>(&System::Runtime::Remoting::RemotingConfiguration::RegisterActivatedClientType)> {
  static const MethodInfo* get() {
    static auto* entry = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ActivatedClientTypeEntry")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "RegisterActivatedClientType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entry});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::RegisterActivatedServiceType
// Il2CppName: RegisterActivatedServiceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::ActivatedServiceTypeEntry*)>(&System::Runtime::Remoting::RemotingConfiguration::RegisterActivatedServiceType)> {
  static const MethodInfo* get() {
    static auto* entry = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ActivatedServiceTypeEntry")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "RegisterActivatedServiceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entry});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::RegisterWellKnownClientType
// Il2CppName: RegisterWellKnownClientType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::WellKnownClientTypeEntry*)>(&System::Runtime::Remoting::RemotingConfiguration::RegisterWellKnownClientType)> {
  static const MethodInfo* get() {
    static auto* entry = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "WellKnownClientTypeEntry")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "RegisterWellKnownClientType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entry});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::RegisterWellKnownServiceType
// Il2CppName: RegisterWellKnownServiceType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::WellKnownServiceTypeEntry*)>(&System::Runtime::Remoting::RemotingConfiguration::RegisterWellKnownServiceType)> {
  static const MethodInfo* get() {
    static auto* entry = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "WellKnownServiceTypeEntry")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "RegisterWellKnownServiceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entry});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::RegisterChannelTemplate
// Il2CppName: RegisterChannelTemplate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::ChannelData*)>(&System::Runtime::Remoting::RemotingConfiguration::RegisterChannelTemplate)> {
  static const MethodInfo* get() {
    static auto* channel = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ChannelData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "RegisterChannelTemplate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channel});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::RegisterClientProviderTemplate
// Il2CppName: RegisterClientProviderTemplate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::ProviderData*)>(&System::Runtime::Remoting::RemotingConfiguration::RegisterClientProviderTemplate)> {
  static const MethodInfo* get() {
    static auto* prov = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ProviderData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "RegisterClientProviderTemplate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prov});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::RegisterServerProviderTemplate
// Il2CppName: RegisterServerProviderTemplate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::ProviderData*)>(&System::Runtime::Remoting::RemotingConfiguration::RegisterServerProviderTemplate)> {
  static const MethodInfo* get() {
    static auto* prov = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ProviderData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "RegisterServerProviderTemplate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prov});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::RegisterChannels
// Il2CppName: RegisterChannels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::ArrayList*, bool)>(&System::Runtime::Remoting::RemotingConfiguration::RegisterChannels)> {
  static const MethodInfo* get() {
    static auto* channels = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    static auto* onlyDelayed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "RegisterChannels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channels, onlyDelayed});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::RegisterTypes
// Il2CppName: RegisterTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::ArrayList*)>(&System::Runtime::Remoting::RemotingConfiguration::RegisterTypes)> {
  static const MethodInfo* get() {
    static auto* types = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "RegisterTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{types});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::CustomErrorsEnabled
// Il2CppName: CustomErrorsEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&System::Runtime::Remoting::RemotingConfiguration::CustomErrorsEnabled)> {
  static const MethodInfo* get() {
    static auto* isLocalRequest = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "CustomErrorsEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isLocalRequest});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingConfiguration::SetCustomErrorsMode
// Il2CppName: SetCustomErrorsMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::Runtime::Remoting::RemotingConfiguration::SetCustomErrorsMode)> {
  static const MethodInfo* get() {
    static auto* mode = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::RemotingConfiguration*), "SetCustomErrorsMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mode});
  }
};
