#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Ray;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
// Forward declare root types
namespace UnityEngine {
struct Bounds;
}
// Type: UnityEngine::Bounds
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10106))
// CS Name: UnityEngine.Bounds
struct CORDL_TYPE Bounds : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Bounds>
constexpr operator  System::IEquatable_1<UnityEngine::Bounds>() const;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

// Ctor Parameters [CppParam { name: "m_Center", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Extents", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr Bounds(UnityEngine::Vector3 m_Center, UnityEngine::Vector3 m_Extents) noexcept;


                    constexpr Bounds(Bounds const&) = default;
                    constexpr Bounds(Bounds&&) = default;
                    constexpr Bounds& operator=(Bounds const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Bounds& operator=(Bounds&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Bounds(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_m_Center, put=__set_m_Center))  m_Center;

constexpr void __set_m_Center(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Center() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Extents, put=__set_m_Extents))  m_Extents;

constexpr void __set_m_Extents(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Extents() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_center, put=set_center))  center;

 UnityEngine::Vector3 __declspec(property(get=get_size, put=set_size))  size;

 UnityEngine::Vector3 __declspec(property(get=get_extents, put=set_extents))  extents;

 UnityEngine::Vector3 __declspec(property(get=get_min))  min;

 UnityEngine::Vector3 __declspec(property(get=get_max))  max;


// Methods

/// @brief Method .ctor addr 0x2b52bac size 0x20 virtual false final false
 void _ctor(UnityEngine::Vector3 center, UnityEngine::Vector3 size) ;

/// @brief Method GetHashCode addr 0x2b52bcc size 0xd0 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b52cb4 size 0xd0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2b52d84 size 0x6c virtual true final true
 bool Equals(UnityEngine::Bounds other) ;

/// @brief Method get_center addr 0x2b52c9c size 0xc virtual false final false
 UnityEngine::Vector3 get_center() ;

/// @brief Method set_center addr 0x2b52df0 size 0xc virtual false final false
 void set_center(UnityEngine::Vector3 value) ;

/// @brief Method get_size addr 0x2b52dfc size 0x18 virtual false final false
 UnityEngine::Vector3 get_size() ;

/// @brief Method set_size addr 0x2b52e14 size 0x1c virtual false final false
 void set_size(UnityEngine::Vector3 value) ;

/// @brief Method get_extents addr 0x2b52ca8 size 0xc virtual false final false
 UnityEngine::Vector3 get_extents() ;

/// @brief Method set_extents addr 0x2b52e30 size 0xc virtual false final false
 void set_extents(UnityEngine::Vector3 value) ;

/// @brief Method get_min addr 0x2b52e3c size 0x20 virtual false final false
 UnityEngine::Vector3 get_min() ;

/// @brief Method get_max addr 0x2b52e5c size 0x20 virtual false final false
 UnityEngine::Vector3 get_max() ;

/// @brief Method op_Equality addr 0x2b52e7c size 0x7c virtual false final false
static bool op_Equality(UnityEngine::Bounds lhs, UnityEngine::Bounds rhs) ;

/// @brief Method op_Inequality addr 0x2b52ef8 size 0x48 virtual false final false
static bool op_Inequality(UnityEngine::Bounds lhs, UnityEngine::Bounds rhs) ;

/// @brief Method SetMinMax addr 0x2b52f40 size 0x38 virtual false final false
 void SetMinMax(UnityEngine::Vector3 min, UnityEngine::Vector3 max) ;

/// @brief Method Encapsulate addr 0x2b52f78 size 0x78 virtual false final false
 void Encapsulate(UnityEngine::Vector3 point) ;

/// @brief Method Intersects addr 0x2b52ff0 size 0xa0 virtual false final false
 bool Intersects(UnityEngine::Bounds bounds) ;

/// @brief Method IntersectRay addr 0x2b53090 size 0x74 virtual false final false
 bool IntersectRay(UnityEngine::Ray ray, ByRef<float_t> distance) ;

/// @brief Method ToString addr 0x2b53158 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b53164 size 0x188 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider formatProvider) ;

/// @brief Method Contains addr 0x2b532ec size 0x58 virtual false final false
 bool Contains(UnityEngine::Vector3 point) ;

/// @brief Method IntersectRayAABB addr 0x2b53104 size 0x54 virtual false final false
static bool IntersectRayAABB(UnityEngine::Ray ray, UnityEngine::Bounds bounds, ByRef<float_t> dist) ;

/// @brief Method Contains_Injected addr 0x2b53344 size 0x44 virtual false final false
static bool Contains_Injected(ByRef<UnityEngine::Bounds> _unity_self, ByRef<UnityEngine::Vector3> point) ;

/// @brief Method IntersectRayAABB_Injected addr 0x2b53388 size 0x54 virtual false final false
static bool IntersectRayAABB_Injected(ByRef<UnityEngine::Ray> ray, ByRef<UnityEngine::Bounds> bounds, ByRef<float_t> dist) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bounds, "UnityEngine", "Bounds");
