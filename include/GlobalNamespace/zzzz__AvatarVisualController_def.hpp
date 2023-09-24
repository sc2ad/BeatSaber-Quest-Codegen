#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace GlobalNamespace {
class GlobalNamespace__AvatarVisualController__HighlighterDelegate;
}
namespace UnityEngine {
class MeshFilter;
}
namespace GlobalNamespace {
class AvatarPropertyBlockColorSetter;
}
namespace GlobalNamespace {
class MulticolorAvatarPartPropertyBlockSetter;
}
namespace GlobalNamespace {
struct GlobalNamespace__EditAvatarViewController__AvatarEditPart;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class AvatarData;
}
namespace GlobalNamespace {
class AvatarPartsModel;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarVisualController;
}
namespace GlobalNamespace {
class GlobalNamespace__AvatarVisualController__HighlighterDelegate;
}
// Type: ::HighlighterDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4084))
// CS Name: AvatarVisualController::HighlighterDelegate
class CORDL_TYPE GlobalNamespace__AvatarVisualController__HighlighterDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__AvatarVisualController__HighlighterDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AvatarVisualController__HighlighterDelegate", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AvatarVisualController__HighlighterDelegate(GlobalNamespace__AvatarVisualController__HighlighterDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AvatarVisualController__HighlighterDelegate", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AvatarVisualController__HighlighterDelegate(GlobalNamespace__AvatarVisualController__HighlighterDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AvatarVisualController__HighlighterDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__AvatarVisualController__HighlighterDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AvatarVisualController__HighlighterDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AvatarVisualController__HighlighterDelegate& operator=(GlobalNamespace__AvatarVisualController__HighlighterDelegate&& o) noexcept = default;
  constexpr GlobalNamespace__AvatarVisualController__HighlighterDelegate& operator=(GlobalNamespace__AvatarVisualController__HighlighterDelegate const& o) noexcept = default;
                


// Methods

static GlobalNamespace::GlobalNamespace__AvatarVisualController__HighlighterDelegate New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x20c23fc size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x20c2dc0 size 0x18 virtual true final false
 void Invoke(bool highlighted, int32_t uvSegmentNumber) ;

/// @brief Method BeginInvoke addr 0x20c2dd8 size 0xbc virtual true final false
 System::IAsyncResult BeginInvoke(bool highlighted, int32_t uvSegmentNumber, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x20c2e94 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AvatarVisualController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4085))
// CS Name: AvatarVisualController
class CORDL_TYPE AvatarVisualController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using HighlighterDelegate = GlobalNamespace::GlobalNamespace__AvatarVisualController__HighlighterDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~AvatarVisualController() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarVisualController", modifiers: " const&", def_value: None }]
constexpr AvatarVisualController(AvatarVisualController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarVisualController", modifiers: "&&", def_value: None }]
constexpr AvatarVisualController(AvatarVisualController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarVisualController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AvatarVisualController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarVisualController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarVisualController& operator=(AvatarVisualController&& o) noexcept = default;
  constexpr AvatarVisualController& operator=(AvatarVisualController const& o) noexcept = default;
                


// Fields

 UnityEngine::MeshFilter __declspec(property(get=__get__headTopMeshFilter, put=__set__headTopMeshFilter))  _headTopMeshFilter;

constexpr void __set__headTopMeshFilter(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get__headTopMeshFilter() const;

 UnityEngine::MeshFilter __declspec(property(get=__get__glassesMeshFilter, put=__set__glassesMeshFilter))  _glassesMeshFilter;

constexpr void __set__glassesMeshFilter(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get__glassesMeshFilter() const;

 UnityEngine::MeshFilter __declspec(property(get=__get__facialHairMeshFilter, put=__set__facialHairMeshFilter))  _facialHairMeshFilter;

constexpr void __set__facialHairMeshFilter(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get__facialHairMeshFilter() const;

 UnityEngine::MeshFilter __declspec(property(get=__get__leftHandsHairMeshFilter, put=__set__leftHandsHairMeshFilter))  _leftHandsHairMeshFilter;

constexpr void __set__leftHandsHairMeshFilter(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get__leftHandsHairMeshFilter() const;

 UnityEngine::MeshFilter __declspec(property(get=__get__rightHandsHairMeshFilter, put=__set__rightHandsHairMeshFilter))  _rightHandsHairMeshFilter;

constexpr void __set__rightHandsHairMeshFilter(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get__rightHandsHairMeshFilter() const;

 UnityEngine::SpriteRenderer __declspec(property(get=__get__eyesSprite, put=__set__eyesSprite))  _eyesSprite;

constexpr void __set__eyesSprite(UnityEngine::SpriteRenderer value) ;

constexpr UnityEngine::SpriteRenderer __get__eyesSprite() const;

 UnityEngine::SpriteRenderer __declspec(property(get=__get__mouthSprite, put=__set__mouthSprite))  _mouthSprite;

constexpr void __set__mouthSprite(UnityEngine::SpriteRenderer value) ;

constexpr UnityEngine::SpriteRenderer __get__mouthSprite() const;

 UnityEngine::MeshFilter __declspec(property(get=__get__bodyMeshFilter, put=__set__bodyMeshFilter))  _bodyMeshFilter;

constexpr void __set__bodyMeshFilter(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get__bodyMeshFilter() const;

 GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter __declspec(property(get=__get__headTopPropertyBlockColorSetter, put=__set__headTopPropertyBlockColorSetter))  _headTopPropertyBlockColorSetter;

constexpr void __set__headTopPropertyBlockColorSetter(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter value) ;

constexpr GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter __get__headTopPropertyBlockColorSetter() const;

 GlobalNamespace::AvatarPropertyBlockColorSetter __declspec(property(get=__get__glassesPropertyBlockColorSetter, put=__set__glassesPropertyBlockColorSetter))  _glassesPropertyBlockColorSetter;

constexpr void __set__glassesPropertyBlockColorSetter(GlobalNamespace::AvatarPropertyBlockColorSetter value) ;

constexpr GlobalNamespace::AvatarPropertyBlockColorSetter __get__glassesPropertyBlockColorSetter() const;

 GlobalNamespace::AvatarPropertyBlockColorSetter __declspec(property(get=__get__facialHairPropertyBlockColorSetter, put=__set__facialHairPropertyBlockColorSetter))  _facialHairPropertyBlockColorSetter;

constexpr void __set__facialHairPropertyBlockColorSetter(GlobalNamespace::AvatarPropertyBlockColorSetter value) ;

constexpr GlobalNamespace::AvatarPropertyBlockColorSetter __get__facialHairPropertyBlockColorSetter() const;

 GlobalNamespace::AvatarPropertyBlockColorSetter __declspec(property(get=__get__skinPropertyBlockColorSetter, put=__set__skinPropertyBlockColorSetter))  _skinPropertyBlockColorSetter;

constexpr void __set__skinPropertyBlockColorSetter(GlobalNamespace::AvatarPropertyBlockColorSetter value) ;

constexpr GlobalNamespace::AvatarPropertyBlockColorSetter __get__skinPropertyBlockColorSetter() const;

 GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter __declspec(property(get=__get__clothesPropertyBlockSetter, put=__set__clothesPropertyBlockSetter))  _clothesPropertyBlockSetter;

constexpr void __set__clothesPropertyBlockSetter(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter value) ;

constexpr GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter __get__clothesPropertyBlockSetter() const;

 GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter __declspec(property(get=__get__leftHandPropertyBlockSetter, put=__set__leftHandPropertyBlockSetter))  _leftHandPropertyBlockSetter;

constexpr void __set__leftHandPropertyBlockSetter(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter value) ;

constexpr GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter __get__leftHandPropertyBlockSetter() const;

 GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter __declspec(property(get=__get__rightHandPropertyBlockSetter, put=__set__rightHandPropertyBlockSetter))  _rightHandPropertyBlockSetter;

constexpr void __set__rightHandPropertyBlockSetter(GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter value) ;

constexpr GlobalNamespace::MulticolorAvatarPartPropertyBlockSetter __get__rightHandPropertyBlockSetter() const;

 GlobalNamespace::AvatarPartsModel __declspec(property(get=__get__avatarPartsModel, put=__set__avatarPartsModel))  _avatarPartsModel;

constexpr void __set__avatarPartsModel(GlobalNamespace::AvatarPartsModel value) ;

constexpr GlobalNamespace::AvatarPartsModel __get__avatarPartsModel() const;

 System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart,GlobalNamespace::GlobalNamespace__AvatarVisualController__HighlighterDelegate> __declspec(property(get=__get__avatarPartHighlightSetters, put=__set__avatarPartHighlightSetters))  _avatarPartHighlightSetters;

constexpr void __set__avatarPartHighlightSetters(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart,GlobalNamespace::GlobalNamespace__AvatarVisualController__HighlighterDelegate> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart,GlobalNamespace::GlobalNamespace__AvatarVisualController__HighlighterDelegate> __get__avatarPartHighlightSetters() const;

 UnityEngine::Color __declspec(property(get=__get__lightColor, put=__set__lightColor))  _lightColor;

constexpr void __set__lightColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__lightColor() const;

 GlobalNamespace::AvatarData __declspec(property(get=__get__avatarData, put=__set__avatarData))  _avatarData;

constexpr void __set__avatarData(GlobalNamespace::AvatarData value) ;

constexpr GlobalNamespace::AvatarData __get__avatarData() const;

 GlobalNamespace::GlobalNamespace__AvatarVisualController__HighlighterDelegate __declspec(property(get=__get__currentHighlighter, put=__set__currentHighlighter))  _currentHighlighter;

constexpr void __set__currentHighlighter(GlobalNamespace::GlobalNamespace__AvatarVisualController__HighlighterDelegate value) ;

constexpr GlobalNamespace::GlobalNamespace__AvatarVisualController__HighlighterDelegate __get__currentHighlighter() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_lightColor))  lightColor;


// Methods

/// @brief Method get_lightColor addr 0x20c2164 size 0xc virtual false final false
 UnityEngine::Color get_lightColor() ;

/// @brief Method Awake addr 0x20c2170 size 0x28c virtual false final false
 void Awake() ;

/// @brief Method UpdateAvatarVisual addr 0x20c24c0 size 0x354 virtual false final false
 void UpdateAvatarVisual(GlobalNamespace::AvatarData avatarData) ;

/// @brief Method SetLightColor addr 0x20c2aac size 0xc virtual false final false
 void SetLightColor(UnityEngine::Color color) ;

/// @brief Method UpdateAvatarColors addr 0x20c2814 size 0x298 virtual false final false
 void UpdateAvatarColors() ;

/// @brief Method HighlightEditedPart addr 0x20c2c88 size 0x9c virtual false final false
 void HighlightEditedPart(GlobalNamespace::GlobalNamespace__EditAvatarViewController__AvatarEditPart editPart, int32_t uvSegment) ;

/// @brief Method DisableEditedPartHighlight addr 0x20c2d24 size 0x34 virtual false final false
 void DisableEditedPartHighlight() ;

/// @brief Method SetHandsHighlight addr 0x20c2d58 size 0x48 virtual false final false
 void SetHandsHighlight(bool highlighted, int32_t uvSegment) ;

static GlobalNamespace::AvatarVisualController New_ctor() ;

/// @brief Method .ctor addr 0x20c2db0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AvatarVisualController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarVisualController, "", "AvatarVisualController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AvatarVisualController__HighlighterDelegate);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AvatarVisualController__HighlighterDelegate, "", "AvatarVisualController/HighlighterDelegate");
