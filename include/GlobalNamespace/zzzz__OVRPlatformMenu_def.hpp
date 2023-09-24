#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlatformMenu__eBackButtonAction;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlatformMenu__eHandler;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__RawButton;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlatformMenu__eBackButtonAction;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlatformMenu__eHandler;
}
namespace GlobalNamespace {
class OVRPlatformMenu;
}
// Type: ::eHandler
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8575))
// CS Name: OVRPlatformMenu::eHandler
struct CORDL_TYPE GlobalNamespace__OVRPlatformMenu__eHandler : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRPlatformMenu__eHandler(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRPlatformMenu__eHandler(GlobalNamespace__OVRPlatformMenu__eHandler const&) = default;
                    constexpr GlobalNamespace__OVRPlatformMenu__eHandler(GlobalNamespace__OVRPlatformMenu__eHandler&&) = default;
                    constexpr GlobalNamespace__OVRPlatformMenu__eHandler& operator=(GlobalNamespace__OVRPlatformMenu__eHandler const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRPlatformMenu__eHandler& operator=(GlobalNamespace__OVRPlatformMenu__eHandler&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRPlatformMenu__eHandler(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRPlatformMenu__eHandler_Unwrapped : int32_t {
__ShowConfirmQuit = 0,
__RetreatOneLevel = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRPlatformMenu__eHandler_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRPlatformMenu__eHandler_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ShowConfirmQuit offset 0
static GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler const ShowConfirmQuit;

/// @brief Field RetreatOneLevel offset 0
static GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler const RetreatOneLevel;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::eBackButtonAction
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8576))
// CS Name: OVRPlatformMenu::eBackButtonAction
struct CORDL_TYPE GlobalNamespace__OVRPlatformMenu__eBackButtonAction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRPlatformMenu__eBackButtonAction(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRPlatformMenu__eBackButtonAction(GlobalNamespace__OVRPlatformMenu__eBackButtonAction const&) = default;
                    constexpr GlobalNamespace__OVRPlatformMenu__eBackButtonAction(GlobalNamespace__OVRPlatformMenu__eBackButtonAction&&) = default;
                    constexpr GlobalNamespace__OVRPlatformMenu__eBackButtonAction& operator=(GlobalNamespace__OVRPlatformMenu__eBackButtonAction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRPlatformMenu__eBackButtonAction& operator=(GlobalNamespace__OVRPlatformMenu__eBackButtonAction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRPlatformMenu__eBackButtonAction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRPlatformMenu__eBackButtonAction_Unwrapped : int32_t {
__NONE = 0,
__SHORT_PRESS = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRPlatformMenu__eBackButtonAction_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRPlatformMenu__eBackButtonAction_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NONE offset 0
static GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eBackButtonAction const NONE;

/// @brief Field SHORT_PRESS offset 0
static GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eBackButtonAction const SHORT_PRESS;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRPlatformMenu
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8577))
// CS Name: OVRPlatformMenu
class CORDL_TYPE OVRPlatformMenu : public UnityEngine::MonoBehaviour {
public:
// Declarations
using eBackButtonAction = GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eBackButtonAction;

using eHandler = GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~OVRPlatformMenu() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlatformMenu", modifiers: " const&", def_value: None }]
constexpr OVRPlatformMenu(OVRPlatformMenu const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlatformMenu", modifiers: "&&", def_value: None }]
constexpr OVRPlatformMenu(OVRPlatformMenu&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRPlatformMenu(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRPlatformMenu& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRPlatformMenu& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRPlatformMenu& operator=(OVRPlatformMenu&& o) noexcept = default;
  constexpr OVRPlatformMenu& operator=(OVRPlatformMenu const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_inputCode, put=__set_inputCode))  inputCode;

constexpr void __set_inputCode(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_inputCode() const;

 GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler __declspec(property(get=__get_shortPressHandler, put=__set_shortPressHandler))  shortPressHandler;

constexpr void __set_shortPressHandler(GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler __get_shortPressHandler() const;

 System::Func_1<bool> __declspec(property(get=__get_OnShortPress, put=__set_OnShortPress))  OnShortPress;

constexpr void __set_OnShortPress(System::Func_1<bool> value) ;

constexpr System::Func_1<bool> __get_OnShortPress() const;

static System::Collections::Generic::Stack_1<::StringW> __declspec(property(get=__get_sceneStack, put=__set_sceneStack))  sceneStack;

static void __set_sceneStack(System::Collections::Generic::Stack_1<::StringW> value) ;

static System::Collections::Generic::Stack_1<::StringW> __get_sceneStack() ;


// Methods

/// @brief Method HandleBackButtonState addr 0x25dcd14 size 0x68 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eBackButtonAction HandleBackButtonState() ;

/// @brief Method Awake addr 0x25dcd7c size 0x170 virtual false final false
 void Awake() ;

/// @brief Method ShowConfirmQuitMenu addr 0x25dceec size 0xd4 virtual false final false
 void ShowConfirmQuitMenu() ;

/// @brief Method RetreatOneLevel addr 0x25dcfc0 size 0xf8 virtual false final false
static bool RetreatOneLevel() ;

/// @brief Method Update addr 0x25dd0b8 size 0x40 virtual false final false
 void Update() ;

static GlobalNamespace::OVRPlatformMenu New_ctor() ;

/// @brief Method .ctor addr 0x25dd0f8 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eBackButtonAction, "", "OVRPlatformMenu/eBackButtonAction");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRPlatformMenu__eHandler, "", "OVRPlatformMenu/eHandler");
NEED_NO_BOX(GlobalNamespace::OVRPlatformMenu);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlatformMenu, "", "OVRPlatformMenu");
