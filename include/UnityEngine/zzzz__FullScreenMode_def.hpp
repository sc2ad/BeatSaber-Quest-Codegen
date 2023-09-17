#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct FullScreenMode;
}
// Type: UnityEngine::FullScreenMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10072))
// CS Name: UnityEngine.FullScreenMode
struct CORDL_TYPE FullScreenMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FullScreenMode(int32_t value__) noexcept;


                    constexpr FullScreenMode(FullScreenMode const&) = default;
                    constexpr FullScreenMode(FullScreenMode&&) = default;
                    constexpr FullScreenMode& operator=(FullScreenMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FullScreenMode& operator=(FullScreenMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FullScreenMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FullScreenMode_Unwrapped : int32_t {
__ExclusiveFullScreen = 0,
__FullScreenWindow = 1,
__MaximizedWindow = 2,
__Windowed = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FullScreenMode_Unwrapped () const noexcept {
return std::bit_cast<__FullScreenMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ExclusiveFullScreen offset 0
static ::UnityEngine::FullScreenMode const ExclusiveFullScreen;

/// @brief Field FullScreenWindow offset 0
static ::UnityEngine::FullScreenMode const FullScreenWindow;

/// @brief Field MaximizedWindow offset 0
static ::UnityEngine::FullScreenMode const MaximizedWindow;

/// @brief Field Windowed offset 0
static ::UnityEngine::FullScreenMode const Windowed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FullScreenMode, "UnityEngine", "FullScreenMode");
