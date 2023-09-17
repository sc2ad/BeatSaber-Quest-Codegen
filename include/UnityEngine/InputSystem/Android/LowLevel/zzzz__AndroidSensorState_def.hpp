#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidSensorState;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct ____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer;
}
// Type: ::<data>e__FixedBuffer
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6539))
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidSensorState::<data>e__FixedBuffer
struct CORDL_TYPE ____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer(float_t FixedElementField) noexcept;


                    constexpr ____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer(____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer const&) = default;
                    constexpr ____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer(____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer&&) = default;
                    constexpr ____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer& operator=(____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer& operator=(____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidSensorState
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6540))
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidSensorState
struct CORDL_TYPE AndroidSensorState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _data_e__FixedBuffer = ::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer;

/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const;

// Ctor Parameters [CppParam { name: "data", ty: "::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr AndroidSensorState(::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer data) noexcept;


                    constexpr AndroidSensorState(AndroidSensorState const&) = default;
                    constexpr AndroidSensorState(AndroidSensorState&&) = default;
                    constexpr AndroidSensorState& operator=(AndroidSensorState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AndroidSensorState& operator=(AndroidSensorState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AndroidSensorState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_kFormat, put=__set_kFormat))  kFormat;

static void __set_kFormat(::UnityEngine::InputSystem::Utilities::FourCC value) ;

static ::UnityEngine::InputSystem::Utilities::FourCC __get_kFormat() ;

 ::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer value) ;

constexpr ::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer __get_data() const;


// Properties

 ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_format))  format;


// Methods

/// @brief Method WithData addr 0x295443c size 0xd0 virtual false final false
 ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState WithData(::ArrayW<float_t> data) ;

/// @brief Method get_format addr 0x295450c size 0x58 virtual true final true
 ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState, "UnityEngine.InputSystem.Android.LowLevel", "AndroidSensorState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::____UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer, "UnityEngine.InputSystem.Android.LowLevel", "AndroidSensorState/<data>e__FixedBuffer");
