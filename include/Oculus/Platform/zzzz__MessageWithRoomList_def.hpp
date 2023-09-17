#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__RoomList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class RoomList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithRoomList;
}
// Type: Oculus.Platform::MessageWithRoomList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13469)), TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4473 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13275))
// CS Name: Oculus.Platform.MessageWithRoomList
class CORDL_TYPE MessageWithRoomList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithRoomList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomList", modifiers: " const&", def_value: None }]
constexpr MessageWithRoomList(MessageWithRoomList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithRoomList", modifiers: "&&", def_value: None }]
constexpr MessageWithRoomList(MessageWithRoomList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithRoomList(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomList>(ptr) {
}


  constexpr MessageWithRoomList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithRoomList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithRoomList& operator=(MessageWithRoomList&& o) noexcept = default;
  constexpr MessageWithRoomList& operator=(MessageWithRoomList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithRoomList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f0e0 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetRoomList addr 0x2583780 size 0x3c virtual true final false
 ::Oculus::Platform::Models::RoomList GetRoomList() ;

/// @brief Method GetDataFromMessage addr 0x25837bc size 0x9c virtual true final false
 ::Oculus::Platform::Models::RoomList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithRoomList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithRoomList, "Oculus.Platform", "MessageWithRoomList");
