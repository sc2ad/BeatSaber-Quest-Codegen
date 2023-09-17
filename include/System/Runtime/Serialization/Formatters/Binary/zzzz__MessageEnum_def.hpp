#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct MessageEnum;
}
// Type: System.Runtime.Serialization.Formatters.Binary::MessageEnum
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3296))
// CS Name: System.Runtime.Serialization.Formatters.Binary.MessageEnum
struct CORDL_TYPE MessageEnum : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MessageEnum(int32_t value__) noexcept;


                    constexpr MessageEnum(MessageEnum const&) = default;
                    constexpr MessageEnum(MessageEnum&&) = default;
                    constexpr MessageEnum& operator=(MessageEnum const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MessageEnum& operator=(MessageEnum&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MessageEnum(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MessageEnum_Unwrapped : int32_t {
__NoArgs = 1,
__ArgsInline = 2,
__ArgsIsArray = 4,
__ArgsInArray = 8,
__NoContext = 16,
__ContextInline = 32,
__ContextInArray = 64,
__MethodSignatureInArray = 128,
__PropertyInArray = 256,
__NoReturnValue = 512,
__ReturnValueVoid = 1024,
__ReturnValueInline = 2048,
__ReturnValueInArray = 4096,
__ExceptionInArray = 8192,
__GenericMethod = 32768,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MessageEnum_Unwrapped () const noexcept {
return std::bit_cast<__MessageEnum_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoArgs offset 0
static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const NoArgs;

/// @brief Field ArgsInline offset 0
static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ArgsInline;

/// @brief Field ArgsIsArray offset 0
static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ArgsIsArray;

/// @brief Field ArgsInArray offset 0
static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ArgsInArray;

/// @brief Field NoContext offset 0
static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const NoContext;

/// @brief Field ContextInline offset 0
static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ContextInline;

/// @brief Field ContextInArray offset 0
static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ContextInArray;

/// @brief Field MethodSignatureInArray offset 0
static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const MethodSignatureInArray;

/// @brief Field PropertyInArray offset 0
static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const PropertyInArray;

/// @brief Field NoReturnValue offset 0
static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const NoReturnValue;

/// @brief Field ReturnValueVoid offset 0
static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ReturnValueVoid;

/// @brief Field ReturnValueInline offset 0
static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ReturnValueInline;

/// @brief Field ReturnValueInArray offset 0
static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ReturnValueInArray;

/// @brief Field ExceptionInArray offset 0
static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const ExceptionInArray;

/// @brief Field GenericMethod offset 0
static ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const GenericMethod;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::MessageEnum, "System.Runtime.Serialization.Formatters.Binary", "MessageEnum");
