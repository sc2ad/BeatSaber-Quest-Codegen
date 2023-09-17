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
struct TimeUnit;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TimeValue;
}
// Type: UnityEngine.UIElements::TimeValue
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7421))
// CS Name: UnityEngine.UIElements.TimeValue
struct CORDL_TYPE TimeValue : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::TimeValue>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::TimeValue>() const;

// Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Unit", ty: "::UnityEngine::UIElements::TimeUnit", modifiers: "", def_value: None }]
constexpr TimeValue(float_t m_Value, ::UnityEngine::UIElements::TimeUnit m_Unit) noexcept;


                    constexpr TimeValue(TimeValue const&) = default;
                    constexpr TimeValue(TimeValue&&) = default;
                    constexpr TimeValue& operator=(TimeValue const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TimeValue& operator=(TimeValue&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TimeValue(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(float_t value) ;

constexpr float_t __get_m_Value() const;

 ::UnityEngine::UIElements::TimeUnit __declspec(property(get=__get_m_Unit, put=__set_m_Unit))  m_Unit;

constexpr void __set_m_Unit(::UnityEngine::UIElements::TimeUnit value) ;

constexpr ::UnityEngine::UIElements::TimeUnit __get_m_Unit() const;


// Properties

 float_t __declspec(property(get=get_value))  value;

 ::UnityEngine::UIElements::TimeUnit __declspec(property(get=get_unit))  unit;


// Methods

/// @brief Method get_value addr 0x2cfee74 size 0x8 virtual false final false
 float_t get_value() ;

/// @brief Method get_unit addr 0x2cfee7c size 0x8 virtual false final false
 ::UnityEngine::UIElements::TimeUnit get_unit() ;

/// @brief Method .ctor addr 0x2cf6ce4 size 0xc virtual false final false
 void _ctor(float_t value) ;

/// @brief Method .ctor addr 0x2cfee84 size 0xc virtual false final false
 void _ctor(float_t value, ::UnityEngine::UIElements::TimeUnit unit) ;

/// @brief Method op_Implicit addr 0x2cfee90 size 0x8 virtual false final false
static ::UnityEngine::UIElements::TimeValue op_Implicit___UnityEngine__UIElements__TimeValue(float_t value) ;

/// @brief Method op_Equality addr 0x2cfee98 size 0x28 virtual false final false
static bool op_Equality(::UnityEngine::UIElements::TimeValue lhs, ::UnityEngine::UIElements::TimeValue rhs) ;

/// @brief Method op_Inequality addr 0x2cf6cbc size 0x28 virtual false final false
static bool op_Inequality(::UnityEngine::UIElements::TimeValue lhs, ::UnityEngine::UIElements::TimeValue rhs) ;

/// @brief Method Equals addr 0x2cfeec0 size 0x28 virtual true final true
 bool Equals(::UnityEngine::UIElements::TimeValue other) ;

/// @brief Method Equals addr 0x2cfeee8 size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2cf6974 size 0x28 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2cfef74 size 0xf8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TimeValue, "UnityEngine.UIElements", "TimeValue");
