// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: StaticJumpOffsetYProvider
#include "GlobalNamespace/StaticJumpOffsetYProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StaticJumpOffsetYProvider::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticJumpOffsetYProvider::InitData*, "", "StaticJumpOffsetYProvider/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: StaticJumpOffsetYProvider/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class StaticJumpOffsetYProvider::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Single jumpyYOffset
    // Size: 0x4
    // Offset: 0x10
    float jumpyYOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return jumpyYOffset;
    }
    // Get instance field reference: public readonly System.Single jumpyYOffset
    [[deprecated("Use field access instead!")]] float& dyn_jumpyYOffset();
    // public System.Void .ctor(System.Single jumpyYOffset)
    // Offset: 0x13B0060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticJumpOffsetYProvider::InitData* New_ctor(float jumpyYOffset) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StaticJumpOffsetYProvider::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticJumpOffsetYProvider::InitData*, creationType>(jumpyYOffset)));
    }
  }; // StaticJumpOffsetYProvider/InitData
  #pragma pack(pop)
  static check_size<sizeof(StaticJumpOffsetYProvider::InitData), 16 + sizeof(float)> __GlobalNamespace_StaticJumpOffsetYProvider_InitDataSizeCheck;
  static_assert(sizeof(StaticJumpOffsetYProvider::InitData) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StaticJumpOffsetYProvider::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
