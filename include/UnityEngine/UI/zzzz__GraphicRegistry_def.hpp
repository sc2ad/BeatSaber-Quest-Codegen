#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UI::Collections {
template<typename T>
class IndexedSet_1;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
class Canvas;
}
// Forward declare root types
namespace UnityEngine::UI {
class GraphicRegistry;
}
// Type: UnityEngine.UI::GraphicRegistry
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12985))
// CS Name: UnityEngine.UI.GraphicRegistry
class CORDL_TYPE GraphicRegistry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GraphicRegistry() = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphicRegistry", modifiers: " const&", def_value: None }]
constexpr GraphicRegistry(GraphicRegistry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphicRegistry", modifiers: "&&", def_value: None }]
constexpr GraphicRegistry(GraphicRegistry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GraphicRegistry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GraphicRegistry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GraphicRegistry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GraphicRegistry& operator=(GraphicRegistry&& o) noexcept = default;
  constexpr GraphicRegistry& operator=(GraphicRegistry const& o) noexcept = default;
                


// Fields

static UnityEngine::UI::GraphicRegistry __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(UnityEngine::UI::GraphicRegistry value) ;

static UnityEngine::UI::GraphicRegistry __get_s_Instance() ;

 System::Collections::Generic::Dictionary_2<UnityEngine::Canvas,UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::Graphic>> __declspec(property(get=__get_m_Graphics, put=__set_m_Graphics))  m_Graphics;

constexpr void __set_m_Graphics(System::Collections::Generic::Dictionary_2<UnityEngine::Canvas,UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::Graphic>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::Canvas,UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::Graphic>> __get_m_Graphics() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::Canvas,UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::Graphic>> __declspec(property(get=__get_m_RaycastableGraphics, put=__set_m_RaycastableGraphics))  m_RaycastableGraphics;

constexpr void __set_m_RaycastableGraphics(System::Collections::Generic::Dictionary_2<UnityEngine::Canvas,UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::Graphic>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::Canvas,UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::Graphic>> __get_m_RaycastableGraphics() const;

static System::Collections::Generic::List_1<UnityEngine::UI::Graphic> __declspec(property(get=__get_s_EmptyList, put=__set_s_EmptyList))  s_EmptyList;

static void __set_s_EmptyList(System::Collections::Generic::List_1<UnityEngine::UI::Graphic> value) ;

static System::Collections::Generic::List_1<UnityEngine::UI::Graphic> __get_s_EmptyList() ;


// Properties

static UnityEngine::UI::GraphicRegistry __declspec(property(get=get_instance))  instance;


// Methods

// Ctor Parameters []
explicit GraphicRegistry() ;

/// @brief Method .ctor addr 0x2be77cc size 0x1a8 virtual false final false
 void _ctor() ;

/// @brief Method get_instance addr 0x2be7974 size 0xa8 virtual false final false
static UnityEngine::UI::GraphicRegistry get_instance() ;

/// @brief Method RegisterGraphicForCanvas addr 0x2be3624 size 0x1f4 virtual false final false
static void RegisterGraphicForCanvas(UnityEngine::Canvas c, UnityEngine::UI::Graphic graphic) ;

/// @brief Method RegisterRaycastGraphicForCanvas addr 0x2be2afc size 0x1f4 virtual false final false
static void RegisterRaycastGraphicForCanvas(UnityEngine::Canvas c, UnityEngine::UI::Graphic graphic) ;

/// @brief Method UnregisterGraphicForCanvas addr 0x2be4028 size 0x1a4 virtual false final false
static void UnregisterGraphicForCanvas(UnityEngine::Canvas c, UnityEngine::UI::Graphic graphic) ;

/// @brief Method UnregisterRaycastGraphicForCanvas addr 0x2be2980 size 0x17c virtual false final false
static void UnregisterRaycastGraphicForCanvas(UnityEngine::Canvas c, UnityEngine::UI::Graphic graphic) ;

/// @brief Method DisableGraphicForCanvas addr 0x2be3280 size 0x180 virtual false final false
static void DisableGraphicForCanvas(UnityEngine::Canvas c, UnityEngine::UI::Graphic graphic) ;

/// @brief Method DisableRaycastGraphicForCanvas addr 0x2be7a1c size 0x180 virtual false final false
static void DisableRaycastGraphicForCanvas(UnityEngine::Canvas c, UnityEngine::UI::Graphic graphic) ;

/// @brief Method GetGraphicsForCanvas addr 0x2be7b9c size 0xbc virtual false final false
static System::Collections::Generic::IList_1<UnityEngine::UI::Graphic> GetGraphicsForCanvas(UnityEngine::Canvas canvas) ;

/// @brief Method GetRaycastableGraphicsForCanvas addr 0x2be6f94 size 0xbc virtual false final false
static System::Collections::Generic::IList_1<UnityEngine::UI::Graphic> GetRaycastableGraphicsForCanvas(UnityEngine::Canvas canvas) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::GraphicRegistry);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::GraphicRegistry, "UnityEngine.UI", "GraphicRegistry");
