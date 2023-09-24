#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__RawButton;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRChromaticAberration;
}
// Type: ::OVRChromaticAberration
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8879))
// CS Name: OVRChromaticAberration
class CORDL_TYPE OVRChromaticAberration : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OVRChromaticAberration() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRChromaticAberration", modifiers: " const&", def_value: None }]
constexpr OVRChromaticAberration(OVRChromaticAberration const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRChromaticAberration", modifiers: "&&", def_value: None }]
constexpr OVRChromaticAberration(OVRChromaticAberration&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRChromaticAberration(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRChromaticAberration& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRChromaticAberration& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRChromaticAberration& operator=(OVRChromaticAberration&& o) noexcept = default;
  constexpr OVRChromaticAberration& operator=(OVRChromaticAberration const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_toggleButton, put=__set_toggleButton))  toggleButton;

constexpr void __set_toggleButton(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_toggleButton() const;

 bool __declspec(property(get=__get_chromatic, put=__set_chromatic))  chromatic;

constexpr void __set_chromatic(bool value) ;

constexpr bool __get_chromatic() const;


// Methods

/// @brief Method Start addr 0x26194f0 size 0x9c virtual false final false
 void Start() ;

/// @brief Method Update addr 0x261958c size 0xf0 virtual false final false
 void Update() ;

static GlobalNamespace::OVRChromaticAberration New_ctor() ;

/// @brief Method .ctor addr 0x261967c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRChromaticAberration);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRChromaticAberration, "", "OVRChromaticAberration");
