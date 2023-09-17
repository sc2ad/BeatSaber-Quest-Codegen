#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Net::Http::Headers {
class Lexer;
}
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
// Forward declare root types
namespace System::Net::Http::Headers {
class ViaHeaderValue;
}
// Type: System.Net.Http.Headers::ViaHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14870))
// CS Name: System.Net.Http.Headers.ViaHeaderValue
class CORDL_TYPE ViaHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ViaHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "ViaHeaderValue", modifiers: " const&", def_value: None }]
constexpr ViaHeaderValue(ViaHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ViaHeaderValue", modifiers: "&&", def_value: None }]
constexpr ViaHeaderValue(ViaHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ViaHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ViaHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ViaHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ViaHeaderValue& operator=(ViaHeaderValue&& o) noexcept = default;
  constexpr ViaHeaderValue& operator=(ViaHeaderValue const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Comment_k__BackingField, put=__set__Comment_k__BackingField))  _Comment_k__BackingField;

constexpr void __set__Comment_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Comment_k__BackingField() const;

 ::StringW __declspec(property(get=__get__ProtocolName_k__BackingField, put=__set__ProtocolName_k__BackingField))  _ProtocolName_k__BackingField;

constexpr void __set__ProtocolName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__ProtocolName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__ProtocolVersion_k__BackingField, put=__set__ProtocolVersion_k__BackingField))  _ProtocolVersion_k__BackingField;

constexpr void __set__ProtocolVersion_k__BackingField(::StringW value) ;

constexpr ::StringW __get__ProtocolVersion_k__BackingField() const;

 ::StringW __declspec(property(get=__get__ReceivedBy_k__BackingField, put=__set__ReceivedBy_k__BackingField))  _ReceivedBy_k__BackingField;

constexpr void __set__ReceivedBy_k__BackingField(::StringW value) ;

constexpr ::StringW __get__ReceivedBy_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Comment, put=set_Comment))  Comment;

 ::StringW __declspec(property(get=get_ProtocolName, put=set_ProtocolName))  ProtocolName;

 ::StringW __declspec(property(get=get_ProtocolVersion, put=set_ProtocolVersion))  ProtocolVersion;

 ::StringW __declspec(property(get=get_ReceivedBy, put=set_ReceivedBy))  ReceivedBy;


// Methods

// Ctor Parameters []
explicit ViaHeaderValue() ;

/// @brief Method .ctor addr 0x26b0c88 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Comment addr 0x26b0c90 size 0x8 virtual false final false
 ::StringW get_Comment() ;

/// @brief Method set_Comment addr 0x26b0c98 size 0x8 virtual false final false
 void set_Comment(::StringW value) ;

/// @brief Method get_ProtocolName addr 0x26b0ca0 size 0x8 virtual false final false
 ::StringW get_ProtocolName() ;

/// @brief Method set_ProtocolName addr 0x26b0ca8 size 0x8 virtual false final false
 void set_ProtocolName(::StringW value) ;

/// @brief Method get_ProtocolVersion addr 0x26b0cb0 size 0x8 virtual false final false
 ::StringW get_ProtocolVersion() ;

/// @brief Method set_ProtocolVersion addr 0x26b0cb8 size 0x8 virtual false final false
 void set_ProtocolVersion(::StringW value) ;

/// @brief Method get_ReceivedBy addr 0x26b0cc0 size 0x8 virtual false final false
 ::StringW get_ReceivedBy() ;

/// @brief Method set_ReceivedBy addr 0x26b0cc8 size 0x8 virtual false final false
 void set_ReceivedBy(::StringW value) ;

/// @brief Method System.ICloneable.Clone addr 0x26b0cd0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26b0cd8 size 0xe8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26b0dc0 size 0xcc virtual true final false
 int32_t GetHashCode() ;

/// @brief Method TryParse addr 0x26b0e8c size 0xb0 virtual false final false
static bool TryParse(::StringW input, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::ViaHeaderValue>> result) ;

/// @brief Method TryParseElement addr 0x26b0f3c size 0x254 virtual false final false
static bool TryParseElement(::System::Net::Http::Headers::Lexer lexer, ByRef<::System::Net::Http::Headers::ViaHeaderValue> parsedValue, ByRef<::System::Net::Http::Headers::Token> t) ;

/// @brief Method ToString addr 0x26b1190 size 0x1b8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Http::Headers::ViaHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::ViaHeaderValue, "System.Net.Http.Headers", "ViaHeaderValue");
