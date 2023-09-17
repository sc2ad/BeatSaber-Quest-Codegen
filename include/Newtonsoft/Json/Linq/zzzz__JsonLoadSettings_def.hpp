#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Newtonsoft::Json::Linq {
struct CommentHandling;
}
namespace Newtonsoft::Json::Linq {
struct LineInfoHandling;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
// Type: Newtonsoft.Json.Linq::JsonLoadSettings
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11912))
// CS Name: Newtonsoft.Json.Linq.JsonLoadSettings
class CORDL_TYPE JsonLoadSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~JsonLoadSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonLoadSettings", modifiers: " const&", def_value: None }]
constexpr JsonLoadSettings(JsonLoadSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonLoadSettings", modifiers: "&&", def_value: None }]
constexpr JsonLoadSettings(JsonLoadSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonLoadSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JsonLoadSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonLoadSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonLoadSettings& operator=(JsonLoadSettings&& o) noexcept = default;
  constexpr JsonLoadSettings& operator=(JsonLoadSettings const& o) noexcept = default;
                


// Fields

 ::Newtonsoft::Json::Linq::CommentHandling __declspec(property(get=__get__commentHandling, put=__set__commentHandling))  _commentHandling;

constexpr void __set__commentHandling(::Newtonsoft::Json::Linq::CommentHandling value) ;

constexpr ::Newtonsoft::Json::Linq::CommentHandling __get__commentHandling() const;

 ::Newtonsoft::Json::Linq::LineInfoHandling __declspec(property(get=__get__lineInfoHandling, put=__set__lineInfoHandling))  _lineInfoHandling;

constexpr void __set__lineInfoHandling(::Newtonsoft::Json::Linq::LineInfoHandling value) ;

constexpr ::Newtonsoft::Json::Linq::LineInfoHandling __get__lineInfoHandling() const;


// Properties

 ::Newtonsoft::Json::Linq::CommentHandling __declspec(property(get=get_CommentHandling, put=set_CommentHandling))  CommentHandling;

 ::Newtonsoft::Json::Linq::LineInfoHandling __declspec(property(get=get_LineInfoHandling, put=set_LineInfoHandling))  LineInfoHandling;


// Methods

/// @brief Method get_CommentHandling addr 0x2518e28 size 0x8 virtual false final false
 ::Newtonsoft::Json::Linq::CommentHandling get_CommentHandling() ;

/// @brief Method set_CommentHandling addr 0x2518e30 size 0x64 virtual false final false
 void set_CommentHandling(::Newtonsoft::Json::Linq::CommentHandling value) ;

/// @brief Method get_LineInfoHandling addr 0x2518e94 size 0x8 virtual false final false
 ::Newtonsoft::Json::Linq::LineInfoHandling get_LineInfoHandling() ;

/// @brief Method set_LineInfoHandling addr 0x2518e9c size 0x64 virtual false final false
 void set_LineInfoHandling(::Newtonsoft::Json::Linq::LineInfoHandling value) ;

// Ctor Parameters []
explicit JsonLoadSettings() ;

/// @brief Method .ctor addr 0x2518f00 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonLoadSettings);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonLoadSettings, "Newtonsoft.Json.Linq", "JsonLoadSettings");
