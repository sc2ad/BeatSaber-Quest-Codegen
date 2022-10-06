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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RandomAnimatorStartTime
  class RandomAnimatorStartTime;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RandomAnimatorStartTime);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomAnimatorStartTime*, "", "RandomAnimatorStartTime");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RandomAnimatorStartTime
  // [TokenAttribute] Offset: FFFFFFFF
  class RandomAnimatorStartTime : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // private System.String _stateName
    // Size: 0x8
    // Offset: 0x20
    ::StringW stateName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Animator _animator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn__animator();
    // Get instance field reference: private System.String _stateName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__stateName();
    // public System.Void .ctor()
    // Offset: 0x2A809F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RandomAnimatorStartTime* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RandomAnimatorStartTime::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RandomAnimatorStartTime*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x2A809B0
    void Start();
  }; // RandomAnimatorStartTime
  #pragma pack(pop)
  static check_size<sizeof(RandomAnimatorStartTime), 32 + sizeof(::StringW)> __GlobalNamespace_RandomAnimatorStartTimeSizeCheck;
  static_assert(sizeof(RandomAnimatorStartTime) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RandomAnimatorStartTime::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RandomAnimatorStartTime::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RandomAnimatorStartTime::*)()>(&GlobalNamespace::RandomAnimatorStartTime::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RandomAnimatorStartTime*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
