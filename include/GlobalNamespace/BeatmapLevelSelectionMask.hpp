// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
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
  // Forward declaring type: BeatmapLevelSelectionMask
  struct BeatmapLevelSelectionMask;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelSelectionMask, "", "BeatmapLevelSelectionMask");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: BeatmapLevelSelectionMask
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct BeatmapLevelSelectionMask/*, public ::System::ValueType, public ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>*/ {
    public:
    public:
    // [JsonPropertyAttribute] Offset: 0x10F408C
    // public readonly BeatmapDifficultyMask difficulties
    // Size: 0x1
    // Offset: 0x0
    ::GlobalNamespace::BeatmapDifficultyMask difficulties;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficultyMask) == 0x1);
    // Padding between fields: difficulties and: modifiers
    char __padding0[0x1] = {};
    // [JsonPropertyAttribute] Offset: 0x10F40C4
    // public readonly GameplayModifierMask modifiers
    // Size: 0x2
    // Offset: 0x2
    ::GlobalNamespace::GameplayModifierMask modifiers;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifierMask) == 0x2);
    // Padding between fields: modifiers and: songPacks
    char __padding1[0x4] = {};
    // [JsonPropertyAttribute] Offset: 0x10F40FC
    // public readonly SongPackMask songPacks
    // Size: 0x10
    // Offset: 0x8
    ::GlobalNamespace::SongPackMask songPacks;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SongPackMask) == 0x10);
    public:
    // Creating value type constructor for type: BeatmapLevelSelectionMask
    constexpr BeatmapLevelSelectionMask(::GlobalNamespace::BeatmapDifficultyMask difficulties_ = {}, ::GlobalNamespace::GameplayModifierMask modifiers_ = {}, ::GlobalNamespace::SongPackMask songPacks_ = {}) noexcept : difficulties{difficulties_}, modifiers{modifiers_}, songPacks{songPacks_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>
    operator ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>*>(this);
    }
    // Creating interface conversion operator: i_BeatmapLevelSelectionMask
    inline ::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>* i_BeatmapLevelSelectionMask() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::BeatmapLevelSelectionMask>*>(this);
    }
    // Get instance field reference: public readonly BeatmapDifficultyMask difficulties
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDifficultyMask& dyn_difficulties();
    // Get instance field reference: public readonly GameplayModifierMask modifiers
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifierMask& dyn_modifiers();
    // Get instance field reference: public readonly SongPackMask songPacks
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SongPackMask& dyn_songPacks();
    // public System.Void .ctor(BeatmapDifficultyMask difficulties, GameplayModifierMask modifiers, SongPackMask songPacks)
    // Offset: 0x15D27F8
    // ABORTED: conflicts with another method.  BeatmapLevelSelectionMask(::GlobalNamespace::BeatmapDifficultyMask difficulties, ::GlobalNamespace::GameplayModifierMask modifiers, ::GlobalNamespace::SongPackMask songPacks);
    // public System.Boolean Equals(BeatmapLevelSelectionMask other)
    // Offset: 0x15D28A8
    bool Equals(::GlobalNamespace::BeatmapLevelSelectionMask other);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer, System.UInt32 version)
    // Offset: 0x15D2A14
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer, uint version);
    // static public BeatmapLevelSelectionMask Deserialize(LiteNetLib.Utils.NetDataReader reader, System.UInt32 version)
    // Offset: 0x15D2A68
    static ::GlobalNamespace::BeatmapLevelSelectionMask Deserialize(::LiteNetLib::Utils::NetDataReader* reader, uint version);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x15D2808
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x15D29E0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // BeatmapLevelSelectionMask
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelSelectionMask), 8 + sizeof(::GlobalNamespace::SongPackMask)> __GlobalNamespace_BeatmapLevelSelectionMaskSizeCheck;
  static_assert(sizeof(BeatmapLevelSelectionMask) == 0x18);
  // static public System.Boolean op_Equality(BeatmapLevelSelectionMask l, BeatmapLevelSelectionMask r)
  // Offset: 0x15D2AD0
  bool operator ==(const ::GlobalNamespace::BeatmapLevelSelectionMask& l, const ::GlobalNamespace::BeatmapLevelSelectionMask& r);
  // static public System.Boolean op_Inequality(BeatmapLevelSelectionMask l, BeatmapLevelSelectionMask r)
  // Offset: 0x15D2B10
  bool operator !=(const ::GlobalNamespace::BeatmapLevelSelectionMask& l, const ::GlobalNamespace::BeatmapLevelSelectionMask& r);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSelectionMask::BeatmapLevelSelectionMask
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSelectionMask::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapLevelSelectionMask::*)(::GlobalNamespace::BeatmapLevelSelectionMask)>(&GlobalNamespace::BeatmapLevelSelectionMask::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSelectionMask), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSelectionMask::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelSelectionMask::*)(::LiteNetLib::Utils::NetDataWriter*, uint)>(&GlobalNamespace::BeatmapLevelSelectionMask::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSelectionMask), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, version});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSelectionMask::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (*)(::LiteNetLib::Utils::NetDataReader*, uint)>(&GlobalNamespace::BeatmapLevelSelectionMask::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSelectionMask), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, version});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSelectionMask::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapLevelSelectionMask::*)(::Il2CppObject*)>(&GlobalNamespace::BeatmapLevelSelectionMask::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSelectionMask), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSelectionMask::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BeatmapLevelSelectionMask::*)()>(&GlobalNamespace::BeatmapLevelSelectionMask::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelSelectionMask), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSelectionMask::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelSelectionMask::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
