#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class NetSyncSessionList;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncSessionsChangedNotification;
}
// Type: Oculus.Platform.Models::NetSyncSessionsChangedNotification
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13450))
// CS Name: Oculus.Platform.Models.NetSyncSessionsChangedNotification
class CORDL_TYPE NetSyncSessionsChangedNotification : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NetSyncSessionsChangedNotification() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncSessionsChangedNotification", modifiers: " const&", def_value: None }]
constexpr NetSyncSessionsChangedNotification(NetSyncSessionsChangedNotification const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncSessionsChangedNotification", modifiers: "&&", def_value: None }]
constexpr NetSyncSessionsChangedNotification(NetSyncSessionsChangedNotification&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetSyncSessionsChangedNotification(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetSyncSessionsChangedNotification& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetSyncSessionsChangedNotification& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetSyncSessionsChangedNotification& operator=(NetSyncSessionsChangedNotification&& o) noexcept = default;
  constexpr NetSyncSessionsChangedNotification& operator=(NetSyncSessionsChangedNotification const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_ConnectionId, put=__set_ConnectionId))  ConnectionId;

constexpr void __set_ConnectionId(int64_t value) ;

constexpr int64_t __get_ConnectionId() const;

 Oculus::Platform::Models::NetSyncSessionList __declspec(property(get=__get_Sessions, put=__set_Sessions))  Sessions;

constexpr void __set_Sessions(Oculus::Platform::Models::NetSyncSessionList value) ;

constexpr Oculus::Platform::Models::NetSyncSessionList __get_Sessions() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit NetSyncSessionsChangedNotification(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a1720 size 0xc0 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::NetSyncSessionsChangedNotification);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::NetSyncSessionsChangedNotification, "Oculus.Platform.Models", "NetSyncSessionsChangedNotification");
