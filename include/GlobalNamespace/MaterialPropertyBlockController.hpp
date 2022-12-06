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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
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
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockController*, "", "MaterialPropertyBlockController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyBlockController
  // [TokenAttribute] Offset: FFFFFFFF
  class MaterialPropertyBlockController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Renderer[] _renderers
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Renderer*> renderers;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Renderer*>) == 0x8);
    // private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::MaterialPropertyBlock* materialPropertyBlock;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    // private System.Collections.Generic.List`1<System.Int32> _numberOfMaterialsInRenderers
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<int>* numberOfMaterialsInRenderers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x30
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Renderer[] _renderers
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Renderer*>& dyn__renderers();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    [[deprecated("Use field access instead!")]] ::UnityEngine::MaterialPropertyBlock*& dyn__materialPropertyBlock();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Int32> _numberOfMaterialsInRenderers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<int>*& dyn__numberOfMaterialsInRenderers();
    // Get instance field reference: private System.Boolean _isInitialized
    [[deprecated("Use field access instead!")]] bool& dyn__isInitialized();
    // public UnityEngine.Renderer[] get_renderers()
    // Offset: 0x1CD09A0
    ::ArrayW<::UnityEngine::Renderer*> get_renderers();
    // public UnityEngine.MaterialPropertyBlock get_materialPropertyBlock()
    // Offset: 0x1CC9DF0
    ::UnityEngine::MaterialPropertyBlock* get_materialPropertyBlock();
    // public System.Void .ctor()
    // Offset: 0x1CD09A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyBlockController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MaterialPropertyBlockController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyBlockController*, creationType>()));
    }
    // public System.Void ApplyChanges()
    // Offset: 0x1CC9E5C
    void ApplyChanges();
  }; // MaterialPropertyBlockController
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyBlockController), 48 + sizeof(bool)> __GlobalNamespace_MaterialPropertyBlockControllerSizeCheck;
  static_assert(sizeof(MaterialPropertyBlockController) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockController::get_renderers
// Il2CppName: get_renderers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Renderer*> (GlobalNamespace::MaterialPropertyBlockController::*)()>(&GlobalNamespace::MaterialPropertyBlockController::get_renderers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockController*), "get_renderers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockController::get_materialPropertyBlock
// Il2CppName: get_materialPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MaterialPropertyBlock* (GlobalNamespace::MaterialPropertyBlockController::*)()>(&GlobalNamespace::MaterialPropertyBlockController::get_materialPropertyBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockController*), "get_materialPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockController::ApplyChanges
// Il2CppName: ApplyChanges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockController::*)()>(&GlobalNamespace::MaterialPropertyBlockController::ApplyChanges)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockController*), "ApplyChanges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
