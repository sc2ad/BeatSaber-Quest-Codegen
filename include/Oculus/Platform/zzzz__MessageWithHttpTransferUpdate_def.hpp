#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__HttpTransferUpdate_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class HttpTransferUpdate;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithHttpTransferUpdate;
}
// Type: Oculus.Platform::MessageWithHttpTransferUpdate
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13416)), TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 942 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13295))
// CS Name: Oculus.Platform.MessageWithHttpTransferUpdate
class CORDL_TYPE MessageWithHttpTransferUpdate : public Oculus::Platform::Message_1<Oculus::Platform::Models::HttpTransferUpdate> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithHttpTransferUpdate() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithHttpTransferUpdate", modifiers: " const&", def_value: None }]
constexpr MessageWithHttpTransferUpdate(MessageWithHttpTransferUpdate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithHttpTransferUpdate", modifiers: "&&", def_value: None }]
constexpr MessageWithHttpTransferUpdate(MessageWithHttpTransferUpdate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithHttpTransferUpdate(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::HttpTransferUpdate>(ptr) {
}


  constexpr MessageWithHttpTransferUpdate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithHttpTransferUpdate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithHttpTransferUpdate& operator=(MessageWithHttpTransferUpdate&& o) noexcept = default;
  constexpr MessageWithHttpTransferUpdate& operator=(MessageWithHttpTransferUpdate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithHttpTransferUpdate(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f6b8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetHttpTransferUpdate addr 0x2584910 size 0x3c virtual true final false
 Oculus::Platform::Models::HttpTransferUpdate GetHttpTransferUpdate() ;

/// @brief Method GetDataFromMessage addr 0x258494c size 0x9c virtual true final false
 Oculus::Platform::Models::HttpTransferUpdate GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithHttpTransferUpdate);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithHttpTransferUpdate, "Oculus.Platform", "MessageWithHttpTransferUpdate");
