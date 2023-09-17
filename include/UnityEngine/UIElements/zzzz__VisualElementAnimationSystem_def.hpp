#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements::Experimental {
class IValueAnimationUpdate;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementAnimationSystem;
}
// Type: UnityEngine.UIElements::VisualElementAnimationSystem
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6838))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6855))
// CS Name: UnityEngine.UIElements.VisualElementAnimationSystem
class CORDL_TYPE VisualElementAnimationSystem : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~VisualElementAnimationSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementAnimationSystem", modifiers: " const&", def_value: None }]
constexpr VisualElementAnimationSystem(VisualElementAnimationSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementAnimationSystem", modifiers: "&&", def_value: None }]
constexpr VisualElementAnimationSystem(VisualElementAnimationSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualElementAnimationSystem(void* ptr) noexcept : ::UnityEngine::UIElements::BaseVisualTreeUpdater(ptr) {
}


  constexpr VisualElementAnimationSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualElementAnimationSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualElementAnimationSystem& operator=(VisualElementAnimationSystem&& o) noexcept = default;
  constexpr VisualElementAnimationSystem& operator=(VisualElementAnimationSystem const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate> __declspec(property(get=__get_m_Animations, put=__set_m_Animations))  m_Animations;

constexpr void __set_m_Animations(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate> __get_m_Animations() const;

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate> __declspec(property(get=__get_m_IterationList, put=__set_m_IterationList))  m_IterationList;

constexpr void __set_m_IterationList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate> __get_m_IterationList() const;

 bool __declspec(property(get=__get_m_HasNewAnimations, put=__set_m_HasNewAnimations))  m_HasNewAnimations;

constexpr void __set_m_HasNewAnimations(bool value) ;

constexpr bool __get_m_HasNewAnimations() const;

 bool __declspec(property(get=__get_m_IterationListDirty, put=__set_m_IterationListDirty))  m_IterationListDirty;

constexpr void __set_m_IterationListDirty(bool value) ;

constexpr bool __get_m_IterationListDirty() const;

static ::StringW __declspec(property(get=__get_s_Description, put=__set_s_Description))  s_Description;

static void __set_s_Description(::StringW value) ;

static ::StringW __get_s_Description() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_ProfilerMarker, put=__set_s_ProfilerMarker))  s_ProfilerMarker;

static void __set_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_s_ProfilerMarker() ;

static ::StringW __declspec(property(get=__get_s_StylePropertyAnimationDescription, put=__set_s_StylePropertyAnimationDescription))  s_StylePropertyAnimationDescription;

static void __set_s_StylePropertyAnimationDescription(::StringW value) ;

static ::StringW __get_s_StylePropertyAnimationDescription() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_StylePropertyAnimationProfilerMarker, put=__set_s_StylePropertyAnimationProfilerMarker))  s_StylePropertyAnimationProfilerMarker;

static void __set_s_StylePropertyAnimationProfilerMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_s_StylePropertyAnimationProfilerMarker() ;

 int64_t __declspec(property(get=__get_lastUpdate, put=__set_lastUpdate))  lastUpdate;

constexpr void __set_lastUpdate(int64_t value) ;

constexpr int64_t __get_lastUpdate() const;


// Properties

 ::Unity::Profiling::ProfilerMarker __declspec(property(get=get_profilerMarker))  profilerMarker;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=get_stylePropertyAnimationProfilerMarker))  stylePropertyAnimationProfilerMarker;


// Methods

/// @brief Method get_profilerMarker addr 0x2c3e0b0 size 0x58 virtual true final false
 ::Unity::Profiling::ProfilerMarker get_profilerMarker() ;

/// @brief Method get_stylePropertyAnimationProfilerMarker addr 0x2c3e108 size 0x58 virtual false final false
static ::Unity::Profiling::ProfilerMarker get_stylePropertyAnimationProfilerMarker() ;

/// @brief Method UnregisterAnimation addr 0x2c3e160 size 0x64 virtual false final false
 void UnregisterAnimation(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate anim) ;

/// @brief Method UnregisterAnimations addr 0x2c3e1c4 size 0x178 virtual false final false
 void UnregisterAnimations(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate> anims) ;

/// @brief Method RegisterAnimation addr 0x2c3e33c size 0x64 virtual false final false
 void RegisterAnimation(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate anim) ;

/// @brief Method RegisterAnimations addr 0x2c3e3a0 size 0x178 virtual false final false
 void RegisterAnimations(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Experimental::IValueAnimationUpdate> anims) ;

/// @brief Method Update addr 0x2c3e518 size 0x46c virtual true final false
 void Update() ;

/// @brief Method OnVersionChanged addr 0x2c3ea60 size 0x4 virtual true final false
 void OnVersionChanged(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) ;

// Ctor Parameters []
explicit VisualElementAnimationSystem() ;

/// @brief Method .ctor addr 0x2c3ea64 size 0xc4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementAnimationSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementAnimationSystem, "UnityEngine.UIElements", "VisualElementAnimationSystem");
