#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System {
class ICloneable;
}
namespace System::Net::Http::Headers {
class Lexer;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class ProductHeaderValue;
}
// Type: System.Net.Http.Headers::ProductHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14861))
// CS Name: System.Net.Http.Headers.ProductHeaderValue
class CORDL_TYPE ProductHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ProductHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProductHeaderValue", modifiers: " const&", def_value: None }]
constexpr ProductHeaderValue(ProductHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProductHeaderValue", modifiers: "&&", def_value: None }]
constexpr ProductHeaderValue(ProductHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProductHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProductHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProductHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProductHeaderValue& operator=(ProductHeaderValue&& o) noexcept = default;
  constexpr ProductHeaderValue& operator=(ProductHeaderValue const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Version_k__BackingField, put=__set__Version_k__BackingField))  _Version_k__BackingField;

constexpr void __set__Version_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Version_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Name, put=set_Name))  Name;

 ::StringW __declspec(property(get=get_Version, put=set_Version))  Version;


// Methods

static System::Net::Http::Headers::ProductHeaderValue New_ctor() ;

/// @brief Method .ctor addr 0x26ad83c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Name addr 0x26ad844 size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method set_Name addr 0x26ad84c size 0x8 virtual false final false
 void set_Name(::StringW value) ;

/// @brief Method get_Version addr 0x26ad854 size 0x8 virtual false final false
 ::StringW get_Version() ;

/// @brief Method set_Version addr 0x26ad85c size 0x8 virtual false final false
 void set_Version(::StringW value) ;

/// @brief Method System.ICloneable.Clone addr 0x26ad864 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26ad86c size 0xb8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26ad924 size 0x64 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method TryParse addr 0x26ad988 size 0xb0 virtual false final false
static bool TryParse(::StringW input, int32_t minimalCount, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::ProductHeaderValue>> result) ;

/// @brief Method TryParseElement addr 0x26ada38 size 0x16c virtual false final false
static bool TryParseElement(System::Net::Http::Headers::Lexer lexer, ByRef<System::Net::Http::Headers::ProductHeaderValue> parsedValue, ByRef<System::Net::Http::Headers::Token> t) ;

/// @brief Method ToString addr 0x26adba4 size 0x5c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::ProductHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::ProductHeaderValue, "System.Net.Http.Headers", "ProductHeaderValue");
