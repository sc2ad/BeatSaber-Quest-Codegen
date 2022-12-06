// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: SceneInstance
  struct SceneInstance;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, "UnityEngine.ResourceManagement.ResourceProviders", "SceneInstance");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
  // [TokenAttribute] Offset: FFFFFFFF
  struct SceneInstance/*, public ::System::ValueType*/ {
    public:
    public:
    // private UnityEngine.SceneManagement.Scene m_Scene
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngine::SceneManagement::Scene m_Scene;
    // Field size check
    static_assert(sizeof(::UnityEngine::SceneManagement::Scene) == 0x4);
    // Padding between fields: m_Scene and: m_Operation
    char __padding0[0x4] = {};
    // UnityEngine.AsyncOperation m_Operation
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::AsyncOperation* m_Operation;
    // Field size check
    static_assert(sizeof(::UnityEngine::AsyncOperation*) == 0x8);
    public:
    // Creating value type constructor for type: SceneInstance
    constexpr SceneInstance(::UnityEngine::SceneManagement::Scene m_Scene_ = {}, ::UnityEngine::AsyncOperation* m_Operation_ = {}) noexcept : m_Scene{m_Scene_}, m_Operation{m_Operation_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.SceneManagement.Scene m_Scene
    [[deprecated("Use field access instead!")]] ::UnityEngine::SceneManagement::Scene& dyn_m_Scene();
    // Get instance field reference: UnityEngine.AsyncOperation m_Operation
    [[deprecated("Use field access instead!")]] ::UnityEngine::AsyncOperation*& dyn_m_Operation();
    // public UnityEngine.SceneManagement.Scene get_Scene()
    // Offset: 0x1F73FF8
    ::UnityEngine::SceneManagement::Scene get_Scene();
    // System.Void set_Scene(UnityEngine.SceneManagement.Scene value)
    // Offset: 0x1F74000
    void set_Scene(::UnityEngine::SceneManagement::Scene value);
    // public System.Void Activate()
    // Offset: 0x1F74008
    void Activate();
    // public UnityEngine.AsyncOperation ActivateAsync()
    // Offset: 0x1F74028
    ::UnityEngine::AsyncOperation* ActivateAsync();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1F74060
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1F7408C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
  #pragma pack(pop)
  static check_size<sizeof(SceneInstance), 8 + sizeof(::UnityEngine::AsyncOperation*)> __UnityEngine_ResourceManagement_ResourceProviders_SceneInstanceSizeCheck;
  static_assert(sizeof(SceneInstance) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::get_Scene
// Il2CppName: get_Scene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SceneManagement::Scene (UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::get_Scene)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance), "get_Scene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::set_Scene
// Il2CppName: set_Scene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)(::UnityEngine::SceneManagement::Scene)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::set_Scene)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "Scene")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance), "set_Scene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::Activate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::ActivateAsync
// Il2CppName: ActivateAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::ActivateAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance), "ActivateAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::*)(::Il2CppObject*)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneInstance::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
