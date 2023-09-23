#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
namespace GlobalNamespace {
class PS4PublisherSKUSettingsSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PS4ActivePublisherSKUSettingsSO;
}
// Type: ::PS4ActivePublisherSKUSettingsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4635))
// CS Name: PS4ActivePublisherSKUSettingsSO
class CORDL_TYPE PS4ActivePublisherSKUSettingsSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PS4ActivePublisherSKUSettingsSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4ActivePublisherSKUSettingsSO", modifiers: " const&", def_value: None }]
constexpr PS4ActivePublisherSKUSettingsSO(PS4ActivePublisherSKUSettingsSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4ActivePublisherSKUSettingsSO", modifiers: "&&", def_value: None }]
constexpr PS4ActivePublisherSKUSettingsSO(PS4ActivePublisherSKUSettingsSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS4ActivePublisherSKUSettingsSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr PS4ActivePublisherSKUSettingsSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS4ActivePublisherSKUSettingsSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS4ActivePublisherSKUSettingsSO& operator=(PS4ActivePublisherSKUSettingsSO&& o) noexcept = default;
  constexpr PS4ActivePublisherSKUSettingsSO& operator=(PS4ActivePublisherSKUSettingsSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PS4PublisherSKUSettingsSO __declspec(property(get=__get_activePublisherSKUSettings, put=__set_activePublisherSKUSettings))  activePublisherSKUSettings;

constexpr void __set_activePublisherSKUSettings(GlobalNamespace::PS4PublisherSKUSettingsSO value) ;

constexpr GlobalNamespace::PS4PublisherSKUSettingsSO __get_activePublisherSKUSettings() const;


// Methods

// Ctor Parameters []
explicit PS4ActivePublisherSKUSettingsSO() ;

/// @brief Method .ctor addr 0x221a164 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PS4ActivePublisherSKUSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4ActivePublisherSKUSettingsSO, "", "PS4ActivePublisherSKUSettingsSO");
