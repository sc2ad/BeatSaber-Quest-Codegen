// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PoolableSerializable
#include "GlobalNamespace/PoolableSerializable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
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
  // Forward declaring type: PlayersMissingEntitlementsNetSerializable
  class PlayersMissingEntitlementsNetSerializable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*, "", "PlayersMissingEntitlementsNetSerializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayersMissingEntitlementsNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayersMissingEntitlementsNetSerializable : public ::GlobalNamespace::PoolableSerializable {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    public:
    // private readonly System.Collections.Generic.List`1<System.String> _playersWithoutEntitlements
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::StringW>* playersWithoutEntitlements;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.String> _playersWithoutEntitlements
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn__playersWithoutEntitlements();
    // public System.Collections.Generic.List`1<System.String> get_playersWithoutEntitlements()
    // Offset: 0x29D0568
    ::System::Collections::Generic::List_1<::StringW>* get_playersWithoutEntitlements();
    // static public PlayersMissingEntitlementsNetSerializable Obtain()
    // Offset: 0x29D0570
    static ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* Obtain();
    // public PlayersMissingEntitlementsNetSerializable Init(System.Collections.Generic.IEnumerable`1<System.String> playersWithoutEntitlements)
    // Offset: 0x29D0628
    ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* Init(::System::Collections::Generic::IEnumerable_1<::StringW>* playersWithoutEntitlements);
    // public System.Void .ctor()
    // Offset: 0x29D05B8
    // Implemented from: PoolableSerializable
    // Base method: System.Void PoolableSerializable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayersMissingEntitlementsNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayersMissingEntitlementsNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayersMissingEntitlementsNetSerializable*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x29D06B0
    // Implemented from: PoolableSerializable
    // Base method: System.Void PoolableSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x29D07C8
    // Implemented from: PoolableSerializable
    // Base method: System.Void PoolableSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
  }; // PlayersMissingEntitlementsNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(PlayersMissingEntitlementsNetSerializable), 24 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __GlobalNamespace_PlayersMissingEntitlementsNetSerializableSizeCheck;
  static_assert(sizeof(PlayersMissingEntitlementsNetSerializable) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayersMissingEntitlementsNetSerializable::get_playersWithoutEntitlements
// Il2CppName: get_playersWithoutEntitlements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (GlobalNamespace::PlayersMissingEntitlementsNetSerializable::*)()>(&GlobalNamespace::PlayersMissingEntitlementsNetSerializable::get_playersWithoutEntitlements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersMissingEntitlementsNetSerializable*), "get_playersWithoutEntitlements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Obtain
// Il2CppName: Obtain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* (*)()>(&GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Obtain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersMissingEntitlementsNetSerializable*), "Obtain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* (GlobalNamespace::PlayersMissingEntitlementsNetSerializable::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Init)> {
  static const MethodInfo* get() {
    static auto* playersWithoutEntitlements = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersMissingEntitlementsNetSerializable*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playersWithoutEntitlements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayersMissingEntitlementsNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayersMissingEntitlementsNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersMissingEntitlementsNetSerializable*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayersMissingEntitlementsNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::PlayersMissingEntitlementsNetSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayersMissingEntitlementsNetSerializable*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
