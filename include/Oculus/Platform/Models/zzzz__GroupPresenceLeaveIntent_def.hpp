#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class GroupPresenceLeaveIntent;
}
// Type: Oculus.Platform.Models::GroupPresenceLeaveIntent
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13415))
// CS Name: Oculus.Platform.Models.GroupPresenceLeaveIntent
class CORDL_TYPE GroupPresenceLeaveIntent : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GroupPresenceLeaveIntent() = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupPresenceLeaveIntent", modifiers: " const&", def_value: None }]
constexpr GroupPresenceLeaveIntent(GroupPresenceLeaveIntent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupPresenceLeaveIntent", modifiers: "&&", def_value: None }]
constexpr GroupPresenceLeaveIntent(GroupPresenceLeaveIntent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GroupPresenceLeaveIntent(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GroupPresenceLeaveIntent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GroupPresenceLeaveIntent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GroupPresenceLeaveIntent& operator=(GroupPresenceLeaveIntent&& o) noexcept = default;
  constexpr GroupPresenceLeaveIntent& operator=(GroupPresenceLeaveIntent const& o) noexcept = default;
                


// Fields

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

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GroupPresenceLeaveIntent(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259ec04 size 0x98 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::GroupPresenceLeaveIntent);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::GroupPresenceLeaveIntent, "Oculus.Platform.Models", "GroupPresenceLeaveIntent");
