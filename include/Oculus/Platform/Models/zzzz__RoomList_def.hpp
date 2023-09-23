#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class RoomList;
}
// Type: Oculus.Platform.Models::RoomList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13410)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 952 }), TypeDefinitionIndex(TypeDefinitionIndex(13468))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13469))
// CS Name: Oculus.Platform.Models.RoomList
class CORDL_TYPE RoomList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Room> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RoomList() = default;

// Ctor Parameters [CppParam { name: "", ty: "RoomList", modifiers: " const&", def_value: None }]
constexpr RoomList(RoomList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RoomList", modifiers: "&&", def_value: None }]
constexpr RoomList(RoomList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RoomList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Room>(ptr) {
}


  constexpr RoomList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RoomList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RoomList& operator=(RoomList&& o) noexcept = default;
  constexpr RoomList& operator=(RoomList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit RoomList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x25a07e8 size 0x25c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::RoomList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::RoomList, "Oculus.Platform.Models", "RoomList");
