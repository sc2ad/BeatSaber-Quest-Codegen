#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStyleTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlStyleFactory;
}
// Type: UnityEngine.UIElements::UxmlStyleFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6828)), TypeDefinitionIndex(TypeDefinitionIndex(7062)), TypeDefinitionIndex(TypeDefinitionIndex(7089)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5115 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7060))
// CS Name: UnityEngine.UIElements.UxmlStyleFactory
class CORDL_TYPE UxmlStyleFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::UxmlStyleTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UxmlStyleFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlStyleFactory", modifiers: " const&", def_value: None }]
constexpr UxmlStyleFactory(UxmlStyleFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlStyleFactory", modifiers: "&&", def_value: None }]
constexpr UxmlStyleFactory(UxmlStyleFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlStyleFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::VisualElement,UnityEngine::UIElements::UxmlStyleTraits>(ptr) {
}


  constexpr UxmlStyleFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlStyleFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlStyleFactory& operator=(UxmlStyleFactory&& o) noexcept = default;
  constexpr UxmlStyleFactory& operator=(UxmlStyleFactory const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_uxmlName))  uxmlName;

 ::StringW __declspec(property(get=get_uxmlQualifiedName))  uxmlQualifiedName;


// Methods

/// @brief Method get_uxmlName addr 0x2c959f8 size 0x40 virtual true final false
 ::StringW get_uxmlName() ;

/// @brief Method get_uxmlQualifiedName addr 0x2c95a38 size 0x74 virtual true final false
 ::StringW get_uxmlQualifiedName() ;

/// @brief Method Create addr 0x2c95aac size 0x8 virtual true final false
 UnityEngine::UIElements::VisualElement Create(UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UxmlStyleFactory() ;

/// @brief Method .ctor addr 0x2c95ab4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UxmlStyleFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UxmlStyleFactory, "UnityEngine.UIElements", "UxmlStyleFactory");
