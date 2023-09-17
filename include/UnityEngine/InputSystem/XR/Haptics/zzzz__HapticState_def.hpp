#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct HapticState;
}
// Type: UnityEngine.InputSystem.XR.Haptics::HapticState
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6426))
// CS Name: UnityEngine.InputSystem.XR.Haptics.HapticState
struct CORDL_TYPE HapticState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_samplesQueued_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_samplesAvailable_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr HapticState(uint32_t _samplesQueued_k__BackingField, uint32_t _samplesAvailable_k__BackingField) noexcept;


                    constexpr HapticState(HapticState const&) = default;
                    constexpr HapticState(HapticState&&) = default;
                    constexpr HapticState& operator=(HapticState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HapticState& operator=(HapticState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HapticState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get__samplesQueued_k__BackingField, put=__set__samplesQueued_k__BackingField))  _samplesQueued_k__BackingField;

constexpr void __set__samplesQueued_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__samplesQueued_k__BackingField() const;

 uint32_t __declspec(property(get=__get__samplesAvailable_k__BackingField, put=__set__samplesAvailable_k__BackingField))  _samplesAvailable_k__BackingField;

constexpr void __set__samplesAvailable_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__samplesAvailable_k__BackingField() const;


// Properties

 uint32_t __declspec(property(get=get_samplesQueued, put=set_samplesQueued))  samplesQueued;

 uint32_t __declspec(property(get=get_samplesAvailable, put=set_samplesAvailable))  samplesAvailable;


// Methods

/// @brief Method .ctor addr 0x2936e54 size 0x8 virtual false final false
 void _ctor(uint32_t samplesQueued, uint32_t samplesAvailable) ;

/// @brief Method get_samplesQueued addr 0x2936e5c size 0x8 virtual false final false
 uint32_t get_samplesQueued() ;

/// @brief Method set_samplesQueued addr 0x2936e64 size 0x8 virtual false final false
 void set_samplesQueued(uint32_t value) ;

/// @brief Method get_samplesAvailable addr 0x2936e6c size 0x8 virtual false final false
 uint32_t get_samplesAvailable() ;

/// @brief Method set_samplesAvailable addr 0x2936e74 size 0x8 virtual false final false
 void set_samplesAvailable(uint32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR::Haptics
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::HapticState, "UnityEngine.InputSystem.XR.Haptics", "HapticState");
