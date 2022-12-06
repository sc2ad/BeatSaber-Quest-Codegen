// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Cloth
  class Cloth;
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
  // Forward declaring type: ClothRandomFluctuation
  class ClothRandomFluctuation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ClothRandomFluctuation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ClothRandomFluctuation*, "", "ClothRandomFluctuation");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: ClothRandomFluctuation
  // [TokenAttribute] Offset: FFFFFFFF
  class ClothRandomFluctuation : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::ClothRandomFluctuation::SineLayer
    class SineLayer;
    public:
    // private UnityEngine.Cloth _cloth
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Cloth* cloth;
    // Field size check
    static_assert(sizeof(::UnityEngine::Cloth*) == 0x8);
    // [HeaderAttribute] Offset: 0x110ECAC
    // private System.Boolean _useLocalExternalFluctuations
    // Size: 0x1
    // Offset: 0x20
    bool useLocalExternalFluctuations;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useLocalExternalFluctuations and: externalFluctuations
    char __padding1[0x3] = {};
    // private UnityEngine.Vector3 _externalFluctuations
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 externalFluctuations;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [HeaderAttribute] Offset: 0x110ED08
    // private System.Boolean _useLocalRandomFluctuations
    // Size: 0x1
    // Offset: 0x30
    bool useLocalRandomFluctuations;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useLocalRandomFluctuations and: minFluctuations
    char __padding3[0x3] = {};
    // private UnityEngine.Vector3 _minFluctuations
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 minFluctuations;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _maxFluctuations
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 maxFluctuations;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: maxFluctuations and: compoundSins
    char __padding5[0x4] = {};
    // private System.Collections.Generic.List`1<ClothRandomFluctuation/SineLayer> _compoundSins
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::GlobalNamespace::ClothRandomFluctuation::SineLayer*>* compoundSins;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::ClothRandomFluctuation::SineLayer*>*) == 0x8);
    // private System.Single _speed
    // Size: 0x4
    // Offset: 0x58
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Cloth _cloth
    [[deprecated("Use field access instead!")]] ::UnityEngine::Cloth*& dyn__cloth();
    // Get instance field reference: private System.Boolean _useLocalExternalFluctuations
    [[deprecated("Use field access instead!")]] bool& dyn__useLocalExternalFluctuations();
    // Get instance field reference: private UnityEngine.Vector3 _externalFluctuations
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__externalFluctuations();
    // Get instance field reference: private System.Boolean _useLocalRandomFluctuations
    [[deprecated("Use field access instead!")]] bool& dyn__useLocalRandomFluctuations();
    // Get instance field reference: private UnityEngine.Vector3 _minFluctuations
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__minFluctuations();
    // Get instance field reference: private UnityEngine.Vector3 _maxFluctuations
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__maxFluctuations();
    // Get instance field reference: private System.Collections.Generic.List`1<ClothRandomFluctuation/SineLayer> _compoundSins
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::ClothRandomFluctuation::SineLayer*>*& dyn__compoundSins();
    // Get instance field reference: private System.Single _speed
    [[deprecated("Use field access instead!")]] float& dyn__speed();
    // public System.Void .ctor()
    // Offset: 0x13EAEA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClothRandomFluctuation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ClothRandomFluctuation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClothRandomFluctuation*, creationType>()));
    }
    // protected System.Void Update()
    // Offset: 0x13EAB38
    void Update();
    // private System.Void FluctuateCloth(UnityEngine.Cloth cloth)
    // Offset: 0x13EAB40
    void FluctuateCloth(::UnityEngine::Cloth* cloth);
    // private System.Single GetNoise(System.Single time, System.Single offset)
    // Offset: 0x13EAD5C
    float GetNoise(float time, float offset);
  }; // ClothRandomFluctuation
  #pragma pack(pop)
  static check_size<sizeof(ClothRandomFluctuation), 88 + sizeof(float)> __GlobalNamespace_ClothRandomFluctuationSizeCheck;
  static_assert(sizeof(ClothRandomFluctuation) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ClothRandomFluctuation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ClothRandomFluctuation::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClothRandomFluctuation::*)()>(&GlobalNamespace::ClothRandomFluctuation::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClothRandomFluctuation*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClothRandomFluctuation::FluctuateCloth
// Il2CppName: FluctuateCloth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ClothRandomFluctuation::*)(::UnityEngine::Cloth*)>(&GlobalNamespace::ClothRandomFluctuation::FluctuateCloth)> {
  static const MethodInfo* get() {
    static auto* cloth = &::il2cpp_utils::GetClassFromName("UnityEngine", "Cloth")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClothRandomFluctuation*), "FluctuateCloth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cloth});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ClothRandomFluctuation::GetNoise
// Il2CppName: GetNoise
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ClothRandomFluctuation::*)(float, float)>(&GlobalNamespace::ClothRandomFluctuation::GetNoise)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ClothRandomFluctuation*), "GetNoise", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, offset});
  }
};
