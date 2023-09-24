#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_HeightFieldSampling;
}
// Type: HoudiniEngineUnity::HAPI_HeightFieldSampling
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9662))
// CS Name: HoudiniEngineUnity.HAPI_HeightFieldSampling
struct CORDL_TYPE HAPI_HeightFieldSampling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_HeightFieldSampling(int32_t value__) noexcept;


                    constexpr HAPI_HeightFieldSampling(HAPI_HeightFieldSampling const&) = default;
                    constexpr HAPI_HeightFieldSampling(HAPI_HeightFieldSampling&&) = default;
                    constexpr HAPI_HeightFieldSampling& operator=(HAPI_HeightFieldSampling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_HeightFieldSampling& operator=(HAPI_HeightFieldSampling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_HeightFieldSampling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_HeightFieldSampling_Unwrapped : int32_t {
__HAPI_HEIGHTFIELD_SAMPLING_CENTER = 0,
__HAPI_HEIGHTFIELD_SAMPLING_CORNER = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_HeightFieldSampling_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_HeightFieldSampling_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_HEIGHTFIELD_SAMPLING_CENTER offset 0
static HoudiniEngineUnity::HAPI_HeightFieldSampling const HAPI_HEIGHTFIELD_SAMPLING_CENTER;

/// @brief Field HAPI_HEIGHTFIELD_SAMPLING_CORNER offset 0
static HoudiniEngineUnity::HAPI_HeightFieldSampling const HAPI_HEIGHTFIELD_SAMPLING_CORNER;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_HeightFieldSampling, "HoudiniEngineUnity", "HAPI_HeightFieldSampling");
