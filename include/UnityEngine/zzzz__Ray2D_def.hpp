#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct Ray2D;
}
// Type: UnityEngine::Ray2D
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10108))
// CS Name: UnityEngine.Ray2D
struct CORDL_TYPE Ray2D : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

// Ctor Parameters [CppParam { name: "m_Origin", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Direction", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr Ray2D(UnityEngine::Vector2 m_Origin, UnityEngine::Vector2 m_Direction) noexcept;


                    constexpr Ray2D(Ray2D const&) = default;
                    constexpr Ray2D(Ray2D&&) = default;
                    constexpr Ray2D& operator=(Ray2D const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Ray2D& operator=(Ray2D&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Ray2D(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector2 __declspec(property(get=__get_m_Origin, put=__set_m_Origin))  m_Origin;

constexpr void __set_m_Origin(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_Origin() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_Direction, put=__set_m_Direction))  m_Direction;

constexpr void __set_m_Direction(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_Direction() const;


// Properties

 UnityEngine::Vector2 __declspec(property(get=get_origin))  origin;

 UnityEngine::Vector2 __declspec(property(get=get_direction))  direction;


// Methods

/// @brief Method .ctor addr 0x2b53b40 size 0xc8 virtual false final false
 void _ctor(UnityEngine::Vector2 origin, UnityEngine::Vector2 direction) ;

/// @brief Method get_origin addr 0x2b53c08 size 0x8 virtual false final false
 UnityEngine::Vector2 get_origin() ;

/// @brief Method get_direction addr 0x2b53c10 size 0x8 virtual false final false
 UnityEngine::Vector2 get_direction() ;

/// @brief Method GetPoint addr 0x2b53c18 size 0x14 virtual false final false
 UnityEngine::Vector2 GetPoint(float_t distance) ;

/// @brief Method ToString addr 0x2b53c2c size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b53c38 size 0x180 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider formatProvider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Ray2D, "UnityEngine", "Ray2D");
