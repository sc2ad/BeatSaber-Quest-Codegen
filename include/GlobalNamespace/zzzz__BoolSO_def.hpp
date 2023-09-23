#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class BoolSO;
}
// Type: ::BoolSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13904)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13904), inst: 99 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13896))
// CS Name: BoolSO
class CORDL_TYPE BoolSO : public GlobalNamespace::ObservableVariableSO_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BoolSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BoolSO", modifiers: " const&", def_value: None }]
constexpr BoolSO(BoolSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BoolSO", modifiers: "&&", def_value: None }]
constexpr BoolSO(BoolSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BoolSO(void* ptr) noexcept : GlobalNamespace::ObservableVariableSO_1<bool>(ptr) {
}


  constexpr BoolSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BoolSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BoolSO& operator=(BoolSO&& o) noexcept = default;
  constexpr BoolSO& operator=(BoolSO const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit BoolSO() ;

/// @brief Method .ctor addr 0x1f83c68 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BoolSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BoolSO, "", "BoolSO");
