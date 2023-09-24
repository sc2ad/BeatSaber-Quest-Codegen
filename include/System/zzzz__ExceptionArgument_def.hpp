#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct ExceptionArgument;
}
// Type: System::ExceptionArgument
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2569))
// CS Name: System.ExceptionArgument
struct CORDL_TYPE ExceptionArgument : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExceptionArgument(int32_t value__) noexcept;


                    constexpr ExceptionArgument(ExceptionArgument const&) = default;
                    constexpr ExceptionArgument(ExceptionArgument&&) = default;
                    constexpr ExceptionArgument& operator=(ExceptionArgument const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ExceptionArgument& operator=(ExceptionArgument&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ExceptionArgument(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ExceptionArgument_Unwrapped : int32_t {
__obj = 0,
__dictionary = 1,
__dictionaryCreationThreshold = 2,
__array = 3,
__info = 4,
__key = 5,
__collection = 6,
__list = 7,
__match = 8,
__converter = 9,
__queue = 10,
__stack = 11,
__capacity = 12,
__index = 13,
__startIndex = 14,
__value = 15,
__count = 16,
__arrayIndex = 17,
__name = 18,
__mode = 19,
__item = 20,
__options = 21,
__view = 22,
__sourceBytesToCopy = 23,
__start = 24,
__pointer = 25,
__ownedMemory = 26,
__text = 27,
__length = 28,
__comparer = 29,
__comparable = 30,
__exceptions = 31,
__exception = 32,
__action = 33,
__comparison = 34,
__startSegment = 35,
__endSegment = 36,
__endIndex = 37,
__task = 38,
__source = 39,
__state = 40,
__culture = 41,
__destination = 42,
__byteOffset = 43,
__minimumBufferSize = 44,
__offset = 45,
__values = 46,
__comparisonType = 47,
__s = 48,
__input = 49,
__format = 50,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExceptionArgument_Unwrapped () const noexcept {
return std::bit_cast<__ExceptionArgument_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field obj offset 0
static System::ExceptionArgument const obj;

/// @brief Field dictionary offset 0
static System::ExceptionArgument const dictionary;

/// @brief Field dictionaryCreationThreshold offset 0
static System::ExceptionArgument const dictionaryCreationThreshold;

/// @brief Field array offset 0
static System::ExceptionArgument const array;

/// @brief Field info offset 0
static System::ExceptionArgument const info;

/// @brief Field key offset 0
static System::ExceptionArgument const key;

/// @brief Field collection offset 0
static System::ExceptionArgument const collection;

/// @brief Field list offset 0
static System::ExceptionArgument const list;

/// @brief Field match offset 0
static System::ExceptionArgument const match;

/// @brief Field converter offset 0
static System::ExceptionArgument const converter;

/// @brief Field queue offset 0
static System::ExceptionArgument const queue;

/// @brief Field stack offset 0
static System::ExceptionArgument const stack;

/// @brief Field capacity offset 0
static System::ExceptionArgument const capacity;

/// @brief Field index offset 0
static System::ExceptionArgument const index;

/// @brief Field startIndex offset 0
static System::ExceptionArgument const startIndex;

/// @brief Field value offset 0
static System::ExceptionArgument const value;

/// @brief Field count offset 0
static System::ExceptionArgument const count;

/// @brief Field arrayIndex offset 0
static System::ExceptionArgument const arrayIndex;

/// @brief Field name offset 0
static System::ExceptionArgument const name;

/// @brief Field mode offset 0
static System::ExceptionArgument const mode;

/// @brief Field item offset 0
static System::ExceptionArgument const item;

/// @brief Field options offset 0
static System::ExceptionArgument const options;

/// @brief Field view offset 0
static System::ExceptionArgument const view;

/// @brief Field sourceBytesToCopy offset 0
static System::ExceptionArgument const sourceBytesToCopy;

/// @brief Field start offset 0
static System::ExceptionArgument const start;

/// @brief Field pointer offset 0
static System::ExceptionArgument const pointer;

/// @brief Field ownedMemory offset 0
static System::ExceptionArgument const ownedMemory;

/// @brief Field text offset 0
static System::ExceptionArgument const text;

/// @brief Field length offset 0
static System::ExceptionArgument const length;

/// @brief Field comparer offset 0
static System::ExceptionArgument const comparer;

/// @brief Field comparable offset 0
static System::ExceptionArgument const comparable;

/// @brief Field exceptions offset 0
static System::ExceptionArgument const exceptions;

/// @brief Field exception offset 0
static System::ExceptionArgument const exception;

/// @brief Field action offset 0
static System::ExceptionArgument const action;

/// @brief Field comparison offset 0
static System::ExceptionArgument const comparison;

/// @brief Field startSegment offset 0
static System::ExceptionArgument const startSegment;

/// @brief Field endSegment offset 0
static System::ExceptionArgument const endSegment;

/// @brief Field endIndex offset 0
static System::ExceptionArgument const endIndex;

/// @brief Field task offset 0
static System::ExceptionArgument const task;

/// @brief Field source offset 0
static System::ExceptionArgument const source;

/// @brief Field state offset 0
static System::ExceptionArgument const state;

/// @brief Field culture offset 0
static System::ExceptionArgument const culture;

/// @brief Field destination offset 0
static System::ExceptionArgument const destination;

/// @brief Field byteOffset offset 0
static System::ExceptionArgument const byteOffset;

/// @brief Field minimumBufferSize offset 0
static System::ExceptionArgument const minimumBufferSize;

/// @brief Field offset offset 0
static System::ExceptionArgument const offset;

/// @brief Field values offset 0
static System::ExceptionArgument const values;

/// @brief Field comparisonType offset 0
static System::ExceptionArgument const comparisonType;

/// @brief Field s offset 0
static System::ExceptionArgument const s;

/// @brief Field input offset 0
static System::ExceptionArgument const input;

/// @brief Field format offset 0
static System::ExceptionArgument const format;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::ExceptionArgument, "System", "ExceptionArgument");
