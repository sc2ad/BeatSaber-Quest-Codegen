#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net::Http::Headers {
class ProductHeaderValue;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System {
class ICloneable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class ProductInfoHeaderValue;
}
// Type: System.Net.Http.Headers::ProductInfoHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14862))
// CS Name: System.Net.Http.Headers.ProductInfoHeaderValue
class CORDL_TYPE ProductInfoHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ProductInfoHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProductInfoHeaderValue", modifiers: " const&", def_value: None }]
constexpr ProductInfoHeaderValue(ProductInfoHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProductInfoHeaderValue", modifiers: "&&", def_value: None }]
constexpr ProductInfoHeaderValue(ProductInfoHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProductInfoHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProductInfoHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProductInfoHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProductInfoHeaderValue& operator=(ProductInfoHeaderValue&& o) noexcept = default;
  constexpr ProductInfoHeaderValue& operator=(ProductInfoHeaderValue const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Comment_k__BackingField, put=__set__Comment_k__BackingField))  _Comment_k__BackingField;

constexpr void __set__Comment_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Comment_k__BackingField() const;

 System::Net::Http::Headers::ProductHeaderValue __declspec(property(get=__get__Product_k__BackingField, put=__set__Product_k__BackingField))  _Product_k__BackingField;

constexpr void __set__Product_k__BackingField(System::Net::Http::Headers::ProductHeaderValue value) ;

constexpr System::Net::Http::Headers::ProductHeaderValue __get__Product_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Comment, put=set_Comment))  Comment;

 System::Net::Http::Headers::ProductHeaderValue __declspec(property(get=get_Product, put=set_Product))  Product;


// Methods

static System::Net::Http::Headers::ProductInfoHeaderValue New_ctor(System::Net::Http::Headers::ProductHeaderValue product) ;

/// @brief Method .ctor addr 0x26adc00 size 0x68 virtual false final false
 void _ctor(System::Net::Http::Headers::ProductHeaderValue product) ;

static System::Net::Http::Headers::ProductInfoHeaderValue New_ctor() ;

/// @brief Method .ctor addr 0x26adc68 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Comment addr 0x26adc70 size 0x8 virtual false final false
 ::StringW get_Comment() ;

/// @brief Method set_Comment addr 0x26adc78 size 0x8 virtual false final false
 void set_Comment(::StringW value) ;

/// @brief Method get_Product addr 0x26adc80 size 0x8 virtual false final false
 System::Net::Http::Headers::ProductHeaderValue get_Product() ;

/// @brief Method set_Product addr 0x26adc88 size 0x8 virtual false final false
 void set_Product(System::Net::Http::Headers::ProductHeaderValue value) ;

/// @brief Method System.ICloneable.Clone addr 0x26adc90 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26adc98 size 0xc0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26add58 size 0x2c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method TryParse addr 0x26add84 size 0x1a8 virtual false final false
static bool TryParse(::StringW input, int32_t minimalCount, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::ProductInfoHeaderValue>> result) ;

/// @brief Method TryParseElement addr 0x26adf2c size 0x1ec virtual false final false
static bool TryParseElement(System::Net::Http::Headers::Lexer lexer, ByRef<System::Net::Http::Headers::ProductInfoHeaderValue> parsedValue) ;

/// @brief Method ToString addr 0x26ae118 size 0x20 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::ProductInfoHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::ProductInfoHeaderValue, "System.Net.Http.Headers", "ProductInfoHeaderValue");
