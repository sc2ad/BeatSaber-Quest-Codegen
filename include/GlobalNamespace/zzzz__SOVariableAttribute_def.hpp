#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class SOVariableAttribute;
}
// Type: ::SOVariableAttribute
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13905))
// CS Name: SOVariableAttribute
class CORDL_TYPE SOVariableAttribute : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SOVariableAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SOVariableAttribute", modifiers: " const&", def_value: None }]
constexpr SOVariableAttribute(SOVariableAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SOVariableAttribute", modifiers: "&&", def_value: None }]
constexpr SOVariableAttribute(SOVariableAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SOVariableAttribute(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr SOVariableAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SOVariableAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SOVariableAttribute& operator=(SOVariableAttribute&& o) noexcept = default;
  constexpr SOVariableAttribute& operator=(SOVariableAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SOVariableAttribute() ;

/// @brief Method .ctor addr 0x1f83df4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SOVariableAttribute);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SOVariableAttribute, "", "SOVariableAttribute");
