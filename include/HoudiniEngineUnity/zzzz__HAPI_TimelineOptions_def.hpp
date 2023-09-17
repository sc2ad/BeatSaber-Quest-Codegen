#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_TimelineOptions;
}
// Type: HoudiniEngineUnity::HAPI_TimelineOptions
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9671))
// CS Name: HoudiniEngineUnity.HAPI_TimelineOptions
struct CORDL_TYPE HAPI_TimelineOptions : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "fps", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "startTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "endTime", ty: "float_t", modifiers: "", def_value: None }]
constexpr HAPI_TimelineOptions(float_t fps, float_t startTime, float_t endTime) noexcept;


                    constexpr HAPI_TimelineOptions(HAPI_TimelineOptions const&) = default;
                    constexpr HAPI_TimelineOptions(HAPI_TimelineOptions&&) = default;
                    constexpr HAPI_TimelineOptions& operator=(HAPI_TimelineOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_TimelineOptions& operator=(HAPI_TimelineOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_TimelineOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_fps, put=__set_fps))  fps;

constexpr void __set_fps(float_t value) ;

constexpr float_t __get_fps() const;

 float_t __declspec(property(get=__get_startTime, put=__set_startTime))  startTime;

constexpr void __set_startTime(float_t value) ;

constexpr float_t __get_startTime() const;

 float_t __declspec(property(get=__get_endTime, put=__set_endTime))  endTime;

constexpr void __set_endTime(float_t value) ;

constexpr float_t __get_endTime() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_TimelineOptions, "HoudiniEngineUnity", "HAPI_TimelineOptions");
