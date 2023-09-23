#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace Mono {
struct RuntimeClassHandle;
}
// Forward declare root types
namespace Mono {
struct RuntimeRemoteClassHandle;
}
// Type: Mono::RuntimeRemoteClassHandle
namespace Mono {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2229))
// CS Name: Mono.RuntimeRemoteClassHandle
struct CORDL_TYPE RuntimeRemoteClassHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value", ty: "void*", modifiers: "", def_value: None }]
constexpr RuntimeRemoteClassHandle(void* value) noexcept;


                    constexpr RuntimeRemoteClassHandle(RuntimeRemoteClassHandle const&) = default;
                    constexpr RuntimeRemoteClassHandle(RuntimeRemoteClassHandle&&) = default;
                    constexpr RuntimeRemoteClassHandle& operator=(RuntimeRemoteClassHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RuntimeRemoteClassHandle& operator=(RuntimeRemoteClassHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RuntimeRemoteClassHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 Mono::RuntimeClassHandle __declspec(property(get=get_ProxyClass))  ProxyClass;


// Methods

/// @brief Method get_ProxyClass addr 0x22a5034 size 0x1c virtual false final false
 Mono::RuntimeClassHandle get_ProxyClass() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeRemoteClassHandle, "Mono", "RuntimeRemoteClassHandle");
