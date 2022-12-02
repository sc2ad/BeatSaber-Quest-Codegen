// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivable`1
#include "HoudiniEngineUnity/IEquivable_1.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Terrain
  class Terrain;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HEU_BoundingVolume
  class HEU_BoundingVolume;
}
// Forward declaring namespace: UnityEngine::Tilemaps
namespace UnityEngine::Tilemaps {
  // Forward declaring type: Tilemap
  class Tilemap;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_InputObjectInfo
  class HEU_InputObjectInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputObjectInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputObjectInfo*, "HoudiniEngineUnity", "HEU_InputObjectInfo");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputObjectInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InputObjectInfo : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*/ {
    public:
    public:
    // public UnityEngine.GameObject _gameObject
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Terrain _terrainReference
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Terrain* terrainReference;
    // Field size check
    static_assert(sizeof(::UnityEngine::Terrain*) == 0x8);
    // public HEU_BoundingVolume _boundingVolumeReference
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::HEU_BoundingVolume* boundingVolumeReference;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HEU_BoundingVolume*) == 0x8);
    // public UnityEngine.Tilemaps.Tilemap _tilemapReference
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Tilemaps::Tilemap* tilemapReference;
    // Field size check
    static_assert(sizeof(::UnityEngine::Tilemaps::Tilemap*) == 0x8);
    // public UnityEngine.Matrix4x4 _syncdTransform
    // Size: 0x40
    // Offset: 0x30
    ::UnityEngine::Matrix4x4 syncdTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // [FormerlySerializedAsAttribute] Offset: 0x1141B2C
    // public System.Boolean _useTransformOffset
    // Size: 0x1
    // Offset: 0x70
    bool useTransformOffset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useTransformOffset and: translateOffset
    char __padding5[0x3] = {};
    // [FormerlySerializedAsAttribute] Offset: 0x1141B64
    // public UnityEngine.Vector3 _translateOffset
    // Size: 0xC
    // Offset: 0x74
    ::UnityEngine::Vector3 translateOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [FormerlySerializedAsAttribute] Offset: 0x1141B9C
    // public UnityEngine.Vector3 _rotateOffset
    // Size: 0xC
    // Offset: 0x80
    ::UnityEngine::Vector3 rotateOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [FormerlySerializedAsAttribute] Offset: 0x1141BD4
    // public UnityEngine.Vector3 _scaleOffset
    // Size: 0xC
    // Offset: 0x8C
    ::UnityEngine::Vector3 scaleOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Type _inputInterfaceType
    // Size: 0x8
    // Offset: 0x98
    ::System::Type* inputInterfaceType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>
    operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*>(this);
    }
    // Creating interface conversion operator: i_HEU_InputObjectInfo
    inline ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>* i_HEU_InputObjectInfo() noexcept {
      return reinterpret_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputObjectInfo*>*>(this);
    }
    // Get instance field reference: public UnityEngine.GameObject _gameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__gameObject();
    // Get instance field reference: public UnityEngine.Terrain _terrainReference
    [[deprecated("Use field access instead!")]] ::UnityEngine::Terrain*& dyn__terrainReference();
    // Get instance field reference: public HEU_BoundingVolume _boundingVolumeReference
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HEU_BoundingVolume*& dyn__boundingVolumeReference();
    // Get instance field reference: public UnityEngine.Tilemaps.Tilemap _tilemapReference
    [[deprecated("Use field access instead!")]] ::UnityEngine::Tilemaps::Tilemap*& dyn__tilemapReference();
    // Get instance field reference: public UnityEngine.Matrix4x4 _syncdTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn__syncdTransform();
    // Get instance field reference: public System.Boolean _useTransformOffset
    [[deprecated("Use field access instead!")]] bool& dyn__useTransformOffset();
    // Get instance field reference: public UnityEngine.Vector3 _translateOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__translateOffset();
    // Get instance field reference: public UnityEngine.Vector3 _rotateOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__rotateOffset();
    // Get instance field reference: public UnityEngine.Vector3 _scaleOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__scaleOffset();
    // Get instance field reference: public System.Type _inputInterfaceType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__inputInterfaceType();
    // public System.Void .ctor()
    // Offset: 0x18A5754
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_InputObjectInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_InputObjectInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_InputObjectInfo*, creationType>()));
    }
    // public System.Void CopyTo(HoudiniEngineUnity.HEU_InputObjectInfo destObject)
    // Offset: 0x18A5834
    void CopyTo(::HoudiniEngineUnity::HEU_InputObjectInfo* destObject);
    // public System.Void SetReferencesFromGameObject()
    // Offset: 0x18A6078
    void SetReferencesFromGameObject();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.HEU_InputObjectInfo other)
    // Offset: 0x18A81F8
    bool IsEquivalentTo(::HoudiniEngineUnity::HEU_InputObjectInfo* other);
  }; // HoudiniEngineUnity.HEU_InputObjectInfo
  #pragma pack(pop)
  static check_size<sizeof(HEU_InputObjectInfo), 152 + sizeof(::System::Type*)> __HoudiniEngineUnity_HEU_InputObjectInfoSizeCheck;
  static_assert(sizeof(HEU_InputObjectInfo) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputObjectInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputObjectInfo::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputObjectInfo::*)(::HoudiniEngineUnity::HEU_InputObjectInfo*)>(&HoudiniEngineUnity::HEU_InputObjectInfo::CopyTo)> {
  static const MethodInfo* get() {
    static auto* destObject = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputObjectInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputObjectInfo*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destObject});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputObjectInfo::SetReferencesFromGameObject
// Il2CppName: SetReferencesFromGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputObjectInfo::*)()>(&HoudiniEngineUnity::HEU_InputObjectInfo::SetReferencesFromGameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputObjectInfo*), "SetReferencesFromGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputObjectInfo::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_InputObjectInfo::*)(::HoudiniEngineUnity::HEU_InputObjectInfo*)>(&HoudiniEngineUnity::HEU_InputObjectInfo::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HEU_InputObjectInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_InputObjectInfo*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
