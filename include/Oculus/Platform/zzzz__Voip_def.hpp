#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class MicrophoneAvailabilityState;
}
namespace Oculus::Platform {
template<typename T>
class ____Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform {
class ____Oculus__Platform__CAPI__FilterCallback;
}
namespace Oculus::Platform {
struct VoipBitrate;
}
namespace Oculus::Platform {
struct VoipMuteState;
}
namespace Oculus::Platform {
struct SystemVoipStatus;
}
namespace Oculus::Platform::Models {
class SystemVoipState;
}
namespace Oculus::Platform::Models {
class NetworkingPeer;
}
namespace Oculus::Platform {
struct VoipDtxState;
}
namespace Oculus::Platform {
class VoipOptions;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
// Forward declare root types
namespace Oculus::Platform {
class Voip;
}
// Type: Oculus.Platform::Voip
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13319))
// CS Name: Oculus.Platform.Voip
class CORDL_TYPE Voip : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Voip() = default;

// Ctor Parameters [CppParam { name: "", ty: "Voip", modifiers: " const&", def_value: None }]
constexpr Voip(Voip const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Voip", modifiers: "&&", def_value: None }]
constexpr Voip(Voip&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Voip(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Voip& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Voip& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Voip& operator=(Voip&& o) noexcept = default;
  constexpr Voip& operator=(Voip const& o) noexcept = default;
                


// Methods

/// @brief Method Start addr 0x258cea0 size 0xc4 virtual false final false
static void Start(uint64_t userID) ;

/// @brief Method Accept addr 0x258cf64 size 0xc4 virtual false final false
static void Accept(uint64_t userID) ;

/// @brief Method Stop addr 0x258d028 size 0xc4 virtual false final false
static void Stop(uint64_t userID) ;

/// @brief Method SetMicrophoneFilterCallback addr 0x258d0ec size 0x100 virtual false final false
static void SetMicrophoneFilterCallback(::Oculus::Platform::____Oculus__Platform__CAPI__FilterCallback callback) ;

/// @brief Method SetMicrophoneMuted addr 0x258d1ec size 0xc4 virtual false final false
static void SetMicrophoneMuted(::Oculus::Platform::VoipMuteState state) ;

/// @brief Method GetSystemVoipMicrophoneMuted addr 0x258d2b0 size 0xc0 virtual false final false
static ::Oculus::Platform::VoipMuteState GetSystemVoipMicrophoneMuted() ;

/// @brief Method GetSystemVoipStatus addr 0x258d370 size 0xc0 virtual false final false
static ::Oculus::Platform::SystemVoipStatus GetSystemVoipStatus() ;

/// @brief Method GetIsConnectionUsingDtx addr 0x258d430 size 0xc8 virtual false final false
static ::Oculus::Platform::VoipDtxState GetIsConnectionUsingDtx(uint64_t peerID) ;

/// @brief Method GetLocalBitrate addr 0x258d4f8 size 0xc8 virtual false final false
static ::Oculus::Platform::VoipBitrate GetLocalBitrate(uint64_t peerID) ;

/// @brief Method GetRemoteBitrate addr 0x258d5c0 size 0xc8 virtual false final false
static ::Oculus::Platform::VoipBitrate GetRemoteBitrate(uint64_t peerID) ;

/// @brief Method SetNewConnectionOptions addr 0x258d688 size 0xd8 virtual false final false
static void SetNewConnectionOptions(::Oculus::Platform::VoipOptions voipOptions) ;

/// @brief Method GetMicrophoneAvailability addr 0x258d760 size 0x158 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MicrophoneAvailabilityState> GetMicrophoneAvailability() ;

/// @brief Method SetSystemVoipSuppressed addr 0x258d8b8 size 0x160 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::SystemVoipState> SetSystemVoipSuppressed(bool suppressed) ;

/// @brief Method SetVoipConnectRequestCallback addr 0x258da18 size 0x74 virtual false final false
static void SetVoipConnectRequestCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer> callback) ;

/// @brief Method SetMicrophoneAvailabilityStateUpdateNotificationCallback addr 0x258da8c size 0x74 virtual false final false
static void SetMicrophoneAvailabilityStateUpdateNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::StringW> callback) ;

/// @brief Method SetVoipStateChangeCallback addr 0x258db00 size 0x74 virtual false final false
static void SetVoipStateChangeCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer> callback) ;

/// @brief Method SetSystemVoipStateNotificationCallback addr 0x258db74 size 0x74 virtual false final false
static void SetSystemVoipStateNotificationCallback(::Oculus::Platform::____Oculus__Platform__Message_1__Callback<::Oculus::Platform::Models::SystemVoipState> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Voip);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Voip, "Oculus.Platform", "Voip");
