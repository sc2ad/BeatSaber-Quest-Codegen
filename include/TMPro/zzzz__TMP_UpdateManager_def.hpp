#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace TMPro {
class TMP_Text;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace TMPro {
class TMP_UpdateManager;
}
// Type: TMPro::TMP_UpdateManager
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12400))
// CS Name: TMPro.TMP_UpdateManager
class CORDL_TYPE TMP_UpdateManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TMP_UpdateManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_UpdateManager", modifiers: " const&", def_value: None }]
constexpr TMP_UpdateManager(TMP_UpdateManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_UpdateManager", modifiers: "&&", def_value: None }]
constexpr TMP_UpdateManager(TMP_UpdateManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_UpdateManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_UpdateManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_UpdateManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_UpdateManager& operator=(TMP_UpdateManager&& o) noexcept = default;
  constexpr TMP_UpdateManager& operator=(TMP_UpdateManager const& o) noexcept = default;
                


// Fields

static ::TMPro::TMP_UpdateManager __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(::TMPro::TMP_UpdateManager value) ;

static ::TMPro::TMP_UpdateManager __get_s_Instance() ;

 ::System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_m_LayoutQueueLookup, put=__set_m_LayoutQueueLookup))  m_LayoutQueueLookup;

constexpr void __set_m_LayoutQueueLookup(::System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t> __get_m_LayoutQueueLookup() const;

 ::System::Collections::Generic::List_1<::TMPro::TMP_Text> __declspec(property(get=__get_m_LayoutRebuildQueue, put=__set_m_LayoutRebuildQueue))  m_LayoutRebuildQueue;

constexpr void __set_m_LayoutRebuildQueue(::System::Collections::Generic::List_1<::TMPro::TMP_Text> value) ;

constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Text> __get_m_LayoutRebuildQueue() const;

 ::System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_m_GraphicQueueLookup, put=__set_m_GraphicQueueLookup))  m_GraphicQueueLookup;

constexpr void __set_m_GraphicQueueLookup(::System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t> __get_m_GraphicQueueLookup() const;

 ::System::Collections::Generic::List_1<::TMPro::TMP_Text> __declspec(property(get=__get_m_GraphicRebuildQueue, put=__set_m_GraphicRebuildQueue))  m_GraphicRebuildQueue;

constexpr void __set_m_GraphicRebuildQueue(::System::Collections::Generic::List_1<::TMPro::TMP_Text> value) ;

constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Text> __get_m_GraphicRebuildQueue() const;

 ::System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_m_InternalUpdateLookup, put=__set_m_InternalUpdateLookup))  m_InternalUpdateLookup;

constexpr void __set_m_InternalUpdateLookup(::System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t> __get_m_InternalUpdateLookup() const;

 ::System::Collections::Generic::List_1<::TMPro::TMP_Text> __declspec(property(get=__get_m_InternalUpdateQueue, put=__set_m_InternalUpdateQueue))  m_InternalUpdateQueue;

constexpr void __set_m_InternalUpdateQueue(::System::Collections::Generic::List_1<::TMPro::TMP_Text> value) ;

constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Text> __get_m_InternalUpdateQueue() const;

 ::System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_m_CullingUpdateLookup, put=__set_m_CullingUpdateLookup))  m_CullingUpdateLookup;

constexpr void __set_m_CullingUpdateLookup(::System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t> __get_m_CullingUpdateLookup() const;

 ::System::Collections::Generic::List_1<::TMPro::TMP_Text> __declspec(property(get=__get_m_CullingUpdateQueue, put=__set_m_CullingUpdateQueue))  m_CullingUpdateQueue;

constexpr void __set_m_CullingUpdateQueue(::System::Collections::Generic::List_1<::TMPro::TMP_Text> value) ;

constexpr ::System::Collections::Generic::List_1<::TMPro::TMP_Text> __get_m_CullingUpdateQueue() const;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_RegisterTextObjectForUpdateMarker, put=__set_k_RegisterTextObjectForUpdateMarker))  k_RegisterTextObjectForUpdateMarker;

static void __set_k_RegisterTextObjectForUpdateMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_RegisterTextObjectForUpdateMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_RegisterTextElementForGraphicRebuildMarker, put=__set_k_RegisterTextElementForGraphicRebuildMarker))  k_RegisterTextElementForGraphicRebuildMarker;

static void __set_k_RegisterTextElementForGraphicRebuildMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_RegisterTextElementForGraphicRebuildMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_RegisterTextElementForCullingUpdateMarker, put=__set_k_RegisterTextElementForCullingUpdateMarker))  k_RegisterTextElementForCullingUpdateMarker;

static void __set_k_RegisterTextElementForCullingUpdateMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_RegisterTextElementForCullingUpdateMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_UnregisterTextObjectForUpdateMarker, put=__set_k_UnregisterTextObjectForUpdateMarker))  k_UnregisterTextObjectForUpdateMarker;

static void __set_k_UnregisterTextObjectForUpdateMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_UnregisterTextObjectForUpdateMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_UnregisterTextElementForGraphicRebuildMarker, put=__set_k_UnregisterTextElementForGraphicRebuildMarker))  k_UnregisterTextElementForGraphicRebuildMarker;

static void __set_k_UnregisterTextElementForGraphicRebuildMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_UnregisterTextElementForGraphicRebuildMarker() ;


// Properties

static ::TMPro::TMP_UpdateManager __declspec(property(get=get_instance))  instance;


// Methods

/// @brief Method get_instance addr 0x2ab44a4 size 0xa8 virtual false final false
static ::TMPro::TMP_UpdateManager get_instance() ;

// Ctor Parameters []
explicit TMP_UpdateManager() ;

/// @brief Method .ctor addr 0x2ab454c size 0x1cc virtual false final false
 void _ctor() ;

/// @brief Method RegisterTextObjectForUpdate addr 0x2ab4718 size 0x60 virtual false final false
static void RegisterTextObjectForUpdate(::TMPro::TMP_Text textObject) ;

/// @brief Method InternalRegisterTextObjectForUpdate addr 0x2ab4778 size 0x114 virtual false final false
 void InternalRegisterTextObjectForUpdate(::TMPro::TMP_Text textObject) ;

/// @brief Method RegisterTextElementForLayoutRebuild addr 0x2ab488c size 0x60 virtual false final false
static void RegisterTextElementForLayoutRebuild(::TMPro::TMP_Text element) ;

/// @brief Method InternalRegisterTextElementForLayoutRebuild addr 0x2ab48ec size 0x114 virtual false final false
 void InternalRegisterTextElementForLayoutRebuild(::TMPro::TMP_Text element) ;

/// @brief Method RegisterTextElementForGraphicRebuild addr 0x2ab4a00 size 0x60 virtual false final false
static void RegisterTextElementForGraphicRebuild(::TMPro::TMP_Text element) ;

/// @brief Method InternalRegisterTextElementForGraphicRebuild addr 0x2ab4a60 size 0x114 virtual false final false
 void InternalRegisterTextElementForGraphicRebuild(::TMPro::TMP_Text element) ;

/// @brief Method RegisterTextElementForCullingUpdate addr 0x2ab4b74 size 0x60 virtual false final false
static void RegisterTextElementForCullingUpdate(::TMPro::TMP_Text element) ;

/// @brief Method InternalRegisterTextElementForCullingUpdate addr 0x2ab4bd4 size 0x114 virtual false final false
 void InternalRegisterTextElementForCullingUpdate(::TMPro::TMP_Text element) ;

/// @brief Method OnCameraPreCull addr 0x2ab4ce8 size 0x4 virtual false final false
 void OnCameraPreCull() ;

/// @brief Method DoRebuilds addr 0x2ab4cec size 0x254 virtual false final false
 void DoRebuilds() ;

/// @brief Method UnRegisterTextObjectForUpdate addr 0x2ab4f40 size 0x60 virtual false final false
static void UnRegisterTextObjectForUpdate(::TMPro::TMP_Text textObject) ;

/// @brief Method UnRegisterTextElementForRebuild addr 0x2ab5038 size 0x80 virtual false final false
static void UnRegisterTextElementForRebuild(::TMPro::TMP_Text element) ;

/// @brief Method InternalUnRegisterTextElementForGraphicRebuild addr 0x2ab50b8 size 0x98 virtual false final false
 void InternalUnRegisterTextElementForGraphicRebuild(::TMPro::TMP_Text element) ;

/// @brief Method InternalUnRegisterTextElementForLayoutRebuild addr 0x2ab5150 size 0x98 virtual false final false
 void InternalUnRegisterTextElementForLayoutRebuild(::TMPro::TMP_Text element) ;

/// @brief Method InternalUnRegisterTextObjectForUpdate addr 0x2ab4fa0 size 0x98 virtual false final false
 void InternalUnRegisterTextObjectForUpdate(::TMPro::TMP_Text textObject) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::TMP_UpdateManager);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_UpdateManager, "TMPro", "TMP_UpdateManager");
