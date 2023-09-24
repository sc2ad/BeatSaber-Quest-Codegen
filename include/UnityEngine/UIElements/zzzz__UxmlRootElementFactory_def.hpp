#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlRootElementTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlRootElementFactory;
}
// Type: UnityEngine.UIElements::UxmlRootElementFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7059)), TypeDefinitionIndex(TypeDefinitionIndex(7089)), TypeDefinitionIndex(TypeDefinitionIndex(6828)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5114 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7057))
// CS Name: UnityEngine.UIElements.UxmlRootElementFactory
class CORDL_TYPE UxmlRootElementFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::UxmlRootElementTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UxmlRootElementFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlRootElementFactory", modifiers: " const&", def_value: None }]
constexpr UxmlRootElementFactory(UxmlRootElementFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlRootElementFactory", modifiers: "&&", def_value: None }]
constexpr UxmlRootElementFactory(UxmlRootElementFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlRootElementFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::UxmlRootElementTraits>(ptr) {
}


  constexpr UxmlRootElementFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlRootElementFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlRootElementFactory& operator=(UxmlRootElementFactory&& o) noexcept = default;
  constexpr UxmlRootElementFactory& operator=(UxmlRootElementFactory const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_uxmlName))  uxmlName;

 ::StringW __declspec(property(get=get_uxmlQualifiedName))  uxmlQualifiedName;


// Methods

/// @brief Method get_uxmlName addr 0x2c955ac size 0x40 virtual true final false
 ::StringW get_uxmlName() ;

/// @brief Method get_uxmlQualifiedName addr 0x2c955ec size 0x74 virtual true final false
 ::StringW get_uxmlQualifiedName() ;

/// @brief Method Create addr 0x2c95660 size 0x8 virtual true final false
 UnityEngine::UIElements::VisualElement Create(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

static UnityEngine::UIElements::UxmlRootElementFactory New_ctor() ;

/// @brief Method .ctor addr 0x2c95668 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UxmlRootElementFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UxmlRootElementFactory, "UnityEngine.UIElements", "UxmlRootElementFactory");
