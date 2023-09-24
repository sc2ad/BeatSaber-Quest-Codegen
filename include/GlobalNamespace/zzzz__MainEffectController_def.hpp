#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class ImageEffectController;
}
namespace GlobalNamespace {
class MainEffectContainerSO;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
class FloatSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MainEffectController;
}
// Type: ::MainEffectController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15312))
// CS Name: MainEffectController
class CORDL_TYPE MainEffectController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MainEffectController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectController", modifiers: " const&", def_value: None }]
constexpr MainEffectController(MainEffectController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectController", modifiers: "&&", def_value: None }]
constexpr MainEffectController(MainEffectController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainEffectController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MainEffectController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainEffectController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainEffectController& operator=(MainEffectController&& o) noexcept = default;
  constexpr MainEffectController& operator=(MainEffectController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MainEffectContainerSO __declspec(property(get=__get__mainEffectContainer, put=__set__mainEffectContainer))  _mainEffectContainer;

constexpr void __set__mainEffectContainer(GlobalNamespace::MainEffectContainerSO value) ;

constexpr GlobalNamespace::MainEffectContainerSO __get__mainEffectContainer() const;

 GlobalNamespace::FloatSO __declspec(property(get=__get__fadeValue, put=__set__fadeValue))  _fadeValue;

constexpr void __set__fadeValue(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get__fadeValue() const;

 System::Action_1<UnityEngine::RenderTexture> __declspec(property(get=__get_afterImageEffectEvent, put=__set_afterImageEffectEvent))  afterImageEffectEvent;

constexpr void __set_afterImageEffectEvent(System::Action_1<UnityEngine::RenderTexture> value) ;

constexpr System::Action_1<UnityEngine::RenderTexture> __get_afterImageEffectEvent() const;

 GlobalNamespace::ImageEffectController __declspec(property(get=__get__imageEffectController, put=__set__imageEffectController))  _imageEffectController;

constexpr void __set__imageEffectController(GlobalNamespace::ImageEffectController value) ;

constexpr GlobalNamespace::ImageEffectController __get__imageEffectController() const;

/// @brief Field kMainEffectEnabledKeyword offset 0
static constexpr ::ConstString  kMainEffectEnabledKeyword{u"MAIN_EFFECT_ENABLED"};


// Methods

/// @brief Method add_afterImageEffectEvent addr 0x2676e7c size 0xb0 virtual false final false
 void add_afterImageEffectEvent(System::Action_1<UnityEngine::RenderTexture> value) ;

/// @brief Method remove_afterImageEffectEvent addr 0x2676f2c size 0xb0 virtual false final false
 void remove_afterImageEffectEvent(System::Action_1<UnityEngine::RenderTexture> value) ;

/// @brief Method OnEnable addr 0x2676fdc size 0x28 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2677158 size 0x88 virtual false final false
 void OnDisable() ;

/// @brief Method OnValidate addr 0x26771e0 size 0x50 virtual false final false
 void OnValidate() ;

/// @brief Method LazySetupImageEffectController addr 0x2677004 size 0x154 virtual false final false
 void LazySetupImageEffectController() ;

/// @brief Method ImageEffectControllerCallback addr 0x2677230 size 0xa4 virtual false final false
 void ImageEffectControllerCallback(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest) ;

/// @brief Method OnPreRender addr 0x26772d4 size 0xbc virtual false final false
 void OnPreRender() ;

/// @brief Method OnPostRender addr 0x2677390 size 0x6c virtual false final false
 void OnPostRender() ;

static GlobalNamespace::MainEffectController New_ctor() ;

/// @brief Method .ctor addr 0x26773fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MainEffectController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectController, "", "MainEffectController");
