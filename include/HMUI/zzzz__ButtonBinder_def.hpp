#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine::Events {
class UnityAction;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace HMUI {
class ButtonBinder;
}
// Type: HMUI::ButtonBinder
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13565))
// CS Name: HMUI.ButtonBinder
class CORDL_TYPE ButtonBinder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ButtonBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonBinder", modifiers: " const&", def_value: None }]
constexpr ButtonBinder(ButtonBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ButtonBinder", modifiers: "&&", def_value: None }]
constexpr ButtonBinder(ButtonBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ButtonBinder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ButtonBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ButtonBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ButtonBinder& operator=(ButtonBinder&& o) noexcept = default;
  constexpr ButtonBinder& operator=(ButtonBinder const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button,::UnityEngine::Events::UnityAction>> __declspec(property(get=__get__bindings, put=__set__bindings))  _bindings;

constexpr void __set__bindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button,::UnityEngine::Events::UnityAction>> value) ;

constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button,::UnityEngine::Events::UnityAction>> __get__bindings() const;


// Methods

// Ctor Parameters []
explicit ButtonBinder() ;

/// @brief Method .ctor addr 0x1fa591c size 0x1c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "button", ty: "::UnityEngine::UI::Button", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Action", modifiers: "", def_value: None }]
explicit ButtonBinder(::UnityEngine::UI::Button button, ::System::Action action) ;

/// @brief Method .ctor addr 0x1fa59ac size 0x3c virtual false final false
 void _ctor(::UnityEngine::UI::Button button, ::System::Action action) ;

// Ctor Parameters [CppParam { name: "bindingData", ty: "::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button,::System::Action>>", modifiers: "", def_value: None }]
explicit ButtonBinder(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button,::System::Action>> bindingData) ;

/// @brief Method .ctor addr 0x1fa5aac size 0x34 virtual false final false
 void _ctor(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button,::System::Action>> bindingData) ;

/// @brief Method Init addr 0x1fa5938 size 0x74 virtual false final false
 void Init() ;

/// @brief Method AddBindings addr 0x1fa5ae0 size 0x164 virtual false final false
 void AddBindings(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::UI::Button,::System::Action>> bindingData) ;

/// @brief Method AddBinding addr 0x1fa59e8 size 0xc4 virtual false final false
 void AddBinding(::UnityEngine::UI::Button button, ::System::Action action) ;

/// @brief Method ClearBindings addr 0x1fa5c44 size 0x220 virtual false final false
 void ClearBindings() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::ButtonBinder);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ButtonBinder, "HMUI", "ButtonBinder");
