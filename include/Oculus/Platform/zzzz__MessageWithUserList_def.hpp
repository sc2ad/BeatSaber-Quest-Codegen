#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class UserList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserList;
}
// Type: Oculus.Platform::MessageWithUserList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 956 }), TypeDefinitionIndex(TypeDefinitionIndex(13481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13285))
// CS Name: Oculus.Platform.MessageWithUserList
class CORDL_TYPE MessageWithUserList : public Oculus::Platform::Message_1<Oculus::Platform::Models::UserList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithUserList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserList", modifiers: " const&", def_value: None }]
constexpr MessageWithUserList(MessageWithUserList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserList", modifiers: "&&", def_value: None }]
constexpr MessageWithUserList(MessageWithUserList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithUserList(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::UserList>(ptr) {
}


  constexpr MessageWithUserList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithUserList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithUserList& operator=(MessageWithUserList&& o) noexcept = default;
  constexpr MessageWithUserList& operator=(MessageWithUserList const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithUserList New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f450 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetUserList addr 0x2583fa8 size 0x3c virtual true final false
 Oculus::Platform::Models::UserList GetUserList() ;

/// @brief Method GetDataFromMessage addr 0x2583fe4 size 0x9c virtual true final false
 Oculus::Platform::Models::UserList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithUserList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithUserList, "Oculus.Platform", "MessageWithUserList");
