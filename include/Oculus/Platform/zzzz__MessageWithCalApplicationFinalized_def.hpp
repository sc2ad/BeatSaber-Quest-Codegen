#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__CalApplicationFinalized_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class CalApplicationFinalized;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCalApplicationFinalized;
}
// Type: Oculus.Platform::MessageWithCalApplicationFinalized
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13397)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4435 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13222))
// CS Name: Oculus.Platform.MessageWithCalApplicationFinalized
class CORDL_TYPE MessageWithCalApplicationFinalized : public Oculus::Platform::Message_1<Oculus::Platform::Models::CalApplicationFinalized> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithCalApplicationFinalized() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCalApplicationFinalized", modifiers: " const&", def_value: None }]
constexpr MessageWithCalApplicationFinalized(MessageWithCalApplicationFinalized const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCalApplicationFinalized", modifiers: "&&", def_value: None }]
constexpr MessageWithCalApplicationFinalized(MessageWithCalApplicationFinalized&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithCalApplicationFinalized(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::CalApplicationFinalized>(ptr) {
}


  constexpr MessageWithCalApplicationFinalized& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithCalApplicationFinalized& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithCalApplicationFinalized& operator=(MessageWithCalApplicationFinalized&& o) noexcept = default;
  constexpr MessageWithCalApplicationFinalized& operator=(MessageWithCalApplicationFinalized const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithCalApplicationFinalized(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e218 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetCalApplicationFinalized addr 0x2580728 size 0x3c virtual true final false
 Oculus::Platform::Models::CalApplicationFinalized GetCalApplicationFinalized() ;

/// @brief Method GetDataFromMessage addr 0x2580764 size 0x9c virtual true final false
 Oculus::Platform::Models::CalApplicationFinalized GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithCalApplicationFinalized);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithCalApplicationFinalized, "Oculus.Platform", "MessageWithCalApplicationFinalized");
