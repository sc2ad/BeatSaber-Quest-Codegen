#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Runtime::InteropServices {
struct HandleRef;
}
// Type: System.Runtime.InteropServices::HandleRef
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3299))
// CS Name: System.Runtime.InteropServices.HandleRef
struct CORDL_TYPE HandleRef : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_wrapper", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr HandleRef(::bs_hook::Il2CppWrapperType _wrapper, ::cordl_internals::intptr_t _handle) noexcept;


                    constexpr HandleRef(HandleRef const&) = default;
                    constexpr HandleRef(HandleRef&&) = default;
                    constexpr HandleRef& operator=(HandleRef const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HandleRef& operator=(HandleRef&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HandleRef(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__wrapper, put=__set__wrapper))  _wrapper;

constexpr void __set__wrapper(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__wrapper() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get__handle, put=__set__handle))  _handle;

constexpr void __set__handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__handle() const;


// Properties

 ::cordl_internals::intptr_t __declspec(property(get=get_Handle))  Handle;


// Methods

/// @brief Method .ctor addr 0x236a538 size 0x8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType wrapper, ::cordl_internals::intptr_t handle) ;

/// @brief Method get_Handle addr 0x236a540 size 0x8 virtual false final false
 ::cordl_internals::intptr_t get_Handle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::HandleRef, "System.Runtime.InteropServices", "HandleRef");
