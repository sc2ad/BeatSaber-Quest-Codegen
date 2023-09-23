#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Scale;
}
// Type: UnityEngine.UIElements::Scale
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7417))
// CS Name: UnityEngine.UIElements.Scale
struct CORDL_TYPE Scale : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::Scale>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::Scale>() const;

// Ctor Parameters [CppParam { name: "m_Scale", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_IsNone", ty: "bool", modifiers: "", def_value: None }]
constexpr Scale(UnityEngine::Vector3 m_Scale, bool m_IsNone) noexcept;


                    constexpr Scale(Scale const&) = default;
                    constexpr Scale(Scale&&) = default;
                    constexpr Scale& operator=(Scale const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Scale& operator=(Scale&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Scale(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_m_Scale, put=__set_m_Scale))  m_Scale;

constexpr void __set_m_Scale(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Scale() const;

 bool __declspec(property(get=__get_m_IsNone, put=__set_m_IsNone))  m_IsNone;

constexpr void __set_m_IsNone(bool value) ;

constexpr bool __get_m_IsNone() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_value))  value;


// Methods

/// @brief Method .ctor addr 0x2cfe83c size 0x14 virtual false final false
 void _ctor(UnityEngine::Vector3 scale) ;

/// @brief Method Initial addr 0x2cfe850 size 0x44 virtual false final false
static UnityEngine::UIElements::Scale Initial() ;

/// @brief Method None addr 0x2cf9e6c size 0x18 virtual false final false
static UnityEngine::UIElements::Scale None() ;

/// @brief Method get_value addr 0x2cfe894 size 0xc virtual false final false
 UnityEngine::Vector3 get_value() ;

/// @brief Method op_Equality addr 0x2cf562c size 0x54 virtual false final false
static bool op_Equality(UnityEngine::UIElements::Scale lhs, UnityEngine::UIElements::Scale rhs) ;

/// @brief Method op_Inequality addr 0x2cfe8a0 size 0x54 virtual false final false
static bool op_Inequality(UnityEngine::UIElements::Scale lhs, UnityEngine::UIElements::Scale rhs) ;

/// @brief Method Equals addr 0x2cfe8f4 size 0x4c virtual true final true
 bool Equals(UnityEngine::UIElements::Scale other) ;

/// @brief Method Equals addr 0x2cfe940 size 0xbc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2cf57f4 size 0x50 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cfe9fc size 0x8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Scale, "UnityEngine.UIElements", "Scale");
