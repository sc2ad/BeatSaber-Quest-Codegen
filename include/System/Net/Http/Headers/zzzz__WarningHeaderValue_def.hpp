#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net::Http::Headers {
struct Token;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
class ICloneable;
}
namespace System::Net::Http::Headers {
class Lexer;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class WarningHeaderValue;
}
// Type: System.Net.Http.Headers::WarningHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14871))
// CS Name: System.Net.Http.Headers.WarningHeaderValue
class CORDL_TYPE WarningHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~WarningHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "WarningHeaderValue", modifiers: " const&", def_value: None }]
constexpr WarningHeaderValue(WarningHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WarningHeaderValue", modifiers: "&&", def_value: None }]
constexpr WarningHeaderValue(WarningHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WarningHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WarningHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WarningHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WarningHeaderValue& operator=(WarningHeaderValue&& o) noexcept = default;
  constexpr WarningHeaderValue& operator=(WarningHeaderValue const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Agent_k__BackingField, put=__set__Agent_k__BackingField))  _Agent_k__BackingField;

constexpr void __set__Agent_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Agent_k__BackingField() const;

 int32_t __declspec(property(get=__get__Code_k__BackingField, put=__set__Code_k__BackingField))  _Code_k__BackingField;

constexpr void __set__Code_k__BackingField(int32_t value) ;

constexpr int32_t __get__Code_k__BackingField() const;

 System::Nullable_1<System::DateTimeOffset> __declspec(property(get=__get__Date_k__BackingField, put=__set__Date_k__BackingField))  _Date_k__BackingField;

constexpr void __set__Date_k__BackingField(System::Nullable_1<System::DateTimeOffset> value) ;

constexpr System::Nullable_1<System::DateTimeOffset> __get__Date_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Text_k__BackingField, put=__set__Text_k__BackingField))  _Text_k__BackingField;

constexpr void __set__Text_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Text_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Agent, put=set_Agent))  Agent;

 int32_t __declspec(property(get=get_Code, put=set_Code))  Code;

 System::Nullable_1<System::DateTimeOffset> __declspec(property(get=get_Date, put=set_Date))  Date;

 ::StringW __declspec(property(get=get_Text, put=set_Text))  Text;


// Methods

static System::Net::Http::Headers::WarningHeaderValue New_ctor() ;

/// @brief Method .ctor addr 0x26b1348 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Agent addr 0x26b1350 size 0x8 virtual false final false
 ::StringW get_Agent() ;

/// @brief Method set_Agent addr 0x26b1358 size 0x8 virtual false final false
 void set_Agent(::StringW value) ;

/// @brief Method get_Code addr 0x26b1360 size 0x8 virtual false final false
 int32_t get_Code() ;

/// @brief Method set_Code addr 0x26b1368 size 0x8 virtual false final false
 void set_Code(int32_t value) ;

/// @brief Method get_Date addr 0x26b1370 size 0x14 virtual false final false
 System::Nullable_1<System::DateTimeOffset> get_Date() ;

/// @brief Method set_Date addr 0x26b1384 size 0x14 virtual false final false
 void set_Date(System::Nullable_1<System::DateTimeOffset> value) ;

/// @brief Method get_Text addr 0x26b1398 size 0x8 virtual false final false
 ::StringW get_Text() ;

/// @brief Method set_Text addr 0x26b13a0 size 0x8 virtual false final false
 void set_Text(::StringW value) ;

/// @brief Method IsCodeValid addr 0x26b13a8 size 0xc virtual false final false
static bool IsCodeValid(int32_t code) ;

/// @brief Method System.ICloneable.Clone addr 0x26b13b4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26b13bc size 0x158 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26b1514 size 0xe0 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method TryParse addr 0x26b15f4 size 0xb0 virtual false final false
static bool TryParse(::StringW input, int32_t minimalCount, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::WarningHeaderValue>> result) ;

/// @brief Method TryParseElement addr 0x26b16a4 size 0x28c virtual false final false
static bool TryParseElement(System::Net::Http::Headers::Lexer lexer, ByRef<System::Net::Http::Headers::WarningHeaderValue> parsedValue, ByRef<System::Net::Http::Headers::Token> t) ;

/// @brief Method ToString addr 0x26b1930 size 0x12a8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::WarningHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::WarningHeaderValue, "System.Net.Http.Headers", "WarningHeaderValue");
