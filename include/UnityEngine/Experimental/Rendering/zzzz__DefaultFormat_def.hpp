#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
// Type: UnityEngine.Experimental.Rendering::DefaultFormat
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10341))
// CS Name: UnityEngine.Experimental.Rendering.DefaultFormat
struct CORDL_TYPE DefaultFormat : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DefaultFormat(int32_t value__) noexcept;


                    constexpr DefaultFormat(DefaultFormat const&) = default;
                    constexpr DefaultFormat(DefaultFormat&&) = default;
                    constexpr DefaultFormat& operator=(DefaultFormat const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DefaultFormat& operator=(DefaultFormat&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DefaultFormat(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DefaultFormat_Unwrapped : int32_t {
__LDR = 0,
__HDR = 1,
__DepthStencil = 2,
__Shadow = 3,
__Video = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DefaultFormat_Unwrapped () const noexcept {
return std::bit_cast<__DefaultFormat_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LDR offset 0
static ::UnityEngine::Experimental::Rendering::DefaultFormat const LDR;

/// @brief Field HDR offset 0
static ::UnityEngine::Experimental::Rendering::DefaultFormat const HDR;

/// @brief Field DepthStencil offset 0
static ::UnityEngine::Experimental::Rendering::DefaultFormat const DepthStencil;

/// @brief Field Shadow offset 0
static ::UnityEngine::Experimental::Rendering::DefaultFormat const Shadow;

/// @brief Field Video offset 0
static ::UnityEngine::Experimental::Rendering::DefaultFormat const Video;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::Rendering
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::DefaultFormat, "UnityEngine.Experimental.Rendering", "DefaultFormat");
