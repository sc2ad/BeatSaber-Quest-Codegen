// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: FixedScenesScenesTransitionSetupDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class FixedScenesScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private SceneInfo[] _sceneInfos
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<GlobalNamespace::SceneInfo*> sceneInfos;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::SceneInfo*>) == 0x8);
    public:
    // Get instance field reference: private SceneInfo[] _sceneInfos
    ::ArrayW<GlobalNamespace::SceneInfo*>& dyn__sceneInfos();
    // public System.Void Init()
    // Offset: 0x1380E20
    void Init();
    // public System.Void .ctor()
    // Offset: 0x1380E30
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FixedScenesScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FixedScenesScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // FixedScenesScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(FixedScenesScenesTransitionSetupDataSO), 40 + sizeof(::ArrayW<GlobalNamespace::SceneInfo*>)> __GlobalNamespace_FixedScenesScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(FixedScenesScenesTransitionSetupDataSO) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FixedScenesScenesTransitionSetupDataSO*, "", "FixedScenesScenesTransitionSetupDataSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::*)()>(&GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FixedScenesScenesTransitionSetupDataSO*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FixedScenesScenesTransitionSetupDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
