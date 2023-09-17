#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JValue_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Newtonsoft::Json {
class JsonReader;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JRaw;
}
// Type: Newtonsoft.Json.Linq::JRaw
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11949))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11916))
// CS Name: Newtonsoft.Json.Linq.JRaw
class CORDL_TYPE JRaw : public ::Newtonsoft::Json::Linq::JValue {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~JRaw() = default;

// Ctor Parameters [CppParam { name: "", ty: "JRaw", modifiers: " const&", def_value: None }]
constexpr JRaw(JRaw const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JRaw", modifiers: "&&", def_value: None }]
constexpr JRaw(JRaw&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JRaw(void* ptr) noexcept : ::Newtonsoft::Json::Linq::JValue(ptr) {
}


  constexpr JRaw& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JRaw& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JRaw& operator=(JRaw&& o) noexcept = default;
  constexpr JRaw& operator=(JRaw const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "other", ty: "::Newtonsoft::Json::Linq::JRaw", modifiers: "", def_value: None }]
explicit JRaw(::Newtonsoft::Json::Linq::JRaw other) ;

/// @brief Method .ctor addr 0x2518fe8 size 0x8 virtual false final false
 void _ctor(::Newtonsoft::Json::Linq::JRaw other) ;

// Ctor Parameters [CppParam { name: "rawJson", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit JRaw(::bs_hook::Il2CppWrapperType rawJson) ;

/// @brief Method .ctor addr 0x2518ff0 size 0xc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType rawJson) ;

/// @brief Method Create addr 0x2518ffc size 0x378 virtual false final false
static ::Newtonsoft::Json::Linq::JRaw Create(::Newtonsoft::Json::JsonReader reader) ;

/// @brief Method CloneToken addr 0x2519374 size 0x64 virtual true final false
 ::Newtonsoft::Json::Linq::JToken CloneToken() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Linq::JRaw);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JRaw, "Newtonsoft.Json.Linq", "JRaw");
