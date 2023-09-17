#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::Serialization {
struct StreamingContextStates;
}
// Type: System.Runtime.Serialization::StreamingContextStates
namespace System::Runtime::Serialization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3232))
// CS Name: System.Runtime.Serialization.StreamingContextStates
struct CORDL_TYPE StreamingContextStates : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StreamingContextStates(int32_t value__) noexcept;


                    constexpr StreamingContextStates(StreamingContextStates const&) = default;
                    constexpr StreamingContextStates(StreamingContextStates&&) = default;
                    constexpr StreamingContextStates& operator=(StreamingContextStates const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StreamingContextStates& operator=(StreamingContextStates&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StreamingContextStates(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StreamingContextStates_Unwrapped : int32_t {
__CrossProcess = 1,
__CrossMachine = 2,
__File = 4,
__Persistence = 8,
__Remoting = 16,
__Other = 32,
__Clone = 64,
__CrossAppDomain = 128,
__All = 255,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StreamingContextStates_Unwrapped () const noexcept {
return std::bit_cast<__StreamingContextStates_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CrossProcess offset 0
static ::System::Runtime::Serialization::StreamingContextStates const CrossProcess;

/// @brief Field CrossMachine offset 0
static ::System::Runtime::Serialization::StreamingContextStates const CrossMachine;

/// @brief Field File offset 0
static ::System::Runtime::Serialization::StreamingContextStates const File;

/// @brief Field Persistence offset 0
static ::System::Runtime::Serialization::StreamingContextStates const Persistence;

/// @brief Field Remoting offset 0
static ::System::Runtime::Serialization::StreamingContextStates const Remoting;

/// @brief Field Other offset 0
static ::System::Runtime::Serialization::StreamingContextStates const Other;

/// @brief Field Clone offset 0
static ::System::Runtime::Serialization::StreamingContextStates const Clone;

/// @brief Field CrossAppDomain offset 0
static ::System::Runtime::Serialization::StreamingContextStates const CrossAppDomain;

/// @brief Field All offset 0
static ::System::Runtime::Serialization::StreamingContextStates const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::StreamingContextStates, "System.Runtime.Serialization", "StreamingContextStates");
