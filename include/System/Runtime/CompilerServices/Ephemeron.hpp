// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.CompilerServices.Ephemeron
  // [TokenAttribute] Offset: FFFFFFFF
  struct Ephemeron/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // System.Object key
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* key;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Object value
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating value type constructor for type: Ephemeron
    constexpr Ephemeron(::Il2CppObject* key_ = {}, ::Il2CppObject* value_ = {}) noexcept : key{key_}, value{value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: System.Object key
    ::Il2CppObject*& dyn_key();
    // Get instance field reference: System.Object value
    ::Il2CppObject*& dyn_value();
  }; // System.Runtime.CompilerServices.Ephemeron
  #pragma pack(pop)
  static check_size<sizeof(Ephemeron), 8 + sizeof(::Il2CppObject*)> __System_Runtime_CompilerServices_EphemeronSizeCheck;
  static_assert(sizeof(Ephemeron) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::Ephemeron, "System.Runtime.CompilerServices", "Ephemeron");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
