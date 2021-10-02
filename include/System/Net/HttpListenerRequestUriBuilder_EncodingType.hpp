// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.HttpListenerRequestUriBuilder
#include "System/Net/HttpListenerRequestUriBuilder.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpListenerRequestUriBuilder/System.Net.EncodingType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HttpListenerRequestUriBuilder::EncodingType/*, public System::Enum*/ {
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
    // Creating value type constructor for type: EncodingType
    constexpr EncodingType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.HttpListenerRequestUriBuilder/System.Net.EncodingType Primary
    static constexpr const int Primary = 0;
    // Get static field: static public System.Net.HttpListenerRequestUriBuilder/System.Net.EncodingType Primary
    static System::Net::HttpListenerRequestUriBuilder::EncodingType _get_Primary();
    // Set static field: static public System.Net.HttpListenerRequestUriBuilder/System.Net.EncodingType Primary
    static void _set_Primary(System::Net::HttpListenerRequestUriBuilder::EncodingType value);
    // static field const value: static public System.Net.HttpListenerRequestUriBuilder/System.Net.EncodingType Secondary
    static constexpr const int Secondary = 1;
    // Get static field: static public System.Net.HttpListenerRequestUriBuilder/System.Net.EncodingType Secondary
    static System::Net::HttpListenerRequestUriBuilder::EncodingType _get_Secondary();
    // Set static field: static public System.Net.HttpListenerRequestUriBuilder/System.Net.EncodingType Secondary
    static void _set_Secondary(System::Net::HttpListenerRequestUriBuilder::EncodingType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Net.HttpListenerRequestUriBuilder/System.Net.EncodingType
  #pragma pack(pop)
  static check_size<sizeof(HttpListenerRequestUriBuilder::EncodingType), 0 + sizeof(int)> __System_Net_HttpListenerRequestUriBuilder_EncodingTypeSizeCheck;
  static_assert(sizeof(HttpListenerRequestUriBuilder::EncodingType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerRequestUriBuilder::EncodingType, "System.Net", "HttpListenerRequestUriBuilder/EncodingType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
