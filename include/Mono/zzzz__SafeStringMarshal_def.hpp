#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Mono {
struct SafeStringMarshal;
}
// Type: Mono::SafeStringMarshal
namespace Mono {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2249))
// CS Name: Mono.SafeStringMarshal
struct CORDL_TYPE SafeStringMarshal : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "marshaled_string", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr SafeStringMarshal(::StringW str, ::cordl_internals::intptr_t marshaled_string) noexcept;


                    constexpr SafeStringMarshal(SafeStringMarshal const&) = default;
                    constexpr SafeStringMarshal(SafeStringMarshal&&) = default;
                    constexpr SafeStringMarshal& operator=(SafeStringMarshal const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SafeStringMarshal& operator=(SafeStringMarshal&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SafeStringMarshal(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_str, put=__set_str))  str;

constexpr void __set_str(::StringW value) ;

constexpr ::StringW __get_str() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_marshaled_string, put=__set_marshaled_string))  marshaled_string;

constexpr void __set_marshaled_string(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_marshaled_string() const;


// Properties

 ::cordl_internals::intptr_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method StringToUtf8_icall addr 0x22a586c size 0x4 virtual false final false
static ::cordl_internals::intptr_t StringToUtf8_icall(ByRef<::StringW> str) ;

/// @brief Method StringToUtf8 addr 0x22a5870 size 0x18 virtual false final false
static ::cordl_internals::intptr_t StringToUtf8(::StringW str) ;

/// @brief Method GFree addr 0x22a5888 size 0x4 virtual false final false
static void GFree(::cordl_internals::intptr_t ptr) ;

/// @brief Method .ctor addr 0x22a5644 size 0x60 virtual false final false
 void _ctor(::StringW str) ;

/// @brief Method get_Value addr 0x22a588c size 0x80 virtual false final false
 ::cordl_internals::intptr_t get_Value() ;

/// @brief Method Dispose addr 0x22a590c size 0x74 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE(Mono::SafeStringMarshal, "Mono", "SafeStringMarshal");
