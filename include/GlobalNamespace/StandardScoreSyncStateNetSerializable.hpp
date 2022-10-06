// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
// Including type: ISyncStateSerializable`1
#include "GlobalNamespace/ISyncStateSerializable_1.hpp"
// Including type: StandardScoreSyncState
#include "GlobalNamespace/StandardScoreSyncState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
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
  // Forward declaring type: StandardScoreSyncStateNetSerializable
  class StandardScoreSyncStateNetSerializable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StandardScoreSyncStateNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardScoreSyncStateNetSerializable*, "", "StandardScoreSyncStateNetSerializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: StandardScoreSyncStateNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardScoreSyncStateNetSerializable : public ::Il2CppObject/*, public ::LiteNetLib::Utils::INetSerializable, public ::GlobalNamespace::IPoolablePacket, public ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>*/ {
    public:
    public:
    // private StandardScoreSyncState _state
    // Size: 0x14
    // Offset: 0x10
    ::GlobalNamespace::StandardScoreSyncState state;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StandardScoreSyncState) == 0x14);
    // private SyncStateId <id>k__BackingField
    // Size: 0x1
    // Offset: 0x24
    ::GlobalNamespace::SyncStateId id;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SyncStateId) == 0x1);
    // Padding between fields: id and: time
    char __padding1[0x3] = {};
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetSerializable
    operator ::LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: i_INetSerializable
    inline ::LiteNetLib::Utils::INetSerializable* i_INetSerializable() noexcept {
      return reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IPoolablePacket
    operator ::GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IPoolablePacket*>(this);
    }
    // Creating interface conversion operator: i_IPoolablePacket
    inline ::GlobalNamespace::IPoolablePacket* i_IPoolablePacket() noexcept {
      return reinterpret_cast<::GlobalNamespace::IPoolablePacket*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>
    operator ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>*>(this);
    }
    // Creating interface conversion operator: i_StandardScoreSyncState
    inline ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>* i_StandardScoreSyncState() noexcept {
      return reinterpret_cast<::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>*>(this);
    }
    // Get instance field reference: private StandardScoreSyncState _state
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StandardScoreSyncState& dyn__state();
    // Get instance field reference: private SyncStateId <id>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SyncStateId& dyn_$id$k__BackingField();
    // Get instance field reference: private System.Single <time>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$time$k__BackingField();
    // static public PacketPool`1<StandardScoreSyncStateNetSerializable> get_pool()
    // Offset: 0x26A5008
    static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>* get_pool();
    // public SyncStateId get_id()
    // Offset: 0x26A5050
    ::GlobalNamespace::SyncStateId get_id();
    // public System.Void set_id(SyncStateId value)
    // Offset: 0x26A5058
    void set_id(::GlobalNamespace::SyncStateId value);
    // public System.Single get_time()
    // Offset: 0x26A5060
    float get_time();
    // public System.Void set_time(System.Single value)
    // Offset: 0x26A5068
    void set_time(float value);
    // public StandardScoreSyncState get_state()
    // Offset: 0x26A5070
    ::GlobalNamespace::StandardScoreSyncState get_state();
    // public System.Void set_state(StandardScoreSyncState value)
    // Offset: 0x26A5084
    void set_state(::GlobalNamespace::StandardScoreSyncState value);
    // public System.Void .ctor()
    // Offset: 0x26A51DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardScoreSyncStateNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StandardScoreSyncStateNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardScoreSyncStateNetSerializable*, creationType>()));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x26A5098
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x26A510C
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x26A5180
    void Release();
  }; // StandardScoreSyncStateNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(StandardScoreSyncStateNetSerializable), 40 + sizeof(float)> __GlobalNamespace_StandardScoreSyncStateNetSerializableSizeCheck;
  static_assert(sizeof(StandardScoreSyncStateNetSerializable) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateNetSerializable::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>* (*)()>(&GlobalNamespace::StandardScoreSyncStateNetSerializable::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateNetSerializable*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateNetSerializable::get_id
// Il2CppName: get_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SyncStateId (GlobalNamespace::StandardScoreSyncStateNetSerializable::*)()>(&GlobalNamespace::StandardScoreSyncStateNetSerializable::get_id)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateNetSerializable*), "get_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateNetSerializable::set_id
// Il2CppName: set_id
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncStateNetSerializable::*)(::GlobalNamespace::SyncStateId)>(&GlobalNamespace::StandardScoreSyncStateNetSerializable::set_id)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SyncStateId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateNetSerializable*), "set_id", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateNetSerializable::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::StandardScoreSyncStateNetSerializable::*)()>(&GlobalNamespace::StandardScoreSyncStateNetSerializable::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateNetSerializable*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateNetSerializable::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncStateNetSerializable::*)(float)>(&GlobalNamespace::StandardScoreSyncStateNetSerializable::set_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateNetSerializable*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateNetSerializable::get_state
// Il2CppName: get_state
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StandardScoreSyncState (GlobalNamespace::StandardScoreSyncStateNetSerializable::*)()>(&GlobalNamespace::StandardScoreSyncStateNetSerializable::get_state)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateNetSerializable*), "get_state", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateNetSerializable::set_state
// Il2CppName: set_state
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncStateNetSerializable::*)(::GlobalNamespace::StandardScoreSyncState)>(&GlobalNamespace::StandardScoreSyncStateNetSerializable::set_state)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "StandardScoreSyncState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateNetSerializable*), "set_state", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateNetSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncStateNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::StandardScoreSyncStateNetSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateNetSerializable*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateNetSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncStateNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::StandardScoreSyncStateNetSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateNetSerializable*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateNetSerializable::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncStateNetSerializable::*)()>(&GlobalNamespace::StandardScoreSyncStateNetSerializable::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateNetSerializable*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
