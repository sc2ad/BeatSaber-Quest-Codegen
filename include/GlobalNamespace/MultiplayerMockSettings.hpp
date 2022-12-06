// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayerSettings
  class MockPlayerSettings;
  // Forward declaring type: MockServerSettings
  class MockServerSettings;
  // Forward declaring type: MultiplayerStatusData
  class MultiplayerStatusData;
  // Forward declaring type: QuickPlaySetupData
  class QuickPlaySetupData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerMockSettings
  class MultiplayerMockSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerMockSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerMockSettings*, "", "MultiplayerMockSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerMockSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerMockSettings : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // private System.Boolean _isEnabled
    // Size: 0x1
    // Offset: 0x18
    bool isEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isEnabled and: localPlayer
    char __padding0[0x7] = {};
    // private MockPlayerSettings _localPlayer
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MockPlayerSettings* localPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MockPlayerSettings*) == 0x8);
    // private System.Collections.Generic.List`1<MockPlayerSettings> _otherPlayers
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* otherPlayers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>*) == 0x8);
    // private MockServerSettings _quickplayServer
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MockServerSettings* quickplayServer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MockServerSettings*) == 0x8);
    // private MultiplayerStatusData _multiplayerStatusData
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::MultiplayerStatusData* multiplayerStatusData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerStatusData*) == 0x8);
    // private QuickPlaySetupData _quickPlaySetupData
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::QuickPlaySetupData* quickPlaySetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::QuickPlaySetupData*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean _isEnabled
    [[deprecated("Use field access instead!")]] bool& dyn__isEnabled();
    // Get instance field reference: private MockPlayerSettings _localPlayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MockPlayerSettings*& dyn__localPlayer();
    // Get instance field reference: private System.Collections.Generic.List`1<MockPlayerSettings> _otherPlayers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>*& dyn__otherPlayers();
    // Get instance field reference: private MockServerSettings _quickplayServer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MockServerSettings*& dyn__quickplayServer();
    // Get instance field reference: private MultiplayerStatusData _multiplayerStatusData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerStatusData*& dyn__multiplayerStatusData();
    // Get instance field reference: private QuickPlaySetupData _quickPlaySetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::QuickPlaySetupData*& dyn__quickPlaySetupData();
    // public MockServerSettings get_quickplayServer()
    // Offset: 0x13CC220
    ::GlobalNamespace::MockServerSettings* get_quickplayServer();
    // public MockPlayerSettings get_localPlayer()
    // Offset: 0x13CC228
    ::GlobalNamespace::MockPlayerSettings* get_localPlayer();
    // public QuickPlaySetupData get_quickPlaySetupData()
    // Offset: 0x13CC2F4
    ::GlobalNamespace::QuickPlaySetupData* get_quickPlaySetupData();
    // public System.Void set_quickPlaySetupData(QuickPlaySetupData value)
    // Offset: 0x13CC2FC
    void set_quickPlaySetupData(::GlobalNamespace::QuickPlaySetupData* value);
    // public MultiplayerStatusData get_multiplayerStatusData()
    // Offset: 0x13CC304
    ::GlobalNamespace::MultiplayerStatusData* get_multiplayerStatusData();
    // public System.Void set_multiplayerStatusData(MultiplayerStatusData value)
    // Offset: 0x13CC30C
    void set_multiplayerStatusData(::GlobalNamespace::MultiplayerStatusData* value);
    // public System.Collections.Generic.List`1<MockPlayerSettings> get_otherPlayers()
    // Offset: 0x13CC314
    ::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* get_otherPlayers();
    // public System.Boolean get_isEnabled()
    // Offset: 0x13CC31C
    bool get_isEnabled();
    // public System.Void set_isEnabled(System.Boolean value)
    // Offset: 0x13CC324
    void set_isEnabled(bool value);
    // public System.Void .ctor()
    // Offset: 0x13CC338
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerMockSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerMockSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerMockSettings*, creationType>()));
    }
    // static public MultiplayerMockSettings SharedSettings()
    // Offset: 0x13CC330
    static ::GlobalNamespace::MultiplayerMockSettings* SharedSettings();
  }; // MultiplayerMockSettings
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerMockSettings), 64 + sizeof(::GlobalNamespace::QuickPlaySetupData*)> __GlobalNamespace_MultiplayerMockSettingsSizeCheck;
  static_assert(sizeof(MultiplayerMockSettings) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::get_quickplayServer
// Il2CppName: get_quickplayServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MockServerSettings* (GlobalNamespace::MultiplayerMockSettings::*)()>(&GlobalNamespace::MultiplayerMockSettings::get_quickplayServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "get_quickplayServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::get_localPlayer
// Il2CppName: get_localPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MockPlayerSettings* (GlobalNamespace::MultiplayerMockSettings::*)()>(&GlobalNamespace::MultiplayerMockSettings::get_localPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "get_localPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::get_quickPlaySetupData
// Il2CppName: get_quickPlaySetupData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::QuickPlaySetupData* (GlobalNamespace::MultiplayerMockSettings::*)()>(&GlobalNamespace::MultiplayerMockSettings::get_quickPlaySetupData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "get_quickPlaySetupData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::set_quickPlaySetupData
// Il2CppName: set_quickPlaySetupData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerMockSettings::*)(::GlobalNamespace::QuickPlaySetupData*)>(&GlobalNamespace::MultiplayerMockSettings::set_quickPlaySetupData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "QuickPlaySetupData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "set_quickPlaySetupData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::get_multiplayerStatusData
// Il2CppName: get_multiplayerStatusData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerStatusData* (GlobalNamespace::MultiplayerMockSettings::*)()>(&GlobalNamespace::MultiplayerMockSettings::get_multiplayerStatusData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "get_multiplayerStatusData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::set_multiplayerStatusData
// Il2CppName: set_multiplayerStatusData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerMockSettings::*)(::GlobalNamespace::MultiplayerStatusData*)>(&GlobalNamespace::MultiplayerMockSettings::set_multiplayerStatusData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "MultiplayerStatusData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "set_multiplayerStatusData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::get_otherPlayers
// Il2CppName: get_otherPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* (GlobalNamespace::MultiplayerMockSettings::*)()>(&GlobalNamespace::MultiplayerMockSettings::get_otherPlayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "get_otherPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::get_isEnabled
// Il2CppName: get_isEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerMockSettings::*)()>(&GlobalNamespace::MultiplayerMockSettings::get_isEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "get_isEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::set_isEnabled
// Il2CppName: set_isEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerMockSettings::*)(bool)>(&GlobalNamespace::MultiplayerMockSettings::set_isEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "set_isEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerMockSettings::SharedSettings
// Il2CppName: SharedSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerMockSettings* (*)()>(&GlobalNamespace::MultiplayerMockSettings::SharedSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerMockSettings*), "SharedSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
