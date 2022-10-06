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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Renderer
  class Renderer;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ConditionalMaterialSwitcher
  class ConditionalMaterialSwitcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ConditionalMaterialSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConditionalMaterialSwitcher*, "", "ConditionalMaterialSwitcher");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: ConditionalMaterialSwitcher
  // [TokenAttribute] Offset: FFFFFFFF
  class ConditionalMaterialSwitcher : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [HeaderAttribute] Offset: 0x1105550
    // private UnityEngine.Material _material0
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Material* material0;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // [HeaderAttribute] Offset: 0x110559C
    // private UnityEngine.Material _material1
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Material* material1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // [SpaceAttribute] Offset: 0x11055E8
    // private BoolSO _value
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BoolSO* value;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BoolSO*) == 0x8);
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Material _material0
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__material0();
    // Get instance field reference: private UnityEngine.Material _material1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__material1();
    // Get instance field reference: private BoolSO _value
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BoolSO*& dyn__value();
    // Get instance field reference: private UnityEngine.Renderer _renderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn__renderer();
    // public System.Void .ctor()
    // Offset: 0x1475010
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionalMaterialSwitcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ConditionalMaterialSwitcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionalMaterialSwitcher*, creationType>()));
    }
    // public System.Void Awake()
    // Offset: 0x1474F94
    void Awake();
  }; // ConditionalMaterialSwitcher
  #pragma pack(pop)
  static check_size<sizeof(ConditionalMaterialSwitcher), 48 + sizeof(::UnityEngine::Renderer*)> __GlobalNamespace_ConditionalMaterialSwitcherSizeCheck;
  static_assert(sizeof(ConditionalMaterialSwitcher) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConditionalMaterialSwitcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ConditionalMaterialSwitcher::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConditionalMaterialSwitcher::*)()>(&GlobalNamespace::ConditionalMaterialSwitcher::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConditionalMaterialSwitcher*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
