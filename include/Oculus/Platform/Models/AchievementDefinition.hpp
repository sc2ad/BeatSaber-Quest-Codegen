// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.AchievementType
#include "Oculus/Platform/AchievementType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AchievementDefinition
  class AchievementDefinition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::AchievementDefinition);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AchievementDefinition*, "Oculus.Platform.Models", "AchievementDefinition");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.AchievementDefinition
  // [TokenAttribute] Offset: FFFFFFFF
  class AchievementDefinition : public ::Il2CppObject {
    public:
    public:
    // public readonly Oculus.Platform.AchievementType Type
    // Size: 0x4
    // Offset: 0x10
    ::Oculus::Platform::AchievementType Type;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::AchievementType) == 0x4);
    // Padding between fields: Type and: Name
    char __padding0[0x4] = {};
    // public readonly System.String Name
    // Size: 0x8
    // Offset: 0x18
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.UInt32 BitfieldLength
    // Size: 0x4
    // Offset: 0x20
    uint BitfieldLength;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: BitfieldLength and: Target
    char __padding2[0x4] = {};
    // public readonly System.UInt64 Target
    // Size: 0x8
    // Offset: 0x28
    uint64_t Target;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Get instance field reference: public readonly Oculus.Platform.AchievementType Type
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::AchievementType& dyn_Type();
    // Get instance field reference: public readonly System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // Get instance field reference: public readonly System.UInt32 BitfieldLength
    [[deprecated("Use field access instead!")]] uint& dyn_BitfieldLength();
    // Get instance field reference: public readonly System.UInt64 Target
    [[deprecated("Use field access instead!")]] uint64_t& dyn_Target();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1A15F94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementDefinition* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::AchievementDefinition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementDefinition*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.AchievementDefinition
  #pragma pack(pop)
  static check_size<sizeof(AchievementDefinition), 40 + sizeof(uint64_t)> __Oculus_Platform_Models_AchievementDefinitionSizeCheck;
  static_assert(sizeof(AchievementDefinition) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::AchievementDefinition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
