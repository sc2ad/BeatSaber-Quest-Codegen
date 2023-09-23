#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct HumanLimit;
}
// Type: UnityEngine::HumanLimit
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15024))
// CS Name: UnityEngine.HumanLimit
struct CORDL_TYPE HumanLimit : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Min", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Max", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Center", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AxisLength", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UseDefaultValues", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HumanLimit(UnityEngine::Vector3 m_Min, UnityEngine::Vector3 m_Max, UnityEngine::Vector3 m_Center, float_t m_AxisLength, int32_t m_UseDefaultValues) noexcept;


                    constexpr HumanLimit(HumanLimit const&) = default;
                    constexpr HumanLimit(HumanLimit&&) = default;
                    constexpr HumanLimit& operator=(HumanLimit const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HumanLimit& operator=(HumanLimit&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HumanLimit(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_m_Min, put=__set_m_Min))  m_Min;

constexpr void __set_m_Min(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Min() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Max, put=__set_m_Max))  m_Max;

constexpr void __set_m_Max(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Max() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Center, put=__set_m_Center))  m_Center;

constexpr void __set_m_Center(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Center() const;

 float_t __declspec(property(get=__get_m_AxisLength, put=__set_m_AxisLength))  m_AxisLength;

constexpr void __set_m_AxisLength(float_t value) ;

constexpr float_t __get_m_AxisLength() const;

 int32_t __declspec(property(get=__get_m_UseDefaultValues, put=__set_m_UseDefaultValues))  m_UseDefaultValues;

constexpr void __set_m_UseDefaultValues(int32_t value) ;

constexpr int32_t __get_m_UseDefaultValues() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HumanLimit, "UnityEngine", "HumanLimit");
