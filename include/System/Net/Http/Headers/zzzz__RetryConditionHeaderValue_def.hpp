#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class ICloneable;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct DateTimeOffset;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class RetryConditionHeaderValue;
}
// Type: System.Net.Http.Headers::RetryConditionHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14866))
// CS Name: System.Net.Http.Headers.RetryConditionHeaderValue
class CORDL_TYPE RetryConditionHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RetryConditionHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "RetryConditionHeaderValue", modifiers: " const&", def_value: None }]
constexpr RetryConditionHeaderValue(RetryConditionHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RetryConditionHeaderValue", modifiers: "&&", def_value: None }]
constexpr RetryConditionHeaderValue(RetryConditionHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RetryConditionHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RetryConditionHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RetryConditionHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RetryConditionHeaderValue& operator=(RetryConditionHeaderValue&& o) noexcept = default;
  constexpr RetryConditionHeaderValue& operator=(RetryConditionHeaderValue const& o) noexcept = default;
                


// Fields

 ::System::Nullable_1<::System::DateTimeOffset> __declspec(property(get=__get__Date_k__BackingField, put=__set__Date_k__BackingField))  _Date_k__BackingField;

constexpr void __set__Date_k__BackingField(::System::Nullable_1<::System::DateTimeOffset> value) ;

constexpr ::System::Nullable_1<::System::DateTimeOffset> __get__Date_k__BackingField() const;

 ::System::Nullable_1<::System::TimeSpan> __declspec(property(get=__get__Delta_k__BackingField, put=__set__Delta_k__BackingField))  _Delta_k__BackingField;

constexpr void __set__Delta_k__BackingField(::System::Nullable_1<::System::TimeSpan> value) ;

constexpr ::System::Nullable_1<::System::TimeSpan> __get__Delta_k__BackingField() const;


// Properties

 ::System::Nullable_1<::System::DateTimeOffset> __declspec(property(get=get_Date, put=set_Date))  Date;

 ::System::Nullable_1<::System::TimeSpan> __declspec(property(get=get_Delta, put=set_Delta))  Delta;


// Methods

// Ctor Parameters [CppParam { name: "date", ty: "::System::DateTimeOffset", modifiers: "", def_value: None }]
explicit RetryConditionHeaderValue(::System::DateTimeOffset date) ;

/// @brief Method .ctor addr 0x26af6fc size 0x90 virtual false final false
 void _ctor(::System::DateTimeOffset date) ;

// Ctor Parameters [CppParam { name: "delta", ty: "::System::TimeSpan", modifiers: "", def_value: None }]
explicit RetryConditionHeaderValue(::System::TimeSpan delta) ;

/// @brief Method .ctor addr 0x26af78c size 0xd8 virtual false final false
 void _ctor(::System::TimeSpan delta) ;

/// @brief Method get_Date addr 0x26af864 size 0x14 virtual false final false
 ::System::Nullable_1<::System::DateTimeOffset> get_Date() ;

/// @brief Method set_Date addr 0x26af878 size 0x14 virtual false final false
 void set_Date(::System::Nullable_1<::System::DateTimeOffset> value) ;

/// @brief Method get_Delta addr 0x26af88c size 0xc virtual false final false
 ::System::Nullable_1<::System::TimeSpan> get_Delta() ;

/// @brief Method set_Delta addr 0x26af898 size 0x8 virtual false final false
 void set_Delta(::System::Nullable_1<::System::TimeSpan> value) ;

/// @brief Method System.ICloneable.Clone addr 0x26af8a0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26af8a8 size 0x1a4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26afa4c size 0x9c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method TryParse addr 0x26afae8 size 0x1d0 virtual false final false
static bool TryParse(::StringW input, ByRef<::System::Net::Http::Headers::RetryConditionHeaderValue> parsedValue) ;

/// @brief Method ToString addr 0x26afcb8 size 0x150 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Http::Headers::RetryConditionHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::RetryConditionHeaderValue, "System.Net.Http.Headers", "RetryConditionHeaderValue");
