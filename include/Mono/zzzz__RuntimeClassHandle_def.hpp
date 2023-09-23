#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
struct RuntimeTypeHandle;
}
// Forward declare root types
namespace Mono {
struct RuntimeClassHandle;
}
// Type: Mono::RuntimeClassHandle
namespace Mono {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2228))
// CS Name: Mono.RuntimeClassHandle
struct CORDL_TYPE RuntimeClassHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value", ty: "void*", modifiers: "", def_value: None }]
constexpr RuntimeClassHandle(void* value) noexcept;


                    constexpr RuntimeClassHandle(RuntimeClassHandle const&) = default;
                    constexpr RuntimeClassHandle(RuntimeClassHandle&&) = default;
                    constexpr RuntimeClassHandle& operator=(RuntimeClassHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RuntimeClassHandle& operator=(RuntimeClassHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RuntimeClassHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(void* value) ;

constexpr void* __get_value() const;


// Properties

 void* __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x22a4ecc size 0x8 virtual false final false
 void _ctor(void* value) ;

/// @brief Method .ctor addr 0x22a4ed4 size 0x20 virtual false final false
 void _ctor(::cordl_internals::intptr_t ptr) ;

/// @brief Method get_Value addr 0x22a4ef4 size 0x8 virtual false final false
 void* get_Value() ;

/// @brief Method Equals addr 0x22a4efc size 0x104 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x22a5000 size 0x28 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method GetTypeFromClass addr 0x22a5028 size 0x4 virtual false final false
static ::cordl_internals::intptr_t GetTypeFromClass(void* klass) ;

/// @brief Method GetTypeHandle addr 0x22a502c size 0x8 virtual false final false
 System::RuntimeTypeHandle GetTypeHandle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeClassHandle, "Mono", "RuntimeClassHandle");
