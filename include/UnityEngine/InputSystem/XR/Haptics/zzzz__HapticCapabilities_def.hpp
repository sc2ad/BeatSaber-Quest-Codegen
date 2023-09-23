#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct HapticCapabilities;
}
// Type: UnityEngine.InputSystem.XR.Haptics::HapticCapabilities
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6428))
// CS Name: UnityEngine.InputSystem.XR.Haptics.HapticCapabilities
struct CORDL_TYPE HapticCapabilities : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_numChannels_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_frequencyHz_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_maxBufferSize_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr HapticCapabilities(uint32_t _numChannels_k__BackingField, uint32_t _frequencyHz_k__BackingField, uint32_t _maxBufferSize_k__BackingField) noexcept;


                    constexpr HapticCapabilities(HapticCapabilities const&) = default;
                    constexpr HapticCapabilities(HapticCapabilities&&) = default;
                    constexpr HapticCapabilities& operator=(HapticCapabilities const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HapticCapabilities& operator=(HapticCapabilities&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HapticCapabilities(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get__numChannels_k__BackingField, put=__set__numChannels_k__BackingField))  _numChannels_k__BackingField;

constexpr void __set__numChannels_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__numChannels_k__BackingField() const;

 uint32_t __declspec(property(get=__get__frequencyHz_k__BackingField, put=__set__frequencyHz_k__BackingField))  _frequencyHz_k__BackingField;

constexpr void __set__frequencyHz_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__frequencyHz_k__BackingField() const;

 uint32_t __declspec(property(get=__get__maxBufferSize_k__BackingField, put=__set__maxBufferSize_k__BackingField))  _maxBufferSize_k__BackingField;

constexpr void __set__maxBufferSize_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__maxBufferSize_k__BackingField() const;


// Properties

 uint32_t __declspec(property(get=get_numChannels, put=set_numChannels))  numChannels;

 uint32_t __declspec(property(get=get_frequencyHz, put=set_frequencyHz))  frequencyHz;

 uint32_t __declspec(property(get=get_maxBufferSize, put=set_maxBufferSize))  maxBufferSize;


// Methods

/// @brief Method .ctor addr 0x2936f34 size 0xc virtual false final false
 void _ctor(uint32_t numChannels, uint32_t frequencyHz, uint32_t maxBufferSize) ;

/// @brief Method get_numChannels addr 0x2936f40 size 0x8 virtual false final false
 uint32_t get_numChannels() ;

/// @brief Method set_numChannels addr 0x2936f48 size 0x8 virtual false final false
 void set_numChannels(uint32_t value) ;

/// @brief Method get_frequencyHz addr 0x2936f50 size 0x8 virtual false final false
 uint32_t get_frequencyHz() ;

/// @brief Method set_frequencyHz addr 0x2936f58 size 0x8 virtual false final false
 void set_frequencyHz(uint32_t value) ;

/// @brief Method get_maxBufferSize addr 0x2936f60 size 0x8 virtual false final false
 uint32_t get_maxBufferSize() ;

/// @brief Method set_maxBufferSize addr 0x2936f68 size 0x8 virtual false final false
 void set_maxBufferSize(uint32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::Haptics::HapticCapabilities, "UnityEngine.InputSystem.XR.Haptics", "HapticCapabilities");
