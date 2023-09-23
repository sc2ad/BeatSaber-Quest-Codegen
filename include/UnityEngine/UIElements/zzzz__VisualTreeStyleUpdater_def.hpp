#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::UIElements {
class VisualTreeStyleUpdaterTraversal;
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
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeStyleUpdater;
}
// Type: UnityEngine.UIElements::VisualTreeStyleUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6838))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6902))
// CS Name: UnityEngine.UIElements.VisualTreeStyleUpdater
class CORDL_TYPE VisualTreeStyleUpdater : public UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~VisualTreeStyleUpdater() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeStyleUpdater", modifiers: " const&", def_value: None }]
constexpr VisualTreeStyleUpdater(VisualTreeStyleUpdater const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeStyleUpdater", modifiers: "&&", def_value: None }]
constexpr VisualTreeStyleUpdater(VisualTreeStyleUpdater&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualTreeStyleUpdater(void* ptr) noexcept : UnityEngine::UIElements::BaseVisualTreeUpdater(ptr) {
}


  constexpr VisualTreeStyleUpdater& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualTreeStyleUpdater& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualTreeStyleUpdater& operator=(VisualTreeStyleUpdater&& o) noexcept = default;
  constexpr VisualTreeStyleUpdater& operator=(VisualTreeStyleUpdater const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_m_ApplyStyleUpdateList, put=__set_m_ApplyStyleUpdateList))  m_ApplyStyleUpdateList;

constexpr void __set_m_ApplyStyleUpdateList(System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> __get_m_ApplyStyleUpdateList() const;

 System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_m_TransitionPropertyUpdateList, put=__set_m_TransitionPropertyUpdateList))  m_TransitionPropertyUpdateList;

constexpr void __set_m_TransitionPropertyUpdateList(System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> __get_m_TransitionPropertyUpdateList() const;

 bool __declspec(property(get=__get_m_IsApplyingStyles, put=__set_m_IsApplyingStyles))  m_IsApplyingStyles;

constexpr void __set_m_IsApplyingStyles(bool value) ;

constexpr bool __get_m_IsApplyingStyles() const;

 uint32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(uint32_t value) ;

constexpr uint32_t __get_m_Version() const;

 uint32_t __declspec(property(get=__get_m_LastVersion, put=__set_m_LastVersion))  m_LastVersion;

constexpr void __set_m_LastVersion(uint32_t value) ;

constexpr uint32_t __get_m_LastVersion() const;

 UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal __declspec(property(get=__get_m_StyleContextHierarchyTraversal, put=__set_m_StyleContextHierarchyTraversal))  m_StyleContextHierarchyTraversal;

constexpr void __set_m_StyleContextHierarchyTraversal(UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal value) ;

constexpr UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal __get_m_StyleContextHierarchyTraversal() const;

static ::StringW __declspec(property(get=__get_s_Description, put=__set_s_Description))  s_Description;

static void __set_s_Description(::StringW value) ;

static ::StringW __get_s_Description() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_ProfilerMarker, put=__set_s_ProfilerMarker))  s_ProfilerMarker;

static void __set_s_ProfilerMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_ProfilerMarker() ;


// Properties

 Unity::Profiling::ProfilerMarker __declspec(property(get=get_profilerMarker))  profilerMarker;


// Methods

/// @brief Method get_profilerMarker addr 0x2c483e4 size 0x58 virtual true final false
 Unity::Profiling::ProfilerMarker get_profilerMarker() ;

/// @brief Method OnVersionChanged addr 0x2c4843c size 0xc8 virtual true final false
 void OnVersionChanged(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::VersionChangeType versionChangeType) ;

/// @brief Method Update addr 0x2c48584 size 0x30c virtual true final false
 void Update() ;

/// @brief Method ApplyStyles addr 0x2c48890 size 0xe0 virtual false final false
 void ApplyStyles() ;

// Ctor Parameters []
explicit VisualTreeStyleUpdater() ;

/// @brief Method .ctor addr 0x2c48cf4 size 0xd4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::VisualTreeStyleUpdater);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::VisualTreeStyleUpdater, "UnityEngine.UIElements", "VisualTreeStyleUpdater");
