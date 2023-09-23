#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Text {
struct ValueStringBuilder;
}
// Type: System.Text::ValueStringBuilder
namespace System::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2864))
// CS Name: System.Text.ValueStringBuilder
struct CORDL_TYPE ValueStringBuilder : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_arrayToReturnToPool", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_chars", ty: "System::Span_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueStringBuilder(::ArrayW<char16_t> _arrayToReturnToPool, System::Span_1<char16_t> _chars, int32_t _pos) noexcept;


                    constexpr ValueStringBuilder(ValueStringBuilder const&) = default;
                    constexpr ValueStringBuilder(ValueStringBuilder&&) = default;
                    constexpr ValueStringBuilder& operator=(ValueStringBuilder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueStringBuilder& operator=(ValueStringBuilder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueStringBuilder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<char16_t> __declspec(property(get=__get__arrayToReturnToPool, put=__set__arrayToReturnToPool))  _arrayToReturnToPool;

constexpr void __set__arrayToReturnToPool(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__arrayToReturnToPool() const;

 System::Span_1<char16_t> __declspec(property(get=__get__chars, put=__set__chars))  _chars;

constexpr void __set__chars(System::Span_1<char16_t> value) ;

constexpr System::Span_1<char16_t> __get__chars() const;

 int32_t __declspec(property(get=__get__pos, put=__set__pos))  _pos;

constexpr void __set__pos(int32_t value) ;

constexpr int32_t __get__pos() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 char16_t __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x22dcb2c size 0x10 virtual false final false
 void _ctor(System::Span_1<char16_t> initialBuffer) ;

/// @brief Method get_Length addr 0x22dcb3c size 0x8 virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x22dcb44 size 0x24 virtual false final false
 ByRef<char16_t> get_Item(int32_t index) ;

/// @brief Method ToString addr 0x22dcb68 size 0x198 virtual true final false
 ::StringW ToString() ;

/// @brief Method TryCopyTo addr 0x22dcd00 size 0x28c virtual false final false
 bool TryCopyTo(System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method Append addr 0x22dcf8c size 0x7c virtual false final false
 void Append(char16_t c) ;

/// @brief Method Append addr 0x22dd088 size 0xac virtual false final false
 void Append(::StringW s) ;

/// @brief Method AppendSlow addr 0x22dd134 size 0x130 virtual false final false
 void AppendSlow(::StringW s) ;

/// @brief Method Append addr 0x22dd4a8 size 0xdc virtual false final false
 void Append(char16_t c, int32_t count) ;

/// @brief Method Append addr 0x22dd584 size 0xe0 virtual false final false
 void Append(void* value, int32_t length) ;

/// @brief Method AppendSpan addr 0x22dd664 size 0xc0 virtual false final false
 System::Span_1<char16_t> AppendSpan(int32_t length) ;

/// @brief Method GrowAndAppend addr 0x22dd008 size 0x80 virtual false final false
 void GrowAndAppend(char16_t c) ;

/// @brief Method Grow addr 0x22dd264 size 0x244 virtual false final false
 void Grow(int32_t requiredAdditionalCapacity) ;

/// @brief Method Dispose addr 0x22dd724 size 0xf8 virtual false final false
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Text
DEFINE_IL2CPP_ARG_TYPE(System::Text::ValueStringBuilder, "System.Text", "ValueStringBuilder");
