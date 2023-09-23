#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
// Type: ::BladeMovementDataElement
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15100))
// CS Name: BladeMovementDataElement
struct CORDL_TYPE BladeMovementDataElement : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "segmentAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "topPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "bottomPos", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "segmentNormal", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr BladeMovementDataElement(float_t time, float_t segmentAngle, UnityEngine::Vector3 topPos, UnityEngine::Vector3 bottomPos, UnityEngine::Vector3 segmentNormal) noexcept;


                    constexpr BladeMovementDataElement(BladeMovementDataElement const&) = default;
                    constexpr BladeMovementDataElement(BladeMovementDataElement&&) = default;
                    constexpr BladeMovementDataElement& operator=(BladeMovementDataElement const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BladeMovementDataElement& operator=(BladeMovementDataElement&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BladeMovementDataElement(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;

 float_t __declspec(property(get=__get_segmentAngle, put=__set_segmentAngle))  segmentAngle;

constexpr void __set_segmentAngle(float_t value) ;

constexpr float_t __get_segmentAngle() const;

 UnityEngine::Vector3 __declspec(property(get=__get_topPos, put=__set_topPos))  topPos;

constexpr void __set_topPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_topPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get_bottomPos, put=__set_bottomPos))  bottomPos;

constexpr void __set_bottomPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_bottomPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get_segmentNormal, put=__set_segmentNormal))  segmentNormal;

constexpr void __set_segmentNormal(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_segmentNormal() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BladeMovementDataElement, "", "BladeMovementDataElement");
