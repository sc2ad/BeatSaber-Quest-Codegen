#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class Mirror;
}
// Forward declare root types
namespace GlobalNamespace {
class DisableWhenMirrorIsEnabled;
}
// Type: ::DisableWhenMirrorIsEnabled
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5945))
// CS Name: DisableWhenMirrorIsEnabled
class CORDL_TYPE DisableWhenMirrorIsEnabled : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DisableWhenMirrorIsEnabled() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableWhenMirrorIsEnabled", modifiers: " const&", def_value: None }]
constexpr DisableWhenMirrorIsEnabled(DisableWhenMirrorIsEnabled const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableWhenMirrorIsEnabled", modifiers: "&&", def_value: None }]
constexpr DisableWhenMirrorIsEnabled(DisableWhenMirrorIsEnabled&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisableWhenMirrorIsEnabled(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DisableWhenMirrorIsEnabled& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisableWhenMirrorIsEnabled& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisableWhenMirrorIsEnabled& operator=(DisableWhenMirrorIsEnabled&& o) noexcept = default;
  constexpr DisableWhenMirrorIsEnabled& operator=(DisableWhenMirrorIsEnabled const& o) noexcept = default;
                


// Fields

 GlobalNamespace::Mirror __declspec(property(get=__get__mirror, put=__set__mirror))  _mirror;

constexpr void __set__mirror(GlobalNamespace::Mirror value) ;

constexpr GlobalNamespace::Mirror __get__mirror() const;


// Properties

 GlobalNamespace::Mirror __declspec(property(get=get_mirror, put=set_mirror))  mirror;


// Methods

/// @brief Method get_mirror addr 0x219c274 size 0x8 virtual false final false
 GlobalNamespace::Mirror get_mirror() ;

/// @brief Method set_mirror addr 0x219c27c size 0x8 virtual false final false
 void set_mirror(GlobalNamespace::Mirror value) ;

/// @brief Method Start addr 0x219c284 size 0xa0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x219c350 size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleMirrorDidChangeEnabledState addr 0x219c324 size 0x2c virtual false final false
 void HandleMirrorDidChangeEnabledState(bool isEnabled) ;

static GlobalNamespace::DisableWhenMirrorIsEnabled New_ctor() ;

/// @brief Method .ctor addr 0x219c424 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DisableWhenMirrorIsEnabled);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisableWhenMirrorIsEnabled, "", "DisableWhenMirrorIsEnabled");
