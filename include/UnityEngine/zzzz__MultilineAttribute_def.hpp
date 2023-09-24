#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class MultilineAttribute;
}
// Type: UnityEngine::MultilineAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10120))
// CS Name: UnityEngine.MultilineAttribute
class CORDL_TYPE MultilineAttribute : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MultilineAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultilineAttribute", modifiers: " const&", def_value: None }]
constexpr MultilineAttribute(MultilineAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultilineAttribute", modifiers: "&&", def_value: None }]
constexpr MultilineAttribute(MultilineAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultilineAttribute(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr MultilineAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultilineAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultilineAttribute& operator=(MultilineAttribute&& o) noexcept = default;
  constexpr MultilineAttribute& operator=(MultilineAttribute const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_lines, put=__set_lines))  lines;

constexpr void __set_lines(int32_t value) ;

constexpr int32_t __get_lines() const;


// Methods

static UnityEngine::MultilineAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2b54ef8 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::MultilineAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MultilineAttribute, "UnityEngine", "MultilineAttribute");
