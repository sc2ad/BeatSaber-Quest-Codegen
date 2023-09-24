#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct DateTime;
}
namespace System {
class Type;
}
namespace System {
class IFormatProvider;
}
namespace System {
struct TypeCode;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System {
class IConvertible;
}
// Type: System::IConvertible
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2412))
// CS Name: System.IConvertible
class CORDL_TYPE IConvertible : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IConvertible() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IConvertible(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetTypeCode addr 0x0 size 0xffffffffffffffff virtual true final false
 System::TypeCode GetTypeCode() ;

/// @brief Method ToBoolean addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ToBoolean(System::IFormatProvider provider) ;

/// @brief Method ToChar addr 0x0 size 0xffffffffffffffff virtual true final false
 char16_t ToChar(System::IFormatProvider provider) ;

/// @brief Method ToSByte addr 0x0 size 0xffffffffffffffff virtual true final false
 int8_t ToSByte(System::IFormatProvider provider) ;

/// @brief Method ToByte addr 0x0 size 0xffffffffffffffff virtual true final false
 uint8_t ToByte(System::IFormatProvider provider) ;

/// @brief Method ToInt16 addr 0x0 size 0xffffffffffffffff virtual true final false
 int16_t ToInt16(System::IFormatProvider provider) ;

/// @brief Method ToUInt16 addr 0x0 size 0xffffffffffffffff virtual true final false
 uint16_t ToUInt16(System::IFormatProvider provider) ;

/// @brief Method ToInt32 addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ToInt32(System::IFormatProvider provider) ;

/// @brief Method ToUInt32 addr 0x0 size 0xffffffffffffffff virtual true final false
 uint32_t ToUInt32(System::IFormatProvider provider) ;

/// @brief Method ToInt64 addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t ToInt64(System::IFormatProvider provider) ;

/// @brief Method ToUInt64 addr 0x0 size 0xffffffffffffffff virtual true final false
 uint64_t ToUInt64(System::IFormatProvider provider) ;

/// @brief Method ToSingle addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t ToSingle(System::IFormatProvider provider) ;

/// @brief Method ToDouble addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t ToDouble(System::IFormatProvider provider) ;

/// @brief Method ToDecimal addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Decimal ToDecimal(System::IFormatProvider provider) ;

/// @brief Method ToDateTime addr 0x0 size 0xffffffffffffffff virtual true final false
 System::DateTime ToDateTime(System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString(System::IFormatProvider provider) ;

/// @brief Method ToType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ToType(System::Type conversionType, System::IFormatProvider provider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::IConvertible);
DEFINE_IL2CPP_ARG_TYPE(System::IConvertible, "System", "IConvertible");
