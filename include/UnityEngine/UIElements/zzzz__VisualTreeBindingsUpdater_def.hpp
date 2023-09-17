#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeHierarchyTrackerUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::UIElements {
class IBinding;
}
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine {
struct PropertyName;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeBindingsUpdater;
}
// Type: UnityEngine.UIElements::VisualTreeBindingsUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6872))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7443))
// CS Name: UnityEngine.UIElements.VisualTreeBindingsUpdater
class CORDL_TYPE VisualTreeBindingsUpdater : public ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~VisualTreeBindingsUpdater() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeBindingsUpdater", modifiers: " const&", def_value: None }]
constexpr VisualTreeBindingsUpdater(VisualTreeBindingsUpdater const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeBindingsUpdater", modifiers: "&&", def_value: None }]
constexpr VisualTreeBindingsUpdater(VisualTreeBindingsUpdater&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualTreeBindingsUpdater(void* ptr) noexcept : ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater(ptr) {
}


  constexpr VisualTreeBindingsUpdater& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualTreeBindingsUpdater& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualTreeBindingsUpdater& operator=(VisualTreeBindingsUpdater&& o) noexcept = default;
  constexpr VisualTreeBindingsUpdater& operator=(VisualTreeBindingsUpdater const& o) noexcept = default;
                


// Fields

static ::UnityEngine::PropertyName __declspec(property(get=__get_s_BindingRequestObjectVEPropertyName, put=__set_s_BindingRequestObjectVEPropertyName))  s_BindingRequestObjectVEPropertyName;

static void __set_s_BindingRequestObjectVEPropertyName(::UnityEngine::PropertyName value) ;

static ::UnityEngine::PropertyName __get_s_BindingRequestObjectVEPropertyName() ;

static ::UnityEngine::PropertyName __declspec(property(get=__get_s_AdditionalBindingObjectVEPropertyName, put=__set_s_AdditionalBindingObjectVEPropertyName))  s_AdditionalBindingObjectVEPropertyName;

static void __set_s_AdditionalBindingObjectVEPropertyName(::UnityEngine::PropertyName value) ;

static ::UnityEngine::PropertyName __get_s_AdditionalBindingObjectVEPropertyName() ;

static ::StringW __declspec(property(get=__get_s_Description, put=__set_s_Description))  s_Description;

static void __set_s_Description(::StringW value) ;

static ::StringW __get_s_Description() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_ProfilerMarker, put=__set_s_ProfilerMarker))  s_ProfilerMarker;

static void __set_s_ProfilerMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_s_ProfilerMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_ProfilerBindingRequestsMarker, put=__set_s_ProfilerBindingRequestsMarker))  s_ProfilerBindingRequestsMarker;

static void __set_s_ProfilerBindingRequestsMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_s_ProfilerBindingRequestsMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerUpdate, put=__set_s_MarkerUpdate))  s_MarkerUpdate;

static void __set_s_MarkerUpdate(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_s_MarkerUpdate() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerPoll, put=__set_s_MarkerPoll))  s_MarkerPoll;

static void __set_s_MarkerPoll(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_s_MarkerPoll() ;

static bool __declspec(property(get=__get__disableBindingsThrottling_k__BackingField, put=__set__disableBindingsThrottling_k__BackingField))  _disableBindingsThrottling_k__BackingField;

static void __set__disableBindingsThrottling_k__BackingField(bool value) ;

static bool __get__disableBindingsThrottling_k__BackingField() ;

 ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_m_ElementsWithBindings, put=__set_m_ElementsWithBindings))  m_ElementsWithBindings;

constexpr void __set_m_ElementsWithBindings(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement> __get_m_ElementsWithBindings() const;

 ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_m_ElementsToAdd, put=__set_m_ElementsToAdd))  m_ElementsToAdd;

constexpr void __set_m_ElementsToAdd(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement> __get_m_ElementsToAdd() const;

 ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_m_ElementsToRemove, put=__set_m_ElementsToRemove))  m_ElementsToRemove;

constexpr void __set_m_ElementsToRemove(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement> __get_m_ElementsToRemove() const;

 int64_t __declspec(property(get=__get_m_LastUpdateTime, put=__set_m_LastUpdateTime))  m_LastUpdateTime;

constexpr void __set_m_LastUpdateTime(int64_t value) ;

constexpr int64_t __get_m_LastUpdateTime() const;

 ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement> __declspec(property(get=__get_m_ElementsToBind, put=__set_m_ElementsToBind))  m_ElementsToBind;

constexpr void __set_m_ElementsToBind(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement> value) ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement> __get_m_ElementsToBind() const;

 ::System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__temporaryObjectCache_k__BackingField, put=__set__temporaryObjectCache_k__BackingField))  _temporaryObjectCache_k__BackingField;

constexpr void __set__temporaryObjectCache_k__BackingField(::System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __get__temporaryObjectCache_k__BackingField() const;

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBinding> __declspec(property(get=__get_updatedBindings, put=__set_updatedBindings))  updatedBindings;

constexpr void __set_updatedBindings(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBinding> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IBinding> __get_updatedBindings() const;


// Properties

 ::Unity::Profiling::ProfilerMarker __declspec(property(get=get_profilerMarker))  profilerMarker;

 ::System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> __declspec(property(get=get_temporaryObjectCache))  temporaryObjectCache;


// Methods

/// @brief Method get_profilerMarker addr 0x2d07de0 size 0x58 virtual true final false
 ::Unity::Profiling::ProfilerMarker get_profilerMarker() ;

/// @brief Method GetBindingObjectFromElement addr 0x2d07e38 size 0x138 virtual false final false
 ::UnityEngine::UIElements::IBinding GetBindingObjectFromElement(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method StartTracking addr 0x2d07ff8 size 0x80 virtual false final false
 void StartTracking(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method StopTracking addr 0x2d08078 size 0x80 virtual false final false
 void StopTracking(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method get_temporaryObjectCache addr 0x2d080f8 size 0x8 virtual false final false
 ::System::Collections::Generic::Dictionary_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> get_temporaryObjectCache() ;

/// @brief Method GetAdditionalBinding addr 0x2d07f70 size 0x88 virtual false final false
static ::UnityEngine::UIElements::IBinding GetAdditionalBinding(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method StartTrackingRecursive addr 0x2d08100 size 0x118 virtual false final false
 void StartTrackingRecursive(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method StopTrackingRecursive addr 0x2d08218 size 0x10c virtual false final false
 void StopTrackingRecursive(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method OnVersionChanged addr 0x2d08324 size 0xf8 virtual true final false
 void OnVersionChanged(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) ;

/// @brief Method OnHierarchyChange addr 0x2d0841c size 0x18 virtual true final false
 void OnHierarchyChange(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::HierarchyChangeType type) ;

/// @brief Method CurrentTime addr 0x2d08434 size 0x50 virtual false final false
static int64_t CurrentTime() ;

/// @brief Method PerformTrackingOperations addr 0x2d08484 size 0x284 virtual false final false
 void PerformTrackingOperations() ;

/// @brief Method Update addr 0x2d08708 size 0x600 virtual true final false
 void Update() ;

/// @brief Method UpdateBindings addr 0x2d08d08 size 0x534 virtual false final false
 void UpdateBindings() ;

// Ctor Parameters []
explicit VisualTreeBindingsUpdater() ;

/// @brief Method .ctor addr 0x2d0923c size 0x160 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeBindingsUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeBindingsUpdater, "UnityEngine.UIElements", "VisualTreeBindingsUpdater");
