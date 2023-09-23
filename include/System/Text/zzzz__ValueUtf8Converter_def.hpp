#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Text {
struct ValueUtf8Converter;
}
// Type: System.Text::ValueUtf8Converter
namespace System::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2865))
// CS Name: System.Text.ValueUtf8Converter
struct CORDL_TYPE ValueUtf8Converter : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_arrayToReturnToPool", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_bytes", ty: "System::Span_1<uint8_t>", modifiers: "", def_value: None }]
constexpr ValueUtf8Converter(::ArrayW<uint8_t> _arrayToReturnToPool, System::Span_1<uint8_t> _bytes) noexcept;


                    constexpr ValueUtf8Converter(ValueUtf8Converter const&) = default;
                    constexpr ValueUtf8Converter(ValueUtf8Converter&&) = default;
                    constexpr ValueUtf8Converter& operator=(ValueUtf8Converter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueUtf8Converter& operator=(ValueUtf8Converter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueUtf8Converter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__arrayToReturnToPool, put=__set__arrayToReturnToPool))  _arrayToReturnToPool;

constexpr void __set__arrayToReturnToPool(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__arrayToReturnToPool() const;

 System::Span_1<uint8_t> __declspec(property(get=__get__bytes, put=__set__bytes))  _bytes;

constexpr void __set__bytes(System::Span_1<uint8_t> value) ;

constexpr System::Span_1<uint8_t> __get__bytes() const;


// Methods

/// @brief Method .ctor addr 0x22dd81c size 0xc virtual false final false
 void _ctor(System::Span_1<uint8_t> initialBuffer) ;

/// @brief Method ConvertAndTerminateString addr 0x22dd828 size 0x224 virtual false final false
 System::Span_1<uint8_t> ConvertAndTerminateString(System::ReadOnlySpan_1<char16_t> value) ;

/// @brief Method Dispose addr 0x22ddaf8 size 0xf4 virtual false final false
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Text
DEFINE_IL2CPP_ARG_TYPE(System::Text::ValueUtf8Converter, "System.Text", "ValueUtf8Converter");
