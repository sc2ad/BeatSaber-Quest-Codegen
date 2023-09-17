#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
struct DateTimeOffset;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Net::Http::Headers {
class EntityTagHeaderValue;
}
namespace System {
class ICloneable;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class RangeConditionHeaderValue;
}
// Type: System.Net.Http.Headers::RangeConditionHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14863))
// CS Name: System.Net.Http.Headers.RangeConditionHeaderValue
class CORDL_TYPE RangeConditionHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RangeConditionHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "RangeConditionHeaderValue", modifiers: " const&", def_value: None }]
constexpr RangeConditionHeaderValue(RangeConditionHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RangeConditionHeaderValue", modifiers: "&&", def_value: None }]
constexpr RangeConditionHeaderValue(RangeConditionHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RangeConditionHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RangeConditionHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RangeConditionHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RangeConditionHeaderValue& operator=(RangeConditionHeaderValue&& o) noexcept = default;
  constexpr RangeConditionHeaderValue& operator=(RangeConditionHeaderValue const& o) noexcept = default;
                


// Fields

 ::System::Nullable_1<::System::DateTimeOffset> __declspec(property(get=__get__Date_k__BackingField, put=__set__Date_k__BackingField))  _Date_k__BackingField;

constexpr void __set__Date_k__BackingField(::System::Nullable_1<::System::DateTimeOffset> value) ;

constexpr ::System::Nullable_1<::System::DateTimeOffset> __get__Date_k__BackingField() const;

 ::System::Net::Http::Headers::EntityTagHeaderValue __declspec(property(get=__get__EntityTag_k__BackingField, put=__set__EntityTag_k__BackingField))  _EntityTag_k__BackingField;

constexpr void __set__EntityTag_k__BackingField(::System::Net::Http::Headers::EntityTagHeaderValue value) ;

constexpr ::System::Net::Http::Headers::EntityTagHeaderValue __get__EntityTag_k__BackingField() const;


// Properties

 ::System::Nullable_1<::System::DateTimeOffset> __declspec(property(get=get_Date, put=set_Date))  Date;

 ::System::Net::Http::Headers::EntityTagHeaderValue __declspec(property(get=get_EntityTag, put=set_EntityTag))  EntityTag;


// Methods

// Ctor Parameters [CppParam { name: "date", ty: "::System::DateTimeOffset", modifiers: "", def_value: None }]
explicit RangeConditionHeaderValue(::System::DateTimeOffset date) ;

/// @brief Method .ctor addr 0x26ae138 size 0x90 virtual false final false
 void _ctor(::System::DateTimeOffset date) ;

// Ctor Parameters [CppParam { name: "entityTag", ty: "::System::Net::Http::Headers::EntityTagHeaderValue", modifiers: "", def_value: None }]
explicit RangeConditionHeaderValue(::System::Net::Http::Headers::EntityTagHeaderValue entityTag) ;

/// @brief Method .ctor addr 0x26ae1c8 size 0x78 virtual false final false
 void _ctor(::System::Net::Http::Headers::EntityTagHeaderValue entityTag) ;

/// @brief Method get_Date addr 0x26ae240 size 0x14 virtual false final false
 ::System::Nullable_1<::System::DateTimeOffset> get_Date() ;

/// @brief Method set_Date addr 0x26ae254 size 0x14 virtual false final false
 void set_Date(::System::Nullable_1<::System::DateTimeOffset> value) ;

/// @brief Method get_EntityTag addr 0x26ae268 size 0x8 virtual false final false
 ::System::Net::Http::Headers::EntityTagHeaderValue get_EntityTag() ;

/// @brief Method set_EntityTag addr 0x26ae270 size 0x8 virtual false final false
 void set_EntityTag(::System::Net::Http::Headers::EntityTagHeaderValue value) ;

/// @brief Method System.ICloneable.Clone addr 0x26ae278 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26ae280 size 0x144 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26ae3c4 size 0x84 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method TryParse addr 0x26ae448 size 0x24c virtual false final false
static bool TryParse(::StringW input, ByRef<::System::Net::Http::Headers::RangeConditionHeaderValue> parsedValue) ;

/// @brief Method ToString addr 0x26ae694 size 0xe4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Http::Headers::RangeConditionHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::RangeConditionHeaderValue, "System.Net.Http.Headers", "RangeConditionHeaderValue");
