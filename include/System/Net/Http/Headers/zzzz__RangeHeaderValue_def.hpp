#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class ICloneable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Net::Http::Headers {
class RangeItemHeaderValue;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class RangeHeaderValue;
}
// Type: System.Net.Http.Headers::RangeHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14864))
// CS Name: System.Net.Http.Headers.RangeHeaderValue
class CORDL_TYPE RangeHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RangeHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "RangeHeaderValue", modifiers: " const&", def_value: None }]
constexpr RangeHeaderValue(RangeHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RangeHeaderValue", modifiers: "&&", def_value: None }]
constexpr RangeHeaderValue(RangeHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RangeHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RangeHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RangeHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RangeHeaderValue& operator=(RangeHeaderValue&& o) noexcept = default;
  constexpr RangeHeaderValue& operator=(RangeHeaderValue const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<System::Net::Http::Headers::RangeItemHeaderValue> __declspec(property(get=__get_ranges, put=__set_ranges))  ranges;

constexpr void __set_ranges(System::Collections::Generic::List_1<System::Net::Http::Headers::RangeItemHeaderValue> value) ;

constexpr System::Collections::Generic::List_1<System::Net::Http::Headers::RangeItemHeaderValue> __get_ranges() const;

 ::StringW __declspec(property(get=__get_unit, put=__set_unit))  unit;

constexpr void __set_unit(::StringW value) ;

constexpr ::StringW __get_unit() const;


// Properties

 System::Collections::Generic::ICollection_1<System::Net::Http::Headers::RangeItemHeaderValue> __declspec(property(get=get_Ranges))  Ranges;

 ::StringW __declspec(property(get=get_Unit))  Unit;


// Methods

// Ctor Parameters []
explicit RangeHeaderValue() ;

/// @brief Method .ctor addr 0x26ae778 size 0x54 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "source", ty: "System::Net::Http::Headers::RangeHeaderValue", modifiers: "", def_value: None }]
explicit RangeHeaderValue(System::Net::Http::Headers::RangeHeaderValue source) ;

/// @brief Method .ctor addr 0x26ae7cc size 0x1e8 virtual false final false
 void _ctor(System::Net::Http::Headers::RangeHeaderValue source) ;

/// @brief Method get_Ranges addr 0x26ae9b4 size 0x80 virtual false final false
 System::Collections::Generic::ICollection_1<System::Net::Http::Headers::RangeItemHeaderValue> get_Ranges() ;

/// @brief Method get_Unit addr 0x26aea34 size 0x8 virtual false final false
 ::StringW get_Unit() ;

/// @brief Method System.ICloneable.Clone addr 0x26aea3c size 0x60 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26aea9c size 0xc8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26aeb64 size 0x7c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method TryParse addr 0x26aebe0 size 0x544 virtual false final false
static bool TryParse(::StringW input, ByRef<System::Net::Http::Headers::RangeHeaderValue> parsedValue) ;

/// @brief Method ToString addr 0x26af280 size 0x1a0 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::RangeHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::RangeHeaderValue, "System.Net.Http.Headers", "RangeHeaderValue");
