#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
// Type: System.Runtime.Serialization::IFormatterConverter
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3190))
// CS Name: System.Runtime.Serialization.IFormatterConverter
class CORDL_TYPE IFormatterConverter : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IFormatterConverter() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFormatterConverter(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Convert addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType Convert(::bs_hook::Il2CppWrapperType value, System::Type type) ;

/// @brief Method ToBoolean addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ToBoolean(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt32 addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ToInt32(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt64 addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t ToInt64(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToSingle addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t ToSingle(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::IFormatterConverter);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::IFormatterConverter, "System.Runtime.Serialization", "IFormatterConverter");
