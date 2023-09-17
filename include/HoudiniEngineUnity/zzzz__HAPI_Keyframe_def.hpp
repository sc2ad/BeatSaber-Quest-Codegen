#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_Keyframe;
}
// Type: HoudiniEngineUnity::HAPI_Keyframe
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9686))
// CS Name: HoudiniEngineUnity.HAPI_Keyframe
struct CORDL_TYPE HAPI_Keyframe : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "inTangent", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "outTangent", ty: "float_t", modifiers: "", def_value: None }]
constexpr HAPI_Keyframe(float_t time, float_t value, float_t inTangent, float_t outTangent) noexcept;


                    constexpr HAPI_Keyframe(HAPI_Keyframe const&) = default;
                    constexpr HAPI_Keyframe(HAPI_Keyframe&&) = default;
                    constexpr HAPI_Keyframe& operator=(HAPI_Keyframe const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_Keyframe& operator=(HAPI_Keyframe&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_Keyframe(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;

 float_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(float_t value) ;

constexpr float_t __get_value() const;

 float_t __declspec(property(get=__get_inTangent, put=__set_inTangent))  inTangent;

constexpr void __set_inTangent(float_t value) ;

constexpr float_t __get_inTangent() const;

 float_t __declspec(property(get=__get_outTangent, put=__set_outTangent))  outTangent;

constexpr void __set_outTangent(float_t value) ;

constexpr float_t __get_outTangent() const;


// Methods

/// @brief Method .ctor addr 0x201f620 size 0xc virtual false final false
 void _ctor(float_t t, float_t v, float_t in_tangent, float_t out_tangent) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_Keyframe, "HoudiniEngineUnity", "HAPI_Keyframe");
