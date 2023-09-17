#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::InteropServices {
struct VarEnum;
}
// Type: System.Runtime.InteropServices::VarEnum
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3314))
// CS Name: System.Runtime.InteropServices.VarEnum
struct CORDL_TYPE VarEnum : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VarEnum(int32_t value__) noexcept;


                    constexpr VarEnum(VarEnum const&) = default;
                    constexpr VarEnum(VarEnum&&) = default;
                    constexpr VarEnum& operator=(VarEnum const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VarEnum& operator=(VarEnum&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VarEnum(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VarEnum_Unwrapped : int32_t {
__VT_EMPTY = 0,
__VT_NULL = 1,
__VT_I2 = 2,
__VT_I4 = 3,
__VT_R4 = 4,
__VT_R8 = 5,
__VT_CY = 6,
__VT_DATE = 7,
__VT_BSTR = 8,
__VT_DISPATCH = 9,
__VT_ERROR = 10,
__VT_BOOL = 11,
__VT_VARIANT = 12,
__VT_UNKNOWN = 13,
__VT_DECIMAL = 14,
__VT_I1 = 16,
__VT_UI1 = 17,
__VT_UI2 = 18,
__VT_UI4 = 19,
__VT_I8 = 20,
__VT_UI8 = 21,
__VT_INT = 22,
__VT_UINT = 23,
__VT_VOID = 24,
__VT_HRESULT = 25,
__VT_PTR = 26,
__VT_SAFEARRAY = 27,
__VT_CARRAY = 28,
__VT_USERDEFINED = 29,
__VT_LPSTR = 30,
__VT_LPWSTR = 31,
__VT_RECORD = 36,
__VT_FILETIME = 64,
__VT_BLOB = 65,
__VT_STREAM = 66,
__VT_STORAGE = 67,
__VT_STREAMED_OBJECT = 68,
__VT_STORED_OBJECT = 69,
__VT_BLOB_OBJECT = 70,
__VT_CF = 71,
__VT_CLSID = 72,
__VT_VECTOR = 4096,
__VT_ARRAY = 8192,
__VT_BYREF = 16384,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VarEnum_Unwrapped () const noexcept {
return std::bit_cast<__VarEnum_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field VT_EMPTY offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_EMPTY;

/// @brief Field VT_NULL offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_NULL;

/// @brief Field VT_I2 offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_I2;

/// @brief Field VT_I4 offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_I4;

/// @brief Field VT_R4 offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_R4;

/// @brief Field VT_R8 offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_R8;

/// @brief Field VT_CY offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_CY;

/// @brief Field VT_DATE offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_DATE;

/// @brief Field VT_BSTR offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_BSTR;

/// @brief Field VT_DISPATCH offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_DISPATCH;

/// @brief Field VT_ERROR offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_ERROR;

/// @brief Field VT_BOOL offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_BOOL;

/// @brief Field VT_VARIANT offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_VARIANT;

/// @brief Field VT_UNKNOWN offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_UNKNOWN;

/// @brief Field VT_DECIMAL offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_DECIMAL;

/// @brief Field VT_I1 offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_I1;

/// @brief Field VT_UI1 offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_UI1;

/// @brief Field VT_UI2 offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_UI2;

/// @brief Field VT_UI4 offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_UI4;

/// @brief Field VT_I8 offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_I8;

/// @brief Field VT_UI8 offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_UI8;

/// @brief Field VT_INT offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_INT;

/// @brief Field VT_UINT offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_UINT;

/// @brief Field VT_VOID offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_VOID;

/// @brief Field VT_HRESULT offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_HRESULT;

/// @brief Field VT_PTR offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_PTR;

/// @brief Field VT_SAFEARRAY offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_SAFEARRAY;

/// @brief Field VT_CARRAY offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_CARRAY;

/// @brief Field VT_USERDEFINED offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_USERDEFINED;

/// @brief Field VT_LPSTR offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_LPSTR;

/// @brief Field VT_LPWSTR offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_LPWSTR;

/// @brief Field VT_RECORD offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_RECORD;

/// @brief Field VT_FILETIME offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_FILETIME;

/// @brief Field VT_BLOB offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_BLOB;

/// @brief Field VT_STREAM offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_STREAM;

/// @brief Field VT_STORAGE offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_STORAGE;

/// @brief Field VT_STREAMED_OBJECT offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_STREAMED_OBJECT;

/// @brief Field VT_STORED_OBJECT offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_STORED_OBJECT;

/// @brief Field VT_BLOB_OBJECT offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_BLOB_OBJECT;

/// @brief Field VT_CF offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_CF;

/// @brief Field VT_CLSID offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_CLSID;

/// @brief Field VT_VECTOR offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_VECTOR;

/// @brief Field VT_ARRAY offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_ARRAY;

/// @brief Field VT_BYREF offset 0
static ::System::Runtime::InteropServices::VarEnum const VT_BYREF;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::VarEnum, "System.Runtime.InteropServices", "VarEnum");
