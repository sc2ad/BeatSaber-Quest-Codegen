#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeTransformClipUpdater;
}
// Type: UnityEngine.UIElements::VisualTreeTransformClipUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6838))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6869))
// CS Name: UnityEngine.UIElements.VisualTreeTransformClipUpdater
class CORDL_TYPE VisualTreeTransformClipUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~VisualTreeTransformClipUpdater() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeTransformClipUpdater", modifiers: " const&", def_value: None }]
constexpr VisualTreeTransformClipUpdater(VisualTreeTransformClipUpdater const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeTransformClipUpdater", modifiers: "&&", def_value: None }]
constexpr VisualTreeTransformClipUpdater(VisualTreeTransformClipUpdater&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualTreeTransformClipUpdater(void* ptr) noexcept : ::UnityEngine::UIElements::BaseVisualTreeUpdater(ptr) {
}


  constexpr VisualTreeTransformClipUpdater& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualTreeTransformClipUpdater& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualTreeTransformClipUpdater& operator=(VisualTreeTransformClipUpdater&& o) noexcept = default;
  constexpr VisualTreeTransformClipUpdater& operator=(VisualTreeTransformClipUpdater const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(uint32_t value) ;

constexpr uint32_t __get_m_Version() const;

 uint32_t __declspec(property(get=__get_m_LastVersion, put=__set_m_LastVersion))  m_LastVersion;

constexpr void __set_m_LastVersion(uint32_t value) ;

constexpr uint32_t __get_m_LastVersion() const;

static ::StringW __declspec(property(get=__get_s_Description, put=__set_s_Description))  s_Description;

static void __set_s_Description(::StringW value) ;

static ::StringW __get_s_Description() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_ProfilerMarker, put=__set_s_ProfilerMarker))  s_ProfilerMarker;

static void __set_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_s_ProfilerMarker() ;


// Properties

 ::Unity::Profiling::ProfilerMarker __declspec(property(get=get_profilerMarker))  profilerMarker;


// Methods

/// @brief Method get_profilerMarker addr 0x2c41368 size 0x58 virtual true final false
 ::Unity::Profiling::ProfilerMarker get_profilerMarker() ;

/// @brief Method OnVersionChanged addr 0x2c413c0 size 0xf4 virtual true final false
 void OnVersionChanged(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) ;

/// @brief Method DirtyHierarchy addr 0x2c414b4 size 0x154 virtual false final false
static void DirtyHierarchy(::UnityEngine::UIElements::VisualElement ve, bool mustDirtyWorldTransform, bool mustDirtyWorldClip) ;

/// @brief Method DirtyBoundingBoxHierarchy addr 0x2c41608 size 0xa8 virtual false final false
static void DirtyBoundingBoxHierarchy(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method Update addr 0x2c416b0 size 0x64 virtual true final false
 void Update() ;

// Ctor Parameters []
explicit VisualTreeTransformClipUpdater() ;

/// @brief Method .ctor addr 0x2c41914 size 0xc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeTransformClipUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeTransformClipUpdater, "UnityEngine.UIElements", "VisualTreeTransformClipUpdater");
