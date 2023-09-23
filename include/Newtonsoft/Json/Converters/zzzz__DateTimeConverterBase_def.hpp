#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class DateTimeConverterBase;
}
// Type: Newtonsoft.Json.Converters::DateTimeConverterBase
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11772))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11974))
// CS Name: Newtonsoft.Json.Converters.DateTimeConverterBase
class CORDL_TYPE DateTimeConverterBase : public Newtonsoft::Json::JsonConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DateTimeConverterBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeConverterBase", modifiers: " const&", def_value: None }]
constexpr DateTimeConverterBase(DateTimeConverterBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeConverterBase", modifiers: "&&", def_value: None }]
constexpr DateTimeConverterBase(DateTimeConverterBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DateTimeConverterBase(void* ptr) noexcept : Newtonsoft::Json::JsonConverter(ptr) {
}


  constexpr DateTimeConverterBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DateTimeConverterBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DateTimeConverterBase& operator=(DateTimeConverterBase&& o) noexcept = default;
  constexpr DateTimeConverterBase& operator=(DateTimeConverterBase const& o) noexcept = default;
                


// Methods

/// @brief Method CanConvert addr 0x253bc6c size 0x140 virtual true final false
 bool CanConvert(System::Type objectType) ;

// Ctor Parameters []
explicit DateTimeConverterBase() ;

/// @brief Method .ctor addr 0x253bdac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Converters
NEED_NO_BOX(Newtonsoft::Json::Converters::DateTimeConverterBase);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Converters::DateTimeConverterBase, "Newtonsoft.Json.Converters", "DateTimeConverterBase");
