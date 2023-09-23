#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class StringSO;
}
// Type: ::StringSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13904)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13904), inst: 380 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13907))
// CS Name: StringSO
class CORDL_TYPE StringSO : public GlobalNamespace::ObservableVariableSO_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StringSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringSO", modifiers: " const&", def_value: None }]
constexpr StringSO(StringSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringSO", modifiers: "&&", def_value: None }]
constexpr StringSO(StringSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringSO(void* ptr) noexcept : GlobalNamespace::ObservableVariableSO_1<::StringW>(ptr) {
}


  constexpr StringSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringSO& operator=(StringSO&& o) noexcept = default;
  constexpr StringSO& operator=(StringSO const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit StringSO() ;

/// @brief Method .ctor addr 0x1f83e0c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StringSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StringSO, "", "StringSO");
