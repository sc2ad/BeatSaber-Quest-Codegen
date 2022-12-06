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
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: FlowCoordinator
  class FlowCoordinator;
  // Forward declaring type: HierarchyManager
  class HierarchyManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MenuSceneSetup
  class MenuSceneSetup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MenuSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuSceneSetup*, "", "MenuSceneSetup");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MenuSceneSetup
  // [TokenAttribute] Offset: FFFFFFFF
  class MenuSceneSetup : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MenuSceneSetup::$Start$d__3
    class $Start$d__3;
    public:
    // private HMUI.FlowCoordinator _rootFlowCoordinator
    // Size: 0x8
    // Offset: 0x18
    ::HMUI::FlowCoordinator* rootFlowCoordinator;
    // Field size check
    static_assert(sizeof(::HMUI::FlowCoordinator*) == 0x8);
    // [InjectAttribute] Offset: 0x1127844
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0x1127854
    // private readonly HMUI.HierarchyManager _hierarchyManager
    // Size: 0x8
    // Offset: 0x28
    ::HMUI::HierarchyManager* hierarchyManager;
    // Field size check
    static_assert(sizeof(::HMUI::HierarchyManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.FlowCoordinator _rootFlowCoordinator
    [[deprecated("Use field access instead!")]] ::HMUI::FlowCoordinator*& dyn__rootFlowCoordinator();
    // Get instance field reference: private readonly GameScenesManager _gameScenesManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameScenesManager*& dyn__gameScenesManager();
    // Get instance field reference: private readonly HMUI.HierarchyManager _hierarchyManager
    [[deprecated("Use field access instead!")]] ::HMUI::HierarchyManager*& dyn__hierarchyManager();
    // public System.Void .ctor()
    // Offset: 0x1343570
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuSceneSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MenuSceneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuSceneSetup*, creationType>()));
    }
    // protected System.Collections.IEnumerator Start()
    // Offset: 0x13434D4
    ::System::Collections::IEnumerator* Start();
  }; // MenuSceneSetup
  #pragma pack(pop)
  static check_size<sizeof(MenuSceneSetup), 40 + sizeof(::HMUI::HierarchyManager*)> __GlobalNamespace_MenuSceneSetupSizeCheck;
  static_assert(sizeof(MenuSceneSetup) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuSceneSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MenuSceneSetup::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::MenuSceneSetup::*)()>(&GlobalNamespace::MenuSceneSetup::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuSceneSetup*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
