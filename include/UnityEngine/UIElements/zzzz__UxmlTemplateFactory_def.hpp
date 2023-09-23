#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTemplateTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlTemplateFactory;
}
// Type: UnityEngine.UIElements::UxmlTemplateFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7065)), TypeDefinitionIndex(TypeDefinitionIndex(7089)), TypeDefinitionIndex(TypeDefinitionIndex(6828)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5116 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7063))
// CS Name: UnityEngine.UIElements.UxmlTemplateFactory
class CORDL_TYPE UxmlTemplateFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::UxmlTemplateTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UxmlTemplateFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlTemplateFactory", modifiers: " const&", def_value: None }]
constexpr UxmlTemplateFactory(UxmlTemplateFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlTemplateFactory", modifiers: "&&", def_value: None }]
constexpr UxmlTemplateFactory(UxmlTemplateFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlTemplateFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::UxmlTemplateTraits>(ptr) {
}


  constexpr UxmlTemplateFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlTemplateFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlTemplateFactory& operator=(UxmlTemplateFactory&& o) noexcept = default;
  constexpr UxmlTemplateFactory& operator=(UxmlTemplateFactory const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_uxmlName))  uxmlName;

 ::StringW __declspec(property(get=get_uxmlQualifiedName))  uxmlQualifiedName;


// Methods

/// @brief Method get_uxmlName addr 0x2c95db0 size 0x40 virtual true final false
 ::StringW get_uxmlName() ;

/// @brief Method get_uxmlQualifiedName addr 0x2c95df0 size 0x74 virtual true final false
 ::StringW get_uxmlQualifiedName() ;

/// @brief Method Create addr 0x2c95e64 size 0x8 virtual true final false
 UnityEngine::UIElements::VisualElement Create(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UxmlTemplateFactory() ;

/// @brief Method .ctor addr 0x2c95e6c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UxmlTemplateFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UxmlTemplateFactory, "UnityEngine.UIElements", "UxmlTemplateFactory");
