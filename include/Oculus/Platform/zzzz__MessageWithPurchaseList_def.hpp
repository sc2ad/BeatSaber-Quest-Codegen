#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__PurchaseList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class PurchaseList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPurchaseList;
}
// Type: Oculus.Platform::MessageWithPurchaseList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 951 }), TypeDefinitionIndex(TypeDefinitionIndex(13466)), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13270))
// CS Name: Oculus.Platform.MessageWithPurchaseList
class CORDL_TYPE MessageWithPurchaseList : public Oculus::Platform::Message_1<Oculus::Platform::Models::PurchaseList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithPurchaseList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPurchaseList", modifiers: " const&", def_value: None }]
constexpr MessageWithPurchaseList(MessageWithPurchaseList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPurchaseList", modifiers: "&&", def_value: None }]
constexpr MessageWithPurchaseList(MessageWithPurchaseList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithPurchaseList(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::PurchaseList>(ptr) {
}


  constexpr MessageWithPurchaseList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithPurchaseList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithPurchaseList& operator=(MessageWithPurchaseList&& o) noexcept = default;
  constexpr MessageWithPurchaseList& operator=(MessageWithPurchaseList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithPurchaseList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257ef28 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetPurchaseList addr 0x2583348 size 0x3c virtual true final false
 Oculus::Platform::Models::PurchaseList GetPurchaseList() ;

/// @brief Method GetDataFromMessage addr 0x2583384 size 0x9c virtual true final false
 Oculus::Platform::Models::PurchaseList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithPurchaseList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithPurchaseList, "Oculus.Platform", "MessageWithPurchaseList");
