#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net::Http::Headers {
struct Token;
}
namespace System {
class ICloneable;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class EntityTagHeaderValue;
}
// Type: System.Net.Http.Headers::EntityTagHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14825))
// CS Name: System.Net.Http.Headers.EntityTagHeaderValue
class CORDL_TYPE EntityTagHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EntityTagHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "EntityTagHeaderValue", modifiers: " const&", def_value: None }]
constexpr EntityTagHeaderValue(EntityTagHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EntityTagHeaderValue", modifiers: "&&", def_value: None }]
constexpr EntityTagHeaderValue(EntityTagHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EntityTagHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EntityTagHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EntityTagHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EntityTagHeaderValue& operator=(EntityTagHeaderValue&& o) noexcept = default;
  constexpr EntityTagHeaderValue& operator=(EntityTagHeaderValue const& o) noexcept = default;
                


// Fields

static System::Net::Http::Headers::EntityTagHeaderValue __declspec(property(get=__get_any, put=__set_any))  any;

static void __set_any(System::Net::Http::Headers::EntityTagHeaderValue value) ;

static System::Net::Http::Headers::EntityTagHeaderValue __get_any() ;

 bool __declspec(property(get=__get__IsWeak_k__BackingField, put=__set__IsWeak_k__BackingField))  _IsWeak_k__BackingField;

constexpr void __set__IsWeak_k__BackingField(bool value) ;

constexpr bool __get__IsWeak_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Tag_k__BackingField, put=__set__Tag_k__BackingField))  _Tag_k__BackingField;

constexpr void __set__Tag_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Tag_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_IsWeak, put=set_IsWeak))  IsWeak;

 ::StringW __declspec(property(get=get_Tag, put=set_Tag))  Tag;


// Methods

// Ctor Parameters []
explicit EntityTagHeaderValue() ;

/// @brief Method .ctor addr 0x26a6f88 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_IsWeak addr 0x26a6f90 size 0x8 virtual false final false
 bool get_IsWeak() ;

/// @brief Method set_IsWeak addr 0x26a6f98 size 0xc virtual false final false
 void set_IsWeak(bool value) ;

/// @brief Method get_Tag addr 0x26a6fa4 size 0x8 virtual false final false
 ::StringW get_Tag() ;

/// @brief Method set_Tag addr 0x26a6fac size 0x8 virtual false final false
 void set_Tag(::StringW value) ;

/// @brief Method System.ICloneable.Clone addr 0x26a6fb4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26a6fbc size 0xb4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26a7070 size 0x50 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method TryParse addr 0x26a70c0 size 0xf4 virtual false final false
static bool TryParse(::StringW input, ByRef<System::Net::Http::Headers::EntityTagHeaderValue> parsedValue) ;

/// @brief Method TryParseElement addr 0x26a71b4 size 0x1e4 virtual false final false
static bool TryParseElement(System::Net::Http::Headers::Lexer lexer, ByRef<System::Net::Http::Headers::EntityTagHeaderValue> parsedValue, ByRef<System::Net::Http::Headers::Token> t) ;

/// @brief Method TryParse addr 0x26a73e8 size 0xb0 virtual false final false
static bool TryParse(::StringW input, int32_t minimalCount, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::EntityTagHeaderValue>> result) ;

/// @brief Method ToString addr 0x26a7498 size 0x64 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::EntityTagHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::EntityTagHeaderValue, "System.Net.Http.Headers", "EntityTagHeaderValue");
