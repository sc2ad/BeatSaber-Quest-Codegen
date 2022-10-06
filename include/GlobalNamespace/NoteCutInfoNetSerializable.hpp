// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PoolableSerializable
#include "GlobalNamespace/PoolableSerializable.hpp"
// Including type: Vector3Serializable
#include "GlobalNamespace/Vector3Serializable.hpp"
// Including type: QuaternionSerializable
#include "GlobalNamespace/QuaternionSerializable.hpp"
// Including type: NoteData/GameplayType
#include "GlobalNamespace/NoteData.hpp"
// Including type: ColorType
#include "GlobalNamespace/ColorType.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
  // Skipping declaration: NoteData because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteCutInfoNetSerializable
  class NoteCutInfoNetSerializable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoteCutInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutInfoNetSerializable*, "", "NoteCutInfoNetSerializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutInfoNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class NoteCutInfoNetSerializable : public ::GlobalNamespace::PoolableSerializable {
    public:
    public:
    // public System.Single saberSpeed
    // Size: 0x4
    // Offset: 0x14
    float saberSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean cutWasOk
    // Size: 0x1
    // Offset: 0x18
    bool cutWasOk;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cutWasOk and: saberDir
    char __padding1[0x3] = {};
    // public Vector3Serializable saberDir
    // Size: 0xC
    // Offset: 0x1C
    ::GlobalNamespace::Vector3Serializable saberDir;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public Vector3Serializable cutPoint
    // Size: 0xC
    // Offset: 0x28
    ::GlobalNamespace::Vector3Serializable cutPoint;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public Vector3Serializable cutNormal
    // Size: 0xC
    // Offset: 0x34
    ::GlobalNamespace::Vector3Serializable cutNormal;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public Vector3Serializable notePosition
    // Size: 0xC
    // Offset: 0x40
    ::GlobalNamespace::Vector3Serializable notePosition;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public Vector3Serializable noteScale
    // Size: 0xC
    // Offset: 0x4C
    ::GlobalNamespace::Vector3Serializable noteScale;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    // public QuaternionSerializable noteRotation
    // Size: 0xC
    // Offset: 0x58
    ::GlobalNamespace::QuaternionSerializable noteRotation;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::QuaternionSerializable) == 0xC);
    // public NoteData/GameplayType gameplayType
    // Size: 0x4
    // Offset: 0x64
    ::GlobalNamespace::NoteData::GameplayType gameplayType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteData::GameplayType) == 0x4);
    // public ColorType colorType
    // Size: 0x4
    // Offset: 0x68
    ::GlobalNamespace::ColorType colorType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorType) == 0x4);
    // public System.Single noteTime
    // Size: 0x4
    // Offset: 0x6C
    float noteTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 noteLineIndex
    // Size: 0x4
    // Offset: 0x70
    int noteLineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public NoteLineLayer lineLayer
    // Size: 0x4
    // Offset: 0x74
    ::GlobalNamespace::NoteLineLayer lineLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineLayer) == 0x4);
    // public System.Single timeToNextColorNote
    // Size: 0x4
    // Offset: 0x78
    float timeToNextColorNote;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Vector3Serializable moveVec
    // Size: 0xC
    // Offset: 0x7C
    ::GlobalNamespace::Vector3Serializable moveVec;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Vector3Serializable) == 0xC);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: public System.Single saberSpeed
    [[deprecated("Use field access instead!")]] float& dyn_saberSpeed();
    // Get instance field reference: public System.Boolean cutWasOk
    [[deprecated("Use field access instead!")]] bool& dyn_cutWasOk();
    // Get instance field reference: public Vector3Serializable saberDir
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_saberDir();
    // Get instance field reference: public Vector3Serializable cutPoint
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_cutPoint();
    // Get instance field reference: public Vector3Serializable cutNormal
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_cutNormal();
    // Get instance field reference: public Vector3Serializable notePosition
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_notePosition();
    // Get instance field reference: public Vector3Serializable noteScale
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_noteScale();
    // Get instance field reference: public QuaternionSerializable noteRotation
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::QuaternionSerializable& dyn_noteRotation();
    // Get instance field reference: public NoteData/GameplayType gameplayType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteData::GameplayType& dyn_gameplayType();
    // Get instance field reference: public ColorType colorType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorType& dyn_colorType();
    // Get instance field reference: public System.Single noteTime
    [[deprecated("Use field access instead!")]] float& dyn_noteTime();
    // Get instance field reference: public System.Int32 noteLineIndex
    [[deprecated("Use field access instead!")]] int& dyn_noteLineIndex();
    // Get instance field reference: public NoteLineLayer lineLayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteLineLayer& dyn_lineLayer();
    // Get instance field reference: public System.Single timeToNextColorNote
    [[deprecated("Use field access instead!")]] float& dyn_timeToNextColorNote();
    // Get instance field reference: public Vector3Serializable moveVec
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Vector3Serializable& dyn_moveVec();
    // static public NoteCutInfoNetSerializable Obtain()
    // Offset: 0x29CEB84
    static ::GlobalNamespace::NoteCutInfoNetSerializable* Obtain();
    // public NoteCutInfoNetSerializable Init(in NoteCutInfo noteCutInfo, NoteData noteData, UnityEngine.Vector3 notePosition, UnityEngine.Quaternion noteRotation, UnityEngine.Vector3 noteScale, UnityEngine.Vector3 moveVec)
    // Offset: 0x29CF01C
    ::GlobalNamespace::NoteCutInfoNetSerializable* Init(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::GlobalNamespace::NoteData* noteData, ::UnityEngine::Vector3 notePosition, ::UnityEngine::Quaternion noteRotation, ::UnityEngine::Vector3 noteScale, ::UnityEngine::Vector3 moveVec);
    // public NoteCutInfoNetSerializable Init(System.Single saberSpeed, System.Boolean cutWasOk, UnityEngine.Vector3 saberDir, UnityEngine.Vector3 cutPoint, UnityEngine.Vector3 cutNormal, NoteData/GameplayType gameplayType, ColorType colorType, NoteLineLayer lineLayer, System.Int32 noteLineIndex, System.Single noteTime, System.Single timeToNextColorNote, UnityEngine.Vector3 notePosition, UnityEngine.Quaternion noteRotation, UnityEngine.Vector3 noteScale, UnityEngine.Vector3 moveVec)
    // Offset: 0x29CF104
    ::GlobalNamespace::NoteCutInfoNetSerializable* Init(float saberSpeed, bool cutWasOk, ::UnityEngine::Vector3 saberDir, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal, ::GlobalNamespace::NoteData::GameplayType gameplayType, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteLineLayer lineLayer, int noteLineIndex, float noteTime, float timeToNextColorNote, ::UnityEngine::Vector3 notePosition, ::UnityEngine::Quaternion noteRotation, ::UnityEngine::Vector3 noteScale, ::UnityEngine::Vector3 moveVec);
    // public System.Void .ctor()
    // Offset: 0x29CF00C
    // Implemented from: PoolableSerializable
    // Base method: System.Void PoolableSerializable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutInfoNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteCutInfoNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutInfoNetSerializable*, creationType>()));
    }
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x29CEBCC
    // Implemented from: PoolableSerializable
    // Base method: System.Void PoolableSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x29CEDB8
    // Implemented from: PoolableSerializable
    // Base method: System.Void PoolableSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
  }; // NoteCutInfoNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(NoteCutInfoNetSerializable), 124 + sizeof(::GlobalNamespace::Vector3Serializable)> __GlobalNamespace_NoteCutInfoNetSerializableSizeCheck;
  static_assert(sizeof(NoteCutInfoNetSerializable) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteCutInfoNetSerializable::Obtain
// Il2CppName: Obtain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutInfoNetSerializable* (*)()>(&GlobalNamespace::NoteCutInfoNetSerializable::Obtain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutInfoNetSerializable*), "Obtain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutInfoNetSerializable::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutInfoNetSerializable* (GlobalNamespace::NoteCutInfoNetSerializable::*)(ByRef<::GlobalNamespace::NoteCutInfo>, ::GlobalNamespace::NoteData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::NoteCutInfoNetSerializable::Init)> {
  static const MethodInfo* get() {
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    static auto* noteData = &::il2cpp_utils::GetClassFromName("", "NoteData")->byval_arg;
    static auto* notePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* noteRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* noteScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* moveVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutInfoNetSerializable*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteCutInfo, noteData, notePosition, noteRotation, noteScale, moveVec});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutInfoNetSerializable::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutInfoNetSerializable* (GlobalNamespace::NoteCutInfoNetSerializable::*)(float, bool, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GlobalNamespace::NoteData::GameplayType, ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteLineLayer, int, float, float, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::NoteCutInfoNetSerializable::Init)> {
  static const MethodInfo* get() {
    static auto* saberSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* cutWasOk = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* saberDir = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* cutPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* cutNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* gameplayType = &::il2cpp_utils::GetClassFromName("", "NoteData/GameplayType")->byval_arg;
    static auto* colorType = &::il2cpp_utils::GetClassFromName("", "ColorType")->byval_arg;
    static auto* lineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    static auto* noteLineIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* noteTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeToNextColorNote = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* notePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* noteRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* noteScale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* moveVec = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutInfoNetSerializable*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saberSpeed, cutWasOk, saberDir, cutPoint, cutNormal, gameplayType, colorType, lineLayer, noteLineIndex, noteTime, timeToNextColorNote, notePosition, noteRotation, noteScale, moveVec});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutInfoNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteCutInfoNetSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::NoteCutInfoNetSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutInfoNetSerializable*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutInfoNetSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::NoteCutInfoNetSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutInfoNetSerializable*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
