#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class IntSO;
}
// Type: ::IntSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13904)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13904), inst: 92 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13900))
// CS Name: IntSO
class CORDL_TYPE IntSO : public GlobalNamespace::ObservableVariableSO_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~IntSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntSO", modifiers: " const&", def_value: None }]
constexpr IntSO(IntSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntSO", modifiers: "&&", def_value: None }]
constexpr IntSO(IntSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntSO(void* ptr) noexcept : GlobalNamespace::ObservableVariableSO_1<int32_t>(ptr) {
}


  constexpr IntSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntSO& operator=(IntSO&& o) noexcept = default;
  constexpr IntSO& operator=(IntSO const& o) noexcept = default;
                


// Methods

static GlobalNamespace::IntSO New_ctor() ;

/// @brief Method .ctor addr 0x1f83dac size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IntSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IntSO, "", "IntSO");
