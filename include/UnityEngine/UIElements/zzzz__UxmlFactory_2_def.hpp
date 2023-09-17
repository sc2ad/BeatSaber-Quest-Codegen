#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::UIElements {
class IUxmlFactory;
}
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
template<typename TCreatedType,typename TTraits>
class UxmlFactory_2;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type TCreatedType,::cordl_internals::il2cpp_reference_type TTraits>
class UxmlFactory_2<TCreatedType,TTraits>;
}
// Type: UnityEngine.UIElements::UxmlFactory`2
// Type: UnityEngine.UIElements::UxmlFactory`2
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type TCreatedType,::cordl_internals::il2cpp_reference_type TTraits>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7089))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 80 })
// CS Name: UnityEngine.UIElements.UxmlFactory`2
class CORDL_TYPE UxmlFactory_2<TCreatedType,TTraits> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IUxmlFactory
constexpr operator  ::UnityEngine::UIElements::IUxmlFactory() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UxmlFactory_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlFactory_2", modifiers: " const&", def_value: None }]
constexpr UxmlFactory_2(UxmlFactory_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlFactory_2", modifiers: "&&", def_value: None }]
constexpr UxmlFactory_2(UxmlFactory_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlFactory_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UxmlFactory_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlFactory_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlFactory_2& operator=(UxmlFactory_2&& o) noexcept = default;
  constexpr UxmlFactory_2& operator=(UxmlFactory_2 const& o) noexcept = default;
                


// Fields

 TTraits __declspec(property(get=__get_m_Traits, put=__set_m_Traits))  m_Traits;

constexpr void __set_m_Traits(TTraits value) ;

constexpr TTraits __get_m_Traits() const;


// Properties

 ::StringW __declspec(property(get=get_uxmlName))  uxmlName;

 ::StringW __declspec(property(get=get_uxmlNamespace))  uxmlNamespace;

 ::StringW __declspec(property(get=get_uxmlQualifiedName))  uxmlQualifiedName;


// Methods

// Ctor Parameters []
explicit UxmlFactory_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method get_uxmlName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_uxmlName() ;

/// @brief Method get_uxmlNamespace addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_uxmlNamespace() ;

/// @brief Method get_uxmlQualifiedName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_uxmlQualifiedName() ;

/// @brief Method AcceptsAttributeBag addr 0x0 size 0xffffffffffffffff virtual true final false
 bool AcceptsAttributeBag(::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::VisualElement Create(::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UxmlFactory_2, "UnityEngine.UIElements", "UxmlFactory`2");
