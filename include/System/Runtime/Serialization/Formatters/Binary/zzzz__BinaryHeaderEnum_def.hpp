#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryHeaderEnum
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3239))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
struct CORDL_TYPE BinaryHeaderEnum : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BinaryHeaderEnum(int32_t value__) noexcept;


                    constexpr BinaryHeaderEnum(BinaryHeaderEnum const&) = default;
                    constexpr BinaryHeaderEnum(BinaryHeaderEnum&&) = default;
                    constexpr BinaryHeaderEnum& operator=(BinaryHeaderEnum const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BinaryHeaderEnum& operator=(BinaryHeaderEnum&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BinaryHeaderEnum(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BinaryHeaderEnum_Unwrapped : int32_t {
__SerializedStreamHeader = 0,
__Object = 1,
__ObjectWithMap = 2,
__ObjectWithMapAssemId = 3,
__ObjectWithMapTyped = 4,
__ObjectWithMapTypedAssemId = 5,
__ObjectString = 6,
__Array = 7,
__MemberPrimitiveTyped = 8,
__MemberReference = 9,
__ObjectNull = 10,
__MessageEnd = 11,
__Assembly = 12,
__ObjectNullMultiple256 = 13,
__ObjectNullMultiple = 14,
__ArraySinglePrimitive = 15,
__ArraySingleObject = 16,
__ArraySingleString = 17,
__CrossAppDomainMap = 18,
__CrossAppDomainString = 19,
__CrossAppDomainAssembly = 20,
__MethodCall = 21,
__MethodReturn = 22,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BinaryHeaderEnum_Unwrapped () const noexcept {
return std::bit_cast<__BinaryHeaderEnum_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SerializedStreamHeader offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const SerializedStreamHeader;

/// @brief Field Object offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const Object;

/// @brief Field ObjectWithMap offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ObjectWithMap;

/// @brief Field ObjectWithMapAssemId offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ObjectWithMapAssemId;

/// @brief Field ObjectWithMapTyped offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ObjectWithMapTyped;

/// @brief Field ObjectWithMapTypedAssemId offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ObjectWithMapTypedAssemId;

/// @brief Field ObjectString offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ObjectString;

/// @brief Field Array offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const Array;

/// @brief Field MemberPrimitiveTyped offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const MemberPrimitiveTyped;

/// @brief Field MemberReference offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const MemberReference;

/// @brief Field ObjectNull offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ObjectNull;

/// @brief Field MessageEnd offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const MessageEnd;

/// @brief Field Assembly offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const Assembly;

/// @brief Field ObjectNullMultiple256 offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ObjectNullMultiple256;

/// @brief Field ObjectNullMultiple offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ObjectNullMultiple;

/// @brief Field ArraySinglePrimitive offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ArraySinglePrimitive;

/// @brief Field ArraySingleObject offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ArraySingleObject;

/// @brief Field ArraySingleString offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const ArraySingleString;

/// @brief Field CrossAppDomainMap offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const CrossAppDomainMap;

/// @brief Field CrossAppDomainString offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const CrossAppDomainString;

/// @brief Field CrossAppDomainAssembly offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const CrossAppDomainAssembly;

/// @brief Field MethodCall offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const MethodCall;

/// @brief Field MethodReturn offset 0
static System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const MethodReturn;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum, "System.Runtime.Serialization.Formatters.Binary", "BinaryHeaderEnum");
