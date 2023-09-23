#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__UserAndRoomList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class UserAndRoomList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserAndRoomList;
}
// Type: Oculus.Platform::MessageWithUserAndRoomList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13483)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 955 }), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13284))
// CS Name: Oculus.Platform.MessageWithUserAndRoomList
class CORDL_TYPE MessageWithUserAndRoomList : public Oculus::Platform::Message_1<Oculus::Platform::Models::UserAndRoomList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithUserAndRoomList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserAndRoomList", modifiers: " const&", def_value: None }]
constexpr MessageWithUserAndRoomList(MessageWithUserAndRoomList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserAndRoomList", modifiers: "&&", def_value: None }]
constexpr MessageWithUserAndRoomList(MessageWithUserAndRoomList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithUserAndRoomList(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::UserAndRoomList>(ptr) {
}


  constexpr MessageWithUserAndRoomList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithUserAndRoomList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithUserAndRoomList& operator=(MessageWithUserAndRoomList&& o) noexcept = default;
  constexpr MessageWithUserAndRoomList& operator=(MessageWithUserAndRoomList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithUserAndRoomList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f3f8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetUserAndRoomList addr 0x2583ed0 size 0x3c virtual true final false
 Oculus::Platform::Models::UserAndRoomList GetUserAndRoomList() ;

/// @brief Method GetDataFromMessage addr 0x2583f0c size 0x9c virtual true final false
 Oculus::Platform::Models::UserAndRoomList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithUserAndRoomList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithUserAndRoomList, "Oculus.Platform", "MessageWithUserAndRoomList");
