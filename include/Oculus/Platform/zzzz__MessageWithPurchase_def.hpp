#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class Purchase;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPurchase;
}
// Type: Oculus.Platform::MessageWithPurchase
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 1147 }), TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13465))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13269))
// CS Name: Oculus.Platform.MessageWithPurchase
class CORDL_TYPE MessageWithPurchase : public Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithPurchase() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPurchase", modifiers: " const&", def_value: None }]
constexpr MessageWithPurchase(MessageWithPurchase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPurchase", modifiers: "&&", def_value: None }]
constexpr MessageWithPurchase(MessageWithPurchase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithPurchase(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::Purchase>(ptr) {
}


  constexpr MessageWithPurchase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithPurchase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithPurchase& operator=(MessageWithPurchase&& o) noexcept = default;
  constexpr MessageWithPurchase& operator=(MessageWithPurchase const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithPurchase(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257eed0 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetPurchase addr 0x2583270 size 0x3c virtual true final false
 Oculus::Platform::Models::Purchase GetPurchase() ;

/// @brief Method GetDataFromMessage addr 0x25832ac size 0x9c virtual true final false
 Oculus::Platform::Models::Purchase GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithPurchase);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithPurchase, "Oculus.Platform", "MessageWithPurchase");
