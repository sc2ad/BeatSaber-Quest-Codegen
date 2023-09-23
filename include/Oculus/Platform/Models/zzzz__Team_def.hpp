#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class UserList;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class Team;
}
// Type: Oculus.Platform.Models::Team
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13478))
// CS Name: Oculus.Platform.Models.Team
class CORDL_TYPE Team : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Team() = default;

// Ctor Parameters [CppParam { name: "", ty: "Team", modifiers: " const&", def_value: None }]
constexpr Team(Team const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Team", modifiers: "&&", def_value: None }]
constexpr Team(Team&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Team(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Team& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Team& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Team& operator=(Team&& o) noexcept = default;
  constexpr Team& operator=(Team const& o) noexcept = default;
                


// Fields

 Oculus::Platform::Models::UserList __declspec(property(get=__get_AssignedUsers, put=__set_AssignedUsers))  AssignedUsers;

constexpr void __set_AssignedUsers(Oculus::Platform::Models::UserList value) ;

constexpr Oculus::Platform::Models::UserList __get_AssignedUsers() const;

 int32_t __declspec(property(get=__get_MaxUsers, put=__set_MaxUsers))  MaxUsers;

constexpr void __set_MaxUsers(int32_t value) ;

constexpr int32_t __get_MaxUsers() const;

 int32_t __declspec(property(get=__get_MinUsers, put=__set_MinUsers))  MinUsers;

constexpr void __set_MinUsers(int32_t value) ;

constexpr int32_t __get_MinUsers() const;

 ::StringW __declspec(property(get=__get_Name, put=__set_Name))  Name;

constexpr void __set_Name(::StringW value) ;

constexpr ::StringW __get_Name() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Team(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a3460 size 0xe0 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::Team);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Team, "Oculus.Platform.Models", "Team");
