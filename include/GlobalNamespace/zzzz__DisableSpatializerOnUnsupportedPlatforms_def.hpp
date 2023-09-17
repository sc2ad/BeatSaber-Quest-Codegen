#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class DisableSpatializerOnUnsupportedPlatforms;
}
// Type: ::DisableSpatializerOnUnsupportedPlatforms
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4046))
// CS Name: DisableSpatializerOnUnsupportedPlatforms
class CORDL_TYPE DisableSpatializerOnUnsupportedPlatforms : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DisableSpatializerOnUnsupportedPlatforms() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableSpatializerOnUnsupportedPlatforms", modifiers: " const&", def_value: None }]
constexpr DisableSpatializerOnUnsupportedPlatforms(DisableSpatializerOnUnsupportedPlatforms const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableSpatializerOnUnsupportedPlatforms", modifiers: "&&", def_value: None }]
constexpr DisableSpatializerOnUnsupportedPlatforms(DisableSpatializerOnUnsupportedPlatforms&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisableSpatializerOnUnsupportedPlatforms(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DisableSpatializerOnUnsupportedPlatforms& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisableSpatializerOnUnsupportedPlatforms& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisableSpatializerOnUnsupportedPlatforms& operator=(DisableSpatializerOnUnsupportedPlatforms&& o) noexcept = default;
  constexpr DisableSpatializerOnUnsupportedPlatforms& operator=(DisableSpatializerOnUnsupportedPlatforms const& o) noexcept = default;
                


// Fields

 ::UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(::UnityEngine::AudioSource value) ;

constexpr ::UnityEngine::AudioSource __get__audioSource() const;


// Methods

// Ctor Parameters []
explicit DisableSpatializerOnUnsupportedPlatforms() ;

/// @brief Method .ctor addr 0x20bad3c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableSpatializerOnUnsupportedPlatforms, "", "DisableSpatializerOnUnsupportedPlatforms");
