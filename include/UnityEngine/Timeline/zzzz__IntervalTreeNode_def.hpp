#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Timeline {
struct IntervalTreeNode;
}
// Type: UnityEngine.Timeline::IntervalTreeNode
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14090))
// CS Name: UnityEngine.Timeline.IntervalTreeNode
struct CORDL_TYPE IntervalTreeNode : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "center", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "first", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "last", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "left", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "right", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IntervalTreeNode(int64_t center, int32_t first, int32_t last, int32_t left, int32_t right) noexcept;


                    constexpr IntervalTreeNode(IntervalTreeNode const&) = default;
                    constexpr IntervalTreeNode(IntervalTreeNode&&) = default;
                    constexpr IntervalTreeNode& operator=(IntervalTreeNode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IntervalTreeNode& operator=(IntervalTreeNode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IntervalTreeNode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int64_t __declspec(property(get=__get_center, put=__set_center))  center;

constexpr void __set_center(int64_t value) ;

constexpr int64_t __get_center() const;

 int32_t __declspec(property(get=__get_first, put=__set_first))  first;

constexpr void __set_first(int32_t value) ;

constexpr int32_t __get_first() const;

 int32_t __declspec(property(get=__get_last, put=__set_last))  last;

constexpr void __set_last(int32_t value) ;

constexpr int32_t __get_last() const;

 int32_t __declspec(property(get=__get_left, put=__set_left))  left;

constexpr void __set_left(int32_t value) ;

constexpr int32_t __get_left() const;

 int32_t __declspec(property(get=__get_right, put=__set_right))  right;

constexpr void __set_right(int32_t value) ;

constexpr int32_t __get_right() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IntervalTreeNode, "UnityEngine.Timeline", "IntervalTreeNode");
