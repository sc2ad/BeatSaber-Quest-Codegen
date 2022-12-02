// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IMultiplayerRichPresenceData
#include "GlobalNamespace/IMultiplayerRichPresenceData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: InMultiplayerRichPresenceData
  class InMultiplayerRichPresenceData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::InMultiplayerRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InMultiplayerRichPresenceData*, "", "InMultiplayerRichPresenceData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2A
  #pragma pack(push, 1)
  // Autogenerated type: InMultiplayerRichPresenceData
  // [TokenAttribute] Offset: FFFFFFFF
  class InMultiplayerRichPresenceData : public ::Il2CppObject/*, public ::GlobalNamespace::IMultiplayerRichPresenceData*/ {
    public:
    public:
    // private System.String <apiName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW apiName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <localizedDescription>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW localizedDescription;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <multiplayerSecret>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW multiplayerSecret;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <atMaxPartySize>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool atMaxPartySize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <canInvite>k__BackingField
    // Size: 0x1
    // Offset: 0x29
    bool canInvite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IMultiplayerRichPresenceData
    operator ::GlobalNamespace::IMultiplayerRichPresenceData() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IMultiplayerRichPresenceData*>(this);
    }
    // Creating interface conversion operator: i_IMultiplayerRichPresenceData
    inline ::GlobalNamespace::IMultiplayerRichPresenceData* i_IMultiplayerRichPresenceData() noexcept {
      return reinterpret_cast<::GlobalNamespace::IMultiplayerRichPresenceData*>(this);
    }
    // [LocalizationKeyAttribute] Offset: 0x1111C8C
    // static field const value: static private System.String kInMultiplayerLobbyRichPresenceLocalizationKey
    static constexpr const char* kInMultiplayerLobbyRichPresenceLocalizationKey = "IN_MULTIPLAYER_LOBBY_PRESENCE";
    // Get static field: static private System.String kInMultiplayerLobbyRichPresenceLocalizationKey
    static ::StringW _get_kInMultiplayerLobbyRichPresenceLocalizationKey();
    // Set static field: static private System.String kInMultiplayerLobbyRichPresenceLocalizationKey
    static void _set_kInMultiplayerLobbyRichPresenceLocalizationKey(::StringW value);
    // Get instance field reference: private System.String <apiName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$apiName$k__BackingField();
    // Get instance field reference: private System.String <localizedDescription>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$localizedDescription$k__BackingField();
    // Get instance field reference: private System.String <multiplayerSecret>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$multiplayerSecret$k__BackingField();
    // Get instance field reference: private System.Boolean <atMaxPartySize>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$atMaxPartySize$k__BackingField();
    // Get instance field reference: private System.Boolean <canInvite>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$canInvite$k__BackingField();
    // public System.String get_apiName()
    // Offset: 0x13F490C
    ::StringW get_apiName();
    // protected System.Void set_apiName(System.String value)
    // Offset: 0x13F4914
    void set_apiName(::StringW value);
    // public System.String get_localizedDescription()
    // Offset: 0x13F491C
    ::StringW get_localizedDescription();
    // protected System.Void set_localizedDescription(System.String value)
    // Offset: 0x13F4924
    void set_localizedDescription(::StringW value);
    // public System.String get_multiplayerSecret()
    // Offset: 0x13F492C
    ::StringW get_multiplayerSecret();
    // public System.Void set_multiplayerSecret(System.String value)
    // Offset: 0x13F4934
    void set_multiplayerSecret(::StringW value);
    // public System.Boolean get_atMaxPartySize()
    // Offset: 0x13F493C
    bool get_atMaxPartySize();
    // public System.Void set_atMaxPartySize(System.Boolean value)
    // Offset: 0x13F4944
    void set_atMaxPartySize(bool value);
    // public System.Boolean get_canInvite()
    // Offset: 0x13F4950
    bool get_canInvite();
    // public System.Void set_canInvite(System.Boolean value)
    // Offset: 0x13F4958
    void set_canInvite(bool value);
    // public System.Boolean get_isJoinable()
    // Offset: 0x13F4964
    bool get_isJoinable();
    // public System.Void .ctor(System.String multiplayerSecret, System.Boolean canInvite, System.Boolean atMaxPartySize)
    // Offset: 0x13F49A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InMultiplayerRichPresenceData* New_ctor(::StringW multiplayerSecret, bool canInvite, bool atMaxPartySize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::InMultiplayerRichPresenceData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InMultiplayerRichPresenceData*, creationType>(multiplayerSecret, canInvite, atMaxPartySize)));
    }
  }; // InMultiplayerRichPresenceData
  #pragma pack(pop)
  static check_size<sizeof(InMultiplayerRichPresenceData), 41 + sizeof(bool)> __GlobalNamespace_InMultiplayerRichPresenceDataSizeCheck;
  static_assert(sizeof(InMultiplayerRichPresenceData) == 0x2A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::get_apiName
// Il2CppName: get_apiName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::InMultiplayerRichPresenceData::*)()>(&GlobalNamespace::InMultiplayerRichPresenceData::get_apiName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "get_apiName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::set_apiName
// Il2CppName: set_apiName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InMultiplayerRichPresenceData::*)(::StringW)>(&GlobalNamespace::InMultiplayerRichPresenceData::set_apiName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "set_apiName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::get_localizedDescription
// Il2CppName: get_localizedDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::InMultiplayerRichPresenceData::*)()>(&GlobalNamespace::InMultiplayerRichPresenceData::get_localizedDescription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "get_localizedDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::set_localizedDescription
// Il2CppName: set_localizedDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InMultiplayerRichPresenceData::*)(::StringW)>(&GlobalNamespace::InMultiplayerRichPresenceData::set_localizedDescription)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "set_localizedDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::get_multiplayerSecret
// Il2CppName: get_multiplayerSecret
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::InMultiplayerRichPresenceData::*)()>(&GlobalNamespace::InMultiplayerRichPresenceData::get_multiplayerSecret)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "get_multiplayerSecret", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::set_multiplayerSecret
// Il2CppName: set_multiplayerSecret
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InMultiplayerRichPresenceData::*)(::StringW)>(&GlobalNamespace::InMultiplayerRichPresenceData::set_multiplayerSecret)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "set_multiplayerSecret", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::get_atMaxPartySize
// Il2CppName: get_atMaxPartySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::InMultiplayerRichPresenceData::*)()>(&GlobalNamespace::InMultiplayerRichPresenceData::get_atMaxPartySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "get_atMaxPartySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::set_atMaxPartySize
// Il2CppName: set_atMaxPartySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InMultiplayerRichPresenceData::*)(bool)>(&GlobalNamespace::InMultiplayerRichPresenceData::set_atMaxPartySize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "set_atMaxPartySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::get_canInvite
// Il2CppName: get_canInvite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::InMultiplayerRichPresenceData::*)()>(&GlobalNamespace::InMultiplayerRichPresenceData::get_canInvite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "get_canInvite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::set_canInvite
// Il2CppName: set_canInvite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InMultiplayerRichPresenceData::*)(bool)>(&GlobalNamespace::InMultiplayerRichPresenceData::set_canInvite)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "set_canInvite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::get_isJoinable
// Il2CppName: get_isJoinable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::InMultiplayerRichPresenceData::*)()>(&GlobalNamespace::InMultiplayerRichPresenceData::get_isJoinable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InMultiplayerRichPresenceData*), "get_isJoinable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InMultiplayerRichPresenceData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
