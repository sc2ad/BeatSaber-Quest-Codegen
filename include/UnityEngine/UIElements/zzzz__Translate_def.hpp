#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
struct Length;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Translate;
}
// Type: UnityEngine.UIElements::Translate
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7401))
// CS Name: UnityEngine.UIElements.Translate
struct CORDL_TYPE Translate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::Translate>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::Translate>() const;

// Ctor Parameters [CppParam { name: "m_X", ty: "UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Z", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_isNone", ty: "bool", modifiers: "", def_value: None }]
constexpr Translate(UnityEngine::UIElements::Length m_X, UnityEngine::UIElements::Length m_Y, float_t m_Z, bool m_isNone) noexcept;


                    constexpr Translate(Translate const&) = default;
                    constexpr Translate(Translate&&) = default;
                    constexpr Translate& operator=(Translate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Translate& operator=(Translate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Translate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::Length __declspec(property(get=__get_m_X, put=__set_m_X))  m_X;

constexpr void __set_m_X(UnityEngine::UIElements::Length value) ;

constexpr UnityEngine::UIElements::Length __get_m_X() const;

 UnityEngine::UIElements::Length __declspec(property(get=__get_m_Y, put=__set_m_Y))  m_Y;

constexpr void __set_m_Y(UnityEngine::UIElements::Length value) ;

constexpr UnityEngine::UIElements::Length __get_m_Y() const;

 float_t __declspec(property(get=__get_m_Z, put=__set_m_Z))  m_Z;

constexpr void __set_m_Z(float_t value) ;

constexpr float_t __get_m_Z() const;

 bool __declspec(property(get=__get_m_isNone, put=__set_m_isNone))  m_isNone;

constexpr void __set_m_isNone(bool value) ;

constexpr bool __get_m_isNone() const;


// Properties

 UnityEngine::UIElements::Length __declspec(property(get=get_x))  x;

 UnityEngine::UIElements::Length __declspec(property(get=get_y))  y;

 float_t __declspec(property(get=get_z))  z;


// Methods

/// @brief Method .ctor addr 0x2cfa010 size 0x10 virtual false final false
 void _ctor(UnityEngine::UIElements::Length x, UnityEngine::UIElements::Length y, float_t z) ;

/// @brief Method None addr 0x2cf9fd4 size 0x1c virtual false final false
static UnityEngine::UIElements::Translate None() ;

/// @brief Method get_x addr 0x2cfa020 size 0x8 virtual false final false
 UnityEngine::UIElements::Length get_x() ;

/// @brief Method get_y addr 0x2cfa028 size 0x8 virtual false final false
 UnityEngine::UIElements::Length get_y() ;

/// @brief Method get_z addr 0x2cfa030 size 0x8 virtual false final false
 float_t get_z() ;

/// @brief Method op_Equality addr 0x2cf7f6c size 0x7c virtual false final false
static bool op_Equality(UnityEngine::UIElements::Translate lhs, UnityEngine::UIElements::Translate rhs) ;

/// @brief Method op_Inequality addr 0x2cfa038 size 0x78 virtual false final false
static bool op_Inequality(UnityEngine::UIElements::Translate lhs, UnityEngine::UIElements::Translate rhs) ;

/// @brief Method Equals addr 0x2cfa0b0 size 0x7c virtual true final true
 bool Equals(UnityEngine::UIElements::Translate other) ;

/// @brief Method Equals addr 0x2cfa12c size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2cf8118 size 0x74 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cfa1bc size 0x1cc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Translate, "UnityEngine.UIElements", "Translate");
