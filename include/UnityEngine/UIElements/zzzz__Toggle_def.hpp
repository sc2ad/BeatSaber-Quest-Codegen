#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseBoolField_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Toggle;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__Toggle__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__Toggle__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7083)), TypeDefinitionIndex(TypeDefinitionIndex(7229)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7229), inst: 884 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7190))
// CS Name: UnityEngine.UIElements.Toggle::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__Toggle__UxmlTraits : public UnityEngine::UIElements::BaseFieldTraits_2<bool,UnityEngine::UIElements::UxmlBoolAttributeDescription> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__Toggle__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Toggle__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__Toggle__UxmlTraits(UnityEngine__UIElements__Toggle__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Toggle__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__Toggle__UxmlTraits(UnityEngine__UIElements__Toggle__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__Toggle__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::BaseFieldTraits_2<bool,UnityEngine::UIElements::UxmlBoolAttributeDescription>(ptr) {
}


  constexpr UnityEngine__UIElements__Toggle__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__Toggle__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__Toggle__UxmlTraits& operator=(UnityEngine__UIElements__Toggle__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__Toggle__UxmlTraits& operator=(UnityEngine__UIElements__Toggle__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Text() const;


// Methods

/// @brief Method Init addr 0x2cbd3c4 size 0x118 virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__Toggle__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cbd4dc size 0xa0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::Toggle
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7163))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7191))
// CS Name: UnityEngine.UIElements.Toggle
class CORDL_TYPE Toggle : public UnityEngine::UIElements::BaseBoolField {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__Toggle__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__Toggle__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x428};

virtual ~Toggle() = default;

// Ctor Parameters [CppParam { name: "", ty: "Toggle", modifiers: " const&", def_value: None }]
constexpr Toggle(Toggle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Toggle", modifiers: "&&", def_value: None }]
constexpr Toggle(Toggle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Toggle(void* ptr) noexcept : UnityEngine::UIElements::BaseBoolField(ptr) {
}


  constexpr Toggle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Toggle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Toggle& operator=(Toggle&& o) noexcept = default;
  constexpr Toggle& operator=(Toggle const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_labelUssClassName, put=__set_labelUssClassName))  labelUssClassName;

static void __set_labelUssClassName(::StringW value) ;

static ::StringW __get_labelUssClassName() ;

static ::StringW __declspec(property(get=__get_inputUssClassName, put=__set_inputUssClassName))  inputUssClassName;

static void __set_inputUssClassName(::StringW value) ;

static ::StringW __get_inputUssClassName() ;

static ::StringW __declspec(property(get=__get_noTextVariantUssClassName, put=__set_noTextVariantUssClassName))  noTextVariantUssClassName;

static void __set_noTextVariantUssClassName(::StringW value) ;

static ::StringW __get_noTextVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_checkmarkUssClassName, put=__set_checkmarkUssClassName))  checkmarkUssClassName;

static void __set_checkmarkUssClassName(::StringW value) ;

static ::StringW __get_checkmarkUssClassName() ;

static ::StringW __declspec(property(get=__get_textUssClassName, put=__set_textUssClassName))  textUssClassName;

static void __set_textUssClassName(::StringW value) ;

static ::StringW __get_textUssClassName() ;


// Methods

// Ctor Parameters []
explicit Toggle() ;

/// @brief Method .ctor addr 0x2cbc7b4 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }]
explicit Toggle(::StringW label) ;

/// @brief Method .ctor addr 0x2cbd098 size 0xfc virtual false final false
 void _ctor(::StringW label) ;

/// @brief Method InitLabel addr 0x2cbd194 size 0x78 virtual true final false
 void InitLabel() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5110 }), TypeDefinitionIndex(TypeDefinitionIndex(7191)), TypeDefinitionIndex(TypeDefinitionIndex(7190)), TypeDefinitionIndex(TypeDefinitionIndex(7089))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7189))
// CS Name: UnityEngine.UIElements.Toggle::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__Toggle__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::Toggle,UnityEngine::UIElements::UnityEngine__UIElements__Toggle__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__Toggle__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Toggle__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__Toggle__UxmlFactory(UnityEngine__UIElements__Toggle__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Toggle__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__Toggle__UxmlFactory(UnityEngine__UIElements__Toggle__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__Toggle__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::Toggle,UnityEngine::UIElements::UnityEngine__UIElements__Toggle__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__Toggle__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__Toggle__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__Toggle__UxmlFactory& operator=(UnityEngine__UIElements__Toggle__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__Toggle__UxmlFactory& operator=(UnityEngine__UIElements__Toggle__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__Toggle__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cbd37c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::Toggle);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Toggle, "UnityEngine.UIElements", "Toggle");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__Toggle__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__Toggle__UxmlFactory, "UnityEngine.UIElements", "Toggle/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__Toggle__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__Toggle__UxmlTraits, "UnityEngine.UIElements", "Toggle/UxmlTraits");
