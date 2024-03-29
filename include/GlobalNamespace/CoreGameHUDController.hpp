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
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CoreGameHUDController
  class CoreGameHUDController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CoreGameHUDController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoreGameHUDController*, "", "CoreGameHUDController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: CoreGameHUDController
  // [TokenAttribute] Offset: FFFFFFFF
  class CoreGameHUDController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::CoreGameHUDController::InitData
    class InitData;
    public:
    // private UnityEngine.GameObject _songProgressPanelGO
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* songProgressPanelGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _relativeScoreGO
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* relativeScoreGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _immediateRankGO
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* immediateRankGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _energyPanelGO
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* energyPanelGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.CanvasGroup _canvasGroup
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::CanvasGroup* canvasGroup;
    // Field size check
    static_assert(sizeof(::UnityEngine::CanvasGroup*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.GameObject _songProgressPanelGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__songProgressPanelGO();
    // Get instance field reference: private UnityEngine.GameObject _relativeScoreGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__relativeScoreGO();
    // Get instance field reference: private UnityEngine.GameObject _immediateRankGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__immediateRankGO();
    // Get instance field reference: private UnityEngine.GameObject _energyPanelGO
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__energyPanelGO();
    // Get instance field reference: private UnityEngine.CanvasGroup _canvasGroup
    [[deprecated("Use field access instead!")]] ::UnityEngine::CanvasGroup*& dyn__canvasGroup();
    // public UnityEngine.GameObject get_songProgressPanelGO()
    // Offset: 0x1458D08
    ::UnityEngine::GameObject* get_songProgressPanelGO();
    // public UnityEngine.GameObject get_relativeScoreGo()
    // Offset: 0x1458D10
    ::UnityEngine::GameObject* get_relativeScoreGo();
    // public UnityEngine.GameObject get_immediateRankGo()
    // Offset: 0x1458D18
    ::UnityEngine::GameObject* get_immediateRankGo();
    // public UnityEngine.GameObject get_energyPanelGo()
    // Offset: 0x1458D20
    ::UnityEngine::GameObject* get_energyPanelGo();
    // public System.Void set_alpha(System.Single value)
    // Offset: 0x1458D28
    void set_alpha(float value);
    // public System.Void .ctor()
    // Offset: 0x1458DD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CoreGameHUDController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CoreGameHUDController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CoreGameHUDController*, creationType>()));
    }
    // protected System.Void Initialize(CoreGameHUDController/InitData initData)
    // Offset: 0x1458D44
    void Initialize(::GlobalNamespace::CoreGameHUDController::InitData* initData);
  }; // CoreGameHUDController
  #pragma pack(pop)
  static check_size<sizeof(CoreGameHUDController), 56 + sizeof(::UnityEngine::CanvasGroup*)> __GlobalNamespace_CoreGameHUDControllerSizeCheck;
  static_assert(sizeof(CoreGameHUDController) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CoreGameHUDController::get_songProgressPanelGO
// Il2CppName: get_songProgressPanelGO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::CoreGameHUDController::*)()>(&GlobalNamespace::CoreGameHUDController::get_songProgressPanelGO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CoreGameHUDController*), "get_songProgressPanelGO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CoreGameHUDController::get_relativeScoreGo
// Il2CppName: get_relativeScoreGo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::CoreGameHUDController::*)()>(&GlobalNamespace::CoreGameHUDController::get_relativeScoreGo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CoreGameHUDController*), "get_relativeScoreGo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CoreGameHUDController::get_immediateRankGo
// Il2CppName: get_immediateRankGo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::CoreGameHUDController::*)()>(&GlobalNamespace::CoreGameHUDController::get_immediateRankGo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CoreGameHUDController*), "get_immediateRankGo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CoreGameHUDController::get_energyPanelGo
// Il2CppName: get_energyPanelGo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::CoreGameHUDController::*)()>(&GlobalNamespace::CoreGameHUDController::get_energyPanelGo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CoreGameHUDController*), "get_energyPanelGo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CoreGameHUDController::set_alpha
// Il2CppName: set_alpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CoreGameHUDController::*)(float)>(&GlobalNamespace::CoreGameHUDController::set_alpha)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CoreGameHUDController*), "set_alpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CoreGameHUDController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CoreGameHUDController::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CoreGameHUDController::*)(::GlobalNamespace::CoreGameHUDController::InitData*)>(&GlobalNamespace::CoreGameHUDController::Initialize)> {
  static const MethodInfo* get() {
    static auto* initData = &::il2cpp_utils::GetClassFromName("", "CoreGameHUDController/InitData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CoreGameHUDController*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initData});
  }
};
