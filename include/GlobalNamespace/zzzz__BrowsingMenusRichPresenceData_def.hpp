#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IRichPresenceData;
}
// Forward declare root types
namespace GlobalNamespace {
class BrowsingMenusRichPresenceData;
}
// Type: ::BrowsingMenusRichPresenceData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4790))
// CS Name: BrowsingMenusRichPresenceData
class CORDL_TYPE BrowsingMenusRichPresenceData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IRichPresenceData
constexpr operator  GlobalNamespace::IRichPresenceData() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BrowsingMenusRichPresenceData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BrowsingMenusRichPresenceData", modifiers: " const&", def_value: None }]
constexpr BrowsingMenusRichPresenceData(BrowsingMenusRichPresenceData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BrowsingMenusRichPresenceData", modifiers: "&&", def_value: None }]
constexpr BrowsingMenusRichPresenceData(BrowsingMenusRichPresenceData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BrowsingMenusRichPresenceData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BrowsingMenusRichPresenceData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BrowsingMenusRichPresenceData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BrowsingMenusRichPresenceData& operator=(BrowsingMenusRichPresenceData&& o) noexcept = default;
  constexpr BrowsingMenusRichPresenceData& operator=(BrowsingMenusRichPresenceData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__localizedDescription_k__BackingField, put=__set__localizedDescription_k__BackingField))  _localizedDescription_k__BackingField;

constexpr void __set__localizedDescription_k__BackingField(::StringW value) ;

constexpr ::StringW __get__localizedDescription_k__BackingField() const;

/// @brief Field kBrowsingMenusRichPresenceLocalizationKey offset 0
static constexpr ::ConstString  kBrowsingMenusRichPresenceLocalizationKey{u"BROWSING_MENUS_PRESENCE"};


// Properties

 ::StringW __declspec(property(get=get_apiName))  apiName;

 ::StringW __declspec(property(get=get_localizedDescription, put=set_localizedDescription))  localizedDescription;


// Methods

/// @brief Method get_apiName addr 0x222a2e4 size 0x40 virtual true final true
 ::StringW get_apiName() ;

/// @brief Method get_localizedDescription addr 0x222a324 size 0x8 virtual true final true
 ::StringW get_localizedDescription() ;

/// @brief Method set_localizedDescription addr 0x222a32c size 0x8 virtual false final false
 void set_localizedDescription(::StringW value) ;

static GlobalNamespace::BrowsingMenusRichPresenceData New_ctor() ;

/// @brief Method .ctor addr 0x222a334 size 0x5c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BrowsingMenusRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BrowsingMenusRichPresenceData, "", "BrowsingMenusRichPresenceData");
