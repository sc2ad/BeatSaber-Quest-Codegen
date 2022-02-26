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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: ServiceProvider
  struct ServiceProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ServiceProvider, "Oculus.Platform", "ServiceProvider");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.ServiceProvider
  // [TokenAttribute] Offset: FFFFFFFF
  struct ServiceProvider/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ServiceProvider
    constexpr ServiceProvider(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0x1231B70
    // static field const value: static public Oculus.Platform.ServiceProvider Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.ServiceProvider Unknown
    static ::Oculus::Platform::ServiceProvider _get_Unknown();
    // Set static field: static public Oculus.Platform.ServiceProvider Unknown
    static void _set_Unknown(::Oculus::Platform::ServiceProvider value);
    // [DescriptionAttribute] Offset: 0x1231BA8
    // static field const value: static public Oculus.Platform.ServiceProvider Dropbox
    static constexpr const int Dropbox = 1;
    // Get static field: static public Oculus.Platform.ServiceProvider Dropbox
    static ::Oculus::Platform::ServiceProvider _get_Dropbox();
    // Set static field: static public Oculus.Platform.ServiceProvider Dropbox
    static void _set_Dropbox(::Oculus::Platform::ServiceProvider value);
    // [DescriptionAttribute] Offset: 0x1231BE0
    // static field const value: static public Oculus.Platform.ServiceProvider Facebook
    static constexpr const int Facebook = 2;
    // Get static field: static public Oculus.Platform.ServiceProvider Facebook
    static ::Oculus::Platform::ServiceProvider _get_Facebook();
    // Set static field: static public Oculus.Platform.ServiceProvider Facebook
    static void _set_Facebook(::Oculus::Platform::ServiceProvider value);
    // [DescriptionAttribute] Offset: 0x1231C18
    // static field const value: static public Oculus.Platform.ServiceProvider Google
    static constexpr const int Google = 3;
    // Get static field: static public Oculus.Platform.ServiceProvider Google
    static ::Oculus::Platform::ServiceProvider _get_Google();
    // Set static field: static public Oculus.Platform.ServiceProvider Google
    static void _set_Google(::Oculus::Platform::ServiceProvider value);
    // [DescriptionAttribute] Offset: 0x1231C50
    // static field const value: static public Oculus.Platform.ServiceProvider Instagram
    static constexpr const int Instagram = 4;
    // Get static field: static public Oculus.Platform.ServiceProvider Instagram
    static ::Oculus::Platform::ServiceProvider _get_Instagram();
    // Set static field: static public Oculus.Platform.ServiceProvider Instagram
    static void _set_Instagram(::Oculus::Platform::ServiceProvider value);
    // [DescriptionAttribute] Offset: 0x1231C88
    // static field const value: static public Oculus.Platform.ServiceProvider RemoteMedia
    static constexpr const int RemoteMedia = 5;
    // Get static field: static public Oculus.Platform.ServiceProvider RemoteMedia
    static ::Oculus::Platform::ServiceProvider _get_RemoteMedia();
    // Set static field: static public Oculus.Platform.ServiceProvider RemoteMedia
    static void _set_RemoteMedia(::Oculus::Platform::ServiceProvider value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.ServiceProvider
  #pragma pack(pop)
  static check_size<sizeof(ServiceProvider), 0 + sizeof(int)> __Oculus_Platform_ServiceProviderSizeCheck;
  static_assert(sizeof(ServiceProvider) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
