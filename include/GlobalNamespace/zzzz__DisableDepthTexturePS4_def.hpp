#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class DisableDepthTexturePS4;
}
// Type: ::DisableDepthTexturePS4
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15301))
// CS Name: DisableDepthTexturePS4
class CORDL_TYPE DisableDepthTexturePS4 : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DisableDepthTexturePS4() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableDepthTexturePS4", modifiers: " const&", def_value: None }]
constexpr DisableDepthTexturePS4(DisableDepthTexturePS4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableDepthTexturePS4", modifiers: "&&", def_value: None }]
constexpr DisableDepthTexturePS4(DisableDepthTexturePS4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisableDepthTexturePS4(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DisableDepthTexturePS4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisableDepthTexturePS4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisableDepthTexturePS4& operator=(DisableDepthTexturePS4&& o) noexcept = default;
  constexpr DisableDepthTexturePS4& operator=(DisableDepthTexturePS4 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BoolSO __declspec(property(get=__get__depthTextureEnabled, put=__set__depthTextureEnabled))  _depthTextureEnabled;

constexpr void __set__depthTextureEnabled(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get__depthTextureEnabled() const;


// Methods

static GlobalNamespace::DisableDepthTexturePS4 New_ctor() ;

/// @brief Method .ctor addr 0x2675f78 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DisableDepthTexturePS4);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisableDepthTexturePS4, "", "DisableDepthTexturePS4");
