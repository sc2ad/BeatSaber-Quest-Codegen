#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Net::Http::Headers {
struct System__Net__Http__Headers__Token__Type;
}
// Forward declare root types
namespace System::Net::Http::Headers {
struct System__Net__Http__Headers__Token__Type;
}
namespace System::Net::Http::Headers {
struct Token;
}
// Type: ::Type
namespace System::Net::Http::Headers {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14841))
// CS Name: System.Net.Http.Headers.Token::Type
struct CORDL_TYPE System__Net__Http__Headers__Token__Type : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Net__Http__Headers__Token__Type(int32_t value__) noexcept;


                    constexpr System__Net__Http__Headers__Token__Type(System__Net__Http__Headers__Token__Type const&) = default;
                    constexpr System__Net__Http__Headers__Token__Type(System__Net__Http__Headers__Token__Type&&) = default;
                    constexpr System__Net__Http__Headers__Token__Type& operator=(System__Net__Http__Headers__Token__Type const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__Http__Headers__Token__Type& operator=(System__Net__Http__Headers__Token__Type&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__Headers__Token__Type(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Net__Http__Headers__Token__Type_Unwrapped : int32_t {
__Error = 0,
__End = 1,
__Token = 2,
__QuotedString = 3,
__SeparatorEqual = 4,
__SeparatorSemicolon = 5,
__SeparatorSlash = 6,
__SeparatorDash = 7,
__SeparatorComma = 8,
__OpenParens = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Net__Http__Headers__Token__Type_Unwrapped () const noexcept {
return std::bit_cast<__System__Net__Http__Headers__Token__Type_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Error offset 0
static System::Net::Http::Headers::System__Net__Http__Headers__Token__Type const Error;

/// @brief Field End offset 0
static System::Net::Http::Headers::System__Net__Http__Headers__Token__Type const End;

/// @brief Field Token offset 0
static System::Net::Http::Headers::System__Net__Http__Headers__Token__Type const Token;

/// @brief Field QuotedString offset 0
static System::Net::Http::Headers::System__Net__Http__Headers__Token__Type const QuotedString;

/// @brief Field SeparatorEqual offset 0
static System::Net::Http::Headers::System__Net__Http__Headers__Token__Type const SeparatorEqual;

/// @brief Field SeparatorSemicolon offset 0
static System::Net::Http::Headers::System__Net__Http__Headers__Token__Type const SeparatorSemicolon;

/// @brief Field SeparatorSlash offset 0
static System::Net::Http::Headers::System__Net__Http__Headers__Token__Type const SeparatorSlash;

/// @brief Field SeparatorDash offset 0
static System::Net::Http::Headers::System__Net__Http__Headers__Token__Type const SeparatorDash;

/// @brief Field SeparatorComma offset 0
static System::Net::Http::Headers::System__Net__Http__Headers__Token__Type const SeparatorComma;

/// @brief Field OpenParens offset 0
static System::Net::Http::Headers::System__Net__Http__Headers__Token__Type const OpenParens;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: System.Net.Http.Headers::Token
namespace System::Net::Http::Headers {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14842))
// CS Name: System.Net.Http.Headers.Token
struct CORDL_TYPE Token : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Type = System::Net::Http::Headers::System__Net__Http__Headers__Token__Type;

// Ctor Parameters [CppParam { name: "type", ty: "System::Net::Http::Headers::System__Net__Http__Headers__Token__Type", modifiers: "", def_value: None }, CppParam { name: "_StartPosition_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_EndPosition_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Token(System::Net::Http::Headers::System__Net__Http__Headers__Token__Type type, int32_t _StartPosition_k__BackingField, int32_t _EndPosition_k__BackingField) noexcept;


                    constexpr Token(Token const&) = default;
                    constexpr Token(Token&&) = default;
                    constexpr Token& operator=(Token const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Token& operator=(Token&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Token(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static System::Net::Http::Headers::Token __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(System::Net::Http::Headers::Token value) ;

static System::Net::Http::Headers::Token __get_Empty() ;

 System::Net::Http::Headers::System__Net__Http__Headers__Token__Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Net::Http::Headers::System__Net__Http__Headers__Token__Type value) ;

constexpr System::Net::Http::Headers::System__Net__Http__Headers__Token__Type __get_type() const;

 int32_t __declspec(property(get=__get__StartPosition_k__BackingField, put=__set__StartPosition_k__BackingField))  _StartPosition_k__BackingField;

constexpr void __set__StartPosition_k__BackingField(int32_t value) ;

constexpr int32_t __get__StartPosition_k__BackingField() const;

 int32_t __declspec(property(get=__get__EndPosition_k__BackingField, put=__set__EndPosition_k__BackingField))  _EndPosition_k__BackingField;

constexpr void __set__EndPosition_k__BackingField(int32_t value) ;

constexpr int32_t __get__EndPosition_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_StartPosition, put=set_StartPosition))  StartPosition;

 int32_t __declspec(property(get=get_EndPosition, put=set_EndPosition))  EndPosition;

 System::Net::Http::Headers::System__Net__Http__Headers__Token__Type __declspec(property(get=get_Kind))  Kind;


// Methods

/// @brief Method .ctor addr 0x26a375c size 0xc virtual false final false
 void _ctor(System::Net::Http::Headers::System__Net__Http__Headers__Token__Type type, int32_t startPosition, int32_t endPosition) ;

/// @brief Method get_StartPosition addr 0x26aae2c size 0x8 virtual false final false
 int32_t get_StartPosition() ;

/// @brief Method set_StartPosition addr 0x26aae34 size 0x8 virtual false final false
 void set_StartPosition(int32_t value) ;

/// @brief Method get_EndPosition addr 0x26aae3c size 0x8 virtual false final false
 int32_t get_EndPosition() ;

/// @brief Method set_EndPosition addr 0x26aae44 size 0x8 virtual false final false
 void set_EndPosition(int32_t value) ;

/// @brief Method get_Kind addr 0x26aae4c size 0x8 virtual false final false
 System::Net::Http::Headers::System__Net__Http__Headers__Token__Type get_Kind() ;

/// @brief Method op_Implicit addr 0x26aae54 size 0x4 virtual false final false
static System::Net::Http::Headers::System__Net__Http__Headers__Token__Type op_Implicit_System__Net__Http__Headers__System__Net__Http__Headers__Token__Type(System::Net::Http::Headers::Token token) ;

/// @brief Method ToString addr 0x26aae58 size 0x68 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::System__Net__Http__Headers__Token__Type, "System.Net.Http.Headers", "Token/Type");
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Token, "System.Net.Http.Headers", "Token");
