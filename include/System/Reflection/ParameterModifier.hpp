// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterModifier
  struct ParameterModifier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ParameterModifier, "System.Reflection", "ParameterModifier");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.ParameterModifier
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: 1188618
  // [ComVisibleAttribute] Offset: 1188618
  struct ParameterModifier/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Boolean[] _byRef
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<bool> byRef;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    public:
    // Creating value type constructor for type: ParameterModifier
    constexpr ParameterModifier(::ArrayW<bool> byRef_ = ::ArrayW<bool>(static_cast<void*>(nullptr))) noexcept : byRef{byRef_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<bool>
    constexpr operator ::ArrayW<bool>() const noexcept {
      return byRef;
    }
    // Get instance field reference: private System.Boolean[] _byRef
    ::ArrayW<bool>& dyn__byRef();
  }; // System.Reflection.ParameterModifier
  #pragma pack(pop)
  static check_size<sizeof(ParameterModifier), 0 + sizeof(::ArrayW<bool>)> __System_Reflection_ParameterModifierSizeCheck;
  static_assert(sizeof(ParameterModifier) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
