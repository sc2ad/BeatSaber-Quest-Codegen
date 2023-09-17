#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace LIV::SDK::Unity {
struct RENDERING_PIPELINE;
}
// Type: LIV.SDK.Unity::RENDERING_PIPELINE
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15155))
// CS Name: LIV.SDK.Unity.RENDERING_PIPELINE
struct CORDL_TYPE RENDERING_PIPELINE : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr RENDERING_PIPELINE(uint32_t value__) noexcept;


                    constexpr RENDERING_PIPELINE(RENDERING_PIPELINE const&) = default;
                    constexpr RENDERING_PIPELINE(RENDERING_PIPELINE&&) = default;
                    constexpr RENDERING_PIPELINE& operator=(RENDERING_PIPELINE const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RENDERING_PIPELINE& operator=(RENDERING_PIPELINE&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RENDERING_PIPELINE(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RENDERING_PIPELINE_Unwrapped : uint32_t {
__UNDEFINED = 0u,
__FORWARD = 1u,
__DEFERRED = 2u,
__VERTEX_LIT = 3u,
__UNIVERSAL = 4u,
__HIGH_DEFINITION = 5u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RENDERING_PIPELINE_Unwrapped () const noexcept {
return std::bit_cast<__RENDERING_PIPELINE_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field UNDEFINED offset 0
static ::LIV::SDK::Unity::RENDERING_PIPELINE const UNDEFINED;

/// @brief Field FORWARD offset 0
static ::LIV::SDK::Unity::RENDERING_PIPELINE const FORWARD;

/// @brief Field DEFERRED offset 0
static ::LIV::SDK::Unity::RENDERING_PIPELINE const DEFERRED;

/// @brief Field VERTEX_LIT offset 0
static ::LIV::SDK::Unity::RENDERING_PIPELINE const VERTEX_LIT;

/// @brief Field UNIVERSAL offset 0
static ::LIV::SDK::Unity::RENDERING_PIPELINE const UNIVERSAL;

/// @brief Field HIGH_DEFINITION offset 0
static ::LIV::SDK::Unity::RENDERING_PIPELINE const HIGH_DEFINITION;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::RENDERING_PIPELINE, "LIV.SDK.Unity", "RENDERING_PIPELINE");
