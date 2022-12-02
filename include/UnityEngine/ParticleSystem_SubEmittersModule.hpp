// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem::SubEmittersModule, "UnityEngine", "ParticleSystem/SubEmittersModule");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ParticleSystem/UnityEngine.SubEmittersModule
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystem::SubEmittersModule/*, public ::System::ValueType*/ {
    public:
    public:
    // UnityEngine.ParticleSystem m_ParticleSystem
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::ParticleSystem* m_ParticleSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    public:
    // Creating value type constructor for type: SubEmittersModule
    constexpr SubEmittersModule(::UnityEngine::ParticleSystem* m_ParticleSystem_ = {}) noexcept : m_ParticleSystem{m_ParticleSystem_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::ParticleSystem*
    constexpr operator ::UnityEngine::ParticleSystem*() const noexcept {
      return m_ParticleSystem;
    }
    // Get instance field reference: UnityEngine.ParticleSystem m_ParticleSystem
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn_m_ParticleSystem();
    // public System.Int32 get_subEmittersCount()
    // Offset: 0x2B75F1C
    int get_subEmittersCount();
    // System.Void .ctor(UnityEngine.ParticleSystem particleSystem)
    // Offset: 0x2B75538
    // ABORTED: conflicts with another method.  SubEmittersModule(::UnityEngine::ParticleSystem* particleSystem);
    // public UnityEngine.ParticleSystem GetSubEmitterSystem(System.Int32 index)
    // Offset: 0x2B75F9C
    ::UnityEngine::ParticleSystem* GetSubEmitterSystem(int index);
    // static private System.Int32 get_subEmittersCount_Injected(ref UnityEngine.ParticleSystem/UnityEngine.SubEmittersModule _unity_self)
    // Offset: 0x2B75F5C
    static int get_subEmittersCount_Injected(ByRef<::UnityEngine::ParticleSystem::SubEmittersModule> _unity_self);
    // static private UnityEngine.ParticleSystem GetSubEmitterSystem_Injected(ref UnityEngine.ParticleSystem/UnityEngine.SubEmittersModule _unity_self, System.Int32 index)
    // Offset: 0x2B75FEC
    static ::UnityEngine::ParticleSystem* GetSubEmitterSystem_Injected(ByRef<::UnityEngine::ParticleSystem::SubEmittersModule> _unity_self, int index);
  }; // UnityEngine.ParticleSystem/UnityEngine.SubEmittersModule
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystem::SubEmittersModule), 0 + sizeof(::UnityEngine::ParticleSystem*)> __UnityEngine_ParticleSystem_SubEmittersModuleSizeCheck;
  static_assert(sizeof(ParticleSystem::SubEmittersModule) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::SubEmittersModule::get_subEmittersCount
// Il2CppName: get_subEmittersCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ParticleSystem::SubEmittersModule::*)()>(&UnityEngine::ParticleSystem::SubEmittersModule::get_subEmittersCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::SubEmittersModule), "get_subEmittersCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::SubEmittersModule::SubEmittersModule
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::SubEmittersModule::GetSubEmitterSystem
// Il2CppName: GetSubEmitterSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystem* (UnityEngine::ParticleSystem::SubEmittersModule::*)(int)>(&UnityEngine::ParticleSystem::SubEmittersModule::GetSubEmitterSystem)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::SubEmittersModule), "GetSubEmitterSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::SubEmittersModule::get_subEmittersCount_Injected
// Il2CppName: get_subEmittersCount_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<::UnityEngine::ParticleSystem::SubEmittersModule>)>(&UnityEngine::ParticleSystem::SubEmittersModule::get_subEmittersCount_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/SubEmittersModule")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::SubEmittersModule), "get_subEmittersCount_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::SubEmittersModule::GetSubEmitterSystem_Injected
// Il2CppName: GetSubEmitterSystem_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystem* (*)(ByRef<::UnityEngine::ParticleSystem::SubEmittersModule>, int)>(&UnityEngine::ParticleSystem::SubEmittersModule::GetSubEmitterSystem_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/SubEmittersModule")->this_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::SubEmittersModule), "GetSubEmitterSystem_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, index});
  }
};
