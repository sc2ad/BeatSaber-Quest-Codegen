#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__Marker_def.hpp"
namespace {
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine {
struct PropertyName;
}
namespace GlobalNamespace {
class JumpDestinationMarker;
}
// Forward declare root types
namespace GlobalNamespace {
class JumpMarker;
}
// Type: ::JumpMarker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14099))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13891))
// CS Name: JumpMarker
class CORDL_TYPE JumpMarker : public ::UnityEngine::Timeline::Marker {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::Playables::INotification
constexpr operator  ::UnityEngine::Playables::INotification() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~JumpMarker() = default;

// Ctor Parameters [CppParam { name: "", ty: "JumpMarker", modifiers: " const&", def_value: None }]
constexpr JumpMarker(JumpMarker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JumpMarker", modifiers: "&&", def_value: None }]
constexpr JumpMarker(JumpMarker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JumpMarker(void* ptr) noexcept : ::UnityEngine::Timeline::Marker(ptr) {
}


  constexpr JumpMarker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JumpMarker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JumpMarker& operator=(JumpMarker&& o) noexcept = default;
  constexpr JumpMarker& operator=(JumpMarker const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::JumpDestinationMarker __declspec(property(get=__get__destination, put=__set__destination))  _destination;

constexpr void __set__destination(::GlobalNamespace::JumpDestinationMarker value) ;

constexpr ::GlobalNamespace::JumpDestinationMarker __get__destination() const;

 ::UnityEngine::PropertyName __declspec(property(get=__get__id_k__BackingField, put=__set__id_k__BackingField))  _id_k__BackingField;

constexpr void __set__id_k__BackingField(::UnityEngine::PropertyName value) ;

constexpr ::UnityEngine::PropertyName __get__id_k__BackingField() const;


// Properties

 ::UnityEngine::PropertyName __declspec(property(get=get_id))  id;

 ::GlobalNamespace::JumpDestinationMarker __declspec(property(get=get_jumpDestination))  jumpDestination;


// Methods

/// @brief Method get_id addr 0x1f838c8 size 0x8 virtual true final true
 ::UnityEngine::PropertyName get_id() ;

/// @brief Method get_jumpDestination addr 0x1f838d0 size 0x8 virtual false final false
 ::GlobalNamespace::JumpDestinationMarker get_jumpDestination() ;

// Ctor Parameters []
explicit JumpMarker() ;

/// @brief Method .ctor addr 0x1f838d8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::JumpMarker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JumpMarker, "", "JumpMarker");
