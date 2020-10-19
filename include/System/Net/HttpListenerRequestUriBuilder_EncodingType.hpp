// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.HttpListenerRequestUriBuilder
#include "System/Net/HttpListenerRequestUriBuilder.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.HttpListenerRequestUriBuilder/EncodingType
  struct HttpListenerRequestUriBuilder::EncodingType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: EncodingType
    constexpr EncodingType(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.HttpListenerRequestUriBuilder/EncodingType Primary
    static constexpr const int Primary = 0;
    // Get static field: static public System.Net.HttpListenerRequestUriBuilder/EncodingType Primary
    static System::Net::HttpListenerRequestUriBuilder::EncodingType _get_Primary();
    // Set static field: static public System.Net.HttpListenerRequestUriBuilder/EncodingType Primary
    static void _set_Primary(System::Net::HttpListenerRequestUriBuilder::EncodingType value);
    // static field const value: static public System.Net.HttpListenerRequestUriBuilder/EncodingType Secondary
    static constexpr const int Secondary = 1;
    // Get static field: static public System.Net.HttpListenerRequestUriBuilder/EncodingType Secondary
    static System::Net::HttpListenerRequestUriBuilder::EncodingType _get_Secondary();
    // Set static field: static public System.Net.HttpListenerRequestUriBuilder/EncodingType Secondary
    static void _set_Secondary(System::Net::HttpListenerRequestUriBuilder::EncodingType value);
  }; // System.Net.HttpListenerRequestUriBuilder/EncodingType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerRequestUriBuilder::EncodingType, "System.Net", "HttpListenerRequestUriBuilder/EncodingType");
#pragma pack(pop)