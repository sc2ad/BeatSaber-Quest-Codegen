#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__Marker_def.hpp"
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine::Playables {
class INotification;
}
// Forward declare root types
namespace GlobalNamespace {
class TimelinePauseMarker;
}
// Type: ::TimelinePauseMarker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14099))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13893))
// CS Name: TimelinePauseMarker
class CORDL_TYPE TimelinePauseMarker : public UnityEngine::Timeline::Marker {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::INotification
constexpr operator  UnityEngine::Playables::INotification() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TimelinePauseMarker() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelinePauseMarker", modifiers: " const&", def_value: None }]
constexpr TimelinePauseMarker(TimelinePauseMarker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelinePauseMarker", modifiers: "&&", def_value: None }]
constexpr TimelinePauseMarker(TimelinePauseMarker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimelinePauseMarker(void* ptr) noexcept : UnityEngine::Timeline::Marker(ptr) {
}


  constexpr TimelinePauseMarker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimelinePauseMarker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimelinePauseMarker& operator=(TimelinePauseMarker&& o) noexcept = default;
  constexpr TimelinePauseMarker& operator=(TimelinePauseMarker const& o) noexcept = default;
                


// Fields

 UnityEngine::PropertyName __declspec(property(get=__get__id_k__BackingField, put=__set__id_k__BackingField))  _id_k__BackingField;

constexpr void __set__id_k__BackingField(UnityEngine::PropertyName value) ;

constexpr UnityEngine::PropertyName __get__id_k__BackingField() const;


// Properties

 UnityEngine::PropertyName __declspec(property(get=get_id))  id;


// Methods

/// @brief Method get_id addr 0x1f83a3c size 0x8 virtual true final true
 UnityEngine::PropertyName get_id() ;

static GlobalNamespace::TimelinePauseMarker New_ctor() ;

/// @brief Method .ctor addr 0x1f83a44 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TimelinePauseMarker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TimelinePauseMarker, "", "TimelinePauseMarker");
