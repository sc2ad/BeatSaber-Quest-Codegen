#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Timeline {
class IMarker;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class Marker;
}
// Type: UnityEngine.Timeline::Marker
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14099))
// CS Name: UnityEngine.Timeline.Marker
class CORDL_TYPE Marker : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::Timeline::IMarker
constexpr operator  ::UnityEngine::Timeline::IMarker() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Marker() = default;

// Ctor Parameters [CppParam { name: "", ty: "Marker", modifiers: " const&", def_value: None }]
constexpr Marker(Marker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Marker", modifiers: "&&", def_value: None }]
constexpr Marker(Marker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Marker(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr Marker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Marker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Marker& operator=(Marker&& o) noexcept = default;
  constexpr Marker& operator=(Marker const& o) noexcept = default;
                


// Fields

 double_t __declspec(property(get=__get_m_Time, put=__set_m_Time))  m_Time;

constexpr void __set_m_Time(double_t value) ;

constexpr double_t __get_m_Time() const;

 ::UnityEngine::Timeline::TrackAsset __declspec(property(get=__get__parent_k__BackingField, put=__set__parent_k__BackingField))  _parent_k__BackingField;

constexpr void __set__parent_k__BackingField(::UnityEngine::Timeline::TrackAsset value) ;

constexpr ::UnityEngine::Timeline::TrackAsset __get__parent_k__BackingField() const;


// Properties

 ::UnityEngine::Timeline::TrackAsset __declspec(property(get=get_parent, put=set_parent))  parent;

 double_t __declspec(property(get=get_time, put=set_time))  time;


// Methods

/// @brief Method get_parent addr 0x2acfc88 size 0x8 virtual true final true
 ::UnityEngine::Timeline::TrackAsset get_parent() ;

/// @brief Method set_parent addr 0x2acfc90 size 0x8 virtual false final false
 void set_parent(::UnityEngine::Timeline::TrackAsset value) ;

/// @brief Method get_time addr 0x2acfc98 size 0x8 virtual true final true
 double_t get_time() ;

/// @brief Method set_time addr 0x2acfca0 size 0x70 virtual true final true
 void set_time(double_t value) ;

/// @brief Method UnityEngine.Timeline.IMarker.Initialize addr 0x2acfd10 size 0x14c virtual true final true
 void UnityEngine_Timeline_IMarker_Initialize(::UnityEngine::Timeline::TrackAsset parentTrack) ;

/// @brief Method OnInitialize addr 0x2acfe5c size 0x4 virtual true final false
 void OnInitialize(::UnityEngine::Timeline::TrackAsset aPent) ;

// Ctor Parameters []
explicit Marker() ;

/// @brief Method .ctor addr 0x2acfe60 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::Marker);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::Marker, "UnityEngine.Timeline", "Marker");
