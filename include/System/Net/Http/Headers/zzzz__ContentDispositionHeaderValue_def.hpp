#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
class ICloneable;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class ContentDispositionHeaderValue;
}
// Type: System.Net.Http.Headers::ContentDispositionHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14823))
// CS Name: System.Net.Http.Headers.ContentDispositionHeaderValue
class CORDL_TYPE ContentDispositionHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ContentDispositionHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentDispositionHeaderValue", modifiers: " const&", def_value: None }]
constexpr ContentDispositionHeaderValue(ContentDispositionHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentDispositionHeaderValue", modifiers: "&&", def_value: None }]
constexpr ContentDispositionHeaderValue(ContentDispositionHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContentDispositionHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ContentDispositionHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContentDispositionHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContentDispositionHeaderValue& operator=(ContentDispositionHeaderValue&& o) noexcept = default;
  constexpr ContentDispositionHeaderValue& operator=(ContentDispositionHeaderValue const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_dispositionType, put=__set_dispositionType))  dispositionType;

constexpr void __set_dispositionType(::StringW value) ;

constexpr ::StringW __get_dispositionType() const;

 System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue> __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue> value) ;

constexpr System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue> __get_parameters() const;


// Properties

 System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue> __declspec(property(get=get_Parameters))  Parameters;


// Methods

static System::Net::Http::Headers::ContentDispositionHeaderValue New_ctor() ;

/// @brief Method .ctor addr 0x26a5c38 size 0x8 virtual false final false
 void _ctor() ;

static System::Net::Http::Headers::ContentDispositionHeaderValue New_ctor(System::Net::Http::Headers::ContentDispositionHeaderValue source) ;

/// @brief Method .ctor addr 0x26a5c40 size 0x278 virtual false final false
 void _ctor(System::Net::Http::Headers::ContentDispositionHeaderValue source) ;

/// @brief Method get_Parameters addr 0x26a5eb8 size 0x80 virtual false final false
 System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue> get_Parameters() ;

/// @brief Method System.ICloneable.Clone addr 0x26a5f6c size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26a5fcc size 0xc8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26a6094 size 0x7c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x26a6110 size 0x58 virtual true final false
 ::StringW ToString() ;

/// @brief Method TryParse addr 0x26a6168 size 0x170 virtual false final false
static bool TryParse(::StringW input, ByRef<System::Net::Http::Headers::ContentDispositionHeaderValue> parsedValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::ContentDispositionHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::ContentDispositionHeaderValue, "System.Net.Http.Headers", "ContentDispositionHeaderValue");
