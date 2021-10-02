// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: ColorSchemeNetSerializable
#include "GlobalNamespace/ColorSchemeNetSerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSpecificSettingsNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class PlayerSpecificSettingsNetSerializable : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.String userId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean leftHanded
    // Size: 0x1
    // Offset: 0x20
    bool leftHanded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean automaticPlayerHeight
    // Size: 0x1
    // Offset: 0x21
    bool automaticPlayerHeight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: automaticPlayerHeight and: playerHeight
    char __padding3[0x2] = {};
    // public System.Single playerHeight
    // Size: 0x4
    // Offset: 0x24
    float playerHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single headPosToPlayerHeightOffset
    // Size: 0x4
    // Offset: 0x28
    float headPosToPlayerHeightOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public ColorSchemeNetSerializable colorScheme
    // Size: 0x70
    // Offset: 0x2C
    GlobalNamespace::ColorSchemeNetSerializable colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeNetSerializable) == 0x70);
    public:
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Get instance field reference: public System.String userId
    ::Il2CppString*& dyn_userId();
    // Get instance field reference: public System.String userName
    ::Il2CppString*& dyn_userName();
    // Get instance field reference: public System.Boolean leftHanded
    bool& dyn_leftHanded();
    // Get instance field reference: public System.Boolean automaticPlayerHeight
    bool& dyn_automaticPlayerHeight();
    // Get instance field reference: public System.Single playerHeight
    float& dyn_playerHeight();
    // Get instance field reference: public System.Single headPosToPlayerHeightOffset
    float& dyn_headPosToPlayerHeightOffset();
    // Get instance field reference: public ColorSchemeNetSerializable colorScheme
    GlobalNamespace::ColorSchemeNetSerializable& dyn_colorScheme();
    // public System.Void .ctor(System.String userId, System.String userName, System.Boolean leftHanded, System.Boolean automaticPlayerHeight, System.Single playerHeight, System.Single headPosToPlayerHeightOffset, UnityEngine.Color saberAColor, UnityEngine.Color saberBColor, UnityEngine.Color obstaclesColor, UnityEngine.Color environmentColor0, UnityEngine.Color environmentColor1, UnityEngine.Color environmentColor0Boost, UnityEngine.Color environmentColor1Boost)
    // Offset: 0x18D33D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSpecificSettingsNetSerializable* New_ctor(::Il2CppString* userId, ::Il2CppString* userName, bool leftHanded, bool automaticPlayerHeight, float playerHeight, float headPosToPlayerHeightOffset, UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color obstaclesColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, UnityEngine::Color environmentColor0Boost, UnityEngine::Color environmentColor1Boost) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSpecificSettingsNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSpecificSettingsNetSerializable*, creationType>(userId, userName, leftHanded, automaticPlayerHeight, playerHeight, headPosToPlayerHeightOffset, saberAColor, saberBColor, obstaclesColor, environmentColor0, environmentColor1, environmentColor0Boost, environmentColor1Boost)));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x18D3194
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x18D3334
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x18D332C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSpecificSettingsNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSpecificSettingsNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSpecificSettingsNetSerializable*, creationType>()));
    }
  }; // PlayerSpecificSettingsNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(PlayerSpecificSettingsNetSerializable), 44 + sizeof(GlobalNamespace::ColorSchemeNetSerializable)> __GlobalNamespace_PlayerSpecificSettingsNetSerializableSizeCheck;
  static_assert(sizeof(PlayerSpecificSettingsNetSerializable) == 0x9C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSpecificSettingsNetSerializable*, "", "PlayerSpecificSettingsNetSerializable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettingsNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettingsNetSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSpecificSettingsNetSerializable::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::PlayerSpecificSettingsNetSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettingsNetSerializable*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettingsNetSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerSpecificSettingsNetSerializable::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::PlayerSpecificSettingsNetSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerSpecificSettingsNetSerializable*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerSpecificSettingsNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
