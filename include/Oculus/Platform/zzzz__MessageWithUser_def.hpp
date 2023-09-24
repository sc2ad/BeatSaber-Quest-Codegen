#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class User;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUser;
}
// Type: Oculus.Platform::MessageWithUser
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 1150 }), TypeDefinitionIndex(TypeDefinitionIndex(13480)), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13283))
// CS Name: Oculus.Platform.MessageWithUser
class CORDL_TYPE MessageWithUser : public Oculus::Platform::Message_1<Oculus::Platform::Models::User> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithUser() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUser", modifiers: " const&", def_value: None }]
constexpr MessageWithUser(MessageWithUser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUser", modifiers: "&&", def_value: None }]
constexpr MessageWithUser(MessageWithUser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithUser(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::User>(ptr) {
}


  constexpr MessageWithUser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithUser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithUser& operator=(MessageWithUser&& o) noexcept = default;
  constexpr MessageWithUser& operator=(MessageWithUser const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithUser New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f3a0 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetUser addr 0x2583df8 size 0x3c virtual true final false
 Oculus::Platform::Models::User GetUser() ;

/// @brief Method GetDataFromMessage addr 0x2583e34 size 0x9c virtual true final false
 Oculus::Platform::Models::User GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithUser);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithUser, "Oculus.Platform", "MessageWithUser");
