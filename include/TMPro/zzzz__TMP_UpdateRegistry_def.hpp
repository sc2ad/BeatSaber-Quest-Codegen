#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UI {
class ICanvasElement;
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
class TMP_UpdateRegistry;
}
// Type: TMPro::TMP_UpdateRegistry
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12401))
// CS Name: TMPro.TMP_UpdateRegistry
class CORDL_TYPE TMP_UpdateRegistry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TMP_UpdateRegistry() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_UpdateRegistry", modifiers: " const&", def_value: None }]
constexpr TMP_UpdateRegistry(TMP_UpdateRegistry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_UpdateRegistry", modifiers: "&&", def_value: None }]
constexpr TMP_UpdateRegistry(TMP_UpdateRegistry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_UpdateRegistry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_UpdateRegistry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_UpdateRegistry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_UpdateRegistry& operator=(TMP_UpdateRegistry&& o) noexcept = default;
  constexpr TMP_UpdateRegistry& operator=(TMP_UpdateRegistry const& o) noexcept = default;
                


// Fields

static ::TMPro::TMP_UpdateRegistry __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(::TMPro::TMP_UpdateRegistry value) ;

static ::TMPro::TMP_UpdateRegistry __get_s_Instance() ;

 ::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement> __declspec(property(get=__get_m_LayoutRebuildQueue, put=__set_m_LayoutRebuildQueue))  m_LayoutRebuildQueue;

constexpr void __set_m_LayoutRebuildQueue(::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement> __get_m_LayoutRebuildQueue() const;

 ::System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_m_LayoutQueueLookup, put=__set_m_LayoutQueueLookup))  m_LayoutQueueLookup;

constexpr void __set_m_LayoutQueueLookup(::System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t> __get_m_LayoutQueueLookup() const;

 ::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement> __declspec(property(get=__get_m_GraphicRebuildQueue, put=__set_m_GraphicRebuildQueue))  m_GraphicRebuildQueue;

constexpr void __set_m_GraphicRebuildQueue(::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement> __get_m_GraphicRebuildQueue() const;

 ::System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_m_GraphicQueueLookup, put=__set_m_GraphicQueueLookup))  m_GraphicQueueLookup;

constexpr void __set_m_GraphicQueueLookup(::System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t> __get_m_GraphicQueueLookup() const;


// Properties

static ::TMPro::TMP_UpdateRegistry __declspec(property(get=get_instance))  instance;


// Methods

/// @brief Method get_instance addr 0x2ab534c size 0x7c virtual false final false
static ::TMPro::TMP_UpdateRegistry get_instance() ;

// Ctor Parameters []
explicit TMP_UpdateRegistry() ;

/// @brief Method .ctor addr 0x2ab53c8 size 0x15c virtual false final false
 void _ctor() ;

/// @brief Method RegisterCanvasElementForLayoutRebuild addr 0x2ab5524 size 0x20 virtual false final false
static void RegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement element) ;

/// @brief Method InternalRegisterCanvasElementForLayoutRebuild addr 0x2ab5544 size 0x15c virtual false final false
 bool InternalRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement element) ;

/// @brief Method RegisterCanvasElementForGraphicRebuild addr 0x2ab56a0 size 0x20 virtual false final false
static void RegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement element) ;

/// @brief Method InternalRegisterCanvasElementForGraphicRebuild addr 0x2ab56c0 size 0x15c virtual false final false
 bool InternalRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement element) ;

/// @brief Method PerformUpdateForCanvasRendererObjects addr 0x2ab581c size 0x25c virtual false final false
 void PerformUpdateForCanvasRendererObjects() ;

/// @brief Method PerformUpdateForMeshRendererObjects addr 0x2ab5a78 size 0x68 virtual false final false
 void PerformUpdateForMeshRendererObjects() ;

/// @brief Method UnRegisterCanvasElementForRebuild addr 0x2ab5ae0 size 0x30 virtual false final false
static void UnRegisterCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement element) ;

/// @brief Method InternalUnRegisterCanvasElementForLayoutRebuild addr 0x2ab5b10 size 0xdc virtual false final false
 void InternalUnRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement element) ;

/// @brief Method InternalUnRegisterCanvasElementForGraphicRebuild addr 0x2ab5bec size 0xdc virtual false final false
 void InternalUnRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement element) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::TMP_UpdateRegistry);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_UpdateRegistry, "TMPro", "TMP_UpdateRegistry");
