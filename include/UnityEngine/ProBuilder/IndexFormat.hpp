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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.IndexFormat
  // [TokenAttribute] Offset: FFFFFFFF
  struct IndexFormat/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: IndexFormat
    constexpr IndexFormat(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.IndexFormat Local
    static constexpr const int Local = 0;
    // Get static field: static public UnityEngine.ProBuilder.IndexFormat Local
    static UnityEngine::ProBuilder::IndexFormat _get_Local();
    // Set static field: static public UnityEngine.ProBuilder.IndexFormat Local
    static void _set_Local(UnityEngine::ProBuilder::IndexFormat value);
    // static field const value: static public UnityEngine.ProBuilder.IndexFormat Common
    static constexpr const int Common = 1;
    // Get static field: static public UnityEngine.ProBuilder.IndexFormat Common
    static UnityEngine::ProBuilder::IndexFormat _get_Common();
    // Set static field: static public UnityEngine.ProBuilder.IndexFormat Common
    static void _set_Common(UnityEngine::ProBuilder::IndexFormat value);
    // static field const value: static public UnityEngine.ProBuilder.IndexFormat Both
    static constexpr const int Both = 2;
    // Get static field: static public UnityEngine.ProBuilder.IndexFormat Both
    static UnityEngine::ProBuilder::IndexFormat _get_Both();
    // Set static field: static public UnityEngine.ProBuilder.IndexFormat Both
    static void _set_Both(UnityEngine::ProBuilder::IndexFormat value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ProBuilder.IndexFormat
  #pragma pack(pop)
  static check_size<sizeof(IndexFormat), 0 + sizeof(int)> __UnityEngine_ProBuilder_IndexFormatSizeCheck;
  static_assert(sizeof(IndexFormat) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::IndexFormat, "UnityEngine.ProBuilder", "IndexFormat");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
