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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberTypeObject
  class SaberTypeObject;
  // Forward declaring type: ColorManager
  class ColorManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SetSaberBladeParams
  class SetSaberBladeParams;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SetSaberBladeParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetSaberBladeParams*, "", "SetSaberBladeParams");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: SetSaberBladeParams
  // [TokenAttribute] Offset: FFFFFFFF
  class SetSaberBladeParams : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair
    class PropertyTintColorPair;
    public:
    // private SaberTypeObject _saber
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::SaberTypeObject* saber;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberTypeObject*) == 0x8);
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // [NullAllowed] Offset: 0x11048AC
    // private SetSaberBladeParams/PropertyTintColorPair[] _propertyTintColorPairs
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair*> propertyTintColorPairs;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair*>) == 0x8);
    // [InjectAttribute] Offset: 0x11048E4
    // private ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private SaberTypeObject _saber
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SaberTypeObject*& dyn__saber();
    // Get instance field reference: private UnityEngine.MeshRenderer _meshRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn__meshRenderer();
    // Get instance field reference: private SetSaberBladeParams/PropertyTintColorPair[] _propertyTintColorPairs
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair*>& dyn__propertyTintColorPairs();
    // Get instance field reference: private ColorManager _colorManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorManager*& dyn__colorManager();
    // public System.Void .ctor()
    // Offset: 0x13C39B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetSaberBladeParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SetSaberBladeParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetSaberBladeParams*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13C38AC
    void Start();
  }; // SetSaberBladeParams
  #pragma pack(pop)
  static check_size<sizeof(SetSaberBladeParams), 48 + sizeof(::GlobalNamespace::ColorManager*)> __GlobalNamespace_SetSaberBladeParamsSizeCheck;
  static_assert(sizeof(SetSaberBladeParams) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SetSaberBladeParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SetSaberBladeParams::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetSaberBladeParams::*)()>(&GlobalNamespace::SetSaberBladeParams::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetSaberBladeParams*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
