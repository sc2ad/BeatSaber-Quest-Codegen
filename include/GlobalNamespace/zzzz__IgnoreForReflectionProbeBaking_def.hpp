#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class IgnoreForReflectionProbeBaking;
}
// Type: ::IgnoreForReflectionProbeBaking
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5948))
// CS Name: IgnoreForReflectionProbeBaking
class CORDL_TYPE IgnoreForReflectionProbeBaking : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~IgnoreForReflectionProbeBaking() = default;

// Ctor Parameters [CppParam { name: "", ty: "IgnoreForReflectionProbeBaking", modifiers: " const&", def_value: None }]
constexpr IgnoreForReflectionProbeBaking(IgnoreForReflectionProbeBaking const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IgnoreForReflectionProbeBaking", modifiers: "&&", def_value: None }]
constexpr IgnoreForReflectionProbeBaking(IgnoreForReflectionProbeBaking&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IgnoreForReflectionProbeBaking(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr IgnoreForReflectionProbeBaking& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IgnoreForReflectionProbeBaking& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IgnoreForReflectionProbeBaking& operator=(IgnoreForReflectionProbeBaking&& o) noexcept = default;
  constexpr IgnoreForReflectionProbeBaking& operator=(IgnoreForReflectionProbeBaking const& o) noexcept = default;
                


// Methods

static GlobalNamespace::IgnoreForReflectionProbeBaking New_ctor() ;

/// @brief Method .ctor addr 0x219c434 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IgnoreForReflectionProbeBaking);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IgnoreForReflectionProbeBaking, "", "IgnoreForReflectionProbeBaking");
