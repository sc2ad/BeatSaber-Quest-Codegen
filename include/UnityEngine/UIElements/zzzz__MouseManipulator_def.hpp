#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__Manipulator_def.hpp"
namespace {
namespace UnityEngine::UIElements {
class IMouseEvent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct ManipulatorActivationFilter;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseManipulator;
}
// Type: UnityEngine.UIElements::MouseManipulator
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6991))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6877))
// CS Name: UnityEngine.UIElements.MouseManipulator
class CORDL_TYPE MouseManipulator : public ::UnityEngine::UIElements::Manipulator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MouseManipulator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseManipulator", modifiers: " const&", def_value: None }]
constexpr MouseManipulator(MouseManipulator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseManipulator", modifiers: "&&", def_value: None }]
constexpr MouseManipulator(MouseManipulator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseManipulator(void* ptr) noexcept : ::UnityEngine::UIElements::Manipulator(ptr) {
}


  constexpr MouseManipulator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseManipulator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseManipulator& operator=(MouseManipulator&& o) noexcept = default;
  constexpr MouseManipulator& operator=(MouseManipulator const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter> __declspec(property(get=__get__activators_k__BackingField, put=__set__activators_k__BackingField))  _activators_k__BackingField;

constexpr void __set__activators_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter> __get__activators_k__BackingField() const;

 ::UnityEngine::UIElements::ManipulatorActivationFilter __declspec(property(get=__get_m_currentActivator, put=__set_m_currentActivator))  m_currentActivator;

constexpr void __set_m_currentActivator(::UnityEngine::UIElements::ManipulatorActivationFilter value) ;

constexpr ::UnityEngine::UIElements::ManipulatorActivationFilter __get_m_currentActivator() const;


// Properties

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter> __declspec(property(get=get_activators, put=set_activators))  activators;


// Methods

/// @brief Method get_activators addr 0x2c42228 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter> get_activators() ;

/// @brief Method set_activators addr 0x2c42230 size 0x8 virtual false final false
 void set_activators(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ManipulatorActivationFilter> value) ;

// Ctor Parameters []
explicit MouseManipulator() ;

/// @brief Method .ctor addr 0x2c42238 size 0x80 virtual false final false
 void _ctor() ;

/// @brief Method CanStartManipulation addr 0x2c422b8 size 0x17c virtual false final false
 bool CanStartManipulation(::UnityEngine::UIElements::IMouseEvent e) ;

/// @brief Method CanStopManipulation addr 0x2c42434 size 0xb8 virtual false final false
 bool CanStopManipulation(::UnityEngine::UIElements::IMouseEvent e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::MouseManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseManipulator, "UnityEngine.UIElements", "MouseManipulator");
