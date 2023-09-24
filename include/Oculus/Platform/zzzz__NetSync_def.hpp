#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Oculus::Platform::Models {
class NetSyncSessionsChangedNotification;
}
namespace Oculus::Platform {
template<typename T>
class Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform::Models {
class NetSyncConnection;
}
// Forward declare root types
namespace Oculus::Platform {
class NetSync;
}
// Type: Oculus.Platform::NetSync
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13334))
// CS Name: Oculus.Platform.NetSync
class CORDL_TYPE NetSync : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NetSync() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSync", modifiers: " const&", def_value: None }]
constexpr NetSync(NetSync const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSync", modifiers: "&&", def_value: None }]
constexpr NetSync(NetSync&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetSync(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetSync& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetSync& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetSync& operator=(NetSync&& o) noexcept = default;
  constexpr NetSync& operator=(NetSync const& o) noexcept = default;
                


// Methods

/// @brief Method SetConnectionStatusChangedNotificationCallback addr 0x2596498 size 0x74 virtual false final false
static void SetConnectionStatusChangedNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::NetSyncConnection> callback) ;

/// @brief Method SetSessionsChangedNotificationCallback addr 0x259650c size 0x74 virtual false final false
static void SetSessionsChangedNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::NetSyncSessionsChangedNotification> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::NetSync);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::NetSync, "Oculus.Platform", "NetSync");
