#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine {
class RenderTexture;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace GlobalNamespace {
class GlobalNamespace__ImageEffectController__RenderImageCallback;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__ImageEffectController__RenderImageCallback;
}
namespace GlobalNamespace {
class ImageEffectController;
}
// Type: ::RenderImageCallback
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14661))
// CS Name: ImageEffectController::RenderImageCallback
class CORDL_TYPE GlobalNamespace__ImageEffectController__RenderImageCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__ImageEffectController__RenderImageCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ImageEffectController__RenderImageCallback", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ImageEffectController__RenderImageCallback(GlobalNamespace__ImageEffectController__RenderImageCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ImageEffectController__RenderImageCallback", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ImageEffectController__RenderImageCallback(GlobalNamespace__ImageEffectController__RenderImageCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ImageEffectController__RenderImageCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__ImageEffectController__RenderImageCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ImageEffectController__RenderImageCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ImageEffectController__RenderImageCallback& operator=(GlobalNamespace__ImageEffectController__RenderImageCallback&& o) noexcept = default;
  constexpr GlobalNamespace__ImageEffectController__RenderImageCallback& operator=(GlobalNamespace__ImageEffectController__RenderImageCallback const& o) noexcept = default;
                


// Methods

static GlobalNamespace::GlobalNamespace__ImageEffectController__RenderImageCallback New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x1f99dcc size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x1f99efc size 0x14 virtual true final false
 void Invoke(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest) ;

/// @brief Method BeginInvoke addr 0x1f99f10 size 0x28 virtual true final false
 System::IAsyncResult BeginInvoke(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x1f99f38 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ImageEffectController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14662))
// CS Name: ImageEffectController
class CORDL_TYPE ImageEffectController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using RenderImageCallback = GlobalNamespace::GlobalNamespace__ImageEffectController__RenderImageCallback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ImageEffectController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ImageEffectController", modifiers: " const&", def_value: None }]
constexpr ImageEffectController(ImageEffectController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ImageEffectController", modifiers: "&&", def_value: None }]
constexpr ImageEffectController(ImageEffectController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ImageEffectController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ImageEffectController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ImageEffectController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ImageEffectController& operator=(ImageEffectController&& o) noexcept = default;
  constexpr ImageEffectController& operator=(ImageEffectController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__ImageEffectController__RenderImageCallback __declspec(property(get=__get__renderImageCallback, put=__set__renderImageCallback))  _renderImageCallback;

constexpr void __set__renderImageCallback(GlobalNamespace::GlobalNamespace__ImageEffectController__RenderImageCallback value) ;

constexpr GlobalNamespace::GlobalNamespace__ImageEffectController__RenderImageCallback __get__renderImageCallback() const;


// Methods

/// @brief Method SetCallback addr 0x1f99da0 size 0x8 virtual false final false
 void SetCallback(GlobalNamespace::GlobalNamespace__ImageEffectController__RenderImageCallback renderImageCallback) ;

/// @brief Method OnRenderImage addr 0x1f99da8 size 0x1c virtual false final false
 void OnRenderImage(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest) ;

static GlobalNamespace::ImageEffectController New_ctor() ;

/// @brief Method .ctor addr 0x1f99dc4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ImageEffectController__RenderImageCallback);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ImageEffectController__RenderImageCallback, "", "ImageEffectController/RenderImageCallback");
NEED_NO_BOX(GlobalNamespace::ImageEffectController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ImageEffectController, "", "ImageEffectController");
