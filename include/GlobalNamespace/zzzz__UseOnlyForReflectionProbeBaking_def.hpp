#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class UseOnlyForReflectionProbeBaking;
}
// Type: ::UseOnlyForReflectionProbeBaking
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5955))
// CS Name: UseOnlyForReflectionProbeBaking
class CORDL_TYPE UseOnlyForReflectionProbeBaking : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UseOnlyForReflectionProbeBaking() = default;

// Ctor Parameters [CppParam { name: "", ty: "UseOnlyForReflectionProbeBaking", modifiers: " const&", def_value: None }]
constexpr UseOnlyForReflectionProbeBaking(UseOnlyForReflectionProbeBaking const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UseOnlyForReflectionProbeBaking", modifiers: "&&", def_value: None }]
constexpr UseOnlyForReflectionProbeBaking(UseOnlyForReflectionProbeBaking&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UseOnlyForReflectionProbeBaking(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr UseOnlyForReflectionProbeBaking& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UseOnlyForReflectionProbeBaking& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UseOnlyForReflectionProbeBaking& operator=(UseOnlyForReflectionProbeBaking&& o) noexcept = default;
  constexpr UseOnlyForReflectionProbeBaking& operator=(UseOnlyForReflectionProbeBaking const& o) noexcept = default;
                


// Methods

/// @brief Method Awake addr 0x219d040 size 0x24 virtual false final false
 void Awake() ;

static GlobalNamespace::UseOnlyForReflectionProbeBaking New_ctor() ;

/// @brief Method .ctor addr 0x219d064 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::UseOnlyForReflectionProbeBaking);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UseOnlyForReflectionProbeBaking, "", "UseOnlyForReflectionProbeBaking");
