#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class IAnalyticsModel;
}
// Type: ::IAnalyticsModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4000))
// CS Name: IAnalyticsModel
class CORDL_TYPE IAnalyticsModel : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAnalyticsModel() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAnalyticsModel(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_supportsOpenDataPrivacyPage))  supportsOpenDataPrivacyPage;


// Methods

/// @brief Method get_supportsOpenDataPrivacyPage addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_supportsOpenDataPrivacyPage() ;

/// @brief Method OpenDataPrivacyPage addr 0x0 size 0xffffffffffffffff virtual true final false
 void OpenDataPrivacyPage() ;

/// @brief Method LogEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogEvent(::StringW eventType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> eventData) ;

/// @brief Method LogEditAvatarEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogEditAvatarEvent(::StringW eventType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> eventData) ;

/// @brief Method LogClick addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogClick(::StringW clickType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> clickData) ;

/// @brief Method LogImpression addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogImpression(::StringW impressionType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> impressionData) ;

/// @brief Method LogExposure addr 0x0 size 0xffffffffffffffff virtual true final false
 void LogExposure(::StringW exposureType, System::Collections::Generic::Dictionary_2<::StringW,::StringW> exposureData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IAnalyticsModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IAnalyticsModel, "", "IAnalyticsModel");
