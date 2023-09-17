#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace UnityEngine {
class MinAttribute;
}
// Type: UnityEngine::MinAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10119))
// CS Name: UnityEngine.MinAttribute
class CORDL_TYPE MinAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MinAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "MinAttribute", modifiers: " const&", def_value: None }]
constexpr MinAttribute(MinAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MinAttribute", modifiers: "&&", def_value: None }]
constexpr MinAttribute(MinAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MinAttribute(void* ptr) noexcept : ::UnityEngine::PropertyAttribute(ptr) {
}


  constexpr MinAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MinAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MinAttribute& operator=(MinAttribute&& o) noexcept = default;
  constexpr MinAttribute& operator=(MinAttribute const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_min, put=__set_min))  min;

constexpr void __set_min(float_t value) ;

constexpr float_t __get_min() const;


// Methods

// Ctor Parameters [CppParam { name: "min", ty: "float_t", modifiers: "", def_value: None }]
explicit MinAttribute(float_t min) ;

/// @brief Method .ctor addr 0x2b54ed0 size 0x28 virtual false final false
 void _ctor(float_t min) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::MinAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MinAttribute, "UnityEngine", "MinAttribute");
