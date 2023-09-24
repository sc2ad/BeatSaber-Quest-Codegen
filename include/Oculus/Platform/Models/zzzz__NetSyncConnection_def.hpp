#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct NetSyncConnectionStatus;
}
namespace Oculus::Platform {
struct NetSyncDisconnectReason;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncConnection;
}
// Type: Oculus.Platform.Models::NetSyncConnection
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13447))
// CS Name: Oculus.Platform.Models.NetSyncConnection
class CORDL_TYPE NetSyncConnection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~NetSyncConnection() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncConnection", modifiers: " const&", def_value: None }]
constexpr NetSyncConnection(NetSyncConnection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncConnection", modifiers: "&&", def_value: None }]
constexpr NetSyncConnection(NetSyncConnection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetSyncConnection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetSyncConnection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetSyncConnection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetSyncConnection& operator=(NetSyncConnection&& o) noexcept = default;
  constexpr NetSyncConnection& operator=(NetSyncConnection const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_ConnectionId, put=__set_ConnectionId))  ConnectionId;

constexpr void __set_ConnectionId(int64_t value) ;

constexpr int64_t __get_ConnectionId() const;

 Oculus::Platform::NetSyncDisconnectReason __declspec(property(get=__get_DisconnectReason, put=__set_DisconnectReason))  DisconnectReason;

constexpr void __set_DisconnectReason(Oculus::Platform::NetSyncDisconnectReason value) ;

constexpr Oculus::Platform::NetSyncDisconnectReason __get_DisconnectReason() const;

 uint64_t __declspec(property(get=__get_SessionId, put=__set_SessionId))  SessionId;

constexpr void __set_SessionId(uint64_t value) ;

constexpr uint64_t __get_SessionId() const;

 Oculus::Platform::NetSyncConnectionStatus __declspec(property(get=__get_Status, put=__set_Status))  Status;

constexpr void __set_Status(Oculus::Platform::NetSyncConnectionStatus value) ;

constexpr Oculus::Platform::NetSyncConnectionStatus __get_Status() const;

 ::StringW __declspec(property(get=__get_ZoneId, put=__set_ZoneId))  ZoneId;

constexpr void __set_ZoneId(::StringW value) ;

constexpr ::StringW __get_ZoneId() const;


// Methods

static Oculus::Platform::Models::NetSyncConnection New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a1370 size 0xb8 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::NetSyncConnection);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::NetSyncConnection, "Oculus.Platform.Models", "NetSyncConnection");
