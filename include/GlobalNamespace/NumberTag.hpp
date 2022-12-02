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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NumberTag
  class NumberTag;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NumberTag);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NumberTag*, "", "NumberTag");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: NumberTag
  // [TokenAttribute] Offset: FFFFFFFF
  class NumberTag : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Int32 number
    // Size: 0x4
    // Offset: 0x18
    int number;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Int32 number
    [[deprecated("Use field access instead!")]] int& dyn_number();
    // public System.Void .ctor()
    // Offset: 0x1603BF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NumberTag* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NumberTag::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NumberTag*, creationType>()));
    }
  }; // NumberTag
  #pragma pack(pop)
  static check_size<sizeof(NumberTag), 24 + sizeof(int)> __GlobalNamespace_NumberTagSizeCheck;
  static_assert(sizeof(NumberTag) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NumberTag::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
