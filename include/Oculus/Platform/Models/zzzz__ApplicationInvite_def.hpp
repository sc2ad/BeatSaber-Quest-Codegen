#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class Destination;
}
namespace Oculus::Platform::Models {
class User;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class ApplicationInvite;
}
// Type: Oculus.Platform.Models::ApplicationInvite
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13385))
// CS Name: Oculus.Platform.Models.ApplicationInvite
class CORDL_TYPE ApplicationInvite : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ApplicationInvite() = default;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationInvite", modifiers: " const&", def_value: None }]
constexpr ApplicationInvite(ApplicationInvite const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationInvite", modifiers: "&&", def_value: None }]
constexpr ApplicationInvite(ApplicationInvite&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ApplicationInvite(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ApplicationInvite& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ApplicationInvite& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ApplicationInvite& operator=(ApplicationInvite&& o) noexcept = default;
  constexpr ApplicationInvite& operator=(ApplicationInvite const& o) noexcept = default;
                


// Fields

 ::Oculus::Platform::Models::Destination __declspec(property(get=__get_DestinationOptional, put=__set_DestinationOptional))  DestinationOptional;

constexpr void __set_DestinationOptional(::Oculus::Platform::Models::Destination value) ;

constexpr ::Oculus::Platform::Models::Destination __get_DestinationOptional() const;

 ::Oculus::Platform::Models::Destination __declspec(property(get=__get_Destination, put=__set_Destination))  Destination;

constexpr void __set_Destination(::Oculus::Platform::Models::Destination value) ;

constexpr ::Oculus::Platform::Models::Destination __get_Destination() const;

 uint64_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(uint64_t value) ;

constexpr uint64_t __get_ID() const;

 bool __declspec(property(get=__get_IsActive, put=__set_IsActive))  IsActive;

constexpr void __set_IsActive(bool value) ;

constexpr bool __get_IsActive() const;

 ::StringW __declspec(property(get=__get_LobbySessionId, put=__set_LobbySessionId))  LobbySessionId;

constexpr void __set_LobbySessionId(::StringW value) ;

constexpr ::StringW __get_LobbySessionId() const;

 ::StringW __declspec(property(get=__get_MatchSessionId, put=__set_MatchSessionId))  MatchSessionId;

constexpr void __set_MatchSessionId(::StringW value) ;

constexpr ::StringW __get_MatchSessionId() const;

 ::Oculus::Platform::Models::User __declspec(property(get=__get_RecipientOptional, put=__set_RecipientOptional))  RecipientOptional;

constexpr void __set_RecipientOptional(::Oculus::Platform::Models::User value) ;

constexpr ::Oculus::Platform::Models::User __get_RecipientOptional() const;

 ::Oculus::Platform::Models::User __declspec(property(get=__get_Recipient, put=__set_Recipient))  Recipient;

constexpr void __set_Recipient(::Oculus::Platform::Models::User value) ;

constexpr ::Oculus::Platform::Models::User __get_Recipient() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ApplicationInvite(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259c320 size 0x1bc virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::ApplicationInvite);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ApplicationInvite, "Oculus.Platform.Models", "ApplicationInvite");
