#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccount_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class SdkAccountList;
}
// Type: Oculus.Platform.Models::SdkAccountList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13410)), TypeDefinitionIndex(TypeDefinitionIndex(13472)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1148 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13473))
// CS Name: Oculus.Platform.Models.SdkAccountList
class CORDL_TYPE SdkAccountList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::SdkAccount> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SdkAccountList() = default;

// Ctor Parameters [CppParam { name: "", ty: "SdkAccountList", modifiers: " const&", def_value: None }]
constexpr SdkAccountList(SdkAccountList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SdkAccountList", modifiers: "&&", def_value: None }]
constexpr SdkAccountList(SdkAccountList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SdkAccountList(void* ptr) noexcept : ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::SdkAccount>(ptr) {
}


  constexpr SdkAccountList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SdkAccountList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SdkAccountList& operator=(SdkAccountList&& o) noexcept = default;
  constexpr SdkAccountList& operator=(SdkAccountList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit SdkAccountList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x25a3074 size 0x23c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::SdkAccountList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::SdkAccountList, "Oculus.Platform.Models", "SdkAccountList");
