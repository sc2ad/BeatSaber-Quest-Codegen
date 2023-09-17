#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class Button;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ButtonStripField;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__ButtonStripField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__ButtonStripField__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7227), inst: 92 }), TypeDefinitionIndex(TypeDefinitionIndex(7227))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7201))
// CS Name: UnityEngine.UIElements.ButtonStripField::UxmlTraits
class CORDL_TYPE ____UnityEngine__UIElements__ButtonStripField__UxmlTraits : public ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseField_1__UxmlTraits<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____UnityEngine__UIElements__ButtonStripField__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__ButtonStripField__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__ButtonStripField__UxmlTraits(____UnityEngine__UIElements__ButtonStripField__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__ButtonStripField__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__ButtonStripField__UxmlTraits(____UnityEngine__UIElements__ButtonStripField__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__ButtonStripField__UxmlTraits(void* ptr) noexcept : ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseField_1__UxmlTraits<int32_t>(ptr) {
}


  constexpr ____UnityEngine__UIElements__ButtonStripField__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__ButtonStripField__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__ButtonStripField__UxmlTraits& operator=(____UnityEngine__UIElements__ButtonStripField__UxmlTraits&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__ButtonStripField__UxmlTraits& operator=(____UnityEngine__UIElements__ButtonStripField__UxmlTraits const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__ButtonStripField__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cbdb1c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ButtonStripField
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7228)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7228), inst: 92 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7202))
// CS Name: UnityEngine.UIElements.ButtonStripField
class CORDL_TYPE ButtonStripField : public ::UnityEngine::UIElements::BaseField_1<int32_t> {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::____UnityEngine__UIElements__ButtonStripField__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::____UnityEngine__UIElements__ButtonStripField__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x410};

virtual ~ButtonStripField() = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonStripField", modifiers: " const&", def_value: None }]
constexpr ButtonStripField(ButtonStripField const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonStripField", modifiers: "&&", def_value: None }]
constexpr ButtonStripField(ButtonStripField&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ButtonStripField(void* ptr) noexcept : ::UnityEngine::UIElements::BaseField_1<int32_t>(ptr) {
}


  constexpr ButtonStripField& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ButtonStripField& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ButtonStripField& operator=(ButtonStripField&& o) noexcept = default;
  constexpr ButtonStripField& operator=(ButtonStripField const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button> __declspec(property(get=__get_m_Buttons, put=__set_m_Buttons))  m_Buttons;

constexpr void __set_m_Buttons(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button> __get_m_Buttons() const;


// Properties

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button> __declspec(property(get=get_buttons))  buttons;


// Methods

/// @brief Method get_buttons addr 0x2cbd7b8 size 0xf4 virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button> get_buttons() ;

// Ctor Parameters []
explicit ButtonStripField() ;

/// @brief Method .ctor addr 0x2cbd8ac size 0xc0 virtual false final false
 void _ctor() ;

/// @brief Method SetValueWithoutNotify addr 0x2cbd96c size 0x88 virtual true final false
 void SetValueWithoutNotify(int32_t newValue) ;

/// @brief Method RefreshButtonsState addr 0x2cbd9f4 size 0xe0 virtual false final false
 void RefreshButtonsState() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7202)), TypeDefinitionIndex(TypeDefinitionIndex(7201)), TypeDefinitionIndex(TypeDefinitionIndex(7089)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5085 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7200))
// CS Name: UnityEngine.UIElements.ButtonStripField::UxmlFactory
class CORDL_TYPE ____UnityEngine__UIElements__ButtonStripField__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ButtonStripField,::UnityEngine::UIElements::____UnityEngine__UIElements__ButtonStripField__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__UIElements__ButtonStripField__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__ButtonStripField__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__ButtonStripField__UxmlFactory(____UnityEngine__UIElements__ButtonStripField__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__ButtonStripField__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__ButtonStripField__UxmlFactory(____UnityEngine__UIElements__ButtonStripField__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__ButtonStripField__UxmlFactory(void* ptr) noexcept : ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ButtonStripField,::UnityEngine::UIElements::____UnityEngine__UIElements__ButtonStripField__UxmlTraits>(ptr) {
}


  constexpr ____UnityEngine__UIElements__ButtonStripField__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__ButtonStripField__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__ButtonStripField__UxmlFactory& operator=(____UnityEngine__UIElements__ButtonStripField__UxmlFactory&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__ButtonStripField__UxmlFactory& operator=(____UnityEngine__UIElements__ButtonStripField__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__ButtonStripField__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cbdad4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::ButtonStripField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ButtonStripField, "UnityEngine.UIElements", "ButtonStripField");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__ButtonStripField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__ButtonStripField__UxmlFactory, "UnityEngine.UIElements", "ButtonStripField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__ButtonStripField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__ButtonStripField__UxmlTraits, "UnityEngine.UIElements", "ButtonStripField/UxmlTraits");
