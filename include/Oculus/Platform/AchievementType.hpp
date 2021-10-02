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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.AchievementType
  // [TokenAttribute] Offset: FFFFFFFF
  struct AchievementType/*, public System::Enum*/ {
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
    // Creating value type constructor for type: AchievementType
    constexpr AchievementType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xEE831C
    // static field const value: static public Oculus.Platform.AchievementType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.AchievementType Unknown
    static Oculus::Platform::AchievementType _get_Unknown();
    // Set static field: static public Oculus.Platform.AchievementType Unknown
    static void _set_Unknown(Oculus::Platform::AchievementType value);
    // [DescriptionAttribute] Offset: 0xEE8354
    // static field const value: static public Oculus.Platform.AchievementType Simple
    static constexpr const int Simple = 1;
    // Get static field: static public Oculus.Platform.AchievementType Simple
    static Oculus::Platform::AchievementType _get_Simple();
    // Set static field: static public Oculus.Platform.AchievementType Simple
    static void _set_Simple(Oculus::Platform::AchievementType value);
    // [DescriptionAttribute] Offset: 0xEE838C
    // static field const value: static public Oculus.Platform.AchievementType Bitfield
    static constexpr const int Bitfield = 2;
    // Get static field: static public Oculus.Platform.AchievementType Bitfield
    static Oculus::Platform::AchievementType _get_Bitfield();
    // Set static field: static public Oculus.Platform.AchievementType Bitfield
    static void _set_Bitfield(Oculus::Platform::AchievementType value);
    // [DescriptionAttribute] Offset: 0xEE83C4
    // static field const value: static public Oculus.Platform.AchievementType Count
    static constexpr const int Count = 3;
    // Get static field: static public Oculus.Platform.AchievementType Count
    static Oculus::Platform::AchievementType _get_Count();
    // Set static field: static public Oculus.Platform.AchievementType Count
    static void _set_Count(Oculus::Platform::AchievementType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.AchievementType
  #pragma pack(pop)
  static check_size<sizeof(AchievementType), 0 + sizeof(int)> __Oculus_Platform_AchievementTypeSizeCheck;
  static_assert(sizeof(AchievementType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::AchievementType, "Oculus.Platform", "AchievementType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
