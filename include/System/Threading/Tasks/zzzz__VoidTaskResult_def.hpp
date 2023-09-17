#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
// Forward declare root types
namespace System::Threading::Tasks {
struct VoidTaskResult;
}
// Type: System.Threading.Tasks::VoidTaskResult
namespace System::Threading::Tasks {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2790))
// CS Name: System.Threading.Tasks.VoidTaskResult
struct CORDL_TYPE VoidTaskResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr VoidTaskResult(VoidTaskResult const&) = default;
                    constexpr VoidTaskResult(VoidTaskResult&&) = default;
                    constexpr VoidTaskResult& operator=(VoidTaskResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VoidTaskResult& operator=(VoidTaskResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VoidTaskResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::VoidTaskResult, "System.Threading.Tasks", "VoidTaskResult");
