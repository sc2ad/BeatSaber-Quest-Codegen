#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Newtonsoft::Json::Linq {
struct MergeArrayHandling;
}
namespace Newtonsoft::Json::Linq {
struct MergeNullValueHandling;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JsonMergeSettings;
}
// Type: Newtonsoft.Json.Linq::JsonMergeSettings
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11913))
// CS Name: Newtonsoft.Json.Linq.JsonMergeSettings
class CORDL_TYPE JsonMergeSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~JsonMergeSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonMergeSettings", modifiers: " const&", def_value: None }]
constexpr JsonMergeSettings(JsonMergeSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonMergeSettings", modifiers: "&&", def_value: None }]
constexpr JsonMergeSettings(JsonMergeSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonMergeSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JsonMergeSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonMergeSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonMergeSettings& operator=(JsonMergeSettings&& o) noexcept = default;
  constexpr JsonMergeSettings& operator=(JsonMergeSettings const& o) noexcept = default;
                


// Fields

 Newtonsoft::Json::Linq::MergeArrayHandling __declspec(property(get=__get__mergeArrayHandling, put=__set__mergeArrayHandling))  _mergeArrayHandling;

constexpr void __set__mergeArrayHandling(Newtonsoft::Json::Linq::MergeArrayHandling value) ;

constexpr Newtonsoft::Json::Linq::MergeArrayHandling __get__mergeArrayHandling() const;

 Newtonsoft::Json::Linq::MergeNullValueHandling __declspec(property(get=__get__mergeNullValueHandling, put=__set__mergeNullValueHandling))  _mergeNullValueHandling;

constexpr void __set__mergeNullValueHandling(Newtonsoft::Json::Linq::MergeNullValueHandling value) ;

constexpr Newtonsoft::Json::Linq::MergeNullValueHandling __get__mergeNullValueHandling() const;


// Properties

 Newtonsoft::Json::Linq::MergeArrayHandling __declspec(property(get=get_MergeArrayHandling, put=set_MergeArrayHandling))  MergeArrayHandling;

 Newtonsoft::Json::Linq::MergeNullValueHandling __declspec(property(get=get_MergeNullValueHandling, put=set_MergeNullValueHandling))  MergeNullValueHandling;


// Methods

/// @brief Method get_MergeArrayHandling addr 0x2518f08 size 0x8 virtual false final false
 Newtonsoft::Json::Linq::MergeArrayHandling get_MergeArrayHandling() ;

/// @brief Method set_MergeArrayHandling addr 0x2518f10 size 0x64 virtual false final false
 void set_MergeArrayHandling(Newtonsoft::Json::Linq::MergeArrayHandling value) ;

/// @brief Method get_MergeNullValueHandling addr 0x2518f74 size 0x8 virtual false final false
 Newtonsoft::Json::Linq::MergeNullValueHandling get_MergeNullValueHandling() ;

/// @brief Method set_MergeNullValueHandling addr 0x2518f7c size 0x64 virtual false final false
 void set_MergeNullValueHandling(Newtonsoft::Json::Linq::MergeNullValueHandling value) ;

static Newtonsoft::Json::Linq::JsonMergeSettings New_ctor() ;

/// @brief Method .ctor addr 0x2518fe0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
NEED_NO_BOX(Newtonsoft::Json::Linq::JsonMergeSettings);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Linq::JsonMergeSettings, "Newtonsoft.Json.Linq", "JsonMergeSettings");
