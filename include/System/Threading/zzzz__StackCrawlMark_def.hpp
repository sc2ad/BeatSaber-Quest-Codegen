#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Threading {
struct StackCrawlMark;
}
// Type: System.Threading::StackCrawlMark
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2723))
// CS Name: System.Threading.StackCrawlMark
struct CORDL_TYPE StackCrawlMark : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StackCrawlMark(int32_t value__) noexcept;


                    constexpr StackCrawlMark(StackCrawlMark const&) = default;
                    constexpr StackCrawlMark(StackCrawlMark&&) = default;
                    constexpr StackCrawlMark& operator=(StackCrawlMark const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StackCrawlMark& operator=(StackCrawlMark&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StackCrawlMark(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StackCrawlMark_Unwrapped : int32_t {
__LookForMe = 0,
__LookForMyCaller = 1,
__LookForMyCallersCaller = 2,
__LookForThread = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StackCrawlMark_Unwrapped () const noexcept {
return std::bit_cast<__StackCrawlMark_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LookForMe offset 0
static System::Threading::StackCrawlMark const LookForMe;

/// @brief Field LookForMyCaller offset 0
static System::Threading::StackCrawlMark const LookForMyCaller;

/// @brief Field LookForMyCallersCaller offset 0
static System::Threading::StackCrawlMark const LookForMyCallersCaller;

/// @brief Field LookForThread offset 0
static System::Threading::StackCrawlMark const LookForThread;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE(System::Threading::StackCrawlMark, "System.Threading", "StackCrawlMark");
