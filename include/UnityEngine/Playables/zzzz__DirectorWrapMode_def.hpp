#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
// Type: UnityEngine.Playables::DirectorWrapMode
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10363))
// CS Name: UnityEngine.Playables.DirectorWrapMode
struct CORDL_TYPE DirectorWrapMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DirectorWrapMode(int32_t value__) noexcept;


                    constexpr DirectorWrapMode(DirectorWrapMode const&) = default;
                    constexpr DirectorWrapMode(DirectorWrapMode&&) = default;
                    constexpr DirectorWrapMode& operator=(DirectorWrapMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DirectorWrapMode& operator=(DirectorWrapMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DirectorWrapMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DirectorWrapMode_Unwrapped : int32_t {
__Hold = 0,
__Loop = 1,
__None = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DirectorWrapMode_Unwrapped () const noexcept {
return std::bit_cast<__DirectorWrapMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Hold offset 0
static ::UnityEngine::Playables::DirectorWrapMode const Hold;

/// @brief Field Loop offset 0
static ::UnityEngine::Playables::DirectorWrapMode const Loop;

/// @brief Field None offset 0
static ::UnityEngine::Playables::DirectorWrapMode const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::DirectorWrapMode, "UnityEngine.Playables", "DirectorWrapMode");