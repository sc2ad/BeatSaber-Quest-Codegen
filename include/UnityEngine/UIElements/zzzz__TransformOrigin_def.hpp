#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct Length;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
// Type: UnityEngine.UIElements::TransformOrigin
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7416))
// CS Name: UnityEngine.UIElements.TransformOrigin
struct CORDL_TYPE TransformOrigin : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::TransformOrigin>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::TransformOrigin>() const;

// Ctor Parameters [CppParam { name: "m_X", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Z", ty: "float_t", modifiers: "", def_value: None }]
constexpr TransformOrigin(::UnityEngine::UIElements::Length m_X, ::UnityEngine::UIElements::Length m_Y, float_t m_Z) noexcept;


                    constexpr TransformOrigin(TransformOrigin const&) = default;
                    constexpr TransformOrigin(TransformOrigin&&) = default;
                    constexpr TransformOrigin& operator=(TransformOrigin const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TransformOrigin& operator=(TransformOrigin&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TransformOrigin(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_m_X, put=__set_m_X))  m_X;

constexpr void __set_m_X(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_m_X() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_m_Y, put=__set_m_Y))  m_Y;

constexpr void __set_m_Y(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_m_Y() const;

 float_t __declspec(property(get=__get_m_Z, put=__set_m_Z))  m_Z;

constexpr void __set_m_Z(float_t value) ;

constexpr float_t __get_m_Z() const;


// Properties

 ::UnityEngine::UIElements::Length __declspec(property(get=get_x))  x;

 ::UnityEngine::UIElements::Length __declspec(property(get=get_y))  y;

 float_t __declspec(property(get=get_z))  z;


// Methods

/// @brief Method .ctor addr 0x2cfe48c size 0xc virtual false final false
 void _ctor(::UnityEngine::UIElements::Length x, ::UnityEngine::UIElements::Length y, float_t z) ;

/// @brief Method Initial addr 0x2cfe498 size 0x18 virtual false final false
static ::UnityEngine::UIElements::TransformOrigin Initial() ;

/// @brief Method get_x addr 0x2cfe4b0 size 0x8 virtual false final false
 ::UnityEngine::UIElements::Length get_x() ;

/// @brief Method get_y addr 0x2cfe4b8 size 0x8 virtual false final false
 ::UnityEngine::UIElements::Length get_y() ;

/// @brief Method get_z addr 0x2cfe4c0 size 0x8 virtual false final false
 float_t get_z() ;

/// @brief Method op_Equality addr 0x2cfe1f0 size 0x60 virtual false final false
static bool op_Equality(::UnityEngine::UIElements::TransformOrigin lhs, ::UnityEngine::UIElements::TransformOrigin rhs) ;

/// @brief Method op_Inequality addr 0x2cfe4c8 size 0x6c virtual false final false
static bool op_Inequality(::UnityEngine::UIElements::TransformOrigin lhs, ::UnityEngine::UIElements::TransformOrigin rhs) ;

/// @brief Method Equals addr 0x2cfe534 size 0x6c virtual true final true
 bool Equals(::UnityEngine::UIElements::TransformOrigin other) ;

/// @brief Method Equals addr 0x2cfe5a0 size 0xd0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2cfe390 size 0x74 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cfe670 size 0x1cc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransformOrigin, "UnityEngine.UIElements", "TransformOrigin");
