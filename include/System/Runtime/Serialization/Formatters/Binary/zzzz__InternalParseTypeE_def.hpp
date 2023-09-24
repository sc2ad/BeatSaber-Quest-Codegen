#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalParseTypeE;
}
// Type: System.Runtime.Serialization.Formatters.Binary::InternalParseTypeE
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3243))
// CS Name: System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE
struct CORDL_TYPE InternalParseTypeE : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InternalParseTypeE(int32_t value__) noexcept;


                    constexpr InternalParseTypeE(InternalParseTypeE const&) = default;
                    constexpr InternalParseTypeE(InternalParseTypeE&&) = default;
                    constexpr InternalParseTypeE& operator=(InternalParseTypeE const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InternalParseTypeE& operator=(InternalParseTypeE&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InternalParseTypeE(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InternalParseTypeE_Unwrapped : int32_t {
__Empty = 0,
__SerializedStreamHeader = 1,
__Object = 2,
__Member = 3,
__ObjectEnd = 4,
__MemberEnd = 5,
__Headers = 6,
__HeadersEnd = 7,
__SerializedStreamHeaderEnd = 8,
__Envelope = 9,
__EnvelopeEnd = 10,
__Body = 11,
__BodyEnd = 12,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InternalParseTypeE_Unwrapped () const noexcept {
return std::bit_cast<__InternalParseTypeE_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Empty offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Empty;

/// @brief Field SerializedStreamHeader offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const SerializedStreamHeader;

/// @brief Field Object offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Object;

/// @brief Field Member offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Member;

/// @brief Field ObjectEnd offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const ObjectEnd;

/// @brief Field MemberEnd offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const MemberEnd;

/// @brief Field Headers offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Headers;

/// @brief Field HeadersEnd offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const HeadersEnd;

/// @brief Field SerializedStreamHeaderEnd offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const SerializedStreamHeaderEnd;

/// @brief Field Envelope offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Envelope;

/// @brief Field EnvelopeEnd offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const EnvelopeEnd;

/// @brief Field Body offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Body;

/// @brief Field BodyEnd offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const BodyEnd;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalParseTypeE");
