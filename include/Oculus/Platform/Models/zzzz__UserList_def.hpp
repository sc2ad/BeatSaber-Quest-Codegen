#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class UserList;
}
// Type: Oculus.Platform.Models::UserList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13410)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1150 }), TypeDefinitionIndex(TypeDefinitionIndex(13480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13481))
// CS Name: Oculus.Platform.Models.UserList
class CORDL_TYPE UserList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::User> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UserList() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserList", modifiers: " const&", def_value: None }]
constexpr UserList(UserList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserList", modifiers: "&&", def_value: None }]
constexpr UserList(UserList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::User>(ptr) {
}


  constexpr UserList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserList& operator=(UserList&& o) noexcept = default;
  constexpr UserList& operator=(UserList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UserList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x259d9c4 size 0x25c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::UserList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::UserList, "Oculus.Platform.Models", "UserList");
