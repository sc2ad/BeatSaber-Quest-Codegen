#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__BlockedUserList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class BlockedUserList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithBlockedUserList;
}
// Type: Oculus.Platform::MessageWithBlockedUserList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13396)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4434 }), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13221))
// CS Name: Oculus.Platform.MessageWithBlockedUserList
class CORDL_TYPE MessageWithBlockedUserList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::BlockedUserList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithBlockedUserList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithBlockedUserList", modifiers: " const&", def_value: None }]
constexpr MessageWithBlockedUserList(MessageWithBlockedUserList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithBlockedUserList", modifiers: "&&", def_value: None }]
constexpr MessageWithBlockedUserList(MessageWithBlockedUserList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithBlockedUserList(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::BlockedUserList>(ptr) {
}


  constexpr MessageWithBlockedUserList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithBlockedUserList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithBlockedUserList& operator=(MessageWithBlockedUserList&& o) noexcept = default;
  constexpr MessageWithBlockedUserList& operator=(MessageWithBlockedUserList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithBlockedUserList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e1c0 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetBlockedUserList addr 0x2580650 size 0x3c virtual true final false
 ::Oculus::Platform::Models::BlockedUserList GetBlockedUserList() ;

/// @brief Method GetDataFromMessage addr 0x258068c size 0x9c virtual true final false
 ::Oculus::Platform::Models::BlockedUserList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithBlockedUserList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithBlockedUserList, "Oculus.Platform", "MessageWithBlockedUserList");
