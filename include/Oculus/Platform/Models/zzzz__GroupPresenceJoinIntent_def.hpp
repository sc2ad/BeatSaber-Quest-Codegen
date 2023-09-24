#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
// Type: Oculus.Platform.Models::GroupPresenceJoinIntent
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13414))
// CS Name: Oculus.Platform.Models.GroupPresenceJoinIntent
class CORDL_TYPE GroupPresenceJoinIntent : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GroupPresenceJoinIntent() = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupPresenceJoinIntent", modifiers: " const&", def_value: None }]
constexpr GroupPresenceJoinIntent(GroupPresenceJoinIntent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupPresenceJoinIntent", modifiers: "&&", def_value: None }]
constexpr GroupPresenceJoinIntent(GroupPresenceJoinIntent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GroupPresenceJoinIntent(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GroupPresenceJoinIntent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GroupPresenceJoinIntent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GroupPresenceJoinIntent& operator=(GroupPresenceJoinIntent&& o) noexcept = default;
  constexpr GroupPresenceJoinIntent& operator=(GroupPresenceJoinIntent const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_DeeplinkMessage, put=__set_DeeplinkMessage))  DeeplinkMessage;

constexpr void __set_DeeplinkMessage(::StringW value) ;

constexpr ::StringW __get_DeeplinkMessage() const;

 ::StringW __declspec(property(get=__get_DestinationApiName, put=__set_DestinationApiName))  DestinationApiName;

constexpr void __set_DestinationApiName(::StringW value) ;

constexpr ::StringW __get_DestinationApiName() const;

 ::StringW __declspec(property(get=__get_LobbySessionId, put=__set_LobbySessionId))  LobbySessionId;

constexpr void __set_LobbySessionId(::StringW value) ;

constexpr ::StringW __get_LobbySessionId() const;

 ::StringW __declspec(property(get=__get_MatchSessionId, put=__set_MatchSessionId))  MatchSessionId;

constexpr void __set_MatchSessionId(::StringW value) ;

constexpr ::StringW __get_MatchSessionId() const;


// Methods

static Oculus::Platform::Models::GroupPresenceJoinIntent New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259eb5c size 0xa8 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::GroupPresenceJoinIntent);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::GroupPresenceJoinIntent, "Oculus.Platform.Models", "GroupPresenceJoinIntent");
