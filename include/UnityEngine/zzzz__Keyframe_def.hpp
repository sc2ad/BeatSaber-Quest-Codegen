#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct Keyframe;
}
// Type: UnityEngine::Keyframe
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9983))
// CS Name: UnityEngine.Keyframe
struct CORDL_TYPE Keyframe : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_InTangent", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_OutTangent", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_WeightedMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_InWeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_OutWeight", ty: "float_t", modifiers: "", def_value: None }]
constexpr Keyframe(float_t m_Time, float_t m_Value, float_t m_InTangent, float_t m_OutTangent, int32_t m_WeightedMode, float_t m_InWeight, float_t m_OutWeight) noexcept;


                    constexpr Keyframe(Keyframe const&) = default;
                    constexpr Keyframe(Keyframe&&) = default;
                    constexpr Keyframe& operator=(Keyframe const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Keyframe& operator=(Keyframe&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Keyframe(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_m_Time, put=__set_m_Time))  m_Time;

constexpr void __set_m_Time(float_t value) ;

constexpr float_t __get_m_Time() const;

 float_t __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(float_t value) ;

constexpr float_t __get_m_Value() const;

 float_t __declspec(property(get=__get_m_InTangent, put=__set_m_InTangent))  m_InTangent;

constexpr void __set_m_InTangent(float_t value) ;

constexpr float_t __get_m_InTangent() const;

 float_t __declspec(property(get=__get_m_OutTangent, put=__set_m_OutTangent))  m_OutTangent;

constexpr void __set_m_OutTangent(float_t value) ;

constexpr float_t __get_m_OutTangent() const;

 int32_t __declspec(property(get=__get_m_WeightedMode, put=__set_m_WeightedMode))  m_WeightedMode;

constexpr void __set_m_WeightedMode(int32_t value) ;

constexpr int32_t __get_m_WeightedMode() const;

 float_t __declspec(property(get=__get_m_InWeight, put=__set_m_InWeight))  m_InWeight;

constexpr void __set_m_InWeight(float_t value) ;

constexpr float_t __get_m_InWeight() const;

 float_t __declspec(property(get=__get_m_OutWeight, put=__set_m_OutWeight))  m_OutWeight;

constexpr void __set_m_OutWeight(float_t value) ;

constexpr float_t __get_m_OutWeight() const;


// Properties

 float_t __declspec(property(get=get_time, put=set_time))  time;

 float_t __declspec(property(get=get_value, put=set_value))  value;

 float_t __declspec(property(get=get_inTangent, put=set_inTangent))  inTangent;

 float_t __declspec(property(get=get_outTangent, put=set_outTangent))  outTangent;


// Methods

/// @brief Method .ctor addr 0x2b28f64 size 0x10 virtual false final false
 void _ctor(float_t time, float_t value) ;

/// @brief Method .ctor addr 0x2b28f74 size 0x14 virtual false final false
 void _ctor(float_t time, float_t value, float_t inTangent, float_t outTangent) ;

/// @brief Method get_time addr 0x2b28f88 size 0x8 virtual false final false
 float_t get_time() ;

/// @brief Method set_time addr 0x2b28f90 size 0x8 virtual false final false
 void set_time(float_t value) ;

/// @brief Method get_value addr 0x2b28f98 size 0x8 virtual false final false
 float_t get_value() ;

/// @brief Method set_value addr 0x2b28fa0 size 0x8 virtual false final false
 void set_value(float_t value) ;

/// @brief Method get_inTangent addr 0x2b28fa8 size 0x8 virtual false final false
 float_t get_inTangent() ;

/// @brief Method set_inTangent addr 0x2b28fb0 size 0x8 virtual false final false
 void set_inTangent(float_t value) ;

/// @brief Method get_outTangent addr 0x2b28fb8 size 0x8 virtual false final false
 float_t get_outTangent() ;

/// @brief Method set_outTangent addr 0x2b28fc0 size 0x8 virtual false final false
 void set_outTangent(float_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Keyframe, "UnityEngine", "Keyframe");
