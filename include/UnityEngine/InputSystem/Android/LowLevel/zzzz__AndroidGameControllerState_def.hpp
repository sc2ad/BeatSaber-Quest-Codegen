#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidAxis;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidKeyCode;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
class UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidGameControllerState;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer;
}
// Type: ::Variants
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6529))
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidGameControllerState::Variants
class CORDL_TYPE UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants(UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants(UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants& operator=(UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants& operator=(UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants const& o) noexcept = default;
                


// Fields

/// @brief Field Gamepad offset 0
static constexpr ::ConstString  Gamepad{u"Gamepad"};

/// @brief Field Joystick offset 0
static constexpr ::ConstString  Joystick{u"Joystick"};

/// @brief Field DPadAxes offset 0
static constexpr ::ConstString  DPadAxes{u"DpadAxes"};

/// @brief Field DPadButtons offset 0
static constexpr ::ConstString  DPadButtons{u"DpadButtons"};


// Methods

// Ctor Parameters []
explicit UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants() ;

/// @brief Method .ctor addr 0x2953dec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android::LowLevel
// Type: ::<buttons>e__FixedBuffer
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6530))
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidGameControllerState::<buttons>e__FixedBuffer
struct CORDL_TYPE UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer(uint32_t FixedElementField) noexcept;


                    constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer(UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer const&) = default;
                    constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer(UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer&&) = default;
                    constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer& operator=(UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer& operator=(UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField))  FixedElementField;

constexpr void __set_FixedElementField(uint32_t value) ;

constexpr uint32_t __get_FixedElementField() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android::LowLevel
// Type: ::<axis>e__FixedBuffer
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6531))
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidGameControllerState::<axis>e__FixedBuffer
struct CORDL_TYPE UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer(float_t FixedElementField) noexcept;


                    constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer(UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer const&) = default;
                    constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer(UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer&&) = default;
                    constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer& operator=(UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer& operator=(UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc0};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField))  FixedElementField;

constexpr void __set_FixedElementField(float_t value) ;

constexpr float_t __get_FixedElementField() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android::LowLevel
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidGameControllerState
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6532))
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidGameControllerState
struct CORDL_TYPE AndroidGameControllerState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _axis_e__FixedBuffer = UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer;

using _buttons_e__FixedBuffer = UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer;

using Variants = UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants;

/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const;

// Ctor Parameters [CppParam { name: "buttons", ty: "UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "axis", ty: "UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr AndroidGameControllerState(UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer buttons, UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer axis) noexcept;


                    constexpr AndroidGameControllerState(AndroidGameControllerState const&) = default;
                    constexpr AndroidGameControllerState(AndroidGameControllerState&&) = default;
                    constexpr AndroidGameControllerState& operator=(AndroidGameControllerState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AndroidGameControllerState& operator=(AndroidGameControllerState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xdc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AndroidGameControllerState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field MaxAxes offset 0
static constexpr int32_t  MaxAxes{48};

/// @brief Field MaxButtons offset 0
static constexpr int32_t  MaxButtons{220};

/// @brief Field kAxisOffset offset 0
static constexpr uint32_t  kAxisOffset{28u};

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_kFormat, put=__set_kFormat))  kFormat;

static void __set_kFormat(UnityEngine::InputSystem::Utilities::FourCC value) ;

static UnityEngine::InputSystem::Utilities::FourCC __get_kFormat() ;

 UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer __declspec(property(get=__get_buttons, put=__set_buttons))  buttons;

constexpr void __set_buttons(UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer value) ;

constexpr UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer __get_buttons() const;

 UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer __declspec(property(get=__get_axis, put=__set_axis))  axis;

constexpr void __set_axis(UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer value) ;

constexpr UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer __get_axis() const;


// Properties

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_format))  format;


// Methods

/// @brief Method get_format addr 0x2953cc8 size 0x58 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Method WithButton addr 0x2953d20 size 0x44 virtual false final false
 UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState WithButton(UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode code, bool value) ;

/// @brief Method WithAxis addr 0x2953d64 size 0x1c virtual false final false
 UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState WithAxis(UnityEngine::InputSystem::Android::LowLevel::AndroidAxis axis, float_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android::LowLevel
NEED_NO_BOX(UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState__Variants, "UnityEngine.InputSystem.Android.LowLevel", "AndroidGameControllerState/Variants");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState, "UnityEngine.InputSystem.Android.LowLevel", "AndroidGameControllerState");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___axis_e__FixedBuffer, "UnityEngine.InputSystem.Android.LowLevel", "AndroidGameControllerState/<axis>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidGameControllerState___buttons_e__FixedBuffer, "UnityEngine.InputSystem.Android.LowLevel", "AndroidGameControllerState/<buttons>e__FixedBuffer");
