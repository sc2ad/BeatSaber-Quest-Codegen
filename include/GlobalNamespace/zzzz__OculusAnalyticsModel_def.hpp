#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusAnalyticsModel;
}
// Type: ::OculusAnalyticsModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4006))
// CS Name: OculusAnalyticsModel
class CORDL_TYPE OculusAnalyticsModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IAnalyticsModel
constexpr operator  GlobalNamespace::IAnalyticsModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OculusAnalyticsModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusAnalyticsModel", modifiers: " const&", def_value: None }]
constexpr OculusAnalyticsModel(OculusAnalyticsModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusAnalyticsModel", modifiers: "&&", def_value: None }]
constexpr OculusAnalyticsModel(OculusAnalyticsModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusAnalyticsModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OculusAnalyticsModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusAnalyticsModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusAnalyticsModel& operator=(OculusAnalyticsModel&& o) noexcept = default;
  constexpr OculusAnalyticsModel& operator=(OculusAnalyticsModel const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_supportsOpenDataPrivacyPage))  supportsOpenDataPrivacyPage;


// Methods

/// @brief Method get_supportsOpenDataPrivacyPage addr 0x20b2e9c size 0x8 virtual true final true
 bool get_supportsOpenDataPrivacyPage() ;

/// @brief Method OpenDataPrivacyPage addr 0x20b2ea4 size 0x4 virtual true final true
 void OpenDataPrivacyPage() ;

/// @brief Method LogEvent addr 0x20b2ea8 size 0xf8 virtual true final true
 void LogEvent(::StringW eventType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> eventData) ;

/// @brief Method LogEditAvatarEvent addr 0x20b2fa0 size 0xf8 virtual true final true
 void LogEditAvatarEvent(::StringW eventType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> eventData) ;

/// @brief Method LogClick addr 0x20b3098 size 0x90 virtual true final true
 void LogClick(::StringW clickType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> clickData) ;

/// @brief Method LogImpression addr 0x20b3128 size 0x90 virtual true final true
 void LogImpression(::StringW impressionType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> impressionData) ;

/// @brief Method LogExposure addr 0x20b31b8 size 0x90 virtual true final true
 void LogExposure(::StringW exposureType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> exposureData) ;

static GlobalNamespace::OculusAnalyticsModel New_ctor() ;

/// @brief Method .ctor addr 0x20b3248 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OculusAnalyticsModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusAnalyticsModel, "", "OculusAnalyticsModel");
