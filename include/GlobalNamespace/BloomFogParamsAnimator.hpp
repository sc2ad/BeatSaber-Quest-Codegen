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
  // Forward declaring type: BloomFogSO
  class BloomFogSO;
  // Forward declaring type: BloomFogEnvironmentParams
  class BloomFogEnvironmentParams;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomFogParamsAnimator
  class BloomFogParamsAnimator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomFogParamsAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogParamsAnimator*, "", "BloomFogParamsAnimator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BloomFogParamsAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomFogParamsAnimator : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::BloomFogParamsAnimator::$AnimationCoroutine$d__2
    class $AnimationCoroutine$d__2;
    public:
    // [InjectAttribute] Offset: 0x10FA3C0
    // private readonly BloomFogSO _bloomFog
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BloomFogSO* bloomFog;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomFogSO*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly BloomFogSO _bloomFog
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomFogSO*& dyn__bloomFog();
    // public System.Void .ctor()
    // Offset: 0x1CC7FB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomFogParamsAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomFogParamsAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomFogParamsAnimator*, creationType>()));
    }
    // public System.Void AnimateBloomFogParamsChange(BloomFogEnvironmentParams envFogParams, System.Single duration)
    // Offset: 0x1CC7CAC
    void AnimateBloomFogParamsChange(::GlobalNamespace::BloomFogEnvironmentParams* envFogParams, float duration);
    // private System.Collections.IEnumerator AnimationCoroutine(BloomFogEnvironmentParams envFogParams, System.Single duration)
    // Offset: 0x1CC7DD4
    ::System::Collections::IEnumerator* AnimationCoroutine(::GlobalNamespace::BloomFogEnvironmentParams* envFogParams, float duration);
    // public System.Void SetBloomFogParamsChange(BloomFogEnvironmentParams envFogParams, System.Single transition)
    // Offset: 0x1CC7E8C
    void SetBloomFogParamsChange(::GlobalNamespace::BloomFogEnvironmentParams* envFogParams, float transition);
    // public BloomFogEnvironmentParams GetDefaultBloomFogParams()
    // Offset: 0x1CC7ED8
    ::GlobalNamespace::BloomFogEnvironmentParams* GetDefaultBloomFogParams();
    // public System.Void SetDefaultBloomFogParams(BloomFogEnvironmentParams newDefaultBloomFogParams)
    // Offset: 0x1CC7EF4
    void SetDefaultBloomFogParams(::GlobalNamespace::BloomFogEnvironmentParams* newDefaultBloomFogParams);
  }; // BloomFogParamsAnimator
  #pragma pack(pop)
  static check_size<sizeof(BloomFogParamsAnimator), 24 + sizeof(::GlobalNamespace::BloomFogSO*)> __GlobalNamespace_BloomFogParamsAnimatorSizeCheck;
  static_assert(sizeof(BloomFogParamsAnimator) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomFogParamsAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomFogParamsAnimator::AnimateBloomFogParamsChange
// Il2CppName: AnimateBloomFogParamsChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogParamsAnimator::*)(::GlobalNamespace::BloomFogEnvironmentParams*, float)>(&GlobalNamespace::BloomFogParamsAnimator::AnimateBloomFogParamsChange)> {
  static const MethodInfo* get() {
    static auto* envFogParams = &::il2cpp_utils::GetClassFromName("", "BloomFogEnvironmentParams")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogParamsAnimator*), "AnimateBloomFogParamsChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{envFogParams, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogParamsAnimator::AnimationCoroutine
// Il2CppName: AnimationCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::BloomFogParamsAnimator::*)(::GlobalNamespace::BloomFogEnvironmentParams*, float)>(&GlobalNamespace::BloomFogParamsAnimator::AnimationCoroutine)> {
  static const MethodInfo* get() {
    static auto* envFogParams = &::il2cpp_utils::GetClassFromName("", "BloomFogEnvironmentParams")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogParamsAnimator*), "AnimationCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{envFogParams, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogParamsAnimator::SetBloomFogParamsChange
// Il2CppName: SetBloomFogParamsChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogParamsAnimator::*)(::GlobalNamespace::BloomFogEnvironmentParams*, float)>(&GlobalNamespace::BloomFogParamsAnimator::SetBloomFogParamsChange)> {
  static const MethodInfo* get() {
    static auto* envFogParams = &::il2cpp_utils::GetClassFromName("", "BloomFogEnvironmentParams")->byval_arg;
    static auto* transition = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogParamsAnimator*), "SetBloomFogParamsChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{envFogParams, transition});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogParamsAnimator::GetDefaultBloomFogParams
// Il2CppName: GetDefaultBloomFogParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BloomFogEnvironmentParams* (GlobalNamespace::BloomFogParamsAnimator::*)()>(&GlobalNamespace::BloomFogParamsAnimator::GetDefaultBloomFogParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogParamsAnimator*), "GetDefaultBloomFogParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomFogParamsAnimator::SetDefaultBloomFogParams
// Il2CppName: SetDefaultBloomFogParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomFogParamsAnimator::*)(::GlobalNamespace::BloomFogEnvironmentParams*)>(&GlobalNamespace::BloomFogParamsAnimator::SetDefaultBloomFogParams)> {
  static const MethodInfo* get() {
    static auto* newDefaultBloomFogParams = &::il2cpp_utils::GetClassFromName("", "BloomFogEnvironmentParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomFogParamsAnimator*), "SetDefaultBloomFogParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newDefaultBloomFogParams});
  }
};
