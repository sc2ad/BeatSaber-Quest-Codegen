#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeOverridesTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlAttributeOverridesFactory;
}
// Type: UnityEngine.UIElements::UxmlAttributeOverridesFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5113 }), TypeDefinitionIndex(TypeDefinitionIndex(6828)), TypeDefinitionIndex(TypeDefinitionIndex(7089)), TypeDefinitionIndex(TypeDefinitionIndex(7068))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7066))
// CS Name: UnityEngine.UIElements.UxmlAttributeOverridesFactory
class CORDL_TYPE UxmlAttributeOverridesFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::UxmlAttributeOverridesTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UxmlAttributeOverridesFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeOverridesFactory", modifiers: " const&", def_value: None }]
constexpr UxmlAttributeOverridesFactory(UxmlAttributeOverridesFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeOverridesFactory", modifiers: "&&", def_value: None }]
constexpr UxmlAttributeOverridesFactory(UxmlAttributeOverridesFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlAttributeOverridesFactory(void* ptr) noexcept : ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::VisualElement,::UnityEngine::UIElements::UxmlAttributeOverridesTraits>(ptr) {
}


  constexpr UxmlAttributeOverridesFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlAttributeOverridesFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlAttributeOverridesFactory& operator=(UxmlAttributeOverridesFactory&& o) noexcept = default;
  constexpr UxmlAttributeOverridesFactory& operator=(UxmlAttributeOverridesFactory const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_uxmlName))  uxmlName;

 ::StringW __declspec(property(get=get_uxmlQualifiedName))  uxmlQualifiedName;


// Methods

/// @brief Method get_uxmlName addr 0x2c96170 size 0x40 virtual true final false
 ::StringW get_uxmlName() ;

/// @brief Method get_uxmlQualifiedName addr 0x2c961b0 size 0x74 virtual true final false
 ::StringW get_uxmlQualifiedName() ;

/// @brief Method Create addr 0x2c96224 size 0x8 virtual true final false
 ::UnityEngine::UIElements::VisualElement Create(::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UxmlAttributeOverridesFactory() ;

/// @brief Method .ctor addr 0x2c9622c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::UxmlAttributeOverridesFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlAttributeOverridesFactory, "UnityEngine.UIElements", "UxmlAttributeOverridesFactory");