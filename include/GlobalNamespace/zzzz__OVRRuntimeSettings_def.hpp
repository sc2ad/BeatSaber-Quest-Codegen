#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRManager__ColorSpace;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRRuntimeSettings;
}
// Type: ::OVRRuntimeSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8812))
// CS Name: OVRRuntimeSettings
class CORDL_TYPE OVRRuntimeSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OVRRuntimeSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeSettings", modifiers: " const&", def_value: None }]
constexpr OVRRuntimeSettings(OVRRuntimeSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeSettings", modifiers: "&&", def_value: None }]
constexpr OVRRuntimeSettings(OVRRuntimeSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRRuntimeSettings(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr OVRRuntimeSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRRuntimeSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRRuntimeSettings& operator=(OVRRuntimeSettings&& o) noexcept = default;
  constexpr OVRRuntimeSettings& operator=(OVRRuntimeSettings const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace __declspec(property(get=__get_colorSpace, put=__set_colorSpace))  colorSpace;

constexpr void __set_colorSpace(::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRManager__ColorSpace __get_colorSpace() const;


// Methods

/// @brief Method GetRuntimeSettings addr 0x26027c4 size 0x114 virtual false final false
static ::GlobalNamespace::OVRRuntimeSettings GetRuntimeSettings() ;

// Ctor Parameters []
explicit OVRRuntimeSettings() ;

/// @brief Method .ctor addr 0x26028d8 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRRuntimeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRuntimeSettings, "", "OVRRuntimeSettings");
