// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: System.SByteEnum
  // [TokenAttribute] Offset: FFFFFFFF
  struct SByteEnum/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.SByte value__
    // Size: 0x1
    // Offset: 0x0
    int8_t value;
    // Field size check
    static_assert(sizeof(int8_t) == 0x1);
    public:
    // Creating value type constructor for type: SByteEnum
    constexpr SByteEnum(int8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int8_t
    constexpr operator int8_t() const noexcept {
      return value;
    }
    // Get instance field reference: public System.SByte value__
    int8_t& dyn_value__();
  }; // System.SByteEnum
  #pragma pack(pop)
  static check_size<sizeof(SByteEnum), 0 + sizeof(int8_t)> __System_SByteEnumSizeCheck;
  static_assert(sizeof(SByteEnum) == 0x1);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::SByteEnum, "System", "SByteEnum");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
