// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightGroup
  class LightGroup;
  // Forward declaring type: WhiteColorOrAlphaGroupEffect
  class WhiteColorOrAlphaGroupEffect;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
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
  // Forward declaring type: WhiteColorOrAlphaGroupEffectManager
  class WhiteColorOrAlphaGroupEffectManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*, "", "WhiteColorOrAlphaGroupEffectManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: WhiteColorOrAlphaGroupEffectManager
  // [TokenAttribute] Offset: FFFFFFFF
  class WhiteColorOrAlphaGroupEffectManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private LightGroup[] _lightGroup
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::LightGroup*> lightGroup;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::LightGroup*>) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // [InjectAttribute] Offset: 0x1114910
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x30
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // private readonly System.Collections.Generic.List`1<WhiteColorOrAlphaGroupEffect> _whiteColorOrAlphaEffects
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>* whiteColorOrAlphaEffects;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private LightGroup[] _lightGroup
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::LightGroup*>& dyn__lightGroup();
    // Get instance field reference: private UnityEngine.Color _color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__color();
    // Get instance field reference: private readonly Zenject.DiContainer _container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<WhiteColorOrAlphaGroupEffect> _whiteColorOrAlphaEffects
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>*& dyn__whiteColorOrAlphaEffects();
    // public System.Void .ctor()
    // Offset: 0x166FD44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WhiteColorOrAlphaGroupEffectManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WhiteColorOrAlphaGroupEffectManager*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x166FA38
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x166FC4C
    void OnDestroy();
  }; // WhiteColorOrAlphaGroupEffectManager
  #pragma pack(pop)
  static check_size<sizeof(WhiteColorOrAlphaGroupEffectManager), 56 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>*)> __GlobalNamespace_WhiteColorOrAlphaGroupEffectManagerSizeCheck;
  static_assert(sizeof(WhiteColorOrAlphaGroupEffectManager) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::*)()>(&GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::*)()>(&GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
