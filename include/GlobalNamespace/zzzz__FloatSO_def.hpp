#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
class FloatSO;
}
// Type: ::FloatSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13904), inst: 374 }), TypeDefinitionIndex(TypeDefinitionIndex(13904))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13899))
// CS Name: FloatSO
class CORDL_TYPE FloatSO : public GlobalNamespace::ObservableVariableSO_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FloatSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "FloatSO", modifiers: " const&", def_value: None }]
constexpr FloatSO(FloatSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FloatSO", modifiers: "&&", def_value: None }]
constexpr FloatSO(FloatSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FloatSO(void* ptr) noexcept : GlobalNamespace::ObservableVariableSO_1<float_t>(ptr) {
}


  constexpr FloatSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FloatSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FloatSO& operator=(FloatSO&& o) noexcept = default;
  constexpr FloatSO& operator=(FloatSO const& o) noexcept = default;
                


// Methods

static GlobalNamespace::FloatSO New_ctor() ;

/// @brief Method .ctor addr 0x1f83d64 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FloatSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FloatSO, "", "FloatSO");
