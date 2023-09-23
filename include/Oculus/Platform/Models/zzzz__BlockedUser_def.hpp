#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class BlockedUser;
}
// Type: Oculus.Platform.Models::BlockedUser
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13395))
// CS Name: Oculus.Platform.Models.BlockedUser
class CORDL_TYPE BlockedUser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BlockedUser() = default;

// Ctor Parameters [CppParam { name: "", ty: "BlockedUser", modifiers: " const&", def_value: None }]
constexpr BlockedUser(BlockedUser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BlockedUser", modifiers: "&&", def_value: None }]
constexpr BlockedUser(BlockedUser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BlockedUser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BlockedUser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BlockedUser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BlockedUser& operator=(BlockedUser&& o) noexcept = default;
  constexpr BlockedUser& operator=(BlockedUser const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_Id, put=__set_Id))  Id;

constexpr void __set_Id(uint64_t value) ;

constexpr uint64_t __get_Id() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit BlockedUser(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259d0f4 size 0x78 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::BlockedUser);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::BlockedUser, "Oculus.Platform.Models", "BlockedUser");
