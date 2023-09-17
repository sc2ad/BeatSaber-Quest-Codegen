#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_PipelineType;
}
// Type: HoudiniEngineUnity::HEU_PipelineType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9794))
// CS Name: HoudiniEngineUnity.HEU_PipelineType
struct CORDL_TYPE HEU_PipelineType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HEU_PipelineType(int32_t value__) noexcept;


                    constexpr HEU_PipelineType(HEU_PipelineType const&) = default;
                    constexpr HEU_PipelineType(HEU_PipelineType&&) = default;
                    constexpr HEU_PipelineType& operator=(HEU_PipelineType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HEU_PipelineType& operator=(HEU_PipelineType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HEU_PipelineType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HEU_PipelineType_Unwrapped : int32_t {
__Unsupported = 0,
__BiRP = 1,
__URP = 2,
__HDRP = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HEU_PipelineType_Unwrapped () const noexcept {
return std::bit_cast<__HEU_PipelineType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unsupported offset 0
static ::HoudiniEngineUnity::HEU_PipelineType const Unsupported;

/// @brief Field BiRP offset 0
static ::HoudiniEngineUnity::HEU_PipelineType const BiRP;

/// @brief Field URP offset 0
static ::HoudiniEngineUnity::HEU_PipelineType const URP;

/// @brief Field HDRP offset 0
static ::HoudiniEngineUnity::HEU_PipelineType const HDRP;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PipelineType, "HoudiniEngineUnity", "HEU_PipelineType");
