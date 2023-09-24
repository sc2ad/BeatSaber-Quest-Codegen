#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct UnityEngine__GUIClip__ParentClipScope;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine {
class GUIClip;
}
namespace UnityEngine {
struct UnityEngine__GUIClip__ParentClipScope;
}
// Type: ::ParentClipScope
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14759))
// CS Name: UnityEngine.GUIClip::ParentClipScope
struct CORDL_TYPE UnityEngine__GUIClip__ParentClipScope : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Disposed", ty: "bool", modifiers: "", def_value: None }]
constexpr UnityEngine__GUIClip__ParentClipScope(bool m_Disposed) noexcept;


                    constexpr UnityEngine__GUIClip__ParentClipScope(UnityEngine__GUIClip__ParentClipScope const&) = default;
                    constexpr UnityEngine__GUIClip__ParentClipScope(UnityEngine__GUIClip__ParentClipScope&&) = default;
                    constexpr UnityEngine__GUIClip__ParentClipScope& operator=(UnityEngine__GUIClip__ParentClipScope const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__GUIClip__ParentClipScope& operator=(UnityEngine__GUIClip__ParentClipScope&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__GUIClip__ParentClipScope(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_m_Disposed, put=__set_m_Disposed))  m_Disposed;

constexpr void __set_m_Disposed(bool value) ;

constexpr bool __get_m_Disposed() const;


// Methods

/// @brief Method .ctor addr 0x2b8626c size 0x54 virtual false final false
 void _ctor(UnityEngine::Matrix4x4 objectTransform, UnityEngine::Rect clipRect) ;

/// @brief Method Dispose addr 0x2b862c0 size 0x40 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::GUIClip
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14760))
// CS Name: UnityEngine.GUIClip
class CORDL_TYPE GUIClip : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ParentClipScope = UnityEngine::UnityEngine__GUIClip__ParentClipScope;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GUIClip() = default;

// Ctor Parameters [CppParam { name: "", ty: "GUIClip", modifiers: " const&", def_value: None }]
constexpr GUIClip(GUIClip const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GUIClip", modifiers: "&&", def_value: None }]
constexpr GUIClip(GUIClip&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GUIClip(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GUIClip& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GUIClip& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GUIClip& operator=(GUIClip&& o) noexcept = default;
  constexpr GUIClip& operator=(GUIClip const& o) noexcept = default;
                


// Properties

static UnityEngine::Rect __declspec(property(get=get_visibleRect))  visibleRect;


// Methods

/// @brief Method get_visibleRect addr 0x2b84f7c size 0x48 virtual false final false
static UnityEngine::Rect get_visibleRect() ;

/// @brief Method Internal_Pop addr 0x2b8608c size 0x28 virtual false final false
static void Internal_Pop() ;

/// @brief Method Internal_GetCount addr 0x2b860b4 size 0x28 virtual false final false
static int32_t Internal_GetCount() ;

/// @brief Method GetMatrix addr 0x2b846cc size 0x64 virtual false final false
static UnityEngine::Matrix4x4 GetMatrix() ;

/// @brief Method SetMatrix addr 0x2b8477c size 0x3c virtual false final false
static void SetMatrix(UnityEngine::Matrix4x4 m) ;

/// @brief Method Internal_PushParentClip addr 0x2b86154 size 0x40 virtual false final false
static void Internal_PushParentClip(UnityEngine::Matrix4x4 objectTransform, UnityEngine::Rect clipRect) ;

/// @brief Method Internal_PushParentClip addr 0x2b86194 size 0x5c virtual false final false
static void Internal_PushParentClip(UnityEngine::Matrix4x4 renderTransform, UnityEngine::Matrix4x4 inputTransform, UnityEngine::Rect clipRect) ;

/// @brief Method Internal_PopParentClip addr 0x2b86244 size 0x28 virtual false final false
static void Internal_PopParentClip() ;

/// @brief Method get_visibleRect_Injected addr 0x2b86050 size 0x3c virtual false final false
static void get_visibleRect_Injected(ByRef<UnityEngine::Rect> ret) ;

/// @brief Method GetMatrix_Injected addr 0x2b860dc size 0x3c virtual false final false
static void GetMatrix_Injected(ByRef<UnityEngine::Matrix4x4> ret) ;

/// @brief Method SetMatrix_Injected addr 0x2b86118 size 0x3c virtual false final false
static void SetMatrix_Injected(ByRef<UnityEngine::Matrix4x4> m) ;

/// @brief Method Internal_PushParentClip_Injected addr 0x2b861f0 size 0x54 virtual false final false
static void Internal_PushParentClip_Injected(ByRef<UnityEngine::Matrix4x4> renderTransform, ByRef<UnityEngine::Matrix4x4> inputTransform, ByRef<UnityEngine::Rect> clipRect) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::GUIClip);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIClip, "UnityEngine", "GUIClip");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__GUIClip__ParentClipScope, "UnityEngine", "GUIClip/ParentClipScope");
