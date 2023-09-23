#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
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
class RangeItemHeaderValue;
}
// Type: System.Net.Http.Headers::RangeItemHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14865))
// CS Name: System.Net.Http.Headers.RangeItemHeaderValue
class CORDL_TYPE RangeItemHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RangeItemHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "RangeItemHeaderValue", modifiers: " const&", def_value: None }]
constexpr RangeItemHeaderValue(RangeItemHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RangeItemHeaderValue", modifiers: "&&", def_value: None }]
constexpr RangeItemHeaderValue(RangeItemHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RangeItemHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RangeItemHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RangeItemHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RangeItemHeaderValue& operator=(RangeItemHeaderValue&& o) noexcept = default;
  constexpr RangeItemHeaderValue& operator=(RangeItemHeaderValue const& o) noexcept = default;
                


// Fields

 System::Nullable_1<int64_t> __declspec(property(get=__get__From_k__BackingField, put=__set__From_k__BackingField))  _From_k__BackingField;

constexpr void __set__From_k__BackingField(System::Nullable_1<int64_t> value) ;

constexpr System::Nullable_1<int64_t> __get__From_k__BackingField() const;

 System::Nullable_1<int64_t> __declspec(property(get=__get__To_k__BackingField, put=__set__To_k__BackingField))  _To_k__BackingField;

constexpr void __set__To_k__BackingField(System::Nullable_1<int64_t> value) ;

constexpr System::Nullable_1<int64_t> __get__To_k__BackingField() const;


// Properties

 System::Nullable_1<int64_t> __declspec(property(get=get_From, put=set_From))  From;

 System::Nullable_1<int64_t> __declspec(property(get=get_To, put=set_To))  To;


// Methods

// Ctor Parameters [CppParam { name: "from", ty: "System::Nullable_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "to", ty: "System::Nullable_1<int64_t>", modifiers: "", def_value: None }]
explicit RangeItemHeaderValue(System::Nullable_1<int64_t> from, System::Nullable_1<int64_t> to) ;

/// @brief Method .ctor addr 0x26af124 size 0x15c virtual false final false
 void _ctor(System::Nullable_1<int64_t> from, System::Nullable_1<int64_t> to) ;

/// @brief Method get_From addr 0x26af420 size 0xc virtual false final false
 System::Nullable_1<int64_t> get_From() ;

/// @brief Method set_From addr 0x26af42c size 0x8 virtual false final false
 void set_From(System::Nullable_1<int64_t> value) ;

/// @brief Method get_To addr 0x26af434 size 0xc virtual false final false
 System::Nullable_1<int64_t> get_To() ;

/// @brief Method set_To addr 0x26af440 size 0x8 virtual false final false
 void set_To(System::Nullable_1<int64_t> value) ;

/// @brief Method System.ICloneable.Clone addr 0x26af448 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26af450 size 0x104 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26af554 size 0x78 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x26af5cc size 0x130 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::RangeItemHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::RangeItemHeaderValue, "System.Net.Http.Headers", "RangeItemHeaderValue");
