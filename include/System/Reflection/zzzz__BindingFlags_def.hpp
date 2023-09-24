#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Reflection {
struct BindingFlags;
}
// Type: System.Reflection::BindingFlags
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3451))
// CS Name: System.Reflection.BindingFlags
struct CORDL_TYPE BindingFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BindingFlags(int32_t value__) noexcept;


                    constexpr BindingFlags(BindingFlags const&) = default;
                    constexpr BindingFlags(BindingFlags&&) = default;
                    constexpr BindingFlags& operator=(BindingFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BindingFlags& operator=(BindingFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BindingFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __BindingFlags_Unwrapped : int32_t {
__Default = 0,
__IgnoreCase = 1,
__DeclaredOnly = 2,
__Instance = 4,
__Static = 8,
__Public = 16,
__NonPublic = 32,
__FlattenHierarchy = 64,
__InvokeMethod = 256,
__CreateInstance = 512,
__GetField = 1024,
__SetField = 2048,
__GetProperty = 4096,
__SetProperty = 8192,
__PutDispProperty = 16384,
__PutRefDispProperty = 32768,
__ExactBinding = 65536,
__SuppressChangeType = 131072,
__OptionalParamBinding = 262144,
__IgnoreReturn = 16777216,
__DoNotWrapExceptions = 33554432,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BindingFlags_Unwrapped () const noexcept {
return std::bit_cast<__BindingFlags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static System::Reflection::BindingFlags const Default;

/// @brief Field IgnoreCase offset 0
static System::Reflection::BindingFlags const IgnoreCase;

/// @brief Field DeclaredOnly offset 0
static System::Reflection::BindingFlags const DeclaredOnly;

/// @brief Field Instance offset 0
static System::Reflection::BindingFlags const Instance;

/// @brief Field Static offset 0
static System::Reflection::BindingFlags const Static;

/// @brief Field Public offset 0
static System::Reflection::BindingFlags const Public;

/// @brief Field NonPublic offset 0
static System::Reflection::BindingFlags const NonPublic;

/// @brief Field FlattenHierarchy offset 0
static System::Reflection::BindingFlags const FlattenHierarchy;

/// @brief Field InvokeMethod offset 0
static System::Reflection::BindingFlags const InvokeMethod;

/// @brief Field CreateInstance offset 0
static System::Reflection::BindingFlags const CreateInstance;

/// @brief Field GetField offset 0
static System::Reflection::BindingFlags const GetField;

/// @brief Field SetField offset 0
static System::Reflection::BindingFlags const SetField;

/// @brief Field GetProperty offset 0
static System::Reflection::BindingFlags const GetProperty;

/// @brief Field SetProperty offset 0
static System::Reflection::BindingFlags const SetProperty;

/// @brief Field PutDispProperty offset 0
static System::Reflection::BindingFlags const PutDispProperty;

/// @brief Field PutRefDispProperty offset 0
static System::Reflection::BindingFlags const PutRefDispProperty;

/// @brief Field ExactBinding offset 0
static System::Reflection::BindingFlags const ExactBinding;

/// @brief Field SuppressChangeType offset 0
static System::Reflection::BindingFlags const SuppressChangeType;

/// @brief Field OptionalParamBinding offset 0
static System::Reflection::BindingFlags const OptionalParamBinding;

/// @brief Field IgnoreReturn offset 0
static System::Reflection::BindingFlags const IgnoreReturn;

/// @brief Field DoNotWrapExceptions offset 0
static System::Reflection::BindingFlags const DoNotWrapExceptions;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::BindingFlags, "System.Reflection", "BindingFlags");
