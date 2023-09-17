#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace Mono {
struct RuntimeGPtrArrayHandle;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Mono {
struct SafeGPtrArrayHandle;
}
// Type: Mono::SafeGPtrArrayHandle
namespace Mono {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2248))
// CS Name: Mono.SafeGPtrArrayHandle
struct CORDL_TYPE SafeGPtrArrayHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "handle", ty: "::Mono::RuntimeGPtrArrayHandle", modifiers: "", def_value: None }]
constexpr SafeGPtrArrayHandle(::Mono::RuntimeGPtrArrayHandle handle) noexcept;


                    constexpr SafeGPtrArrayHandle(SafeGPtrArrayHandle const&) = default;
                    constexpr SafeGPtrArrayHandle(SafeGPtrArrayHandle&&) = default;
                    constexpr SafeGPtrArrayHandle& operator=(SafeGPtrArrayHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SafeGPtrArrayHandle& operator=(SafeGPtrArrayHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SafeGPtrArrayHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::Mono::RuntimeGPtrArrayHandle __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(::Mono::RuntimeGPtrArrayHandle value) ;

constexpr ::Mono::RuntimeGPtrArrayHandle __get_handle() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 ::cordl_internals::intptr_t __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x22a5810 size 0x20 virtual false final false
 void _ctor(::cordl_internals::intptr_t ptr) ;

/// @brief Method Dispose addr 0x22a5830 size 0x1c virtual true final true
 void Dispose() ;

/// @brief Method get_Length addr 0x22a584c size 0x1c virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x22a5868 size 0x4 virtual false final false
 ::cordl_internals::intptr_t get_Item(int32_t i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Mono::SafeGPtrArrayHandle, "Mono", "SafeGPtrArrayHandle");
