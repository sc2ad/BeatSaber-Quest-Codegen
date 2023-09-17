#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputEventTypeInfo;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct DeviceResetEvent;
}
// Type: UnityEngine.InputSystem.LowLevel::DeviceResetEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6607))
// CS Name: UnityEngine.InputSystem.LowLevel.DeviceResetEvent
struct CORDL_TYPE DeviceResetEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo() const;

// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "hardReset", ty: "bool", modifiers: "", def_value: None }]
constexpr DeviceResetEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, bool hardReset) noexcept;


                    constexpr DeviceResetEvent(DeviceResetEvent const&) = default;
                    constexpr DeviceResetEvent(DeviceResetEvent&&) = default;
                    constexpr DeviceResetEvent& operator=(DeviceResetEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DeviceResetEvent& operator=(DeviceResetEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DeviceResetEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field Type offset 0
static constexpr int32_t  Type{1146245972};

 ::UnityEngine::InputSystem::LowLevel::InputEvent __declspec(property(get=__get_baseEvent, put=__set_baseEvent))  baseEvent;

constexpr void __set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent __get_baseEvent() const;

 bool __declspec(property(get=__get_hardReset, put=__set_hardReset))  hardReset;

constexpr void __set_hardReset(bool value) ;

constexpr bool __get_hardReset() const;


// Properties

 ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_typeStatic addr 0x2957300 size 0x20 virtual true final true
 ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x2957320 size 0xbc virtual false final false
static ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent Create(int32_t deviceId, bool hardReset, double_t time) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::DeviceResetEvent, "UnityEngine.InputSystem.LowLevel", "DeviceResetEvent");
