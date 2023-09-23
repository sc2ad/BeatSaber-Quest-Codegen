#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct RuntimeArgumentHandle;
}
// Type: System::RuntimeArgumentHandle
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2614))
// CS Name: System.RuntimeArgumentHandle
struct CORDL_TYPE RuntimeArgumentHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "args", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr RuntimeArgumentHandle(::cordl_internals::intptr_t args) noexcept;


                    constexpr RuntimeArgumentHandle(RuntimeArgumentHandle const&) = default;
                    constexpr RuntimeArgumentHandle(RuntimeArgumentHandle&&) = default;
                    constexpr RuntimeArgumentHandle& operator=(RuntimeArgumentHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RuntimeArgumentHandle& operator=(RuntimeArgumentHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RuntimeArgumentHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_args, put=__set_args))  args;

constexpr void __set_args(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_args() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::RuntimeArgumentHandle, "System", "RuntimeArgumentHandle");
