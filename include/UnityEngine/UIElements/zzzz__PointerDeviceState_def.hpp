#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__PointerDeviceState__LocationFlag;
}
namespace UnityEngine::UIElements {
class PointerDeviceState;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__PointerDeviceState__PointerLocation;
}
// Type: ::LocationFlag
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7257))
// CS Name: UnityEngine.UIElements.PointerDeviceState::LocationFlag
struct CORDL_TYPE ____UnityEngine__UIElements__PointerDeviceState__LocationFlag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__PointerDeviceState__LocationFlag(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UIElements__PointerDeviceState__LocationFlag(____UnityEngine__UIElements__PointerDeviceState__LocationFlag const&) = default;
                    constexpr ____UnityEngine__UIElements__PointerDeviceState__LocationFlag(____UnityEngine__UIElements__PointerDeviceState__LocationFlag&&) = default;
                    constexpr ____UnityEngine__UIElements__PointerDeviceState__LocationFlag& operator=(____UnityEngine__UIElements__PointerDeviceState__LocationFlag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__PointerDeviceState__LocationFlag& operator=(____UnityEngine__UIElements__PointerDeviceState__LocationFlag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__PointerDeviceState__LocationFlag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UIElements__PointerDeviceState__LocationFlag_Unwrapped : int32_t {
__None = 0,
__OutsidePanel = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UIElements__PointerDeviceState__LocationFlag_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UIElements__PointerDeviceState__LocationFlag_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__LocationFlag const None;

/// @brief Field OutsidePanel offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__LocationFlag const OutsidePanel;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::PointerLocation
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7258))
// CS Name: UnityEngine.UIElements.PointerDeviceState::PointerLocation
struct CORDL_TYPE ____UnityEngine__UIElements__PointerDeviceState__PointerLocation : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_Panel_k__BackingField", ty: "::UnityEngine::UIElements::IPanel", modifiers: "", def_value: None }, CppParam { name: "_Flags_k__BackingField", ty: "::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__LocationFlag", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__PointerDeviceState__PointerLocation(::UnityEngine::Vector2 _Position_k__BackingField, ::UnityEngine::UIElements::IPanel _Panel_k__BackingField, ::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__LocationFlag _Flags_k__BackingField) noexcept;


                    constexpr ____UnityEngine__UIElements__PointerDeviceState__PointerLocation(____UnityEngine__UIElements__PointerDeviceState__PointerLocation const&) = default;
                    constexpr ____UnityEngine__UIElements__PointerDeviceState__PointerLocation(____UnityEngine__UIElements__PointerDeviceState__PointerLocation&&) = default;
                    constexpr ____UnityEngine__UIElements__PointerDeviceState__PointerLocation& operator=(____UnityEngine__UIElements__PointerDeviceState__PointerLocation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__PointerDeviceState__PointerLocation& operator=(____UnityEngine__UIElements__PointerDeviceState__PointerLocation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__PointerDeviceState__PointerLocation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector2 __declspec(property(get=__get__Position_k__BackingField, put=__set__Position_k__BackingField))  _Position_k__BackingField;

constexpr void __set__Position_k__BackingField(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__Position_k__BackingField() const;

 ::UnityEngine::UIElements::IPanel __declspec(property(get=__get__Panel_k__BackingField, put=__set__Panel_k__BackingField))  _Panel_k__BackingField;

constexpr void __set__Panel_k__BackingField(::UnityEngine::UIElements::IPanel value) ;

constexpr ::UnityEngine::UIElements::IPanel __get__Panel_k__BackingField() const;

 ::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__LocationFlag __declspec(property(get=__get__Flags_k__BackingField, put=__set__Flags_k__BackingField))  _Flags_k__BackingField;

constexpr void __set__Flags_k__BackingField(::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__LocationFlag value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__LocationFlag __get__Flags_k__BackingField() const;


// Properties

 ::UnityEngine::Vector2 __declspec(property(get=get_Position, put=set_Position))  Position;

 ::UnityEngine::UIElements::IPanel __declspec(property(get=get_Panel, put=set_Panel))  Panel;

 ::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__LocationFlag __declspec(property(get=get_Flags, put=set_Flags))  Flags;


// Methods

/// @brief Method get_Position addr 0x2cd3324 size 0x8 virtual false final false
 ::UnityEngine::Vector2 get_Position() ;

/// @brief Method set_Position addr 0x2cd332c size 0x8 virtual false final false
 void set_Position(::UnityEngine::Vector2 value) ;

/// @brief Method get_Panel addr 0x2cd3334 size 0x8 virtual false final false
 ::UnityEngine::UIElements::IPanel get_Panel() ;

/// @brief Method set_Panel addr 0x2cd333c size 0x8 virtual false final false
 void set_Panel(::UnityEngine::UIElements::IPanel value) ;

/// @brief Method get_Flags addr 0x2cd3344 size 0x8 virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__LocationFlag get_Flags() ;

/// @brief Method set_Flags addr 0x2cd334c size 0x8 virtual false final false
 void set_Flags(::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__LocationFlag value) ;

/// @brief Method SetLocation addr 0x2cd2adc size 0x10c virtual false final false
 void SetLocation(::UnityEngine::Vector2 position, ::UnityEngine::UIElements::IPanel panel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::PointerDeviceState
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7259))
// CS Name: UnityEngine.UIElements.PointerDeviceState
class CORDL_TYPE PointerDeviceState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using PointerLocation = ::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__PointerLocation;

using LocationFlag = ::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__LocationFlag;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PointerDeviceState() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerDeviceState", modifiers: " const&", def_value: None }]
constexpr PointerDeviceState(PointerDeviceState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerDeviceState", modifiers: "&&", def_value: None }]
constexpr PointerDeviceState(PointerDeviceState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerDeviceState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PointerDeviceState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerDeviceState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerDeviceState& operator=(PointerDeviceState&& o) noexcept = default;
  constexpr PointerDeviceState& operator=(PointerDeviceState const& o) noexcept = default;
                


// Fields

static ::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__PointerLocation> __declspec(property(get=__get_s_PlayerPointerLocations, put=__set_s_PlayerPointerLocations))  s_PlayerPointerLocations;

static void __set_s_PlayerPointerLocations(::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__PointerLocation> value) ;

static ::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__PointerLocation> __get_s_PlayerPointerLocations() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_s_PressedButtons, put=__set_s_PressedButtons))  s_PressedButtons;

static void __set_s_PressedButtons(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_s_PressedButtons() ;

static ::ArrayW<::UnityEngine::UIElements::IPanel> __declspec(property(get=__get_s_PlayerPanelWithSoftPointerCapture, put=__set_s_PlayerPanelWithSoftPointerCapture))  s_PlayerPanelWithSoftPointerCapture;

static void __set_s_PlayerPanelWithSoftPointerCapture(::ArrayW<::UnityEngine::UIElements::IPanel> value) ;

static ::ArrayW<::UnityEngine::UIElements::IPanel> __get_s_PlayerPanelWithSoftPointerCapture() ;


// Methods

/// @brief Method RemovePanelData addr 0x2cd2900 size 0x1dc virtual false final false
static void RemovePanelData(::UnityEngine::UIElements::IPanel panel) ;

/// @brief Method SavePointerPosition addr 0x2cd2be8 size 0xa8 virtual false final false
static void SavePointerPosition(int32_t pointerId, ::UnityEngine::Vector2 position, ::UnityEngine::UIElements::IPanel panel, ::UnityEngine::UIElements::ContextType contextType) ;

/// @brief Method PressButton addr 0x2cd2c90 size 0xdc virtual false final false
static void PressButton(int32_t pointerId, int32_t buttonId) ;

/// @brief Method ReleaseButton addr 0x2cd2d6c size 0xdc virtual false final false
static void ReleaseButton(int32_t pointerId, int32_t buttonId) ;

/// @brief Method ReleaseAllButtons addr 0x2cd2e48 size 0x7c virtual false final false
static void ReleaseAllButtons(int32_t pointerId) ;

/// @brief Method GetPointerPosition addr 0x2cd1e20 size 0x80 virtual false final false
static ::UnityEngine::Vector2 GetPointerPosition(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType) ;

/// @brief Method GetPanel addr 0x2cd2ec4 size 0x80 virtual false final false
static ::UnityEngine::UIElements::IPanel GetPanel(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType) ;

/// @brief Method HasFlagFast addr 0x2cd2f44 size 0xc virtual false final false
static bool HasFlagFast(::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__LocationFlag flagSet, ::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__LocationFlag flag) ;

/// @brief Method HasLocationFlag addr 0x2cd2f50 size 0x94 virtual false final false
static bool HasLocationFlag(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType, ::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__LocationFlag flag) ;

/// @brief Method GetPressedButtons addr 0x2cd2fe4 size 0x7c virtual false final false
static int32_t GetPressedButtons(int32_t pointerId) ;

/// @brief Method HasAdditionalPressedButtons addr 0x2cd3060 size 0x98 virtual false final false
static bool HasAdditionalPressedButtons(int32_t pointerId, int32_t exceptButtonId) ;

/// @brief Method SetPlayerPanelWithSoftPointerCapture addr 0x2cd30f8 size 0xac virtual false final false
static void SetPlayerPanelWithSoftPointerCapture(int32_t pointerId, ::UnityEngine::UIElements::IPanel panel) ;

/// @brief Method GetPlayerPanelWithSoftPointerCapture addr 0x2cd31a4 size 0x7c virtual false final false
static ::UnityEngine::UIElements::IPanel GetPlayerPanelWithSoftPointerCapture(int32_t pointerId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__LocationFlag, "UnityEngine.UIElements", "PointerDeviceState/LocationFlag");
NEED_NO_BOX(::UnityEngine::UIElements::PointerDeviceState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerDeviceState, "UnityEngine.UIElements", "PointerDeviceState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__PointerDeviceState__PointerLocation, "UnityEngine.UIElements", "PointerDeviceState/PointerLocation");
