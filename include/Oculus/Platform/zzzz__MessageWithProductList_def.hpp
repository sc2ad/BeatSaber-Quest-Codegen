#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__ProductList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class ProductList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithProductList;
}
// Type: Oculus.Platform::MessageWithProductList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4470 }), TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13464))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13268))
// CS Name: Oculus.Platform.MessageWithProductList
class CORDL_TYPE MessageWithProductList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ProductList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithProductList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithProductList", modifiers: " const&", def_value: None }]
constexpr MessageWithProductList(MessageWithProductList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithProductList", modifiers: "&&", def_value: None }]
constexpr MessageWithProductList(MessageWithProductList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithProductList(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ProductList>(ptr) {
}


  constexpr MessageWithProductList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithProductList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithProductList& operator=(MessageWithProductList&& o) noexcept = default;
  constexpr MessageWithProductList& operator=(MessageWithProductList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithProductList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257ee78 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetProductList addr 0x2583198 size 0x3c virtual true final false
 ::Oculus::Platform::Models::ProductList GetProductList() ;

/// @brief Method GetDataFromMessage addr 0x25831d4 size 0x9c virtual true final false
 ::Oculus::Platform::Models::ProductList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithProductList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithProductList, "Oculus.Platform", "MessageWithProductList");
