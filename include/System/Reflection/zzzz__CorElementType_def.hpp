#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Reflection {
struct CorElementType;
}
// Type: System.Reflection::CorElementType
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3499))
// CS Name: System.Reflection.CorElementType
struct CORDL_TYPE CorElementType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr CorElementType(uint8_t value__) noexcept;


                    constexpr CorElementType(CorElementType const&) = default;
                    constexpr CorElementType(CorElementType&&) = default;
                    constexpr CorElementType& operator=(CorElementType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CorElementType& operator=(CorElementType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CorElementType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CorElementType_Unwrapped : uint8_t {
__End = 0u,
__Void = 1u,
__Boolean = 2u,
__Char = 3u,
__I1 = 4u,
__U1 = 5u,
__I2 = 6u,
__U2 = 7u,
__I4 = 8u,
__U4 = 9u,
__I8 = 10u,
__U8 = 11u,
__R4 = 12u,
__R8 = 13u,
__String = 14u,
__Ptr = 15u,
__ByRef = 16u,
__ValueType = 17u,
__Class = 18u,
__Var = 19u,
__Array = 20u,
__GenericInst = 21u,
__TypedByRef = 22u,
__I = 24u,
__U = 25u,
__FnPtr = 27u,
__Object = 28u,
__SzArray = 29u,
__MVar = 30u,
__CModReqd = 31u,
__CModOpt = 32u,
__Internal = 33u,
__Max = 34u,
__Modifier = 64u,
__Sentinel = 65u,
__Pinned = 69u,
__ELEMENT_TYPE_END = 0u,
__ELEMENT_TYPE_VOID = 1u,
__ELEMENT_TYPE_BOOLEAN = 2u,
__ELEMENT_TYPE_CHAR = 3u,
__ELEMENT_TYPE_I1 = 4u,
__ELEMENT_TYPE_U1 = 5u,
__ELEMENT_TYPE_I2 = 6u,
__ELEMENT_TYPE_U2 = 7u,
__ELEMENT_TYPE_I4 = 8u,
__ELEMENT_TYPE_U4 = 9u,
__ELEMENT_TYPE_I8 = 10u,
__ELEMENT_TYPE_U8 = 11u,
__ELEMENT_TYPE_R4 = 12u,
__ELEMENT_TYPE_R8 = 13u,
__ELEMENT_TYPE_STRING = 14u,
__ELEMENT_TYPE_PTR = 15u,
__ELEMENT_TYPE_BYREF = 16u,
__ELEMENT_TYPE_VALUETYPE = 17u,
__ELEMENT_TYPE_CLASS = 18u,
__ELEMENT_TYPE_VAR = 19u,
__ELEMENT_TYPE_ARRAY = 20u,
__ELEMENT_TYPE_GENERICINST = 21u,
__ELEMENT_TYPE_TYPEDBYREF = 22u,
__ELEMENT_TYPE_I = 24u,
__ELEMENT_TYPE_U = 25u,
__ELEMENT_TYPE_FNPTR = 27u,
__ELEMENT_TYPE_OBJECT = 28u,
__ELEMENT_TYPE_SZARRAY = 29u,
__ELEMENT_TYPE_MVAR = 30u,
__ELEMENT_TYPE_CMOD_REQD = 31u,
__ELEMENT_TYPE_CMOD_OPT = 32u,
__ELEMENT_TYPE_INTERNAL = 33u,
__ELEMENT_TYPE_MAX = 34u,
__ELEMENT_TYPE_MODIFIER = 64u,
__ELEMENT_TYPE_SENTINEL = 65u,
__ELEMENT_TYPE_PINNED = 69u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CorElementType_Unwrapped () const noexcept {
return std::bit_cast<__CorElementType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint8_t;


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field End offset 0
static System::Reflection::CorElementType const End;

/// @brief Field Void offset 0
static System::Reflection::CorElementType const Void;

/// @brief Field Boolean offset 0
static System::Reflection::CorElementType const Boolean;

/// @brief Field Char offset 0
static System::Reflection::CorElementType const Char;

/// @brief Field I1 offset 0
static System::Reflection::CorElementType const I1;

/// @brief Field U1 offset 0
static System::Reflection::CorElementType const U1;

/// @brief Field I2 offset 0
static System::Reflection::CorElementType const I2;

/// @brief Field U2 offset 0
static System::Reflection::CorElementType const U2;

/// @brief Field I4 offset 0
static System::Reflection::CorElementType const I4;

/// @brief Field U4 offset 0
static System::Reflection::CorElementType const U4;

/// @brief Field I8 offset 0
static System::Reflection::CorElementType const I8;

/// @brief Field U8 offset 0
static System::Reflection::CorElementType const U8;

/// @brief Field R4 offset 0
static System::Reflection::CorElementType const R4;

/// @brief Field R8 offset 0
static System::Reflection::CorElementType const R8;

/// @brief Field String offset 0
static System::Reflection::CorElementType const String;

/// @brief Field Ptr offset 0
static System::Reflection::CorElementType const Ptr;

/// @brief Field ByRef offset 0
static System::Reflection::CorElementType const ByRef;

/// @brief Field ValueType offset 0
static System::Reflection::CorElementType const ValueType;

/// @brief Field Class offset 0
static System::Reflection::CorElementType const Class;

/// @brief Field Var offset 0
static System::Reflection::CorElementType const Var;

/// @brief Field Array offset 0
static System::Reflection::CorElementType const Array;

/// @brief Field GenericInst offset 0
static System::Reflection::CorElementType const GenericInst;

/// @brief Field TypedByRef offset 0
static System::Reflection::CorElementType const TypedByRef;

/// @brief Field I offset 0
static System::Reflection::CorElementType const I;

/// @brief Field U offset 0
static System::Reflection::CorElementType const U;

/// @brief Field FnPtr offset 0
static System::Reflection::CorElementType const FnPtr;

/// @brief Field Object offset 0
static System::Reflection::CorElementType const Object;

/// @brief Field SzArray offset 0
static System::Reflection::CorElementType const SzArray;

/// @brief Field MVar offset 0
static System::Reflection::CorElementType const MVar;

/// @brief Field CModReqd offset 0
static System::Reflection::CorElementType const CModReqd;

/// @brief Field CModOpt offset 0
static System::Reflection::CorElementType const CModOpt;

/// @brief Field Internal offset 0
static System::Reflection::CorElementType const Internal;

/// @brief Field Max offset 0
static System::Reflection::CorElementType const Max;

/// @brief Field Modifier offset 0
static System::Reflection::CorElementType const Modifier;

/// @brief Field Sentinel offset 0
static System::Reflection::CorElementType const Sentinel;

/// @brief Field Pinned offset 0
static System::Reflection::CorElementType const Pinned;

/// @brief Field ELEMENT_TYPE_END offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_END;

/// @brief Field ELEMENT_TYPE_VOID offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_VOID;

/// @brief Field ELEMENT_TYPE_BOOLEAN offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_BOOLEAN;

/// @brief Field ELEMENT_TYPE_CHAR offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_CHAR;

/// @brief Field ELEMENT_TYPE_I1 offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_I1;

/// @brief Field ELEMENT_TYPE_U1 offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_U1;

/// @brief Field ELEMENT_TYPE_I2 offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_I2;

/// @brief Field ELEMENT_TYPE_U2 offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_U2;

/// @brief Field ELEMENT_TYPE_I4 offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_I4;

/// @brief Field ELEMENT_TYPE_U4 offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_U4;

/// @brief Field ELEMENT_TYPE_I8 offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_I8;

/// @brief Field ELEMENT_TYPE_U8 offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_U8;

/// @brief Field ELEMENT_TYPE_R4 offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_R4;

/// @brief Field ELEMENT_TYPE_R8 offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_R8;

/// @brief Field ELEMENT_TYPE_STRING offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_STRING;

/// @brief Field ELEMENT_TYPE_PTR offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_PTR;

/// @brief Field ELEMENT_TYPE_BYREF offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_BYREF;

/// @brief Field ELEMENT_TYPE_VALUETYPE offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_VALUETYPE;

/// @brief Field ELEMENT_TYPE_CLASS offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_CLASS;

/// @brief Field ELEMENT_TYPE_VAR offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_VAR;

/// @brief Field ELEMENT_TYPE_ARRAY offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_ARRAY;

/// @brief Field ELEMENT_TYPE_GENERICINST offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_GENERICINST;

/// @brief Field ELEMENT_TYPE_TYPEDBYREF offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_TYPEDBYREF;

/// @brief Field ELEMENT_TYPE_I offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_I;

/// @brief Field ELEMENT_TYPE_U offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_U;

/// @brief Field ELEMENT_TYPE_FNPTR offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_FNPTR;

/// @brief Field ELEMENT_TYPE_OBJECT offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_OBJECT;

/// @brief Field ELEMENT_TYPE_SZARRAY offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_SZARRAY;

/// @brief Field ELEMENT_TYPE_MVAR offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_MVAR;

/// @brief Field ELEMENT_TYPE_CMOD_REQD offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_CMOD_REQD;

/// @brief Field ELEMENT_TYPE_CMOD_OPT offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_CMOD_OPT;

/// @brief Field ELEMENT_TYPE_INTERNAL offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_INTERNAL;

/// @brief Field ELEMENT_TYPE_MAX offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_MAX;

/// @brief Field ELEMENT_TYPE_MODIFIER offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_MODIFIER;

/// @brief Field ELEMENT_TYPE_SENTINEL offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_SENTINEL;

/// @brief Field ELEMENT_TYPE_PINNED offset 0
static System::Reflection::CorElementType const ELEMENT_TYPE_PINNED;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::CorElementType, "System.Reflection", "CorElementType");
