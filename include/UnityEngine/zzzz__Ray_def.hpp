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
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct Ray;
}
// Type: UnityEngine::Ray
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10111))
// CS Name: UnityEngine.Ray
struct CORDL_TYPE Ray : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

// Ctor Parameters [CppParam { name: "m_Origin", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Direction", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr Ray(UnityEngine::Vector3 m_Origin, UnityEngine::Vector3 m_Direction) noexcept;


                    constexpr Ray(Ray const&) = default;
                    constexpr Ray(Ray&&) = default;
                    constexpr Ray& operator=(Ray const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Ray& operator=(Ray&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Ray(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_m_Origin, put=__set_m_Origin))  m_Origin;

constexpr void __set_m_Origin(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Origin() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Direction, put=__set_m_Direction))  m_Direction;

constexpr void __set_m_Direction(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Direction() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_origin, put=set_origin))  origin;

 UnityEngine::Vector3 __declspec(property(get=get_direction, put=set_direction))  direction;


// Methods

/// @brief Method .ctor addr 0x2b54a18 size 0xec virtual false final false
 void _ctor(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction) ;

/// @brief Method get_origin addr 0x2b52a0c size 0xc virtual false final false
 UnityEngine::Vector3 get_origin() ;

/// @brief Method set_origin addr 0x2b54b04 size 0xc virtual false final false
 void set_origin(UnityEngine::Vector3 value) ;

/// @brief Method get_direction addr 0x2b52a00 size 0xc virtual false final false
 UnityEngine::Vector3 get_direction() ;

/// @brief Method set_direction addr 0x2b54b10 size 0xe4 virtual false final false
 void set_direction(UnityEngine::Vector3 value) ;

/// @brief Method GetPoint addr 0x2b54bf4 size 0x28 virtual false final false
 UnityEngine::Vector3 GetPoint(float_t distance) ;

/// @brief Method ToString addr 0x2b54c1c size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b54c28 size 0x188 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider formatProvider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Ray, "UnityEngine", "Ray");
