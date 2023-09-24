#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class OVRLayerAttribute;
}
// Type: ::OVRLayerAttribute
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8533))
// CS Name: OVRLayerAttribute
class CORDL_TYPE OVRLayerAttribute : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRLayerAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRLayerAttribute", modifiers: " const&", def_value: None }]
constexpr OVRLayerAttribute(OVRLayerAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRLayerAttribute", modifiers: "&&", def_value: None }]
constexpr OVRLayerAttribute(OVRLayerAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRLayerAttribute(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr OVRLayerAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRLayerAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRLayerAttribute& operator=(OVRLayerAttribute&& o) noexcept = default;
  constexpr OVRLayerAttribute& operator=(OVRLayerAttribute const& o) noexcept = default;
                


// Methods

static GlobalNamespace::OVRLayerAttribute New_ctor() ;

/// @brief Method .ctor addr 0x25c3f70 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRLayerAttribute);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRLayerAttribute, "", "OVRLayerAttribute");
