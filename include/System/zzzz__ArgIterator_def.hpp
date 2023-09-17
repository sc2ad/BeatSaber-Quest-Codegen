#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct ArgIterator;
}
// Type: System::ArgIterator
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2582))
// CS Name: System.ArgIterator
struct CORDL_TYPE ArgIterator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sig", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "args", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "next_arg", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "num_args", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ArgIterator(::cordl_internals::intptr_t sig, ::cordl_internals::intptr_t args, int32_t next_arg, int32_t num_args) noexcept;


                    constexpr ArgIterator(ArgIterator const&) = default;
                    constexpr ArgIterator(ArgIterator&&) = default;
                    constexpr ArgIterator& operator=(ArgIterator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ArgIterator& operator=(ArgIterator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ArgIterator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_sig, put=__set_sig))  sig;

constexpr void __set_sig(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_sig() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_args, put=__set_args))  args;

constexpr void __set_args(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_args() const;

 int32_t __declspec(property(get=__get_next_arg, put=__set_next_arg))  next_arg;

constexpr void __set_next_arg(int32_t value) ;

constexpr int32_t __get_next_arg() const;

 int32_t __declspec(property(get=__get_num_args, put=__set_num_args))  num_args;

constexpr void __set_num_args(int32_t value) ;

constexpr int32_t __get_num_args() const;


// Methods

/// @brief Method Equals addr 0x2487e90 size 0x50 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method GetHashCode addr 0x2487ee0 size 0x8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::ArgIterator, "System", "ArgIterator");
