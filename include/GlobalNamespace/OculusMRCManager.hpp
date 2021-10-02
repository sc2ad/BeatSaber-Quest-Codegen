// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OculusMRCManager
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusMRCManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OculusMRCManager::$$c__DisplayClass1_0
    class $$c__DisplayClass1_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [InjectAttribute] Offset: 0xEC9CE0
    // private IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private IVRPlatformHelper _vrPlatformHelper
    GlobalNamespace::IVRPlatformHelper*& dyn__vrPlatformHelper();
    // public System.Void Init(System.Func`2<UnityEngine.GameObject,UnityEngine.GameObject> instantiateMixedRealityBackgroundCameraGameObject, System.Func`2<UnityEngine.GameObject,UnityEngine.GameObject> instantiateMixedRealityForegroundCameraGameObject)
    // Offset: 0x138785C
    void Init(System::Func_2<UnityEngine::GameObject*, UnityEngine::GameObject*>* instantiateMixedRealityBackgroundCameraGameObject, System::Func_2<UnityEngine::GameObject*, UnityEngine::GameObject*>* instantiateMixedRealityForegroundCameraGameObject);
    // public System.Void .ctor()
    // Offset: 0x1387B40
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusMRCManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusMRCManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusMRCManager*, creationType>()));
    }
  }; // OculusMRCManager
  #pragma pack(pop)
  static check_size<sizeof(OculusMRCManager), 24 + sizeof(GlobalNamespace::IVRPlatformHelper*)> __GlobalNamespace_OculusMRCManagerSizeCheck;
  static_assert(sizeof(OculusMRCManager) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusMRCManager*, "", "OculusMRCManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusMRCManager::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusMRCManager::*)(System::Func_2<UnityEngine::GameObject*, UnityEngine::GameObject*>*, System::Func_2<UnityEngine::GameObject*, UnityEngine::GameObject*>*)>(&GlobalNamespace::OculusMRCManager::Init)> {
  static const MethodInfo* get() {
    static auto* instantiateMixedRealityBackgroundCameraGameObject = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), ::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    static auto* instantiateMixedRealityForegroundCameraGameObject = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), ::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusMRCManager*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instantiateMixedRealityBackgroundCameraGameObject, instantiateMixedRealityForegroundCameraGameObject});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusMRCManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
