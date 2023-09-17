#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System {
struct Decimal;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
class Type;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlValueConverter;
}
// Type: System.Xml.Schema::XmlValueConverter
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11689))
// CS Name: System.Xml.Schema.XmlValueConverter
class CORDL_TYPE XmlValueConverter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XmlValueConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlValueConverter", modifiers: " const&", def_value: None }]
constexpr XmlValueConverter(XmlValueConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlValueConverter", modifiers: "&&", def_value: None }]
constexpr XmlValueConverter(XmlValueConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlValueConverter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlValueConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlValueConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlValueConverter& operator=(XmlValueConverter&& o) noexcept = default;
  constexpr XmlValueConverter& operator=(XmlValueConverter const& o) noexcept = default;
                


// Methods

/// @brief Method ToBoolean addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ToBoolean(int64_t value) ;

/// @brief Method ToBoolean addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ToBoolean(int32_t value) ;

/// @brief Method ToBoolean addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ToBoolean(double_t value) ;

/// @brief Method ToBoolean addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ToBoolean(::System::DateTime value) ;

/// @brief Method ToBoolean addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ToBoolean(::StringW value) ;

/// @brief Method ToBoolean addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ToBoolean(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt32 addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ToInt32(bool value) ;

/// @brief Method ToInt32 addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ToInt32(int64_t value) ;

/// @brief Method ToInt32 addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ToInt32(double_t value) ;

/// @brief Method ToInt32 addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ToInt32(::System::DateTime value) ;

/// @brief Method ToInt32 addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ToInt32(::StringW value) ;

/// @brief Method ToInt32 addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ToInt32(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt64 addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t ToInt64(bool value) ;

/// @brief Method ToInt64 addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t ToInt64(int32_t value) ;

/// @brief Method ToInt64 addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t ToInt64(double_t value) ;

/// @brief Method ToInt64 addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t ToInt64(::System::DateTime value) ;

/// @brief Method ToInt64 addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t ToInt64(::StringW value) ;

/// @brief Method ToInt64 addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t ToInt64(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDecimal addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Decimal ToDecimal(::StringW value) ;

/// @brief Method ToDecimal addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Decimal ToDecimal(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDouble addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t ToDouble(bool value) ;

/// @brief Method ToDouble addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t ToDouble(int32_t value) ;

/// @brief Method ToDouble addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t ToDouble(int64_t value) ;

/// @brief Method ToDouble addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t ToDouble(::System::DateTime value) ;

/// @brief Method ToDouble addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t ToDouble(::StringW value) ;

/// @brief Method ToDouble addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t ToDouble(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToSingle addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t ToSingle(double_t value) ;

/// @brief Method ToSingle addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t ToSingle(::StringW value) ;

/// @brief Method ToSingle addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t ToSingle(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDateTime addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::DateTime ToDateTime(bool value) ;

/// @brief Method ToDateTime addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::DateTime ToDateTime(int32_t value) ;

/// @brief Method ToDateTime addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::DateTime ToDateTime(int64_t value) ;

/// @brief Method ToDateTime addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::DateTime ToDateTime(double_t value) ;

/// @brief Method ToDateTime addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::DateTime ToDateTime(::System::DateTimeOffset value) ;

/// @brief Method ToDateTime addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::DateTime ToDateTime(::StringW value) ;

/// @brief Method ToDateTime addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::DateTime ToDateTime(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDateTimeOffset addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::DateTimeOffset ToDateTimeOffset(::System::DateTime value) ;

/// @brief Method ToDateTimeOffset addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::DateTimeOffset ToDateTimeOffset(::StringW value) ;

/// @brief Method ToDateTimeOffset addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::DateTimeOffset ToDateTimeOffset(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString(bool value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString(int32_t value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString(int64_t value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString(::System::Decimal value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString(float_t value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString(double_t value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString(::System::DateTime value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString(::System::DateTimeOffset value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, ::System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(bool value, ::System::Type destinationType) ;

/// @brief Method ChangeType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(int32_t value, ::System::Type destinationType) ;

/// @brief Method ChangeType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(int64_t value, ::System::Type destinationType) ;

/// @brief Method ChangeType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::System::Decimal value, ::System::Type destinationType) ;

/// @brief Method ChangeType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(double_t value, ::System::Type destinationType) ;

/// @brief Method ChangeType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::System::DateTime value, ::System::Type destinationType) ;

/// @brief Method ChangeType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::StringW value, ::System::Type destinationType, ::System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, ::System::Type destinationType) ;

/// @brief Method ChangeType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, ::System::Type destinationType, ::System::Xml::IXmlNamespaceResolver nsResolver) ;

// Ctor Parameters []
explicit XmlValueConverter() ;

/// @brief Method .ctor addr 0x27359e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::XmlValueConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlValueConverter, "System.Xml.Schema", "XmlValueConverter");
