#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine::Animations {
class DiscreteEvaluationAttribute;
}
// Type: UnityEngine.Animations::DiscreteEvaluationAttribute
namespace UnityEngine::Animations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15074))
// CS Name: UnityEngine.Animations.DiscreteEvaluationAttribute
class CORDL_TYPE DiscreteEvaluationAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DiscreteEvaluationAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DiscreteEvaluationAttribute", modifiers: " const&", def_value: None }]
constexpr DiscreteEvaluationAttribute(DiscreteEvaluationAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DiscreteEvaluationAttribute", modifiers: "&&", def_value: None }]
constexpr DiscreteEvaluationAttribute(DiscreteEvaluationAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DiscreteEvaluationAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DiscreteEvaluationAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DiscreteEvaluationAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DiscreteEvaluationAttribute& operator=(DiscreteEvaluationAttribute&& o) noexcept = default;
  constexpr DiscreteEvaluationAttribute& operator=(DiscreteEvaluationAttribute const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
NEED_NO_BOX(UnityEngine::Animations::DiscreteEvaluationAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::DiscreteEvaluationAttribute, "UnityEngine.Animations", "DiscreteEvaluationAttribute");
