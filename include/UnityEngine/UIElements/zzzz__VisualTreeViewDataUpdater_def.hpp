#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeViewDataUpdater;
}
// Type: UnityEngine.UIElements::VisualTreeViewDataUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6838))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6989))
// CS Name: UnityEngine.UIElements.VisualTreeViewDataUpdater
class CORDL_TYPE VisualTreeViewDataUpdater : public UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~VisualTreeViewDataUpdater() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeViewDataUpdater", modifiers: " const&", def_value: None }]
constexpr VisualTreeViewDataUpdater(VisualTreeViewDataUpdater const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeViewDataUpdater", modifiers: "&&", def_value: None }]
constexpr VisualTreeViewDataUpdater(VisualTreeViewDataUpdater&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualTreeViewDataUpdater(void* ptr) noexcept : UnityEngine::UIElements::BaseVisualTreeUpdater(ptr) {
}


  constexpr VisualTreeViewDataUpdater& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualTreeViewDataUpdater& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualTreeViewDataUpdater& operator=(VisualTreeViewDataUpdater&& o) noexcept = default;
  constexpr VisualTreeViewDataUpdater& operator=(VisualTreeViewDataUpdater const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_m_UpdateList, put=__set_m_UpdateList))  m_UpdateList;

constexpr void __set_m_UpdateList(System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> __get_m_UpdateList() const;

 System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_m_ParentList, put=__set_m_ParentList))  m_ParentList;

constexpr void __set_m_ParentList(System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> value) ;

constexpr System::Collections::Generic::HashSet_1<UnityEngine::UIElements::VisualElement> __get_m_ParentList() const;

 uint32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(uint32_t value) ;

constexpr uint32_t __get_m_Version() const;

 uint32_t __declspec(property(get=__get_m_LastVersion, put=__set_m_LastVersion))  m_LastVersion;

constexpr void __set_m_LastVersion(uint32_t value) ;

constexpr uint32_t __get_m_LastVersion() const;

static ::StringW __declspec(property(get=__get_s_Description, put=__set_s_Description))  s_Description;

static void __set_s_Description(::StringW value) ;

static ::StringW __get_s_Description() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_ProfilerMarker, put=__set_s_ProfilerMarker))  s_ProfilerMarker;

static void __set_s_ProfilerMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_ProfilerMarker() ;


// Properties

 Unity::Profiling::ProfilerMarker __declspec(property(get=get_profilerMarker))  profilerMarker;


// Methods

/// @brief Method get_profilerMarker addr 0x2c85e78 size 0x58 virtual true final false
 Unity::Profiling::ProfilerMarker get_profilerMarker() ;

/// @brief Method OnVersionChanged addr 0x2c85ed0 size 0x90 virtual true final false
 void OnVersionChanged(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::VersionChangeType versionChangeType) ;

/// @brief Method Update addr 0x2c86008 size 0x144 virtual true final false
 void Update() ;

/// @brief Method ValidateViewDataOnSubTree addr 0x2c8614c size 0x150 virtual false final false
 void ValidateViewDataOnSubTree(UnityEngine::UIElements::VisualElement ve, bool enablePersistence) ;

/// @brief Method PropagateToParents addr 0x2c85f60 size 0xa8 virtual false final false
 void PropagateToParents(UnityEngine::UIElements::VisualElement ve) ;

// Ctor Parameters []
explicit VisualTreeViewDataUpdater() ;

/// @brief Method .ctor addr 0x2c8629c size 0xa0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::VisualTreeViewDataUpdater);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::VisualTreeViewDataUpdater, "UnityEngine.UIElements", "VisualTreeViewDataUpdater");
