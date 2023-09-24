#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class Vector3SO;
}
// Type: ::Vector3SO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13904), inst: 394 }), TypeDefinitionIndex(TypeDefinitionIndex(10190)), TypeDefinitionIndex(TypeDefinitionIndex(13904))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13909))
// CS Name: Vector3SO
class CORDL_TYPE Vector3SO : public GlobalNamespace::ObservableVariableSO_1<UnityEngine::Vector3> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Vector3SO() = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector3SO", modifiers: " const&", def_value: None }]
constexpr Vector3SO(Vector3SO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector3SO", modifiers: "&&", def_value: None }]
constexpr Vector3SO(Vector3SO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Vector3SO(void* ptr) noexcept : GlobalNamespace::ObservableVariableSO_1<UnityEngine::Vector3>(ptr) {
}


  constexpr Vector3SO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Vector3SO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Vector3SO& operator=(Vector3SO&& o) noexcept = default;
  constexpr Vector3SO& operator=(Vector3SO const& o) noexcept = default;
                


// Methods

static GlobalNamespace::Vector3SO New_ctor() ;

/// @brief Method .ctor addr 0x1f83e9c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::Vector3SO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Vector3SO, "", "Vector3SO");
