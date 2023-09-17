#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Threading {
struct NativeOverlapped;
}
// Type: System.Threading::NativeOverlapped
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2678))
// CS Name: System.Threading.NativeOverlapped
struct CORDL_TYPE NativeOverlapped : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "InternalLow", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "InternalHigh", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "OffsetLow", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "OffsetHigh", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "EventHandle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr NativeOverlapped(::cordl_internals::intptr_t InternalLow, ::cordl_internals::intptr_t InternalHigh, int32_t OffsetLow, int32_t OffsetHigh, ::cordl_internals::intptr_t EventHandle) noexcept;


                    constexpr NativeOverlapped(NativeOverlapped const&) = default;
                    constexpr NativeOverlapped(NativeOverlapped&&) = default;
                    constexpr NativeOverlapped& operator=(NativeOverlapped const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeOverlapped& operator=(NativeOverlapped&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeOverlapped(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_InternalLow, put=__set_InternalLow))  InternalLow;

constexpr void __set_InternalLow(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_InternalLow() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_InternalHigh, put=__set_InternalHigh))  InternalHigh;

constexpr void __set_InternalHigh(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_InternalHigh() const;

 int32_t __declspec(property(get=__get_OffsetLow, put=__set_OffsetLow))  OffsetLow;

constexpr void __set_OffsetLow(int32_t value) ;

constexpr int32_t __get_OffsetLow() const;

 int32_t __declspec(property(get=__get_OffsetHigh, put=__set_OffsetHigh))  OffsetHigh;

constexpr void __set_OffsetHigh(int32_t value) ;

constexpr int32_t __get_OffsetHigh() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_EventHandle, put=__set_EventHandle))  EventHandle;

constexpr void __set_EventHandle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_EventHandle() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::NativeOverlapped, "System.Threading", "NativeOverlapped");
