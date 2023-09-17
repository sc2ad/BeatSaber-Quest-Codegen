#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Mono {
struct RuntimeEventHandle;
}
// Type: Mono::RuntimeEventHandle
namespace Mono {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2231))
// CS Name: Mono.RuntimeEventHandle
struct CORDL_TYPE RuntimeEventHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr RuntimeEventHandle(::cordl_internals::intptr_t value) noexcept;


                    constexpr RuntimeEventHandle(RuntimeEventHandle const&) = default;
                    constexpr RuntimeEventHandle(RuntimeEventHandle&&) = default;
                    constexpr RuntimeEventHandle& operator=(RuntimeEventHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RuntimeEventHandle& operator=(RuntimeEventHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RuntimeEventHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_value() const;


// Properties

 ::cordl_internals::intptr_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x22a51fc size 0x8 virtual false final false
 void _ctor(::cordl_internals::intptr_t v) ;

/// @brief Method get_Value addr 0x22a5204 size 0x8 virtual false final false
 ::cordl_internals::intptr_t get_Value() ;

/// @brief Method Equals addr 0x22a520c size 0x10c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x22a5318 size 0x8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeEventHandle, "Mono", "RuntimeEventHandle");
