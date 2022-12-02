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
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_HoudiniAsset
  class HEU_HoudiniAsset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HEU_ScriptParameterExample
  class HEU_ScriptParameterExample;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HEU_ScriptParameterExample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HEU_ScriptParameterExample*, "", "HEU_ScriptParameterExample");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HEU_ScriptParameterExample
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_ScriptParameterExample : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject _evergreenGameObject
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* evergreenGameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private HoudiniEngineUnity.HEU_HoudiniAsset _evergreenAsset
    // Size: 0x8
    // Offset: 0x20
    ::HoudiniEngineUnity::HEU_HoudiniAsset* evergreenAsset;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_HoudiniAsset*) == 0x8);
    // public System.Single _updateRate
    // Size: 0x4
    // Offset: 0x28
    float updateRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _scale
    // Size: 0x4
    // Offset: 0x2C
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject _evergreenGameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__evergreenGameObject();
    // Get instance field reference: private HoudiniEngineUnity.HEU_HoudiniAsset _evergreenAsset
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_HoudiniAsset*& dyn__evergreenAsset();
    // Get instance field reference: public System.Single _updateRate
    [[deprecated("Use field access instead!")]] float& dyn__updateRate();
    // Get instance field reference: public System.Single _scale
    [[deprecated("Use field access instead!")]] float& dyn__scale();
    // public System.Void .ctor()
    // Offset: 0x171A284
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_ScriptParameterExample* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HEU_ScriptParameterExample::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_ScriptParameterExample*, creationType>()));
    }
    // public System.Void Start()
    // Offset: 0x1719F34
    void Start();
    // private System.Void UpdateGravity()
    // Offset: 0x171A154
    void UpdateGravity();
  }; // HEU_ScriptParameterExample
  #pragma pack(pop)
  static check_size<sizeof(HEU_ScriptParameterExample), 44 + sizeof(float)> __GlobalNamespace_HEU_ScriptParameterExampleSizeCheck;
  static_assert(sizeof(HEU_ScriptParameterExample) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HEU_ScriptParameterExample::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HEU_ScriptParameterExample::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HEU_ScriptParameterExample::*)()>(&GlobalNamespace::HEU_ScriptParameterExample::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_ScriptParameterExample*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HEU_ScriptParameterExample::UpdateGravity
// Il2CppName: UpdateGravity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HEU_ScriptParameterExample::*)()>(&GlobalNamespace::HEU_ScriptParameterExample::UpdateGravity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HEU_ScriptParameterExample*), "UpdateGravity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
