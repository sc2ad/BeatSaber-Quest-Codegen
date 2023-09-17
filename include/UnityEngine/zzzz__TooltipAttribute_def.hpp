#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
class TooltipAttribute;
}
// Type: UnityEngine::TooltipAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10115))
// CS Name: UnityEngine.TooltipAttribute
class CORDL_TYPE TooltipAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TooltipAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "TooltipAttribute", modifiers: " const&", def_value: None }]
constexpr TooltipAttribute(TooltipAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TooltipAttribute", modifiers: "&&", def_value: None }]
constexpr TooltipAttribute(TooltipAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TooltipAttribute(void* ptr) noexcept : ::UnityEngine::PropertyAttribute(ptr) {
}


  constexpr TooltipAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TooltipAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TooltipAttribute& operator=(TooltipAttribute&& o) noexcept = default;
  constexpr TooltipAttribute& operator=(TooltipAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_tooltip, put=__set_tooltip))  tooltip;

constexpr void __set_tooltip(::StringW value) ;

constexpr ::StringW __get_tooltip() const;


// Methods

// Ctor Parameters [CppParam { name: "tooltip", ty: "::StringW", modifiers: "", def_value: None }]
explicit TooltipAttribute(::StringW tooltip) ;

/// @brief Method .ctor addr 0x2b54e0c size 0x28 virtual false final false
 void _ctor(::StringW tooltip) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::TooltipAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TooltipAttribute, "UnityEngine", "TooltipAttribute");
