#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine::Bindings {
class PreventReadOnlyInstanceModificationAttribute;
}
// Type: UnityEngine.Bindings::PreventReadOnlyInstanceModificationAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15887))
// CS Name: UnityEngine.Bindings.PreventReadOnlyInstanceModificationAttribute
class CORDL_TYPE PreventReadOnlyInstanceModificationAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PreventReadOnlyInstanceModificationAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "PreventReadOnlyInstanceModificationAttribute", modifiers: " const&", def_value: None }]
constexpr PreventReadOnlyInstanceModificationAttribute(PreventReadOnlyInstanceModificationAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PreventReadOnlyInstanceModificationAttribute", modifiers: "&&", def_value: None }]
constexpr PreventReadOnlyInstanceModificationAttribute(PreventReadOnlyInstanceModificationAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreventReadOnlyInstanceModificationAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr PreventReadOnlyInstanceModificationAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PreventReadOnlyInstanceModificationAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PreventReadOnlyInstanceModificationAttribute& operator=(PreventReadOnlyInstanceModificationAttribute&& o) noexcept = default;
  constexpr PreventReadOnlyInstanceModificationAttribute& operator=(PreventReadOnlyInstanceModificationAttribute const& o) noexcept = default;
                


// Methods

static UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2ba1824 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute, "UnityEngine.Bindings", "PreventReadOnlyInstanceModificationAttribute");
