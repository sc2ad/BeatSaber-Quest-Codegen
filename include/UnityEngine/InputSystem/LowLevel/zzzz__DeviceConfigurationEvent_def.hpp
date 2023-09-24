#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputEventTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct DeviceConfigurationEvent;
}
// Type: UnityEngine.InputSystem.LowLevel::DeviceConfigurationEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6605))
// CS Name: UnityEngine.InputSystem.LowLevel.DeviceConfigurationEvent
struct CORDL_TYPE DeviceConfigurationEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo() const;

// Ctor Parameters [CppParam { name: "baseEvent", ty: "UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }]
constexpr DeviceConfigurationEvent(UnityEngine::InputSystem::LowLevel::InputEvent baseEvent) noexcept;


                    constexpr DeviceConfigurationEvent(DeviceConfigurationEvent const&) = default;
                    constexpr DeviceConfigurationEvent(DeviceConfigurationEvent&&) = default;
                    constexpr DeviceConfigurationEvent& operator=(DeviceConfigurationEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DeviceConfigurationEvent& operator=(DeviceConfigurationEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DeviceConfigurationEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field Type offset 0
static constexpr int32_t  Type{1145259591};

 UnityEngine::InputSystem::LowLevel::InputEvent __declspec(property(get=__get_baseEvent, put=__set_baseEvent))  baseEvent;

constexpr void __set_baseEvent(UnityEngine::InputSystem::LowLevel::InputEvent value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputEvent __get_baseEvent() const;


// Properties

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_typeStatic addr 0x2957198 size 0x20 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method ToEventPtr addr 0x29571b8 size 0x4 virtual false final false
 UnityEngine::InputSystem::LowLevel::InputEventPtr ToEventPtr() ;

/// @brief Method Create addr 0x29571bc size 0x90 virtual false final false
static UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent Create(int32_t deviceId, double_t time) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent, "UnityEngine.InputSystem.LowLevel", "DeviceConfigurationEvent");
