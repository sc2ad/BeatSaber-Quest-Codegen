#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct GyroscopeState;
}
// Type: UnityEngine.InputSystem.LowLevel::GyroscopeState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6592))
// CS Name: UnityEngine.InputSystem.LowLevel.GyroscopeState
struct CORDL_TYPE GyroscopeState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const;

// Ctor Parameters [CppParam { name: "angularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr GyroscopeState(::UnityEngine::Vector3 angularVelocity) noexcept;


                    constexpr GyroscopeState(GyroscopeState const&) = default;
                    constexpr GyroscopeState(GyroscopeState&&) = default;
                    constexpr GyroscopeState& operator=(GyroscopeState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GyroscopeState& operator=(GyroscopeState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GyroscopeState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get_angularVelocity, put=__set_angularVelocity))  angularVelocity;

constexpr void __set_angularVelocity(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_angularVelocity() const;


// Properties

static ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_kFormat))  kFormat;

 ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_format))  format;


// Methods

/// @brief Method get_kFormat addr 0x295626c size 0x30 virtual false final false
static ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat() ;

/// @brief Method get_format addr 0x295629c size 0x30 virtual true final true
 ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::GyroscopeState, "UnityEngine.InputSystem.LowLevel", "GyroscopeState");
