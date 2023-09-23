#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningDisplayViewController;
}
// Type: ::HealthWarningDisplayViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5738))
// CS Name: HealthWarningDisplayViewController
class CORDL_TYPE HealthWarningDisplayViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~HealthWarningDisplayViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningDisplayViewController", modifiers: " const&", def_value: None }]
constexpr HealthWarningDisplayViewController(HealthWarningDisplayViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningDisplayViewController", modifiers: "&&", def_value: None }]
constexpr HealthWarningDisplayViewController(HealthWarningDisplayViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HealthWarningDisplayViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr HealthWarningDisplayViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HealthWarningDisplayViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HealthWarningDisplayViewController& operator=(HealthWarningDisplayViewController&& o) noexcept = default;
  constexpr HealthWarningDisplayViewController& operator=(HealthWarningDisplayViewController const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__healthAndSafetyTextMesh, put=__set__healthAndSafetyTextMesh))  _healthAndSafetyTextMesh;

constexpr void __set__healthAndSafetyTextMesh(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__healthAndSafetyTextMesh() const;

 ::StringW __declspec(property(get=__get__healthAndSafetyFullLocalizationKey, put=__set__healthAndSafetyFullLocalizationKey))  _healthAndSafetyFullLocalizationKey;

constexpr void __set__healthAndSafetyFullLocalizationKey(::StringW value) ;

constexpr ::StringW __get__healthAndSafetyFullLocalizationKey() const;

 ::StringW __declspec(property(get=__get__healthAndSafetyPSLocalizationKey, put=__set__healthAndSafetyPSLocalizationKey))  _healthAndSafetyPSLocalizationKey;

constexpr void __set__healthAndSafetyPSLocalizationKey(::StringW value) ;

constexpr ::StringW __get__healthAndSafetyPSLocalizationKey() const;

 bool __declspec(property(get=__get__showShortHealthAndSafety, put=__set__showShortHealthAndSafety))  _showShortHealthAndSafety;

constexpr void __set__showShortHealthAndSafety(bool value) ;

constexpr bool __get__showShortHealthAndSafety() const;


// Methods

/// @brief Method DidActivate addr 0x215f32c size 0x3c virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

// Ctor Parameters []
explicit HealthWarningDisplayViewController() ;

/// @brief Method .ctor addr 0x215f368 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HealthWarningDisplayViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningDisplayViewController, "", "HealthWarningDisplayViewController");
