#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace System {
class IFormattable;
}
namespace System {
class IFormatProvider;
}
namespace UnityEngine {
struct Ray;
}
// Forward declare root types
namespace UnityEngine {
struct Plane;
}
// Type: UnityEngine::Plane
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10105))
// CS Name: UnityEngine.Plane
struct CORDL_TYPE Plane : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

// Ctor Parameters [CppParam { name: "m_Normal", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None }]
constexpr Plane(UnityEngine::Vector3 m_Normal, float_t m_Distance) noexcept;


                    constexpr Plane(Plane const&) = default;
                    constexpr Plane(Plane&&) = default;
                    constexpr Plane& operator=(Plane const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Plane& operator=(Plane&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Plane(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field size offset 0
static constexpr int32_t  size{16};

 UnityEngine::Vector3 __declspec(property(get=__get_m_Normal, put=__set_m_Normal))  m_Normal;

constexpr void __set_m_Normal(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Normal() const;

 float_t __declspec(property(get=__get_m_Distance, put=__set_m_Distance))  m_Distance;

constexpr void __set_m_Distance(float_t value) ;

constexpr float_t __get_m_Distance() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_normal))  normal;

 float_t __declspec(property(get=get_distance))  distance;


// Methods

/// @brief Method get_normal addr 0x2b52484 size 0xc virtual false final false
 UnityEngine::Vector3 get_normal() ;

/// @brief Method get_distance addr 0x2b52490 size 0x8 virtual false final false
 float_t get_distance() ;

/// @brief Method .ctor addr 0x2b52498 size 0x110 virtual false final false
 void _ctor(UnityEngine::Vector3 inNormal, UnityEngine::Vector3 inPoint) ;

/// @brief Method .ctor addr 0x2b525a8 size 0x178 virtual false final false
 void _ctor(UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3 c) ;

/// @brief Method SetNormalAndPosition addr 0x2b52720 size 0x110 virtual false final false
 void SetNormalAndPosition(UnityEngine::Vector3 inNormal, UnityEngine::Vector3 inPoint) ;

/// @brief Method ClosestPointOnPlane addr 0x2b52830 size 0x3c virtual false final false
 UnityEngine::Vector3 ClosestPointOnPlane(UnityEngine::Vector3 point) ;

/// @brief Method GetDistanceToPoint addr 0x2b5286c size 0x24 virtual false final false
 float_t GetDistanceToPoint(UnityEngine::Vector3 point) ;

/// @brief Method SameSide addr 0x2b52890 size 0x70 virtual false final false
 bool SameSide(UnityEngine::Vector3 inPt0, UnityEngine::Vector3 inPt1) ;

/// @brief Method Raycast addr 0x2b52900 size 0x100 virtual false final false
 bool Raycast(UnityEngine::Ray ray, ByRef<float_t> enter) ;

/// @brief Method ToString addr 0x2b52a18 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b52a24 size 0x188 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider formatProvider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Plane, "UnityEngine", "Plane");
