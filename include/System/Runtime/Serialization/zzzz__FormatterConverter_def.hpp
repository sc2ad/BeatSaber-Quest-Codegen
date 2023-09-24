#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class FormatterConverter;
}
// Type: System.Runtime.Serialization::FormatterConverter
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3198))
// CS Name: System.Runtime.Serialization.FormatterConverter
class CORDL_TYPE FormatterConverter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::IFormatterConverter
constexpr operator  System::Runtime::Serialization::IFormatterConverter() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FormatterConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "FormatterConverter", modifiers: " const&", def_value: None }]
constexpr FormatterConverter(FormatterConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FormatterConverter", modifiers: "&&", def_value: None }]
constexpr FormatterConverter(FormatterConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FormatterConverter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FormatterConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FormatterConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FormatterConverter& operator=(FormatterConverter&& o) noexcept = default;
  constexpr FormatterConverter& operator=(FormatterConverter const& o) noexcept = default;
                


// Methods

/// @brief Method Convert addr 0x2348854 size 0xa0 virtual true final true
 ::bs_hook::Il2CppWrapperType Convert(::bs_hook::Il2CppWrapperType value, System::Type type) ;

/// @brief Method ToBoolean addr 0x2348944 size 0x98 virtual true final true
 bool ToBoolean(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt32 addr 0x23489dc size 0x98 virtual true final true
 int32_t ToInt32(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt64 addr 0x2348a74 size 0x98 virtual true final true
 int64_t ToInt64(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToSingle addr 0x2348b0c size 0x98 virtual true final true
 float_t ToSingle(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToString addr 0x2348ba4 size 0x98 virtual true final true
 ::StringW ToString(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ThrowValueNullException addr 0x23488f4 size 0x50 virtual false final false
static void ThrowValueNullException() ;

static System::Runtime::Serialization::FormatterConverter New_ctor() ;

/// @brief Method .ctor addr 0x2348c3c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::FormatterConverter);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::FormatterConverter, "System.Runtime.Serialization", "FormatterConverter");
