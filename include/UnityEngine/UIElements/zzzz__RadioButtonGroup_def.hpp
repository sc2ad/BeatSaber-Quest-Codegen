#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
template<typename T>
class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
class IGroupBox;
}
namespace UnityEngine::UIElements {
class RadioButton;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
template<typename TEventType>
class EventCallback_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RadioButtonGroup;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7079)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7229), inst: 885 }), TypeDefinitionIndex(TypeDefinitionIndex(7229))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7232))
// CS Name: UnityEngine.UIElements.RadioButtonGroup::UxmlTraits
class CORDL_TYPE ____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits : public ::UnityEngine::UIElements::BaseFieldTraits_2<int32_t,::UnityEngine::UIElements::UxmlIntAttributeDescription> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits(____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits(____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits(void* ptr) noexcept : ::UnityEngine::UIElements::BaseFieldTraits_2<int32_t,::UnityEngine::UIElements::UxmlIntAttributeDescription>(ptr) {
}


  constexpr ____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits& operator=(____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits& operator=(____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Choices, put=__set_m_Choices))  m_Choices;

constexpr void __set_m_Choices(::UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Choices() const;


// Methods

/// @brief Method Init addr 0x2cc601c size 0x134 virtual true final false
 void Init(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cc6150 size 0xa0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::RadioButtonGroup
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7228)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7228), inst: 92 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7233))
// CS Name: UnityEngine.UIElements.RadioButtonGroup
class CORDL_TYPE RadioButtonGroup : public ::UnityEngine::UIElements::BaseField_1<int32_t> {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory;

/// @brief Convert operator to ::UnityEngine::UIElements::IGroupBox
constexpr operator  ::UnityEngine::UIElements::IGroupBox() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x420};

virtual ~RadioButtonGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup", modifiers: " const&", def_value: None }]
constexpr RadioButtonGroup(RadioButtonGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroup", modifiers: "&&", def_value: None }]
constexpr RadioButtonGroup(RadioButtonGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RadioButtonGroup(void* ptr) noexcept : ::UnityEngine::UIElements::BaseField_1<int32_t>(ptr) {
}


  constexpr RadioButtonGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RadioButtonGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RadioButtonGroup& operator=(RadioButtonGroup&& o) noexcept = default;
  constexpr RadioButtonGroup& operator=(RadioButtonGroup const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

 ::System::Collections::Generic::IEnumerable_1<::StringW> __declspec(property(get=__get_m_Choices, put=__set_m_Choices))  m_Choices;

constexpr void __set_m_Choices(::System::Collections::Generic::IEnumerable_1<::StringW> value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW> __get_m_Choices() const;

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton> __declspec(property(get=__get_m_RadioButtons, put=__set_m_RadioButtons))  m_RadioButtons;

constexpr void __set_m_RadioButtons(::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::RadioButton> __get_m_RadioButtons() const;

 ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>> __declspec(property(get=__get_m_RadioButtonValueChangedCallback, put=__set_m_RadioButtonValueChangedCallback))  m_RadioButtonValueChangedCallback;

constexpr void __set_m_RadioButtonValueChangedCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>> value) ;

constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>> __get_m_RadioButtonValueChangedCallback() const;


// Properties

 ::System::Collections::Generic::IEnumerable_1<::StringW> __declspec(property(put=set_choices))  choices;


// Methods

/// @brief Method set_choices addr 0x2cc54cc size 0x59c virtual false final false
 void set_choices(::System::Collections::Generic::IEnumerable_1<::StringW> value) ;

// Ctor Parameters []
explicit RadioButtonGroup() ;

/// @brief Method .ctor addr 0x2cc5c54 size 0xc virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "radioButtonChoices", ty: "::System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: None }]
explicit RadioButtonGroup(::StringW label, ::System::Collections::Generic::List_1<::StringW> radioButtonChoices) ;

/// @brief Method .ctor addr 0x2cc5c60 size 0x1b8 virtual false final false
 void _ctor(::StringW label, ::System::Collections::Generic::List_1<::StringW> radioButtonChoices) ;

/// @brief Method RadioButtonValueChangedCallback addr 0x2cc5e18 size 0xe4 virtual false final false
 void RadioButtonValueChangedCallback(::UnityEngine::UIElements::ChangeEvent_1<bool> evt) ;

/// @brief Method SetValueWithoutNotify addr 0x2cc5f14 size 0x60 virtual true final false
 void SetValueWithoutNotify(int32_t newValue) ;

/// @brief Method UpdateRadioButtons addr 0x2cc5a68 size 0x1ec virtual false final false
 void UpdateRadioButtons() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5099 }), TypeDefinitionIndex(TypeDefinitionIndex(7233)), TypeDefinitionIndex(TypeDefinitionIndex(7232)), TypeDefinitionIndex(TypeDefinitionIndex(7089))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7231))
// CS Name: UnityEngine.UIElements.RadioButtonGroup::UxmlFactory
class CORDL_TYPE ____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RadioButtonGroup,::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory(____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory(____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory(void* ptr) noexcept : ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RadioButtonGroup,::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits>(ptr) {
}


  constexpr ____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory& operator=(____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory& operator=(____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cc5fd4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::RadioButtonGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RadioButtonGroup, "UnityEngine.UIElements", "RadioButtonGroup");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlFactory, "UnityEngine.UIElements", "RadioButtonGroup/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__RadioButtonGroup__UxmlTraits, "UnityEngine.UIElements", "RadioButtonGroup/UxmlTraits");
