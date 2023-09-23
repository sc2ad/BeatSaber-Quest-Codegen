#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserAndRoom_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class UserAndRoomList;
}
// Type: Oculus.Platform.Models::UserAndRoomList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1151 }), TypeDefinitionIndex(TypeDefinitionIndex(13482)), TypeDefinitionIndex(TypeDefinitionIndex(13410))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13483))
// CS Name: Oculus.Platform.Models.UserAndRoomList
class CORDL_TYPE UserAndRoomList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::UserAndRoom> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UserAndRoomList() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserAndRoomList", modifiers: " const&", def_value: None }]
constexpr UserAndRoomList(UserAndRoomList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserAndRoomList", modifiers: "&&", def_value: None }]
constexpr UserAndRoomList(UserAndRoomList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserAndRoomList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::UserAndRoom>(ptr) {
}


  constexpr UserAndRoomList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserAndRoomList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserAndRoomList& operator=(UserAndRoomList&& o) noexcept = default;
  constexpr UserAndRoomList& operator=(UserAndRoomList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UserAndRoomList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x25a368c size 0x25c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::UserAndRoomList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::UserAndRoomList, "Oculus.Platform.Models", "UserAndRoomList");
