#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct TouchscreenState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct ____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct ____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer;
}
// Type: ::<primaryTouchData>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6598))
// CS Name: UnityEngine.InputSystem.LowLevel.TouchscreenState::<primaryTouchData>e__FixedBuffer
struct CORDL_TYPE ____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr ____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer(____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer const&) = default;
                    constexpr ____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer(____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer&&) = default;
                    constexpr ____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer& operator=(____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer& operator=(____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField))  FixedElementField;

constexpr void __set_FixedElementField(uint8_t value) ;

constexpr uint8_t __get_FixedElementField() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::<touchData>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6599))
// CS Name: UnityEngine.InputSystem.LowLevel.TouchscreenState::<touchData>e__FixedBuffer
struct CORDL_TYPE ____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr ____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer(____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer const&) = default;
                    constexpr ____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer(____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer&&) = default;
                    constexpr ____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer& operator=(____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer& operator=(____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x230};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField))  FixedElementField;

constexpr void __set_FixedElementField(uint8_t value) ;

constexpr uint8_t __get_FixedElementField() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::TouchscreenState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6600))
// CS Name: UnityEngine.InputSystem.LowLevel.TouchscreenState
struct CORDL_TYPE TouchscreenState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _touchData_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer;

using _primaryTouchData_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer;

/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const;

// Ctor Parameters [CppParam { name: "primaryTouchData", ty: "::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "touchData", ty: "::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr TouchscreenState(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer primaryTouchData, ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer touchData) noexcept;


                    constexpr TouchscreenState(TouchscreenState const&) = default;
                    constexpr TouchscreenState(TouchscreenState&&) = default;
                    constexpr TouchscreenState& operator=(TouchscreenState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TouchscreenState& operator=(TouchscreenState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x268};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TouchscreenState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field MaxTouches offset 0
static constexpr int32_t  MaxTouches{10};

 ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer __declspec(property(get=__get_primaryTouchData, put=__set_primaryTouchData))  primaryTouchData;

constexpr void __set_primaryTouchData(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer __get_primaryTouchData() const;

/// @brief Field kTouchDataOffset offset 0
static constexpr int32_t  kTouchDataOffset{56};

 ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer __declspec(property(get=__get_touchData, put=__set_touchData))  touchData;

constexpr void __set_touchData(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer __get_touchData() const;


// Properties

static ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Format))  Format;

 void* __declspec(property(get=get_primaryTouch))  primaryTouch;

 void* __declspec(property(get=get_touches))  touches;

 ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_format))  format;


// Methods

/// @brief Method get_Format addr 0x29567f4 size 0x30 virtual false final false
static ::UnityEngine::InputSystem::Utilities::FourCC get_Format() ;

/// @brief Method get_primaryTouch addr 0x2956824 size 0x4 virtual false final false
 void* get_primaryTouch() ;

/// @brief Method get_touches addr 0x2956828 size 0x8 virtual false final false
 void* get_touches() ;

/// @brief Method get_format addr 0x2956830 size 0x30 virtual true final true
 ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::TouchscreenState, "UnityEngine.InputSystem.LowLevel", "TouchscreenState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "TouchscreenState/<primaryTouchData>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "TouchscreenState/<touchData>e__FixedBuffer");
