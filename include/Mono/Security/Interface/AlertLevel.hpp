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
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.AlertLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct AlertLevel/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: AlertLevel
    constexpr AlertLevel(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Security.Interface.AlertLevel Warning
    static constexpr const uint8_t Warning = 1u;
    // Get static field: static public Mono.Security.Interface.AlertLevel Warning
    static Mono::Security::Interface::AlertLevel _get_Warning();
    // Set static field: static public Mono.Security.Interface.AlertLevel Warning
    static void _set_Warning(Mono::Security::Interface::AlertLevel value);
    // static field const value: static public Mono.Security.Interface.AlertLevel Fatal
    static constexpr const uint8_t Fatal = 2u;
    // Get static field: static public Mono.Security.Interface.AlertLevel Fatal
    static Mono::Security::Interface::AlertLevel _get_Fatal();
    // Set static field: static public Mono.Security.Interface.AlertLevel Fatal
    static void _set_Fatal(Mono::Security::Interface::AlertLevel value);
    // Get instance field reference: public System.Byte value__
    uint8_t& dyn_value__();
  }; // Mono.Security.Interface.AlertLevel
  #pragma pack(pop)
  static check_size<sizeof(AlertLevel), 0 + sizeof(uint8_t)> __Mono_Security_Interface_AlertLevelSizeCheck;
  static_assert(sizeof(AlertLevel) == 0x1);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::AlertLevel, "Mono.Security.Interface", "AlertLevel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
