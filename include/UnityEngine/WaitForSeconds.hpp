// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.YieldInstruction
#include "UnityEngine/YieldInstruction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitForSeconds
  class WaitForSeconds;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::WaitForSeconds);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WaitForSeconds*, "UnityEngine", "WaitForSeconds");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.WaitForSeconds
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 106E1E0
  class WaitForSeconds : public ::UnityEngine::YieldInstruction {
    public:
    public:
    // System.Single m_Seconds
    // Size: 0x4
    // Offset: 0x10
    float m_Seconds;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return m_Seconds;
    }
    // Get instance field reference: System.Single m_Seconds
    [[deprecated("Use field access instead!")]] float& dyn_m_Seconds();
    // public System.Void .ctor(System.Single seconds)
    // Offset: 0x28F05F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaitForSeconds* New_ctor(float seconds) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::WaitForSeconds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaitForSeconds*, creationType>(seconds)));
    }
  }; // UnityEngine.WaitForSeconds
  #pragma pack(pop)
  static check_size<sizeof(WaitForSeconds), 16 + sizeof(float)> __UnityEngine_WaitForSecondsSizeCheck;
  static_assert(sizeof(WaitForSeconds) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::WaitForSeconds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
