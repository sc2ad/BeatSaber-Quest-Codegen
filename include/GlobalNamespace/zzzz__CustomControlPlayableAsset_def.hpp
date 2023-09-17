#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__ControlPlayableAsset_def.hpp"
namespace {
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace GlobalNamespace {
class AvatarColorBehaviour;
}
namespace UnityEngine::Timeline {
class ITimelineClipAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomControlPlayableAsset;
}
// Type: ::CustomControlPlayableAsset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14085))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6061))
// CS Name: CustomControlPlayableAsset
class CORDL_TYPE CustomControlPlayableAsset : public ::UnityEngine::Timeline::ControlPlayableAsset {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::Timeline::ITimelineClipAsset
constexpr operator  ::UnityEngine::Timeline::ITimelineClipAsset() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~CustomControlPlayableAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomControlPlayableAsset", modifiers: " const&", def_value: None }]
constexpr CustomControlPlayableAsset(CustomControlPlayableAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomControlPlayableAsset", modifiers: "&&", def_value: None }]
constexpr CustomControlPlayableAsset(CustomControlPlayableAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomControlPlayableAsset(void* ptr) noexcept : ::UnityEngine::Timeline::ControlPlayableAsset(ptr) {
}


  constexpr CustomControlPlayableAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomControlPlayableAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomControlPlayableAsset& operator=(CustomControlPlayableAsset&& o) noexcept = default;
  constexpr CustomControlPlayableAsset& operator=(CustomControlPlayableAsset const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::AvatarColorBehaviour __declspec(property(get=__get__template, put=__set__template))  _template;

constexpr void __set__template(::GlobalNamespace::AvatarColorBehaviour value) ;

constexpr ::GlobalNamespace::AvatarColorBehaviour __get__template() const;


// Properties

 ::UnityEngine::Timeline::ClipCaps __declspec(property(get=get_clipCaps))  clipCaps;


// Methods

/// @brief Method get_clipCaps addr 0x21b1d60 size 0x8 virtual true final true
 ::UnityEngine::Timeline::ClipCaps get_clipCaps() ;

// Ctor Parameters []
explicit CustomControlPlayableAsset() ;

/// @brief Method .ctor addr 0x21b1d68 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CustomControlPlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomControlPlayableAsset, "", "CustomControlPlayableAsset");
