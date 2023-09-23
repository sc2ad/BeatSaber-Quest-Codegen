#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Action;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
// Forward declare root types
namespace HMUI {
class HMUI__ToggleBinder____c__DisplayClass7_0;
}
namespace HMUI {
class ToggleBinder;
}
// Type: ::<>c__DisplayClass7_0
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13575))
// CS Name: HMUI.ToggleBinder::<>c__DisplayClass7_0
class CORDL_TYPE HMUI__ToggleBinder____c__DisplayClass7_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HMUI__ToggleBinder____c__DisplayClass7_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ToggleBinder____c__DisplayClass7_0", modifiers: " const&", def_value: None }]
constexpr HMUI__ToggleBinder____c__DisplayClass7_0(HMUI__ToggleBinder____c__DisplayClass7_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ToggleBinder____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
constexpr HMUI__ToggleBinder____c__DisplayClass7_0(HMUI__ToggleBinder____c__DisplayClass7_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ToggleBinder____c__DisplayClass7_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ToggleBinder____c__DisplayClass7_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ToggleBinder____c__DisplayClass7_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ToggleBinder____c__DisplayClass7_0& operator=(HMUI__ToggleBinder____c__DisplayClass7_0&& o) noexcept = default;
  constexpr HMUI__ToggleBinder____c__DisplayClass7_0& operator=(HMUI__ToggleBinder____c__DisplayClass7_0 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_enabled, put=__set_enabled))  enabled;

constexpr void __set_enabled(bool value) ;

constexpr bool __get_enabled() const;

 System::Action __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(System::Action value) ;

constexpr System::Action __get_action() const;


// Methods

// Ctor Parameters []
explicit HMUI__ToggleBinder____c__DisplayClass7_0() ;

/// @brief Method .ctor addr 0x1fa7ef0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AddBinding>b__0 addr 0x1fa8538 size 0x3c virtual false final false
 void _AddBinding_b__0(bool b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::ToggleBinder
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13576))
// CS Name: HMUI.ToggleBinder
class CORDL_TYPE ToggleBinder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass7_0 = HMUI::HMUI__ToggleBinder____c__DisplayClass7_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ToggleBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "ToggleBinder", modifiers: " const&", def_value: None }]
constexpr ToggleBinder(ToggleBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ToggleBinder", modifiers: "&&", def_value: None }]
constexpr ToggleBinder(ToggleBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ToggleBinder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ToggleBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ToggleBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ToggleBinder& operator=(ToggleBinder&& o) noexcept = default;
  constexpr ToggleBinder& operator=(ToggleBinder const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Toggle,UnityEngine::Events::UnityAction_1<bool>>> __declspec(property(get=__get__bindings, put=__set__bindings))  _bindings;

constexpr void __set__bindings(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Toggle,UnityEngine::Events::UnityAction_1<bool>>> value) ;

constexpr System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Toggle,UnityEngine::Events::UnityAction_1<bool>>> __get__bindings() const;

 bool __declspec(property(get=__get__enabled, put=__set__enabled))  _enabled;

constexpr void __set__enabled(bool value) ;

constexpr bool __get__enabled() const;


// Methods

// Ctor Parameters []
explicit ToggleBinder() ;

/// @brief Method .ctor addr 0x1fa7ac4 size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "bindingData", ty: "System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Toggle,System::Action_1<bool>>>", modifiers: "", def_value: None }]
explicit ToggleBinder(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Toggle,System::Action_1<bool>>> bindingData) ;

/// @brief Method .ctor addr 0x1fa7b5c size 0x3c virtual false final false
 void _ctor(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Toggle,System::Action_1<bool>>> bindingData) ;

/// @brief Method Init addr 0x1fa7ae8 size 0x74 virtual false final false
 void Init() ;

/// @brief Method AddBindings addr 0x1fa7b98 size 0x164 virtual false final false
 void AddBindings(System::Collections::Generic::List_1<System::Tuple_2<UnityEngine::UI::Toggle,System::Action_1<bool>>> bindingData) ;

/// @brief Method AddBinding addr 0x1fa7cfc size 0xd8 virtual false final false
 void AddBinding(UnityEngine::UI::Toggle toggle, System::Action_1<bool> action) ;

/// @brief Method AddBinding addr 0x1fa7dd4 size 0x11c virtual false final false
 void AddBinding(UnityEngine::UI::Toggle toggle, bool enabled, System::Action action) ;

/// @brief Method ClearBindings addr 0x1fa7ef8 size 0x234 virtual false final false
 void ClearBindings() ;

/// @brief Method Disable addr 0x1fa812c size 0x204 virtual false final false
 void Disable() ;

/// @brief Method Enable addr 0x1fa8330 size 0x208 virtual false final false
 void Enable() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::HMUI__ToggleBinder____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ToggleBinder____c__DisplayClass7_0, "HMUI", "ToggleBinder/<>c__DisplayClass7_0");
NEED_NO_BOX(HMUI::ToggleBinder);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ToggleBinder, "HMUI", "ToggleBinder");
