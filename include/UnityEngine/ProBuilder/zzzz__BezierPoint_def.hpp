#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::ProBuilder {
struct BezierTangentDirection;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder {
struct BezierTangentMode;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct BezierPoint;
}
// Type: UnityEngine.ProBuilder::BezierPoint
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12045))
// CS Name: UnityEngine.ProBuilder.BezierPoint
struct CORDL_TYPE BezierPoint : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tangentIn", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tangentOut", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
constexpr BezierPoint(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 tangentIn, ::UnityEngine::Vector3 tangentOut, ::UnityEngine::Quaternion rotation) noexcept;


                    constexpr BezierPoint(BezierPoint const&) = default;
                    constexpr BezierPoint(BezierPoint&&) = default;
                    constexpr BezierPoint& operator=(BezierPoint const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BezierPoint& operator=(BezierPoint&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x34};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BezierPoint(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_position() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_tangentIn, put=__set_tangentIn))  tangentIn;

constexpr void __set_tangentIn(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_tangentIn() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_tangentOut, put=__set_tangentOut))  tangentOut;

constexpr void __set_tangentOut(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_tangentOut() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_rotation() const;


// Methods

/// @brief Method .ctor addr 0x29a3900 size 0x28 virtual false final false
 void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 tangentIn, ::UnityEngine::Vector3 tangentOut, ::UnityEngine::Quaternion rotation) ;

/// @brief Method EnforceTangentMode addr 0x29a3928 size 0x318 virtual false final false
 void EnforceTangentMode(::UnityEngine::ProBuilder::BezierTangentDirection master, ::UnityEngine::ProBuilder::BezierTangentMode mode) ;

/// @brief Method SetPosition addr 0x29a3c40 size 0x50 virtual false final false
 void SetPosition(::UnityEngine::Vector3 position) ;

/// @brief Method SetTangentIn addr 0x29a3c90 size 0x14 virtual false final false
 void SetTangentIn(::UnityEngine::Vector3 tangent, ::UnityEngine::ProBuilder::BezierTangentMode mode) ;

/// @brief Method SetTangentOut addr 0x29a3ca4 size 0x14 virtual false final false
 void SetTangentOut(::UnityEngine::Vector3 tangent, ::UnityEngine::ProBuilder::BezierTangentMode mode) ;

/// @brief Method QuadraticPosition addr 0x29a3cb8 size 0x60 virtual false final false
static ::UnityEngine::Vector3 QuadraticPosition(::UnityEngine::ProBuilder::BezierPoint a, ::UnityEngine::ProBuilder::BezierPoint b, float_t t) ;

/// @brief Method CubicPosition addr 0x29a3d18 size 0xa0 virtual false final false
static ::UnityEngine::Vector3 CubicPosition(::UnityEngine::ProBuilder::BezierPoint a, ::UnityEngine::ProBuilder::BezierPoint b, float_t t) ;

/// @brief Method GetLookDirection addr 0x29a3db8 size 0x9f8 virtual false final false
static ::UnityEngine::Vector3 GetLookDirection(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint> points, int32_t index, int32_t previous, int32_t next) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::BezierPoint, "UnityEngine.ProBuilder", "BezierPoint");
