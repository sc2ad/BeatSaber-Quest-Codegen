#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Timeline {
struct TrackBindingFlags;
}
// Type: UnityEngine.Timeline::TrackBindingFlags
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14128))
// CS Name: UnityEngine.Timeline.TrackBindingFlags
struct CORDL_TYPE TrackBindingFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TrackBindingFlags(int32_t value__) noexcept;


                    constexpr TrackBindingFlags(TrackBindingFlags const&) = default;
                    constexpr TrackBindingFlags(TrackBindingFlags&&) = default;
                    constexpr TrackBindingFlags& operator=(TrackBindingFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TrackBindingFlags& operator=(TrackBindingFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TrackBindingFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TrackBindingFlags_Unwrapped : int32_t {
__None = 0,
__AllowCreateComponent = 1,
__All = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TrackBindingFlags_Unwrapped () const noexcept {
return std::bit_cast<__TrackBindingFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::Timeline::TrackBindingFlags const None;

/// @brief Field AllowCreateComponent offset 0
static ::UnityEngine::Timeline::TrackBindingFlags const AllowCreateComponent;

/// @brief Field All offset 0
static ::UnityEngine::Timeline::TrackBindingFlags const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackBindingFlags, "UnityEngine.Timeline", "TrackBindingFlags");
