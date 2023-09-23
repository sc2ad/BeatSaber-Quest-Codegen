#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::Yoga {
class YogaNode;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class BaselineFunction;
}
// Type: UnityEngine.Yoga::BaselineFunction
namespace UnityEngine::Yoga {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15394))
// CS Name: UnityEngine.Yoga.BaselineFunction
class CORDL_TYPE BaselineFunction : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~BaselineFunction() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaselineFunction", modifiers: " const&", def_value: None }]
constexpr BaselineFunction(BaselineFunction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaselineFunction", modifiers: "&&", def_value: None }]
constexpr BaselineFunction(BaselineFunction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaselineFunction(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr BaselineFunction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaselineFunction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaselineFunction& operator=(BaselineFunction&& o) noexcept = default;
  constexpr BaselineFunction& operator=(BaselineFunction const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit BaselineFunction(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d2e260 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d2e390 size 0x14 virtual true final false
 float_t Invoke(UnityEngine::Yoga::YogaNode node, float_t width, float_t height) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
NEED_NO_BOX(UnityEngine::Yoga::BaselineFunction);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Yoga::BaselineFunction, "UnityEngine.Yoga", "BaselineFunction");
