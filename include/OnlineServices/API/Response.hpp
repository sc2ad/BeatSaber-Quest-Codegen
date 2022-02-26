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
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Forward declaring type: Response
  struct Response;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OnlineServices::API::Response, "OnlineServices.API", "Response");
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.API.Response
  // [TokenAttribute] Offset: FFFFFFFF
  struct Response/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Response
    constexpr Response(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OnlineServices.API.Response Success
    static constexpr const int Success = 0;
    // Get static field: static public OnlineServices.API.Response Success
    static ::OnlineServices::API::Response _get_Success();
    // Set static field: static public OnlineServices.API.Response Success
    static void _set_Success(::OnlineServices::API::Response value);
    // static field const value: static public OnlineServices.API.Response UnknownError
    static constexpr const int UnknownError = 1;
    // Get static field: static public OnlineServices.API.Response UnknownError
    static ::OnlineServices::API::Response _get_UnknownError();
    // Set static field: static public OnlineServices.API.Response UnknownError
    static void _set_UnknownError(::OnlineServices::API::Response value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OnlineServices.API.Response
  #pragma pack(pop)
  static check_size<sizeof(Response), 0 + sizeof(int)> __OnlineServices_API_ResponseSizeCheck;
  static_assert(sizeof(Response) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
