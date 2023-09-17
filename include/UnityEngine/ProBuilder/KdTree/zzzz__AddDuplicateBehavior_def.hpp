#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
struct AddDuplicateBehavior;
}
// Type: UnityEngine.ProBuilder.KdTree::AddDuplicateBehavior
namespace UnityEngine::ProBuilder::KdTree {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15798))
// CS Name: UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior
struct CORDL_TYPE AddDuplicateBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AddDuplicateBehavior(int32_t value__) noexcept;


                    constexpr AddDuplicateBehavior(AddDuplicateBehavior const&) = default;
                    constexpr AddDuplicateBehavior(AddDuplicateBehavior&&) = default;
                    constexpr AddDuplicateBehavior& operator=(AddDuplicateBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AddDuplicateBehavior& operator=(AddDuplicateBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AddDuplicateBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AddDuplicateBehavior_Unwrapped : int32_t {
__Skip = 0,
__Error = 1,
__Update = 2,
__Collect = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AddDuplicateBehavior_Unwrapped () const noexcept {
return std::bit_cast<__AddDuplicateBehavior_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Skip offset 0
static ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const Skip;

/// @brief Field Error offset 0
static ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const Error;

/// @brief Field Update offset 0
static ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const Update;

/// @brief Field Collect offset 0
static ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior const Collect;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, "UnityEngine.ProBuilder.KdTree", "AddDuplicateBehavior");
