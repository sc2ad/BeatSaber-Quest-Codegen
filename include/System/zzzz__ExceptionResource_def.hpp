#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct ExceptionResource;
}
// Type: System::ExceptionResource
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2570))
// CS Name: System.ExceptionResource
struct CORDL_TYPE ExceptionResource : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExceptionResource(int32_t value__) noexcept;


                    constexpr ExceptionResource(ExceptionResource const&) = default;
                    constexpr ExceptionResource(ExceptionResource&&) = default;
                    constexpr ExceptionResource& operator=(ExceptionResource const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ExceptionResource& operator=(ExceptionResource&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ExceptionResource(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ExceptionResource_Unwrapped : int32_t {
__Argument_ImplementIComparable = 0,
__Argument_InvalidType = 1,
__Argument_InvalidArgumentForComparison = 2,
__Argument_InvalidRegistryKeyPermissionCheck = 3,
__ArgumentOutOfRange_NeedNonNegNum = 4,
__Arg_ArrayPlusOffTooSmall = 5,
__Arg_NonZeroLowerBound = 6,
__Arg_RankMultiDimNotSupported = 7,
__Arg_RegKeyDelHive = 8,
__Arg_RegKeyStrLenBug = 9,
__Arg_RegSetStrArrNull = 10,
__Arg_RegSetMismatchedKind = 11,
__Arg_RegSubKeyAbsent = 12,
__Arg_RegSubKeyValueAbsent = 13,
__Argument_AddingDuplicate = 14,
__Serialization_InvalidOnDeser = 15,
__Serialization_MissingKeys = 16,
__Serialization_NullKey = 17,
__Argument_InvalidArrayType = 18,
__NotSupported_KeyCollectionSet = 19,
__NotSupported_ValueCollectionSet = 20,
__ArgumentOutOfRange_SmallCapacity = 21,
__ArgumentOutOfRange_Index = 22,
__Argument_InvalidOffLen = 23,
__Argument_ItemNotExist = 24,
__ArgumentOutOfRange_Count = 25,
__ArgumentOutOfRange_InvalidThreshold = 26,
__ArgumentOutOfRange_ListInsert = 27,
__NotSupported_ReadOnlyCollection = 28,
__InvalidOperation_CannotRemoveFromStackOrQueue = 29,
__InvalidOperation_EmptyQueue = 30,
__InvalidOperation_EnumOpCantHappen = 31,
__InvalidOperation_EnumFailedVersion = 32,
__InvalidOperation_EmptyStack = 33,
__ArgumentOutOfRange_BiggerThanCollection = 34,
__InvalidOperation_EnumNotStarted = 35,
__InvalidOperation_EnumEnded = 36,
__NotSupported_SortedListNestedWrite = 37,
__InvalidOperation_NoValue = 38,
__InvalidOperation_RegRemoveSubKey = 39,
__Security_RegistryPermission = 40,
__UnauthorizedAccess_RegistryNoWrite = 41,
__ObjectDisposed_RegKeyClosed = 42,
__NotSupported_InComparableType = 43,
__Argument_InvalidRegistryOptionsCheck = 44,
__Argument_InvalidRegistryViewCheck = 45,
__TaskT_TransitionToFinal_AlreadyCompleted = 46,
__TaskCompletionSourceT_TrySetException_NullException = 47,
__TaskCompletionSourceT_TrySetException_NoExceptions = 48,
__NotSupported_StringComparison = 49,
__InvalidOperation_NullArray = 50,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExceptionResource_Unwrapped () const noexcept {
return std::bit_cast<__ExceptionResource_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Argument_ImplementIComparable offset 0
static System::ExceptionResource const Argument_ImplementIComparable;

/// @brief Field Argument_InvalidType offset 0
static System::ExceptionResource const Argument_InvalidType;

/// @brief Field Argument_InvalidArgumentForComparison offset 0
static System::ExceptionResource const Argument_InvalidArgumentForComparison;

/// @brief Field Argument_InvalidRegistryKeyPermissionCheck offset 0
static System::ExceptionResource const Argument_InvalidRegistryKeyPermissionCheck;

/// @brief Field ArgumentOutOfRange_NeedNonNegNum offset 0
static System::ExceptionResource const ArgumentOutOfRange_NeedNonNegNum;

/// @brief Field Arg_ArrayPlusOffTooSmall offset 0
static System::ExceptionResource const Arg_ArrayPlusOffTooSmall;

/// @brief Field Arg_NonZeroLowerBound offset 0
static System::ExceptionResource const Arg_NonZeroLowerBound;

/// @brief Field Arg_RankMultiDimNotSupported offset 0
static System::ExceptionResource const Arg_RankMultiDimNotSupported;

/// @brief Field Arg_RegKeyDelHive offset 0
static System::ExceptionResource const Arg_RegKeyDelHive;

/// @brief Field Arg_RegKeyStrLenBug offset 0
static System::ExceptionResource const Arg_RegKeyStrLenBug;

/// @brief Field Arg_RegSetStrArrNull offset 0
static System::ExceptionResource const Arg_RegSetStrArrNull;

/// @brief Field Arg_RegSetMismatchedKind offset 0
static System::ExceptionResource const Arg_RegSetMismatchedKind;

/// @brief Field Arg_RegSubKeyAbsent offset 0
static System::ExceptionResource const Arg_RegSubKeyAbsent;

/// @brief Field Arg_RegSubKeyValueAbsent offset 0
static System::ExceptionResource const Arg_RegSubKeyValueAbsent;

/// @brief Field Argument_AddingDuplicate offset 0
static System::ExceptionResource const Argument_AddingDuplicate;

/// @brief Field Serialization_InvalidOnDeser offset 0
static System::ExceptionResource const Serialization_InvalidOnDeser;

/// @brief Field Serialization_MissingKeys offset 0
static System::ExceptionResource const Serialization_MissingKeys;

/// @brief Field Serialization_NullKey offset 0
static System::ExceptionResource const Serialization_NullKey;

/// @brief Field Argument_InvalidArrayType offset 0
static System::ExceptionResource const Argument_InvalidArrayType;

/// @brief Field NotSupported_KeyCollectionSet offset 0
static System::ExceptionResource const NotSupported_KeyCollectionSet;

/// @brief Field NotSupported_ValueCollectionSet offset 0
static System::ExceptionResource const NotSupported_ValueCollectionSet;

/// @brief Field ArgumentOutOfRange_SmallCapacity offset 0
static System::ExceptionResource const ArgumentOutOfRange_SmallCapacity;

/// @brief Field ArgumentOutOfRange_Index offset 0
static System::ExceptionResource const ArgumentOutOfRange_Index;

/// @brief Field Argument_InvalidOffLen offset 0
static System::ExceptionResource const Argument_InvalidOffLen;

/// @brief Field Argument_ItemNotExist offset 0
static System::ExceptionResource const Argument_ItemNotExist;

/// @brief Field ArgumentOutOfRange_Count offset 0
static System::ExceptionResource const ArgumentOutOfRange_Count;

/// @brief Field ArgumentOutOfRange_InvalidThreshold offset 0
static System::ExceptionResource const ArgumentOutOfRange_InvalidThreshold;

/// @brief Field ArgumentOutOfRange_ListInsert offset 0
static System::ExceptionResource const ArgumentOutOfRange_ListInsert;

/// @brief Field NotSupported_ReadOnlyCollection offset 0
static System::ExceptionResource const NotSupported_ReadOnlyCollection;

/// @brief Field InvalidOperation_CannotRemoveFromStackOrQueue offset 0
static System::ExceptionResource const InvalidOperation_CannotRemoveFromStackOrQueue;

/// @brief Field InvalidOperation_EmptyQueue offset 0
static System::ExceptionResource const InvalidOperation_EmptyQueue;

/// @brief Field InvalidOperation_EnumOpCantHappen offset 0
static System::ExceptionResource const InvalidOperation_EnumOpCantHappen;

/// @brief Field InvalidOperation_EnumFailedVersion offset 0
static System::ExceptionResource const InvalidOperation_EnumFailedVersion;

/// @brief Field InvalidOperation_EmptyStack offset 0
static System::ExceptionResource const InvalidOperation_EmptyStack;

/// @brief Field ArgumentOutOfRange_BiggerThanCollection offset 0
static System::ExceptionResource const ArgumentOutOfRange_BiggerThanCollection;

/// @brief Field InvalidOperation_EnumNotStarted offset 0
static System::ExceptionResource const InvalidOperation_EnumNotStarted;

/// @brief Field InvalidOperation_EnumEnded offset 0
static System::ExceptionResource const InvalidOperation_EnumEnded;

/// @brief Field NotSupported_SortedListNestedWrite offset 0
static System::ExceptionResource const NotSupported_SortedListNestedWrite;

/// @brief Field InvalidOperation_NoValue offset 0
static System::ExceptionResource const InvalidOperation_NoValue;

/// @brief Field InvalidOperation_RegRemoveSubKey offset 0
static System::ExceptionResource const InvalidOperation_RegRemoveSubKey;

/// @brief Field Security_RegistryPermission offset 0
static System::ExceptionResource const Security_RegistryPermission;

/// @brief Field UnauthorizedAccess_RegistryNoWrite offset 0
static System::ExceptionResource const UnauthorizedAccess_RegistryNoWrite;

/// @brief Field ObjectDisposed_RegKeyClosed offset 0
static System::ExceptionResource const ObjectDisposed_RegKeyClosed;

/// @brief Field NotSupported_InComparableType offset 0
static System::ExceptionResource const NotSupported_InComparableType;

/// @brief Field Argument_InvalidRegistryOptionsCheck offset 0
static System::ExceptionResource const Argument_InvalidRegistryOptionsCheck;

/// @brief Field Argument_InvalidRegistryViewCheck offset 0
static System::ExceptionResource const Argument_InvalidRegistryViewCheck;

/// @brief Field TaskT_TransitionToFinal_AlreadyCompleted offset 0
static System::ExceptionResource const TaskT_TransitionToFinal_AlreadyCompleted;

/// @brief Field TaskCompletionSourceT_TrySetException_NullException offset 0
static System::ExceptionResource const TaskCompletionSourceT_TrySetException_NullException;

/// @brief Field TaskCompletionSourceT_TrySetException_NoExceptions offset 0
static System::ExceptionResource const TaskCompletionSourceT_TrySetException_NoExceptions;

/// @brief Field NotSupported_StringComparison offset 0
static System::ExceptionResource const NotSupported_StringComparison;

/// @brief Field InvalidOperation_NullArray offset 0
static System::ExceptionResource const InvalidOperation_NullArray;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::ExceptionResource, "System", "ExceptionResource");
