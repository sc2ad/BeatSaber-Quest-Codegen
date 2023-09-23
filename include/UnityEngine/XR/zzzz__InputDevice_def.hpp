#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::XR {
struct InputDevice;
}
// Type: UnityEngine.XR::InputDevice
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15570))
// CS Name: UnityEngine.XR.InputDevice
struct CORDL_TYPE InputDevice : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::XR::InputDevice>
constexpr operator  System::IEquatable_1<UnityEngine::XR::InputDevice>() const;

// Ctor Parameters [CppParam { name: "m_DeviceId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_Initialized", ty: "bool", modifiers: "", def_value: None }]
constexpr InputDevice(uint64_t m_DeviceId, bool m_Initialized) noexcept;


                    constexpr InputDevice(InputDevice const&) = default;
                    constexpr InputDevice(InputDevice&&) = default;
                    constexpr InputDevice& operator=(InputDevice const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputDevice& operator=(InputDevice&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputDevice(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_m_DeviceId, put=__set_m_DeviceId))  m_DeviceId;

constexpr void __set_m_DeviceId(uint64_t value) ;

constexpr uint64_t __get_m_DeviceId() const;

 bool __declspec(property(get=__get_m_Initialized, put=__set_m_Initialized))  m_Initialized;

constexpr void __set_m_Initialized(bool value) ;

constexpr bool __get_m_Initialized() const;


// Properties

 uint64_t __declspec(property(get=get_deviceId))  deviceId;

 bool __declspec(property(get=get_isValid))  isValid;

 ::StringW __declspec(property(get=get_manufacturer))  manufacturer;


// Methods

/// @brief Method .ctor addr 0x2d38c20 size 0x10 virtual false final false
 void _ctor(uint64_t deviceId) ;

/// @brief Method get_deviceId addr 0x2d38c30 size 0x18 virtual false final false
 uint64_t get_deviceId() ;

/// @brief Method get_isValid addr 0x2d38c48 size 0x5c virtual false final false
 bool get_isValid() ;

/// @brief Method get_manufacturer addr 0x2d38d00 size 0x5c virtual false final false
 ::StringW get_manufacturer() ;

/// @brief Method IsValidId addr 0x2d38ca4 size 0x20 virtual false final false
 bool IsValidId() ;

/// @brief Method SendHapticImpulse addr 0x2d38d98 size 0x100 virtual false final false
 bool SendHapticImpulse(uint32_t channel, float_t amplitude, float_t duration) ;

/// @brief Method StopHaptics addr 0x2d38ef4 size 0x58 virtual false final false
 void StopHaptics() ;

/// @brief Method Equals addr 0x2d38f88 size 0x94 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2d3901c size 0x28 virtual true final true
 bool Equals(UnityEngine::XR::InputDevice other) ;

/// @brief Method GetHashCode addr 0x2d39044 size 0x34 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputDevice, "UnityEngine.XR", "InputDevice");
