#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__Navigation__Mode;
}
// Forward declare root types
namespace UnityEngine::UI {
struct UnityEngine__UI__Navigation__Mode;
}
namespace UnityEngine::UI {
struct Navigation;
}
// Type: ::Mode
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13043))
// CS Name: UnityEngine.UI.Navigation::Mode
struct CORDL_TYPE UnityEngine__UI__Navigation__Mode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__Navigation__Mode(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__Navigation__Mode(UnityEngine__UI__Navigation__Mode const&) = default;
                    constexpr UnityEngine__UI__Navigation__Mode(UnityEngine__UI__Navigation__Mode&&) = default;
                    constexpr UnityEngine__UI__Navigation__Mode& operator=(UnityEngine__UI__Navigation__Mode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__Navigation__Mode& operator=(UnityEngine__UI__Navigation__Mode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Navigation__Mode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__Navigation__Mode_Unwrapped : int32_t {
__None = 0,
__Horizontal = 1,
__Vertical = 2,
__Automatic = 3,
__Explicit = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__Navigation__Mode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__Navigation__Mode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UI::UnityEngine__UI__Navigation__Mode const None;

/// @brief Field Horizontal offset 0
static UnityEngine::UI::UnityEngine__UI__Navigation__Mode const Horizontal;

/// @brief Field Vertical offset 0
static UnityEngine::UI::UnityEngine__UI__Navigation__Mode const Vertical;

/// @brief Field Automatic offset 0
static UnityEngine::UI::UnityEngine__UI__Navigation__Mode const Automatic;

/// @brief Field Explicit offset 0
static UnityEngine::UI::UnityEngine__UI__Navigation__Mode const Explicit;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::Navigation
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13044))
// CS Name: UnityEngine.UI.Navigation
struct CORDL_TYPE Navigation : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Mode = UnityEngine::UI::UnityEngine__UI__Navigation__Mode;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::UI::Navigation>
constexpr operator  System::IEquatable_1<UnityEngine::UI::Navigation>() const;

// Ctor Parameters [CppParam { name: "m_Mode", ty: "UnityEngine::UI::UnityEngine__UI__Navigation__Mode", modifiers: "", def_value: None }, CppParam { name: "m_WrapAround", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_SelectOnUp", ty: "UnityEngine::UI::Selectable", modifiers: "", def_value: None }, CppParam { name: "m_SelectOnDown", ty: "UnityEngine::UI::Selectable", modifiers: "", def_value: None }, CppParam { name: "m_SelectOnLeft", ty: "UnityEngine::UI::Selectable", modifiers: "", def_value: None }, CppParam { name: "m_SelectOnRight", ty: "UnityEngine::UI::Selectable", modifiers: "", def_value: None }]
constexpr Navigation(UnityEngine::UI::UnityEngine__UI__Navigation__Mode m_Mode, bool m_WrapAround, UnityEngine::UI::Selectable m_SelectOnUp, UnityEngine::UI::Selectable m_SelectOnDown, UnityEngine::UI::Selectable m_SelectOnLeft, UnityEngine::UI::Selectable m_SelectOnRight) noexcept;


                    constexpr Navigation(Navigation const&) = default;
                    constexpr Navigation(Navigation&&) = default;
                    constexpr Navigation& operator=(Navigation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Navigation& operator=(Navigation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Navigation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UI::UnityEngine__UI__Navigation__Mode __declspec(property(get=__get_m_Mode, put=__set_m_Mode))  m_Mode;

constexpr void __set_m_Mode(UnityEngine::UI::UnityEngine__UI__Navigation__Mode value) ;

constexpr UnityEngine::UI::UnityEngine__UI__Navigation__Mode __get_m_Mode() const;

 bool __declspec(property(get=__get_m_WrapAround, put=__set_m_WrapAround))  m_WrapAround;

constexpr void __set_m_WrapAround(bool value) ;

constexpr bool __get_m_WrapAround() const;

 UnityEngine::UI::Selectable __declspec(property(get=__get_m_SelectOnUp, put=__set_m_SelectOnUp))  m_SelectOnUp;

constexpr void __set_m_SelectOnUp(UnityEngine::UI::Selectable value) ;

constexpr UnityEngine::UI::Selectable __get_m_SelectOnUp() const;

 UnityEngine::UI::Selectable __declspec(property(get=__get_m_SelectOnDown, put=__set_m_SelectOnDown))  m_SelectOnDown;

constexpr void __set_m_SelectOnDown(UnityEngine::UI::Selectable value) ;

constexpr UnityEngine::UI::Selectable __get_m_SelectOnDown() const;

 UnityEngine::UI::Selectable __declspec(property(get=__get_m_SelectOnLeft, put=__set_m_SelectOnLeft))  m_SelectOnLeft;

constexpr void __set_m_SelectOnLeft(UnityEngine::UI::Selectable value) ;

constexpr UnityEngine::UI::Selectable __get_m_SelectOnLeft() const;

 UnityEngine::UI::Selectable __declspec(property(get=__get_m_SelectOnRight, put=__set_m_SelectOnRight))  m_SelectOnRight;

constexpr void __set_m_SelectOnRight(UnityEngine::UI::Selectable value) ;

constexpr UnityEngine::UI::Selectable __get_m_SelectOnRight() const;


// Properties

 UnityEngine::UI::UnityEngine__UI__Navigation__Mode __declspec(property(get=get_mode, put=set_mode))  mode;

 bool __declspec(property(get=get_wrapAround, put=set_wrapAround))  wrapAround;

 UnityEngine::UI::Selectable __declspec(property(get=get_selectOnUp, put=set_selectOnUp))  selectOnUp;

 UnityEngine::UI::Selectable __declspec(property(get=get_selectOnDown, put=set_selectOnDown))  selectOnDown;

 UnityEngine::UI::Selectable __declspec(property(get=get_selectOnLeft, put=set_selectOnLeft))  selectOnLeft;

 UnityEngine::UI::Selectable __declspec(property(get=get_selectOnRight, put=set_selectOnRight))  selectOnRight;

static UnityEngine::UI::Navigation __declspec(property(get=get_defaultNavigation))  defaultNavigation;


// Methods

/// @brief Method get_mode addr 0x2c04e6c size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__Navigation__Mode get_mode() ;

/// @brief Method set_mode addr 0x2c04e74 size 0x8 virtual false final false
 void set_mode(UnityEngine::UI::UnityEngine__UI__Navigation__Mode value) ;

/// @brief Method get_wrapAround addr 0x2c04e7c size 0x8 virtual false final false
 bool get_wrapAround() ;

/// @brief Method set_wrapAround addr 0x2c04e84 size 0xc virtual false final false
 void set_wrapAround(bool value) ;

/// @brief Method get_selectOnUp addr 0x2c04e90 size 0x8 virtual false final false
 UnityEngine::UI::Selectable get_selectOnUp() ;

/// @brief Method set_selectOnUp addr 0x2c04e98 size 0x8 virtual false final false
 void set_selectOnUp(UnityEngine::UI::Selectable value) ;

/// @brief Method get_selectOnDown addr 0x2c04ea0 size 0x8 virtual false final false
 UnityEngine::UI::Selectable get_selectOnDown() ;

/// @brief Method set_selectOnDown addr 0x2c04ea8 size 0x8 virtual false final false
 void set_selectOnDown(UnityEngine::UI::Selectable value) ;

/// @brief Method get_selectOnLeft addr 0x2c04eb0 size 0x8 virtual false final false
 UnityEngine::UI::Selectable get_selectOnLeft() ;

/// @brief Method set_selectOnLeft addr 0x2c04eb8 size 0x8 virtual false final false
 void set_selectOnLeft(UnityEngine::UI::Selectable value) ;

/// @brief Method get_selectOnRight addr 0x2c04ec0 size 0x8 virtual false final false
 UnityEngine::UI::Selectable get_selectOnRight() ;

/// @brief Method set_selectOnRight addr 0x2c04ec8 size 0x8 virtual false final false
 void set_selectOnRight(UnityEngine::UI::Selectable value) ;

/// @brief Method get_defaultNavigation addr 0x2c04ed0 size 0x20 virtual false final false
static UnityEngine::UI::Navigation get_defaultNavigation() ;

/// @brief Method Equals addr 0x2c04ef0 size 0x118 virtual true final true
 bool Equals(UnityEngine::UI::Navigation other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Navigation__Mode, "UnityEngine.UI", "Navigation/Mode");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Navigation, "UnityEngine.UI", "Navigation");
