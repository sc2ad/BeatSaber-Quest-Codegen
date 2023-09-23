#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidSensorType;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidSensorCapabilities;
}
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidSensorCapabilities
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6538))
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidSensorCapabilities
struct CORDL_TYPE AndroidSensorCapabilities : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sensorType", ty: "UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType", modifiers: "", def_value: None }]
constexpr AndroidSensorCapabilities(UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType sensorType) noexcept;


                    constexpr AndroidSensorCapabilities(AndroidSensorCapabilities const&) = default;
                    constexpr AndroidSensorCapabilities(AndroidSensorCapabilities&&) = default;
                    constexpr AndroidSensorCapabilities& operator=(AndroidSensorCapabilities const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AndroidSensorCapabilities& operator=(AndroidSensorCapabilities&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AndroidSensorCapabilities(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType __declspec(property(get=__get_sensorType, put=__set_sensorType))  sensorType;

constexpr void __set_sensorType(UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType value) ;

constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType __get_sensorType() const;


// Methods

/// @brief Method ToJson addr 0x29542a0 size 0x64 virtual false final false
 ::StringW ToJson() ;

/// @brief Method FromJson addr 0x2954304 size 0xa0 virtual false final false
static UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities FromJson(::StringW json) ;

/// @brief Method ToString addr 0x29543a4 size 0x98 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities, "UnityEngine.InputSystem.Android.LowLevel", "AndroidSensorCapabilities");
