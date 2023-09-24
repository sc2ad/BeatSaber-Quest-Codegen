#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
template<typename T>
class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
class Toggle;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__Foldout__UxmlTraits;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__Foldout__UxmlFactory;
}
namespace UnityEngine::UIElements {
template<typename T>
class INotifyValueChanged_1;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Foldout;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__Foldout__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__Foldout__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6885))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7184))
// CS Name: UnityEngine.UIElements.Foldout::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__Foldout__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~UnityEngine__UIElements__Foldout__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Foldout__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__Foldout__UxmlTraits(UnityEngine__UIElements__Foldout__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Foldout__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__Foldout__UxmlTraits(UnityEngine__UIElements__Foldout__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__Foldout__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits(ptr) {
}


  constexpr UnityEngine__UIElements__Foldout__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__Foldout__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__Foldout__UxmlTraits& operator=(UnityEngine__UIElements__Foldout__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__Foldout__UxmlTraits& operator=(UnityEngine__UIElements__Foldout__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Text() const;

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_Value() const;


// Methods

/// @brief Method Init addr 0x2cbcbbc size 0x130 virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

static UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits New_ctor() ;

/// @brief Method .ctor addr 0x2cbccec size 0xec virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::Foldout
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6886))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7185))
// CS Name: UnityEngine.UIElements.Foldout
class CORDL_TYPE Foldout : public UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlFactory;

/// @brief Convert operator to UnityEngine::UIElements::INotifyValueChanged_1<bool>
constexpr operator  UnityEngine::UIElements::INotifyValueChanged_1<bool>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x3d8};

virtual ~Foldout() = default;

// Ctor Parameters [CppParam { name: "", ty: "Foldout", modifiers: " const&", def_value: None }]
constexpr Foldout(Foldout const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Foldout", modifiers: "&&", def_value: None }]
constexpr Foldout(Foldout&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Foldout(void* ptr) noexcept : UnityEngine::UIElements::BindableElement(ptr) {
}


  constexpr Foldout& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Foldout& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Foldout& operator=(Foldout&& o) noexcept = default;
  constexpr Foldout& operator=(Foldout const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::Toggle __declspec(property(get=__get_m_Toggle, put=__set_m_Toggle))  m_Toggle;

constexpr void __set_m_Toggle(UnityEngine::UIElements::Toggle value) ;

constexpr UnityEngine::UIElements::Toggle __get_m_Toggle() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_Container, put=__set_m_Container))  m_Container;

constexpr void __set_m_Container(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_m_Container() const;

 bool __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(bool value) ;

constexpr bool __get_m_Value() const;

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_toggleUssClassName, put=__set_toggleUssClassName))  toggleUssClassName;

static void __set_toggleUssClassName(::StringW value) ;

static ::StringW __get_toggleUssClassName() ;

static ::StringW __declspec(property(get=__get_contentUssClassName, put=__set_contentUssClassName))  contentUssClassName;

static void __set_contentUssClassName(::StringW value) ;

static ::StringW __get_contentUssClassName() ;

static ::StringW __declspec(property(get=__get_inputUssClassName, put=__set_inputUssClassName))  inputUssClassName;

static void __set_inputUssClassName(::StringW value) ;

static ::StringW __get_inputUssClassName() ;

static ::StringW __declspec(property(get=__get_checkmarkUssClassName, put=__set_checkmarkUssClassName))  checkmarkUssClassName;

static void __set_checkmarkUssClassName(::StringW value) ;

static ::StringW __get_checkmarkUssClassName() ;

static ::StringW __declspec(property(get=__get_textUssClassName, put=__set_textUssClassName))  textUssClassName;

static void __set_textUssClassName(::StringW value) ;

static ::StringW __get_textUssClassName() ;

static ::StringW __declspec(property(get=__get_ussFoldoutDepthClassName, put=__set_ussFoldoutDepthClassName))  ussFoldoutDepthClassName;

static void __set_ussFoldoutDepthClassName(::StringW value) ;

static ::StringW __get_ussFoldoutDepthClassName() ;

static int32_t __declspec(property(get=__get_ussFoldoutMaxDepth, put=__set_ussFoldoutMaxDepth))  ussFoldoutMaxDepth;

static void __set_ussFoldoutMaxDepth(int32_t value) ;

static int32_t __get_ussFoldoutMaxDepth() ;


// Properties

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_contentContainer))  contentContainer;

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

 bool __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method get_contentContainer addr 0x2cbc430 size 0x8 virtual true final false
 UnityEngine::UIElements::VisualElement get_contentContainer() ;

/// @brief Method get_text addr 0x2cbc438 size 0x34 virtual false final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x2cb5b78 size 0x124 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method get_value addr 0x2cbc46c size 0x8 virtual true final true
 bool get_value() ;

/// @brief Method set_value addr 0x2cbc474 size 0x1e0 virtual true final true
 void set_value(bool value) ;

/// @brief Method SetValueWithoutNotify addr 0x2cbc654 size 0x120 virtual true final true
 void SetValueWithoutNotify(bool newValue) ;

/// @brief Method OnViewDataReady addr 0x2cbc774 size 0x40 virtual true final false
 void OnViewDataReady() ;

static UnityEngine::UIElements::Foldout New_ctor() ;

/// @brief Method .ctor addr 0x2cb5848 size 0x330 virtual false final false
 void _ctor() ;

/// @brief Method OnAttachToPanel addr 0x2cbc7bc size 0x1c0 virtual false final false
 void OnAttachToPanel(UnityEngine::UIElements::AttachToPanelEvent evt) ;

/// @brief Method <.ctor>b__23_0 addr 0x2cbcb24 size 0x50 virtual false final false
 void __ctor_b__23_0(UnityEngine::UIElements::ChangeEvent_1<bool> evt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7184)), TypeDefinitionIndex(TypeDefinitionIndex(7089)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5087 }), TypeDefinitionIndex(TypeDefinitionIndex(7185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7183))
// CS Name: UnityEngine.UIElements.Foldout::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__Foldout__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::Foldout,UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__Foldout__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Foldout__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__Foldout__UxmlFactory(UnityEngine__UIElements__Foldout__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Foldout__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__Foldout__UxmlFactory(UnityEngine__UIElements__Foldout__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__Foldout__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::Foldout,UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__Foldout__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__Foldout__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__Foldout__UxmlFactory& operator=(UnityEngine__UIElements__Foldout__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__Foldout__UxmlFactory& operator=(UnityEngine__UIElements__Foldout__UxmlFactory const& o) noexcept = default;
                


// Methods

static UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlFactory New_ctor() ;

/// @brief Method .ctor addr 0x2cbcb74 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::Foldout);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Foldout, "UnityEngine.UIElements", "Foldout");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlFactory, "UnityEngine.UIElements", "Foldout/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__Foldout__UxmlTraits, "UnityEngine.UIElements", "Foldout/UxmlTraits");
