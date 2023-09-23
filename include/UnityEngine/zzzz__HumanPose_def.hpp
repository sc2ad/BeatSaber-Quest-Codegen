#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct HumanPose;
}
// Type: UnityEngine::HumanPose
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15055))
// CS Name: UnityEngine.HumanPose
struct CORDL_TYPE HumanPose : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "bodyPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "bodyRotation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "muscles", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }]
constexpr HumanPose(UnityEngine::Vector3 bodyPosition, UnityEngine::Quaternion bodyRotation, ::ArrayW<float_t> muscles) noexcept;


                    constexpr HumanPose(HumanPose const&) = default;
                    constexpr HumanPose(HumanPose&&) = default;
                    constexpr HumanPose& operator=(HumanPose const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HumanPose& operator=(HumanPose&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HumanPose(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_bodyPosition, put=__set_bodyPosition))  bodyPosition;

constexpr void __set_bodyPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_bodyPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get_bodyRotation, put=__set_bodyRotation))  bodyRotation;

constexpr void __set_bodyRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_bodyRotation() const;

 ::ArrayW<float_t> __declspec(property(get=__get_muscles, put=__set_muscles))  muscles;

constexpr void __set_muscles(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_muscles() const;


// Methods

/// @brief Method Init addr 0x2b20800 size 0x138 virtual false final false
 void Init() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HumanPose, "UnityEngine", "HumanPose");
