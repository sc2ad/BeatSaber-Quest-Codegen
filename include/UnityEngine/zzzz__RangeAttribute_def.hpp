#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cmath>
// Forward declare root types
namespace UnityEngine {
class RangeAttribute;
}
// Type: UnityEngine::RangeAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10118))
// CS Name: UnityEngine.RangeAttribute
class CORDL_TYPE RangeAttribute : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RangeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RangeAttribute", modifiers: " const&", def_value: None }]
constexpr RangeAttribute(RangeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RangeAttribute", modifiers: "&&", def_value: None }]
constexpr RangeAttribute(RangeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RangeAttribute(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr RangeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RangeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RangeAttribute& operator=(RangeAttribute&& o) noexcept = default;
  constexpr RangeAttribute& operator=(RangeAttribute const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_min, put=__set_min))  min;

constexpr void __set_min(float_t value) ;

constexpr float_t __get_min() const;

 float_t __declspec(property(get=__get_max, put=__set_max))  max;

constexpr void __set_max(float_t value) ;

constexpr float_t __get_max() const;


// Methods

// Ctor Parameters [CppParam { name: "min", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "max", ty: "float_t", modifiers: "", def_value: None }]
explicit RangeAttribute(float_t min, float_t max) ;

/// @brief Method .ctor addr 0x2b54ea4 size 0x2c virtual false final false
 void _ctor(float_t min, float_t max) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::RangeAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RangeAttribute, "UnityEngine", "RangeAttribute");
