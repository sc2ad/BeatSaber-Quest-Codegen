#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrQuaternionf;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrVector3f;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrPosef;
}
// Type: UnityEngine.XR.OpenXR.NativeTypes::XrPosef
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14186))
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrPosef
struct CORDL_TYPE XrPosef : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "orientation", ty: "UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf", modifiers: "", def_value: None }, CppParam { name: "position", ty: "UnityEngine::XR::OpenXR::NativeTypes::XrVector3f", modifiers: "", def_value: None }]
constexpr XrPosef(UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf orientation, UnityEngine::XR::OpenXR::NativeTypes::XrVector3f position) noexcept;


                    constexpr XrPosef(XrPosef const&) = default;
                    constexpr XrPosef(XrPosef&&) = default;
                    constexpr XrPosef& operator=(XrPosef const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XrPosef& operator=(XrPosef&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XrPosef(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf __declspec(property(get=__get_orientation, put=__set_orientation))  orientation;

constexpr void __set_orientation(UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf value) ;

constexpr UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf __get_orientation() const;

 UnityEngine::XR::OpenXR::NativeTypes::XrVector3f __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::XR::OpenXR::NativeTypes::XrVector3f value) ;

constexpr UnityEngine::XR::OpenXR::NativeTypes::XrVector3f __get_position() const;


// Methods

/// @brief Method .ctor addr 0x2aed714 size 0x20 virtual false final false
 void _ctor(UnityEngine::Vector3 vec3, UnityEngine::Quaternion quaternion) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::NativeTypes
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::NativeTypes::XrPosef, "UnityEngine.XR.OpenXR.NativeTypes", "XrPosef");
