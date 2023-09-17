#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Threading::Tasks {
struct CausalitySynchronousWork;
}
// Type: System.Threading.Tasks::CausalitySynchronousWork
namespace System::Threading::Tasks {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2815))
// CS Name: System.Threading.Tasks.CausalitySynchronousWork
struct CORDL_TYPE CausalitySynchronousWork : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CausalitySynchronousWork(int32_t value__) noexcept;


                    constexpr CausalitySynchronousWork(CausalitySynchronousWork const&) = default;
                    constexpr CausalitySynchronousWork(CausalitySynchronousWork&&) = default;
                    constexpr CausalitySynchronousWork& operator=(CausalitySynchronousWork const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CausalitySynchronousWork& operator=(CausalitySynchronousWork&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CausalitySynchronousWork(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CausalitySynchronousWork_Unwrapped : int32_t {
__CompletionNotification = 0,
__ProgressNotification = 1,
__Execution = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CausalitySynchronousWork_Unwrapped () const noexcept {
return std::bit_cast<__CausalitySynchronousWork_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CompletionNotification offset 0
static ::System::Threading::Tasks::CausalitySynchronousWork const CompletionNotification;

/// @brief Field ProgressNotification offset 0
static ::System::Threading::Tasks::CausalitySynchronousWork const ProgressNotification;

/// @brief Field Execution offset 0
static ::System::Threading::Tasks::CausalitySynchronousWork const Execution;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::CausalitySynchronousWork, "System.Threading.Tasks", "CausalitySynchronousWork");
