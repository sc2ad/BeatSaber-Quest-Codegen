#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace HMUI {
struct HMUI__MouseBinder__ButtonType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace HMUI {
struct HMUI__MouseBinder__MouseEventType;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Tuple_3;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
// Forward declare root types
namespace HMUI {
struct HMUI__MouseBinder__ButtonType;
}
namespace HMUI {
struct HMUI__MouseBinder__MouseEventType;
}
namespace HMUI {
class MouseBinder;
}
// Type: ::MouseEventType
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13572))
// CS Name: HMUI.MouseBinder::MouseEventType
struct CORDL_TYPE HMUI__MouseBinder__MouseEventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__MouseBinder__MouseEventType(int32_t value__) noexcept;


                    constexpr HMUI__MouseBinder__MouseEventType(HMUI__MouseBinder__MouseEventType const&) = default;
                    constexpr HMUI__MouseBinder__MouseEventType(HMUI__MouseBinder__MouseEventType&&) = default;
                    constexpr HMUI__MouseBinder__MouseEventType& operator=(HMUI__MouseBinder__MouseEventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__MouseBinder__MouseEventType& operator=(HMUI__MouseBinder__MouseEventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__MouseBinder__MouseEventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__MouseBinder__MouseEventType_Unwrapped : int32_t {
__ButtonDown = 0,
__ButtonUp = 1,
__ButtonPress = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__MouseBinder__MouseEventType_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__MouseBinder__MouseEventType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ButtonDown offset 0
static HMUI::HMUI__MouseBinder__MouseEventType const ButtonDown;

/// @brief Field ButtonUp offset 0
static HMUI::HMUI__MouseBinder__MouseEventType const ButtonUp;

/// @brief Field ButtonPress offset 0
static HMUI::HMUI__MouseBinder__MouseEventType const ButtonPress;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: ::ButtonType
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13573))
// CS Name: HMUI.MouseBinder::ButtonType
struct CORDL_TYPE HMUI__MouseBinder__ButtonType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__MouseBinder__ButtonType(int32_t value__) noexcept;


                    constexpr HMUI__MouseBinder__ButtonType(HMUI__MouseBinder__ButtonType const&) = default;
                    constexpr HMUI__MouseBinder__ButtonType(HMUI__MouseBinder__ButtonType&&) = default;
                    constexpr HMUI__MouseBinder__ButtonType& operator=(HMUI__MouseBinder__ButtonType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__MouseBinder__ButtonType& operator=(HMUI__MouseBinder__ButtonType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__MouseBinder__ButtonType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__MouseBinder__ButtonType_Unwrapped : int32_t {
__Primary = 0,
__Secondary = 1,
__Middle = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__MouseBinder__ButtonType_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__MouseBinder__ButtonType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Primary offset 0
static HMUI::HMUI__MouseBinder__ButtonType const Primary;

/// @brief Field Secondary offset 0
static HMUI::HMUI__MouseBinder__ButtonType const Secondary;

/// @brief Field Middle offset 0
static HMUI::HMUI__MouseBinder__ButtonType const Middle;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::MouseBinder
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13574))
// CS Name: HMUI.MouseBinder
class CORDL_TYPE MouseBinder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ButtonType = HMUI::HMUI__MouseBinder__ButtonType;

using MouseEventType = HMUI::HMUI__MouseBinder__MouseEventType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MouseBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseBinder", modifiers: " const&", def_value: None }]
constexpr MouseBinder(MouseBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseBinder", modifiers: "&&", def_value: None }]
constexpr MouseBinder(MouseBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseBinder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MouseBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseBinder& operator=(MouseBinder&& o) noexcept = default;
  constexpr MouseBinder& operator=(MouseBinder const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__enabled_k__BackingField, put=__set__enabled_k__BackingField))  _enabled_k__BackingField;

constexpr void __set__enabled_k__BackingField(bool value) ;

constexpr bool __get__enabled_k__BackingField() const;

 System::Collections::Generic::List_1<UnityEngine::Events::UnityAction_1<float_t>> __declspec(property(get=__get__scrollBindings, put=__set__scrollBindings))  _scrollBindings;

constexpr void __set__scrollBindings(System::Collections::Generic::List_1<UnityEngine::Events::UnityAction_1<float_t>> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Events::UnityAction_1<float_t>> __get__scrollBindings() const;

 System::Collections::Generic::List_1<System::ValueTuple_3<HMUI::HMUI__MouseBinder__ButtonType,HMUI::HMUI__MouseBinder__MouseEventType,UnityEngine::Events::UnityAction>> __declspec(property(get=__get__buttonBindings, put=__set__buttonBindings))  _buttonBindings;

constexpr void __set__buttonBindings(System::Collections::Generic::List_1<System::ValueTuple_3<HMUI::HMUI__MouseBinder__ButtonType,HMUI::HMUI__MouseBinder__MouseEventType,UnityEngine::Events::UnityAction>> value) ;

constexpr System::Collections::Generic::List_1<System::ValueTuple_3<HMUI::HMUI__MouseBinder__ButtonType,HMUI::HMUI__MouseBinder__MouseEventType,UnityEngine::Events::UnityAction>> __get__buttonBindings() const;


// Properties

 bool __declspec(property(get=get_enabled, put=set_enabled))  enabled;


// Methods

/// @brief Method get_enabled addr 0x1fa7054 size 0x8 virtual false final false
 bool get_enabled() ;

/// @brief Method set_enabled addr 0x1fa705c size 0xc virtual false final false
 void set_enabled(bool value) ;

static HMUI::MouseBinder New_ctor() ;

/// @brief Method .ctor addr 0x1fa7068 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x1fa7084 size 0xc0 virtual false final false
 void Init() ;

/// @brief Method AddScrollBindings addr 0x1fa7144 size 0x13c virtual false final false
 void AddScrollBindings(System::Collections::Generic::List_1<UnityEngine::Events::UnityAction_1<float_t>> bindingData) ;

/// @brief Method AddScrollBinding addr 0x1fa7280 size 0xa8 virtual false final false
 void AddScrollBinding(UnityEngine::Events::UnityAction_1<float_t> action) ;

/// @brief Method RemoveScrollBinding addr 0x1fa7328 size 0x58 virtual false final false
 void RemoveScrollBinding(UnityEngine::Events::UnityAction_1<float_t> action) ;

/// @brief Method AddButtonBindings addr 0x1fa7380 size 0x174 virtual false final false
 void AddButtonBindings(System::Collections::Generic::List_1<System::Tuple_3<HMUI::HMUI__MouseBinder__ButtonType,HMUI::HMUI__MouseBinder__MouseEventType,UnityEngine::Events::UnityAction>> bindingData) ;

/// @brief Method AddButtonBinding addr 0x1fa74f4 size 0xf8 virtual false final false
 void AddButtonBinding(HMUI::HMUI__MouseBinder__ButtonType buttonType, HMUI::HMUI__MouseBinder__MouseEventType keyBindingType, UnityEngine::Events::UnityAction action) ;

/// @brief Method RemoveButtonBinding addr 0x1fa75ec size 0xb0 virtual false final false
 void RemoveButtonBinding(HMUI::HMUI__MouseBinder__ButtonType buttonType, HMUI::HMUI__MouseBinder__MouseEventType keyBindingType, UnityEngine::Events::UnityAction action) ;

/// @brief Method ClearBindings addr 0x1fa769c size 0xa4 virtual false final false
 void ClearBindings() ;

/// @brief Method ManualUpdate addr 0x1fa7740 size 0x384 virtual false final false
 void ManualUpdate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__MouseBinder__ButtonType, "HMUI", "MouseBinder/ButtonType");
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__MouseBinder__MouseEventType, "HMUI", "MouseBinder/MouseEventType");
NEED_NO_BOX(HMUI::MouseBinder);
DEFINE_IL2CPP_ARG_TYPE(HMUI::MouseBinder, "HMUI", "MouseBinder");
