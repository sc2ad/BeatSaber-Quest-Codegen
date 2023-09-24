#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cmath>
// Forward declare root types
namespace UnityEngine {
class SpaceAttribute;
}
// Type: UnityEngine::SpaceAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10116))
// CS Name: UnityEngine.SpaceAttribute
class CORDL_TYPE SpaceAttribute : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SpaceAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpaceAttribute", modifiers: " const&", def_value: None }]
constexpr SpaceAttribute(SpaceAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpaceAttribute", modifiers: "&&", def_value: None }]
constexpr SpaceAttribute(SpaceAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpaceAttribute(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr SpaceAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpaceAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpaceAttribute& operator=(SpaceAttribute&& o) noexcept = default;
  constexpr SpaceAttribute& operator=(SpaceAttribute const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_height, put=__set_height))  height;

constexpr void __set_height(float_t value) ;

constexpr float_t __get_height() const;


// Methods

static UnityEngine::SpaceAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2b54e34 size 0x20 virtual false final false
 void _ctor() ;

static UnityEngine::SpaceAttribute New_ctor(float_t height) ;

/// @brief Method .ctor addr 0x2b54e54 size 0x28 virtual false final false
 void _ctor(float_t height) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::SpaceAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SpaceAttribute, "UnityEngine", "SpaceAttribute");
