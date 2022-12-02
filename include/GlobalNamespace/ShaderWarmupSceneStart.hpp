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
  // Forward declaring type: ShaderWarmupSceneSetupData
  class ShaderWarmupSceneSetupData;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ShaderWarmupSceneStart
  class ShaderWarmupSceneStart;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ShaderWarmupSceneStart);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderWarmupSceneStart*, "", "ShaderWarmupSceneStart");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ShaderWarmupSceneStart
  // [TokenAttribute] Offset: FFFFFFFF
  class ShaderWarmupSceneStart : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::ShaderWarmupSceneStart::$Start$d__2
    class $Start$d__2;
    public:
    // [InjectAttribute] Offset: 0x112501C
    // private readonly ShaderWarmupSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ShaderWarmupSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ShaderWarmupSceneSetupData*) == 0x8);
    // [InjectAttribute] Offset: 0x112502C
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameScenesManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly ShaderWarmupSceneSetupData _sceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ShaderWarmupSceneSetupData*& dyn__sceneSetupData();
    // Get instance field reference: private readonly GameScenesManager _gameScenesManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameScenesManager*& dyn__gameScenesManager();
    // public System.Void .ctor()
    // Offset: 0x1410EE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderWarmupSceneStart* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShaderWarmupSceneStart::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderWarmupSceneStart*, creationType>()));
    }
    // protected System.Collections.IEnumerator Start()
    // Offset: 0x1410E4C
    ::System::Collections::IEnumerator* Start();
  }; // ShaderWarmupSceneStart
  #pragma pack(pop)
  static check_size<sizeof(ShaderWarmupSceneStart), 32 + sizeof(::GlobalNamespace::GameScenesManager*)> __GlobalNamespace_ShaderWarmupSceneStartSizeCheck;
  static_assert(sizeof(ShaderWarmupSceneStart) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShaderWarmupSceneStart::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ShaderWarmupSceneStart::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::ShaderWarmupSceneStart::*)()>(&GlobalNamespace::ShaderWarmupSceneStart::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShaderWarmupSceneStart*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
