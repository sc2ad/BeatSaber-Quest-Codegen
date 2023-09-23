#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct Angle;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Rotate;
}
// Type: UnityEngine.UIElements::Rotate
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7394))
// CS Name: UnityEngine.UIElements.Rotate
struct CORDL_TYPE Rotate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::Rotate>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::Rotate>() const;

// Ctor Parameters [CppParam { name: "m_Angle", ty: "UnityEngine::UIElements::Angle", modifiers: "", def_value: None }, CppParam { name: "m_Axis", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_IsNone", ty: "bool", modifiers: "", def_value: None }]
constexpr Rotate(UnityEngine::UIElements::Angle m_Angle, UnityEngine::Vector3 m_Axis, bool m_IsNone) noexcept;


                    constexpr Rotate(Rotate const&) = default;
                    constexpr Rotate(Rotate&&) = default;
                    constexpr Rotate& operator=(Rotate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Rotate& operator=(Rotate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Rotate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::Angle __declspec(property(get=__get_m_Angle, put=__set_m_Angle))  m_Angle;

constexpr void __set_m_Angle(UnityEngine::UIElements::Angle value) ;

constexpr UnityEngine::UIElements::Angle __get_m_Angle() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Axis, put=__set_m_Axis))  m_Axis;

constexpr void __set_m_Axis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Axis() const;

 bool __declspec(property(get=__get_m_IsNone, put=__set_m_IsNone))  m_IsNone;

constexpr void __set_m_IsNone(bool value) ;

constexpr bool __get_m_IsNone() const;


// Properties

 UnityEngine::UIElements::Angle __declspec(property(get=get_angle, put=set_angle))  angle;


// Methods

/// @brief Method .ctor addr 0x2cf8db4 size 0x60 virtual false final false
 void _ctor(UnityEngine::UIElements::Angle angle) ;

/// @brief Method Initial addr 0x2cf8e14 size 0x8c virtual false final false
static UnityEngine::UIElements::Rotate Initial() ;

/// @brief Method None addr 0x2cf8ea8 size 0x70 virtual false final false
static UnityEngine::UIElements::Rotate None() ;

/// @brief Method get_angle addr 0x2cf8f18 size 0x8 virtual false final false
 UnityEngine::UIElements::Angle get_angle() ;

/// @brief Method set_angle addr 0x2cf8f20 size 0x8 virtual false final false
 void set_angle(UnityEngine::UIElements::Angle value) ;

/// @brief Method op_Equality addr 0x2cf8f28 size 0x84 virtual false final false
static bool op_Equality(UnityEngine::UIElements::Rotate lhs, UnityEngine::UIElements::Rotate rhs) ;

/// @brief Method op_Inequality addr 0x2cf8fd4 size 0x48 virtual false final false
static bool op_Inequality(UnityEngine::UIElements::Rotate lhs, UnityEngine::UIElements::Rotate rhs) ;

/// @brief Method Equals addr 0x2cf901c size 0x44 virtual true final true
 bool Equals(UnityEngine::UIElements::Rotate other) ;

/// @brief Method Equals addr 0x2cf9060 size 0xa0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2cf9100 size 0x98 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cf91c0 size 0x68 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToQuaternion addr 0x2cf9400 size 0x20 virtual false final false
 UnityEngine::Quaternion ToQuaternion() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Rotate, "UnityEngine.UIElements", "Rotate");
