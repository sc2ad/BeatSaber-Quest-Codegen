#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__BlockedUser_def.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class BlockedUserList;
}
// Type: Oculus.Platform.Models::BlockedUserList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13395)), TypeDefinitionIndex(TypeDefinitionIndex(13410)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1131 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13396))
// CS Name: Oculus.Platform.Models.BlockedUserList
class CORDL_TYPE BlockedUserList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::BlockedUser> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BlockedUserList() = default;

// Ctor Parameters [CppParam { name: "", ty: "BlockedUserList", modifiers: " const&", def_value: None }]
constexpr BlockedUserList(BlockedUserList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BlockedUserList", modifiers: "&&", def_value: None }]
constexpr BlockedUserList(BlockedUserList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BlockedUserList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::BlockedUser>(ptr) {
}


  constexpr BlockedUserList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BlockedUserList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BlockedUserList& operator=(BlockedUserList&& o) noexcept = default;
  constexpr BlockedUserList& operator=(BlockedUserList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit BlockedUserList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x259d16c size 0x25c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::BlockedUserList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::BlockedUserList, "Oculus.Platform.Models", "BlockedUserList");
