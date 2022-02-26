// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ScopeTypes
  struct ScopeTypes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScopeTypes, "Zenject", "ScopeTypes");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ScopeTypes
  // [TokenAttribute] Offset: FFFFFFFF
  struct ScopeTypes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ScopeTypes
    constexpr ScopeTypes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Zenject.ScopeTypes Unset
    static constexpr const int Unset = 0;
    // Get static field: static public Zenject.ScopeTypes Unset
    static ::Zenject::ScopeTypes _get_Unset();
    // Set static field: static public Zenject.ScopeTypes Unset
    static void _set_Unset(::Zenject::ScopeTypes value);
    // static field const value: static public Zenject.ScopeTypes Transient
    static constexpr const int Transient = 1;
    // Get static field: static public Zenject.ScopeTypes Transient
    static ::Zenject::ScopeTypes _get_Transient();
    // Set static field: static public Zenject.ScopeTypes Transient
    static void _set_Transient(::Zenject::ScopeTypes value);
    // static field const value: static public Zenject.ScopeTypes Singleton
    static constexpr const int Singleton = 2;
    // Get static field: static public Zenject.ScopeTypes Singleton
    static ::Zenject::ScopeTypes _get_Singleton();
    // Set static field: static public Zenject.ScopeTypes Singleton
    static void _set_Singleton(::Zenject::ScopeTypes value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Zenject.ScopeTypes
  #pragma pack(pop)
  static check_size<sizeof(ScopeTypes), 0 + sizeof(int)> __Zenject_ScopeTypesSizeCheck;
  static_assert(sizeof(ScopeTypes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
