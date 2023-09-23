#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__Manipulator_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class NavigationMoveEvent;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class NavigationCancelEvent;
}
namespace UnityEngine::UIElements {
struct KeyboardNavigationOperation;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyboardNavigationManipulator;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0;
}
// Type: ::<>c__DisplayClass5_0
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6914))
// CS Name: UnityEngine.UIElements.KeyboardNavigationManipulator::<>c__DisplayClass5_0
struct CORDL_TYPE UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "evt", ty: "UnityEngine::UIElements::KeyDownEvent", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0(UnityEngine::UIElements::KeyDownEvent evt) noexcept;


                    constexpr UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0(UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0 const&) = default;
                    constexpr UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0(UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0&&) = default;
                    constexpr UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0& operator=(UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0& operator=(UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::KeyDownEvent __declspec(property(get=__get_evt, put=__set_evt))  evt;

constexpr void __set_evt(UnityEngine::UIElements::KeyDownEvent value) ;

constexpr UnityEngine::UIElements::KeyDownEvent __get_evt() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<>c__DisplayClass6_0
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6915))
// CS Name: UnityEngine.UIElements.KeyboardNavigationManipulator::<>c__DisplayClass6_0
struct CORDL_TYPE UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "evt", ty: "UnityEngine::UIElements::KeyDownEvent", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0(UnityEngine::UIElements::KeyDownEvent evt) noexcept;


                    constexpr UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0(UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0 const&) = default;
                    constexpr UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0(UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0&&) = default;
                    constexpr UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0& operator=(UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0& operator=(UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::KeyDownEvent __declspec(property(get=__get_evt, put=__set_evt))  evt;

constexpr void __set_evt(UnityEngine::UIElements::KeyDownEvent value) ;

constexpr UnityEngine::UIElements::KeyDownEvent __get_evt() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::KeyboardNavigationManipulator
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6991))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6916))
// CS Name: UnityEngine.UIElements.KeyboardNavigationManipulator
class CORDL_TYPE KeyboardNavigationManipulator : public UnityEngine::UIElements::Manipulator {
public:
// Declarations
using __c__DisplayClass6_0 = UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0;

using __c__DisplayClass5_0 = UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~KeyboardNavigationManipulator() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardNavigationManipulator", modifiers: " const&", def_value: None }]
constexpr KeyboardNavigationManipulator(KeyboardNavigationManipulator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardNavigationManipulator", modifiers: "&&", def_value: None }]
constexpr KeyboardNavigationManipulator(KeyboardNavigationManipulator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyboardNavigationManipulator(void* ptr) noexcept : UnityEngine::UIElements::Manipulator(ptr) {
}


  constexpr KeyboardNavigationManipulator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyboardNavigationManipulator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyboardNavigationManipulator& operator=(KeyboardNavigationManipulator&& o) noexcept = default;
  constexpr KeyboardNavigationManipulator& operator=(KeyboardNavigationManipulator const& o) noexcept = default;
                


// Fields

 System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase> __declspec(property(get=__get_m_Action, put=__set_m_Action))  m_Action;

constexpr void __set_m_Action(System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase> value) ;

constexpr System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase> __get_m_Action() const;


// Methods

// Ctor Parameters [CppParam { name: "action", ty: "System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase>", modifiers: "", def_value: None }]
explicit KeyboardNavigationManipulator(System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase> action) ;

/// @brief Method .ctor addr 0x2c4af1c size 0x28 virtual false final false
 void _ctor(System::Action_2<UnityEngine::UIElements::KeyboardNavigationOperation,UnityEngine::UIElements::EventBase> action) ;

/// @brief Method RegisterCallbacksOnTarget addr 0x2c4af44 size 0x254 virtual true final false
 void RegisterCallbacksOnTarget() ;

/// @brief Method UnregisterCallbacksFromTarget addr 0x2c4b198 size 0x254 virtual true final false
 void UnregisterCallbacksFromTarget() ;

/// @brief Method OnKeyDown addr 0x2c4b3ec size 0xe8 virtual false final false
 void OnKeyDown(UnityEngine::UIElements::KeyDownEvent evt) ;

/// @brief Method OnRuntimeKeyDown addr 0x2c4b520 size 0x4c virtual false final false
 void OnRuntimeKeyDown(UnityEngine::UIElements::KeyDownEvent evt) ;

/// @brief Method OnEditorKeyDown addr 0x2c4b4d4 size 0x4c virtual false final false
 void OnEditorKeyDown(UnityEngine::UIElements::KeyDownEvent evt) ;

/// @brief Method OnNavigationCancel addr 0x2c4b73c size 0x24 virtual false final false
 void OnNavigationCancel(UnityEngine::UIElements::NavigationCancelEvent evt) ;

/// @brief Method OnNavigationSubmit addr 0x2c4b760 size 0x24 virtual false final false
 void OnNavigationSubmit(UnityEngine::UIElements::NavigationSubmitEvent evt) ;

/// @brief Method OnNavigationMove addr 0x2c4b784 size 0x68 virtual false final false
 void OnNavigationMove(UnityEngine::UIElements::NavigationMoveEvent evt) ;

/// @brief Method Invoke addr 0x2c4b628 size 0x20 virtual false final false
 void Invoke(UnityEngine::UIElements::KeyboardNavigationOperation operation, UnityEngine::UIElements::EventBase evt) ;

/// @brief Method <OnRuntimeKeyDown>g__GetOperation|5_0 addr 0x2c4b56c size 0xbc virtual false final false
static UnityEngine::UIElements::KeyboardNavigationOperation _OnRuntimeKeyDown_g__GetOperation_5_0(ByRef<UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0> ) ;

/// @brief Method <OnEditorKeyDown>g__GetOperation|6_0 addr 0x2c4b648 size 0xf4 virtual false final false
static UnityEngine::UIElements::KeyboardNavigationOperation _OnEditorKeyDown_g__GetOperation_6_0(ByRef<UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0> ) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::KeyboardNavigationManipulator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::KeyboardNavigationManipulator, "UnityEngine.UIElements", "KeyboardNavigationManipulator");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass5_0, "UnityEngine.UIElements", "KeyboardNavigationManipulator/<>c__DisplayClass5_0");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__KeyboardNavigationManipulator____c__DisplayClass6_0, "UnityEngine.UIElements", "KeyboardNavigationManipulator/<>c__DisplayClass6_0");
