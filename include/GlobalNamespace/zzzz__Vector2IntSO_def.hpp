#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class Vector2IntSO;
}
// Type: ::Vector2IntSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13904)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13904), inst: 3257 }), TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13908))
// CS Name: Vector2IntSO
class CORDL_TYPE Vector2IntSO : public GlobalNamespace::ObservableVariableSO_1<UnityEngine::Vector2Int> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Vector2IntSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector2IntSO", modifiers: " const&", def_value: None }]
constexpr Vector2IntSO(Vector2IntSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector2IntSO", modifiers: "&&", def_value: None }]
constexpr Vector2IntSO(Vector2IntSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Vector2IntSO(void* ptr) noexcept : GlobalNamespace::ObservableVariableSO_1<UnityEngine::Vector2Int>(ptr) {
}


  constexpr Vector2IntSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Vector2IntSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Vector2IntSO& operator=(Vector2IntSO&& o) noexcept = default;
  constexpr Vector2IntSO& operator=(Vector2IntSO const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Vector2IntSO() ;

/// @brief Method .ctor addr 0x1f83e54 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::Vector2IntSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Vector2IntSO, "", "Vector2IntSO");
