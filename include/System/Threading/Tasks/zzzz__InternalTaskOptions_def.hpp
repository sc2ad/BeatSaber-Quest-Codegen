#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
// Type: System.Threading.Tasks::InternalTaskOptions
namespace System::Threading::Tasks {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2787))
// CS Name: System.Threading.Tasks.InternalTaskOptions
struct CORDL_TYPE InternalTaskOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InternalTaskOptions(int32_t value__) noexcept;


                    constexpr InternalTaskOptions(InternalTaskOptions const&) = default;
                    constexpr InternalTaskOptions(InternalTaskOptions&&) = default;
                    constexpr InternalTaskOptions& operator=(InternalTaskOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InternalTaskOptions& operator=(InternalTaskOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InternalTaskOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InternalTaskOptions_Unwrapped : int32_t {
__None = 0,
__InternalOptionsMask = 65280,
__ContinuationTask = 512,
__PromiseTask = 1024,
__LazyCancellation = 4096,
__QueuedByRuntime = 8192,
__DoNotDispose = 16384,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InternalTaskOptions_Unwrapped () const noexcept {
return std::bit_cast<__InternalTaskOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Threading::Tasks::InternalTaskOptions const None;

/// @brief Field InternalOptionsMask offset 0
static ::System::Threading::Tasks::InternalTaskOptions const InternalOptionsMask;

/// @brief Field ContinuationTask offset 0
static ::System::Threading::Tasks::InternalTaskOptions const ContinuationTask;

/// @brief Field PromiseTask offset 0
static ::System::Threading::Tasks::InternalTaskOptions const PromiseTask;

/// @brief Field LazyCancellation offset 0
static ::System::Threading::Tasks::InternalTaskOptions const LazyCancellation;

/// @brief Field QueuedByRuntime offset 0
static ::System::Threading::Tasks::InternalTaskOptions const QueuedByRuntime;

/// @brief Field DoNotDispose offset 0
static ::System::Threading::Tasks::InternalTaskOptions const DoNotDispose;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::InternalTaskOptions, "System.Threading.Tasks", "InternalTaskOptions");
