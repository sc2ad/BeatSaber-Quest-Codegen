#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine::UI::Collections {
template<typename T>
class IndexedSet_1;
}
// Forward declare root types
namespace UnityEngine::UI {
class CanvasUpdateRegistry;
}
// Type: UnityEngine.UI::CanvasUpdateRegistry
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12961))
// CS Name: UnityEngine.UI.CanvasUpdateRegistry
class CORDL_TYPE CanvasUpdateRegistry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CanvasUpdateRegistry() = default;

// Ctor Parameters [CppParam { name: "", ty: "CanvasUpdateRegistry", modifiers: " const&", def_value: None }]
constexpr CanvasUpdateRegistry(CanvasUpdateRegistry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CanvasUpdateRegistry", modifiers: "&&", def_value: None }]
constexpr CanvasUpdateRegistry(CanvasUpdateRegistry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CanvasUpdateRegistry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CanvasUpdateRegistry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CanvasUpdateRegistry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CanvasUpdateRegistry& operator=(CanvasUpdateRegistry&& o) noexcept = default;
  constexpr CanvasUpdateRegistry& operator=(CanvasUpdateRegistry const& o) noexcept = default;
                


// Fields

static UnityEngine::UI::CanvasUpdateRegistry __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(UnityEngine::UI::CanvasUpdateRegistry value) ;

static UnityEngine::UI::CanvasUpdateRegistry __get_s_Instance() ;

 bool __declspec(property(get=__get_m_PerformingLayoutUpdate, put=__set_m_PerformingLayoutUpdate))  m_PerformingLayoutUpdate;

constexpr void __set_m_PerformingLayoutUpdate(bool value) ;

constexpr bool __get_m_PerformingLayoutUpdate() const;

 bool __declspec(property(get=__get_m_PerformingGraphicUpdate, put=__set_m_PerformingGraphicUpdate))  m_PerformingGraphicUpdate;

constexpr void __set_m_PerformingGraphicUpdate(bool value) ;

constexpr bool __get_m_PerformingGraphicUpdate() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_CanvasUpdateProfilerStrings, put=__set_m_CanvasUpdateProfilerStrings))  m_CanvasUpdateProfilerStrings;

constexpr void __set_m_CanvasUpdateProfilerStrings(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_CanvasUpdateProfilerStrings() const;

/// @brief Field m_CullingUpdateProfilerString offset 0
static constexpr ::ConstString  m_CullingUpdateProfilerString{u"ClipperRegistry.Cull"};

 UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement> __declspec(property(get=__get_m_LayoutRebuildQueue, put=__set_m_LayoutRebuildQueue))  m_LayoutRebuildQueue;

constexpr void __set_m_LayoutRebuildQueue(UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement> value) ;

constexpr UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement> __get_m_LayoutRebuildQueue() const;

 UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement> __declspec(property(get=__get_m_GraphicRebuildQueue, put=__set_m_GraphicRebuildQueue))  m_GraphicRebuildQueue;

constexpr void __set_m_GraphicRebuildQueue(UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement> value) ;

constexpr UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement> __get_m_GraphicRebuildQueue() const;

static System::Comparison_1<UnityEngine::UI::ICanvasElement> __declspec(property(get=__get_s_SortLayoutFunction, put=__set_s_SortLayoutFunction))  s_SortLayoutFunction;

static void __set_s_SortLayoutFunction(System::Comparison_1<UnityEngine::UI::ICanvasElement> value) ;

static System::Comparison_1<UnityEngine::UI::ICanvasElement> __get_s_SortLayoutFunction() ;


// Properties

static UnityEngine::UI::CanvasUpdateRegistry __declspec(property(get=get_instance))  instance;


// Methods

static UnityEngine::UI::CanvasUpdateRegistry New_ctor() ;

/// @brief Method .ctor addr 0x2bd8110 size 0x26c virtual false final false
 void _ctor() ;

/// @brief Method get_instance addr 0x2bd837c size 0xa8 virtual false final false
static UnityEngine::UI::CanvasUpdateRegistry get_instance() ;

/// @brief Method ObjectValidForUpdate addr 0x2bd8424 size 0xd0 virtual false final false
 bool ObjectValidForUpdate(UnityEngine::UI::ICanvasElement element) ;

/// @brief Method CleanInvalidItems addr 0x2bd84f4 size 0x2e4 virtual false final false
 void CleanInvalidItems() ;

/// @brief Method PerformUpdate addr 0x2bd87d8 size 0x640 virtual false final false
 void PerformUpdate() ;

/// @brief Method ParentCount addr 0x2bd8fa0 size 0xc0 virtual false final false
static int32_t ParentCount(UnityEngine::Transform child) ;

/// @brief Method SortLayoutList addr 0x2bd9060 size 0x150 virtual false final false
static int32_t SortLayoutList(UnityEngine::UI::ICanvasElement x, UnityEngine::UI::ICanvasElement y) ;

/// @brief Method RegisterCanvasElementForLayoutRebuild addr 0x2bd91b0 size 0x60 virtual false final false
static void RegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement element) ;

/// @brief Method TryRegisterCanvasElementForLayoutRebuild addr 0x2bd92a8 size 0x60 virtual false final false
static bool TryRegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement element) ;

/// @brief Method InternalRegisterCanvasElementForLayoutRebuild addr 0x2bd9210 size 0x98 virtual false final false
 bool InternalRegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement element) ;

/// @brief Method RegisterCanvasElementForGraphicRebuild addr 0x2bd9308 size 0x60 virtual false final false
static void RegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement element) ;

/// @brief Method TryRegisterCanvasElementForGraphicRebuild addr 0x2bd9438 size 0x60 virtual false final false
static bool TryRegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement element) ;

/// @brief Method InternalRegisterCanvasElementForGraphicRebuild addr 0x2bd9368 size 0xd0 virtual false final false
 bool InternalRegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement element) ;

/// @brief Method UnRegisterCanvasElementForRebuild addr 0x2bd9498 size 0x70 virtual false final false
static void UnRegisterCanvasElementForRebuild(UnityEngine::UI::ICanvasElement element) ;

/// @brief Method DisableCanvasElementForRebuild addr 0x2bd97d0 size 0x70 virtual false final false
static void DisableCanvasElementForRebuild(UnityEngine::UI::ICanvasElement element) ;

/// @brief Method InternalUnRegisterCanvasElementForLayoutRebuild addr 0x2bd9508 size 0x164 virtual false final false
 void InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement element) ;

/// @brief Method InternalUnRegisterCanvasElementForGraphicRebuild addr 0x2bd966c size 0x164 virtual false final false
 void InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement element) ;

/// @brief Method InternalDisableCanvasElementForLayoutRebuild addr 0x2bd9840 size 0x164 virtual false final false
 void InternalDisableCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement element) ;

/// @brief Method InternalDisableCanvasElementForGraphicRebuild addr 0x2bd99a4 size 0x164 virtual false final false
 void InternalDisableCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement element) ;

/// @brief Method IsRebuildingLayout addr 0x2bd9b08 size 0x5c virtual false final false
static bool IsRebuildingLayout() ;

/// @brief Method IsRebuildingGraphics addr 0x2bd9b64 size 0x5c virtual false final false
static bool IsRebuildingGraphics() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::CanvasUpdateRegistry);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CanvasUpdateRegistry, "UnityEngine.UI", "CanvasUpdateRegistry");
