#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncSession;
}
// Type: Oculus.Platform.Models::NetSyncSession
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13448))
// CS Name: Oculus.Platform.Models.NetSyncSession
class CORDL_TYPE NetSyncSession : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~NetSyncSession() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncSession", modifiers: " const&", def_value: None }]
constexpr NetSyncSession(NetSyncSession const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncSession", modifiers: "&&", def_value: None }]
constexpr NetSyncSession(NetSyncSession&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetSyncSession(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetSyncSession& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetSyncSession& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetSyncSession& operator=(NetSyncSession&& o) noexcept = default;
  constexpr NetSyncSession& operator=(NetSyncSession const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_ConnectionId, put=__set_ConnectionId))  ConnectionId;

constexpr void __set_ConnectionId(int64_t value) ;

constexpr int64_t __get_ConnectionId() const;

 bool __declspec(property(get=__get_Muted, put=__set_Muted))  Muted;

constexpr void __set_Muted(bool value) ;

constexpr bool __get_Muted() const;

 uint64_t __declspec(property(get=__get_SessionId, put=__set_SessionId))  SessionId;

constexpr void __set_SessionId(uint64_t value) ;

constexpr uint64_t __get_SessionId() const;

 uint64_t __declspec(property(get=__get_UserId, put=__set_UserId))  UserId;

constexpr void __set_UserId(uint64_t value) ;

constexpr uint64_t __get_UserId() const;

 ::StringW __declspec(property(get=__get_VoipGroup, put=__set_VoipGroup))  VoipGroup;

constexpr void __set_VoipGroup(::StringW value) ;

constexpr ::StringW __get_VoipGroup() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit NetSyncSession(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a1428 size 0xbc virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::NetSyncSession);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::NetSyncSession, "Oculus.Platform.Models", "NetSyncSession");
