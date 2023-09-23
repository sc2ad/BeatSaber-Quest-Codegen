#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct AttitudeState;
}
// Type: UnityEngine.InputSystem.LowLevel::AttitudeState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6594))
// CS Name: UnityEngine.InputSystem.LowLevel.AttitudeState
struct CORDL_TYPE AttitudeState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const;

// Ctor Parameters [CppParam { name: "attitude", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }]
constexpr AttitudeState(UnityEngine::Quaternion attitude) noexcept;


                    constexpr AttitudeState(AttitudeState const&) = default;
                    constexpr AttitudeState(AttitudeState&&) = default;
                    constexpr AttitudeState& operator=(AttitudeState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AttitudeState& operator=(AttitudeState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AttitudeState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Quaternion __declspec(property(get=__get_attitude, put=__set_attitude))  attitude;

constexpr void __set_attitude(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_attitude() const;


// Properties

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_kFormat))  kFormat;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_format))  format;


// Methods

/// @brief Method get_kFormat addr 0x295632c size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_kFormat() ;

/// @brief Method get_format addr 0x295635c size 0x30 virtual true final true
 UnityEngine::InputSystem::Utilities::FourCC get_format() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::AttitudeState, "UnityEngine.InputSystem.LowLevel", "AttitudeState");
