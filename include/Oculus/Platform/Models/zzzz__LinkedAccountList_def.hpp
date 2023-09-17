#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__LinkedAccount_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class LinkedAccountList;
}
// Type: Oculus.Platform.Models::LinkedAccountList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13410)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1140 }), TypeDefinitionIndex(TypeDefinitionIndex(13431))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13432))
// CS Name: Oculus.Platform.Models.LinkedAccountList
class CORDL_TYPE LinkedAccountList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::LinkedAccount> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LinkedAccountList() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedAccountList", modifiers: " const&", def_value: None }]
constexpr LinkedAccountList(LinkedAccountList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinkedAccountList", modifiers: "&&", def_value: None }]
constexpr LinkedAccountList(LinkedAccountList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinkedAccountList(void* ptr) noexcept : ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::LinkedAccount>(ptr) {
}


  constexpr LinkedAccountList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinkedAccountList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinkedAccountList& operator=(LinkedAccountList&& o) noexcept = default;
  constexpr LinkedAccountList& operator=(LinkedAccountList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit LinkedAccountList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x259fd44 size 0x23c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::LinkedAccountList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LinkedAccountList, "Oculus.Platform.Models", "LinkedAccountList");
