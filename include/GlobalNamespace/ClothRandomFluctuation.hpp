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
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.Cloth _cloth
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Cloth* cloth;
    // Field size check
    static_assert(sizeof(::UnityEngine::Cloth*) == 0x8);
    // [HeaderAttribute] Offset: 0x124999C
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
    // [HeaderAttribute] Offset: 0x12499F8
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
    ::UnityEngine::Cloth*& dyn__cloth();
    // Get instance field reference: private System.Boolean _useLocalExternalFluctuations
    bool& dyn__useLocalExternalFluctuations();
    // Get instance field reference: private UnityEngine.Vector3 _externalFluctuations
    ::UnityEngine::Vector3& dyn__externalFluctuations();
    // Get instance field reference: private System.Boolean _useLocalRandomFluctuations
    bool& dyn__useLocalRandomFluctuations();
    // Get instance field reference: private UnityEngine.Vector3 _minFluctuations
    ::UnityEngine::Vector3& dyn__minFluctuations();
    // Get instance field reference: private UnityEngine.Vector3 _maxFluctuations
    ::UnityEngine::Vector3& dyn__maxFluctuations();
    // Get instance field reference: private System.Collections.Generic.List`1<ClothRandomFluctuation/SineLayer> _compoundSins
    ::System::Collections::Generic::List_1<::GlobalNamespace::ClothRandomFluctuation::SineLayer*>*& dyn__compoundSins();
    // Get instance field reference: private System.Single _speed
    float& dyn__speed();
    // protected System.Void Update()
    // Offset: 0x1354D30
    void Update();
    // private System.Void FluctuateCloth(UnityEngine.Cloth cloth)
    // Offset: 0x1354D38
    void FluctuateCloth(::UnityEngine::Cloth* cloth);
    // private System.Single GetNoise(System.Single time, System.Single offset)
    // Offset: 0x1354F54
    float GetNoise(float time, float offset);
    // public System.Void .ctor()
    // Offset: 0x13550A0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClothRandomFluctuation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ClothRandomFluctuation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClothRandomFluctuation*, creationType>()));
    }
  }; // ClothRandomFluctuation
  #pragma pack(pop)
  static check_size<sizeof(ClothRandomFluctuation), 88 + sizeof(float)> __GlobalNamespace_ClothRandomFluctuationSizeCheck;
  static_assert(sizeof(ClothRandomFluctuation) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
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
// Writing MetadataGetter for method: GlobalNamespace::ClothRandomFluctuation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
