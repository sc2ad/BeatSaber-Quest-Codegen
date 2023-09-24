#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class ICloneable;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class ContentRangeHeaderValue;
}
// Type: System.Net.Http.Headers::ContentRangeHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14824))
// CS Name: System.Net.Http.Headers.ContentRangeHeaderValue
class CORDL_TYPE ContentRangeHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ContentRangeHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentRangeHeaderValue", modifiers: " const&", def_value: None }]
constexpr ContentRangeHeaderValue(ContentRangeHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentRangeHeaderValue", modifiers: "&&", def_value: None }]
constexpr ContentRangeHeaderValue(ContentRangeHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContentRangeHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ContentRangeHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContentRangeHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContentRangeHeaderValue& operator=(ContentRangeHeaderValue&& o) noexcept = default;
  constexpr ContentRangeHeaderValue& operator=(ContentRangeHeaderValue const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_unit, put=__set_unit))  unit;

constexpr void __set_unit(::StringW value) ;

constexpr ::StringW __get_unit() const;

 System::Nullable_1<int64_t> __declspec(property(get=__get__From_k__BackingField, put=__set__From_k__BackingField))  _From_k__BackingField;

constexpr void __set__From_k__BackingField(System::Nullable_1<int64_t> value) ;

constexpr System::Nullable_1<int64_t> __get__From_k__BackingField() const;

 System::Nullable_1<int64_t> __declspec(property(get=__get__Length_k__BackingField, put=__set__Length_k__BackingField))  _Length_k__BackingField;

constexpr void __set__Length_k__BackingField(System::Nullable_1<int64_t> value) ;

constexpr System::Nullable_1<int64_t> __get__Length_k__BackingField() const;

 System::Nullable_1<int64_t> __declspec(property(get=__get__To_k__BackingField, put=__set__To_k__BackingField))  _To_k__BackingField;

constexpr void __set__To_k__BackingField(System::Nullable_1<int64_t> value) ;

constexpr System::Nullable_1<int64_t> __get__To_k__BackingField() const;


// Properties

 System::Nullable_1<int64_t> __declspec(property(get=get_From, put=set_From))  From;

 System::Nullable_1<int64_t> __declspec(property(get=get_Length, put=set_Length))  Length;

 System::Nullable_1<int64_t> __declspec(property(get=get_To, put=set_To))  To;

 ::StringW __declspec(property(get=get_Unit))  Unit;


// Methods

static System::Net::Http::Headers::ContentRangeHeaderValue New_ctor() ;

/// @brief Method .ctor addr 0x26a6598 size 0x50 virtual false final false
 void _ctor() ;

/// @brief Method get_From addr 0x26a65e8 size 0xc virtual false final false
 System::Nullable_1<int64_t> get_From() ;

/// @brief Method set_From addr 0x26a65f4 size 0x8 virtual false final false
 void set_From(System::Nullable_1<int64_t> value) ;

/// @brief Method get_Length addr 0x26a65fc size 0xc virtual false final false
 System::Nullable_1<int64_t> get_Length() ;

/// @brief Method set_Length addr 0x26a6608 size 0x8 virtual false final false
 void set_Length(System::Nullable_1<int64_t> value) ;

/// @brief Method get_To addr 0x26a6610 size 0xc virtual false final false
 System::Nullable_1<int64_t> get_To() ;

/// @brief Method set_To addr 0x26a661c size 0x8 virtual false final false
 void set_To(System::Nullable_1<int64_t> value) ;

/// @brief Method get_Unit addr 0x26a6624 size 0x8 virtual false final false
 ::StringW get_Unit() ;

/// @brief Method System.ICloneable.Clone addr 0x26a662c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26a6634 size 0x148 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26a677c size 0xec virtual true final false
 int32_t GetHashCode() ;

/// @brief Method TryParse addr 0x26a6868 size 0x3dc virtual false final false
static bool TryParse(::StringW input, ByRef<System::Net::Http::Headers::ContentRangeHeaderValue> parsedValue) ;

/// @brief Method ToString addr 0x26a6d28 size 0x260 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::ContentRangeHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::ContentRangeHeaderValue, "System.Net.Http.Headers", "ContentRangeHeaderValue");
