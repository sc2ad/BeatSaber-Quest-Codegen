#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class Room;
}
namespace Oculus::Platform::Models {
class User;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class UserAndRoom;
}
// Type: Oculus.Platform.Models::UserAndRoom
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13482))
// CS Name: Oculus.Platform.Models.UserAndRoom
class CORDL_TYPE UserAndRoom : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UserAndRoom() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserAndRoom", modifiers: " const&", def_value: None }]
constexpr UserAndRoom(UserAndRoom const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserAndRoom", modifiers: "&&", def_value: None }]
constexpr UserAndRoom(UserAndRoom&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserAndRoom(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UserAndRoom& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserAndRoom& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserAndRoom& operator=(UserAndRoom&& o) noexcept = default;
  constexpr UserAndRoom& operator=(UserAndRoom const& o) noexcept = default;
                


// Fields

 ::Oculus::Platform::Models::Room __declspec(property(get=__get_RoomOptional, put=__set_RoomOptional))  RoomOptional;

constexpr void __set_RoomOptional(::Oculus::Platform::Models::Room value) ;

constexpr ::Oculus::Platform::Models::Room __get_RoomOptional() const;

 ::Oculus::Platform::Models::Room __declspec(property(get=__get_Room, put=__set_Room))  Room;

constexpr void __set_Room(::Oculus::Platform::Models::Room value) ;

constexpr ::Oculus::Platform::Models::Room __get_Room() const;

 ::Oculus::Platform::Models::User __declspec(property(get=__get_User, put=__set_User))  User;

constexpr void __set_User(::Oculus::Platform::Models::User value) ;

constexpr ::Oculus::Platform::Models::User __get_User() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UserAndRoom(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a3540 size 0x14c virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::UserAndRoom);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserAndRoom, "Oculus.Platform.Models", "UserAndRoom");
