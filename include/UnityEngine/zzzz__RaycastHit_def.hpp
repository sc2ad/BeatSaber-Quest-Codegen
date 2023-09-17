#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct RaycastHit;
}
// Type: UnityEngine::RaycastHit
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15463))
// CS Name: UnityEngine.RaycastHit
struct CORDL_TYPE RaycastHit : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_FaceID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UV", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Collider", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RaycastHit(::UnityEngine::Vector3 m_Point, ::UnityEngine::Vector3 m_Normal, uint32_t m_FaceID, float_t m_Distance, ::UnityEngine::Vector2 m_UV, int32_t m_Collider) noexcept;


                    constexpr RaycastHit(RaycastHit const&) = default;
                    constexpr RaycastHit(RaycastHit&&) = default;
                    constexpr RaycastHit& operator=(RaycastHit const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RaycastHit& operator=(RaycastHit&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RaycastHit(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_Point, put=__set_m_Point))  m_Point;

constexpr void __set_m_Point(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_Point() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_Normal, put=__set_m_Normal))  m_Normal;

constexpr void __set_m_Normal(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_Normal() const;

 uint32_t __declspec(property(get=__get_m_FaceID, put=__set_m_FaceID))  m_FaceID;

constexpr void __set_m_FaceID(uint32_t value) ;

constexpr uint32_t __get_m_FaceID() const;

 float_t __declspec(property(get=__get_m_Distance, put=__set_m_Distance))  m_Distance;

constexpr void __set_m_Distance(float_t value) ;

constexpr float_t __get_m_Distance() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_UV, put=__set_m_UV))  m_UV;

constexpr void __set_m_UV(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_UV() const;

 int32_t __declspec(property(get=__get_m_Collider, put=__set_m_Collider))  m_Collider;

constexpr void __set_m_Collider(int32_t value) ;

constexpr int32_t __get_m_Collider() const;


// Properties

 ::UnityEngine::Collider __declspec(property(get=get_collider))  collider;

 ::UnityEngine::Vector3 __declspec(property(get=get_point, put=set_point))  point;

 ::UnityEngine::Vector3 __declspec(property(get=get_normal, put=set_normal))  normal;

 float_t __declspec(property(get=get_distance, put=set_distance))  distance;


// Methods

/// @brief Method get_collider addr 0x2b9eb3c size 0xac virtual false final false
 ::UnityEngine::Collider get_collider() ;

/// @brief Method get_point addr 0x2b9ebe8 size 0xc virtual false final false
 ::UnityEngine::Vector3 get_point() ;

/// @brief Method set_point addr 0x2b9ebf4 size 0xc virtual false final false
 void set_point(::UnityEngine::Vector3 value) ;

/// @brief Method get_normal addr 0x2b9ec00 size 0xc virtual false final false
 ::UnityEngine::Vector3 get_normal() ;

/// @brief Method set_normal addr 0x2b9ec0c size 0xc virtual false final false
 void set_normal(::UnityEngine::Vector3 value) ;

/// @brief Method get_distance addr 0x2b9ec18 size 0x8 virtual false final false
 float_t get_distance() ;

/// @brief Method set_distance addr 0x2b9ec20 size 0x8 virtual false final false
 void set_distance(float_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RaycastHit, "UnityEngine", "RaycastHit");
