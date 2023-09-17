#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
namespace UnityEngine::Timeline {
struct ____UnityEngine__Timeline__TimelineAsset__MediaType;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TrackMediaType;
}
// Type: UnityEngine.Timeline::TrackMediaType
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14125))
// CS Name: UnityEngine.Timeline.TrackMediaType
class CORDL_TYPE TrackMediaType : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TrackMediaType() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackMediaType", modifiers: " const&", def_value: None }]
constexpr TrackMediaType(TrackMediaType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackMediaType", modifiers: "&&", def_value: None }]
constexpr TrackMediaType(TrackMediaType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackMediaType(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr TrackMediaType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackMediaType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackMediaType& operator=(TrackMediaType&& o) noexcept = default;
  constexpr TrackMediaType& operator=(TrackMediaType const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Timeline::____UnityEngine__Timeline__TimelineAsset__MediaType __declspec(property(get=__get_m_MediaType, put=__set_m_MediaType))  m_MediaType;

constexpr void __set_m_MediaType(::UnityEngine::Timeline::____UnityEngine__Timeline__TimelineAsset__MediaType value) ;

constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__TimelineAsset__MediaType __get_m_MediaType() const;


// Methods

// Ctor Parameters [CppParam { name: "mt", ty: "::UnityEngine::Timeline::____UnityEngine__Timeline__TimelineAsset__MediaType", modifiers: "", def_value: None }]
explicit TrackMediaType(::UnityEngine::Timeline::____UnityEngine__Timeline__TimelineAsset__MediaType mt) ;

/// @brief Method .ctor addr 0x2ad5cc4 size 0x28 virtual false final false
 void _ctor(::UnityEngine::Timeline::____UnityEngine__Timeline__TimelineAsset__MediaType mt) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::TrackMediaType);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackMediaType, "UnityEngine.Timeline", "TrackMediaType");
