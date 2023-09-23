#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Mono {
struct RuntimeGPtrArrayHandle;
}
// Type: Mono::RuntimeGPtrArrayHandle
namespace Mono {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2233))
// CS Name: Mono.RuntimeGPtrArrayHandle
struct CORDL_TYPE RuntimeGPtrArrayHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value", ty: "void*", modifiers: "", def_value: None }]
constexpr RuntimeGPtrArrayHandle(void* value) noexcept;


                    constexpr RuntimeGPtrArrayHandle(RuntimeGPtrArrayHandle const&) = default;
                    constexpr RuntimeGPtrArrayHandle(RuntimeGPtrArrayHandle&&) = default;
                    constexpr RuntimeGPtrArrayHandle& operator=(RuntimeGPtrArrayHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RuntimeGPtrArrayHandle& operator=(RuntimeGPtrArrayHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RuntimeGPtrArrayHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 int32_t __declspec(property(get=get_Length))  Length;

 ::cordl_internals::intptr_t __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x22a5444 size 0x20 virtual false final false
 void _ctor(::cordl_internals::intptr_t ptr) ;

/// @brief Method get_Length addr 0x22a5464 size 0x1c virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x22a5480 size 0x4 virtual false final false
 ::cordl_internals::intptr_t get_Item(int32_t i) ;

/// @brief Method Lookup addr 0x22a5484 size 0x6c virtual false final false
 ::cordl_internals::intptr_t Lookup(int32_t i) ;

/// @brief Method GPtrArrayFree addr 0x22a54f0 size 0x4 virtual false final false
static void GPtrArrayFree(void* value) ;

/// @brief Method DestroyAndFree addr 0x22a54f4 size 0x1c virtual false final false
static void DestroyAndFree(ByRef<Mono::RuntimeGPtrArrayHandle> h) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeGPtrArrayHandle, "Mono", "RuntimeGPtrArrayHandle");
