#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class UxmlChildElementDescription;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__VisualElement__MeasureMode;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine::UIElements {
template<typename T>
struct CustomStyleProperty_1;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1;
}
namespace UnityEngine::UIElements {
class Image;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__Image__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__Image__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6821))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7178))
// CS Name: UnityEngine.UIElements.Image::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__Image__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__UxmlTraits {
public:
// Declarations
using _get_uxmlChildElementsDescription_d__1 = GlobalNamespace::UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~UnityEngine__UIElements__Image__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Image__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__Image__UxmlTraits(UnityEngine__UIElements__Image__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Image__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__Image__UxmlTraits(UnityEngine__UIElements__Image__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__Image__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__UxmlTraits(ptr) {
}


  constexpr UnityEngine__UIElements__Image__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__Image__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__Image__UxmlTraits& operator=(UnityEngine__UIElements__Image__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__Image__UxmlTraits& operator=(UnityEngine__UIElements__Image__UxmlTraits const& o) noexcept = default;
                


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> __declspec(property(get=get_uxmlChildElementsDescription))  uxmlChildElementsDescription;


// Methods

/// @brief Method get_uxmlChildElementsDescription addr 0x2cbc270 size 0x64 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> get_uxmlChildElementsDescription() ;

// Ctor Parameters []
explicit UnityEngine__UIElements__Image__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cbc318 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::Image
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6828))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7179))
// CS Name: UnityEngine.UIElements.Image
class CORDL_TYPE Image : public UnityEngine::UIElements::VisualElement {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__Image__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__Image__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x3f8};

virtual ~Image() = default;

// Ctor Parameters [CppParam { name: "", ty: "Image", modifiers: " const&", def_value: None }]
constexpr Image(Image const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Image", modifiers: "&&", def_value: None }]
constexpr Image(Image&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Image(void* ptr) noexcept : UnityEngine::UIElements::VisualElement(ptr) {
}


  constexpr Image& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Image& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Image& operator=(Image&& o) noexcept = default;
  constexpr Image& operator=(Image const& o) noexcept = default;
                


// Fields

 UnityEngine::ScaleMode __declspec(property(get=__get_m_ScaleMode, put=__set_m_ScaleMode))  m_ScaleMode;

constexpr void __set_m_ScaleMode(UnityEngine::ScaleMode value) ;

constexpr UnityEngine::ScaleMode __get_m_ScaleMode() const;

 UnityEngine::Texture __declspec(property(get=__get_m_Image, put=__set_m_Image))  m_Image;

constexpr void __set_m_Image(UnityEngine::Texture value) ;

constexpr UnityEngine::Texture __get_m_Image() const;

 UnityEngine::Sprite __declspec(property(get=__get_m_Sprite, put=__set_m_Sprite))  m_Sprite;

constexpr void __set_m_Sprite(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get_m_Sprite() const;

 UnityEngine::UIElements::VectorImage __declspec(property(get=__get_m_VectorImage, put=__set_m_VectorImage))  m_VectorImage;

constexpr void __set_m_VectorImage(UnityEngine::UIElements::VectorImage value) ;

constexpr UnityEngine::UIElements::VectorImage __get_m_VectorImage() const;

 UnityEngine::Rect __declspec(property(get=__get_m_UV, put=__set_m_UV))  m_UV;

constexpr void __set_m_UV(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get_m_UV() const;

 UnityEngine::Color __declspec(property(get=__get_m_TintColor, put=__set_m_TintColor))  m_TintColor;

constexpr void __set_m_TintColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_TintColor() const;

 bool __declspec(property(get=__get_m_ImageIsInline, put=__set_m_ImageIsInline))  m_ImageIsInline;

constexpr void __set_m_ImageIsInline(bool value) ;

constexpr bool __get_m_ImageIsInline() const;

 bool __declspec(property(get=__get_m_ScaleModeIsInline, put=__set_m_ScaleModeIsInline))  m_ScaleModeIsInline;

constexpr void __set_m_ScaleModeIsInline(bool value) ;

constexpr bool __get_m_ScaleModeIsInline() const;

 bool __declspec(property(get=__get_m_TintColorIsInline, put=__set_m_TintColorIsInline))  m_TintColorIsInline;

constexpr void __set_m_TintColorIsInline(bool value) ;

constexpr bool __get_m_TintColorIsInline() const;

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::Texture2D> __declspec(property(get=__get_s_ImageProperty, put=__set_s_ImageProperty))  s_ImageProperty;

static void __set_s_ImageProperty(UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::Texture2D> value) ;

static UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::Texture2D> __get_s_ImageProperty() ;

static UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::Sprite> __declspec(property(get=__get_s_SpriteProperty, put=__set_s_SpriteProperty))  s_SpriteProperty;

static void __set_s_SpriteProperty(UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::Sprite> value) ;

static UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::Sprite> __get_s_SpriteProperty() ;

static UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::UIElements::VectorImage> __declspec(property(get=__get_s_VectorImageProperty, put=__set_s_VectorImageProperty))  s_VectorImageProperty;

static void __set_s_VectorImageProperty(UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::UIElements::VectorImage> value) ;

static UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::UIElements::VectorImage> __get_s_VectorImageProperty() ;

static UnityEngine::UIElements::CustomStyleProperty_1<::StringW> __declspec(property(get=__get_s_ScaleModeProperty, put=__set_s_ScaleModeProperty))  s_ScaleModeProperty;

static void __set_s_ScaleModeProperty(UnityEngine::UIElements::CustomStyleProperty_1<::StringW> value) ;

static UnityEngine::UIElements::CustomStyleProperty_1<::StringW> __get_s_ScaleModeProperty() ;

static UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::Color> __declspec(property(get=__get_s_TintColorProperty, put=__set_s_TintColorProperty))  s_TintColorProperty;

static void __set_s_TintColorProperty(UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::Color> value) ;

static UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::Color> __get_s_TintColorProperty() ;


// Properties

 UnityEngine::Texture __declspec(property(get=get_image))  image;

 UnityEngine::Sprite __declspec(property(get=get_sprite))  sprite;

 UnityEngine::UIElements::VectorImage __declspec(property(get=get_vectorImage))  vectorImage;

 UnityEngine::Rect __declspec(property(get=get_sourceRect))  sourceRect;

 UnityEngine::Rect __declspec(property(get=get_uv))  uv;

 UnityEngine::ScaleMode __declspec(property(get=get_scaleMode))  scaleMode;

 UnityEngine::Color __declspec(property(get=get_tintColor))  tintColor;


// Methods

/// @brief Method get_image addr 0x2cbaec4 size 0x8 virtual false final false
 UnityEngine::Texture get_image() ;

/// @brief Method get_sprite addr 0x2cbaecc size 0x8 virtual false final false
 UnityEngine::Sprite get_sprite() ;

/// @brief Method get_vectorImage addr 0x2cbaed4 size 0x8 virtual false final false
 UnityEngine::UIElements::VectorImage get_vectorImage() ;

/// @brief Method get_sourceRect addr 0x2cbaedc size 0x4 virtual false final false
 UnityEngine::Rect get_sourceRect() ;

/// @brief Method get_uv addr 0x2cbb124 size 0x14 virtual false final false
 UnityEngine::Rect get_uv() ;

/// @brief Method get_scaleMode addr 0x2cbb138 size 0x8 virtual false final false
 UnityEngine::ScaleMode get_scaleMode() ;

/// @brief Method get_tintColor addr 0x2cbb140 size 0x14 virtual false final false
 UnityEngine::Color get_tintColor() ;

// Ctor Parameters []
explicit Image() ;

/// @brief Method .ctor addr 0x2cbb154 size 0x1e8 virtual false final false
 void _ctor() ;

/// @brief Method GetTextureDisplaySize addr 0x2cbb33c size 0xdc virtual false final false
 UnityEngine::Vector2 GetTextureDisplaySize(UnityEngine::Texture texture) ;

/// @brief Method GetTextureDisplaySize addr 0x2cbb418 size 0x108 virtual false final false
 UnityEngine::Vector2 GetTextureDisplaySize(UnityEngine::Sprite sprite) ;

/// @brief Method DoMeasure addr 0x2cbb520 size 0x244 virtual true final false
 UnityEngine::Vector2 DoMeasure(float_t desiredWidth, UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__MeasureMode widthMode, float_t desiredHeight, UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__MeasureMode heightMode) ;

/// @brief Method OnGenerateVisualContent addr 0x2cbb764 size 0x4cc virtual false final false
 void OnGenerateVisualContent(UnityEngine::UIElements::MeshGenerationContext mgc) ;

/// @brief Method OnCustomStyleResolved addr 0x2cbbc30 size 0x3f8 virtual false final false
 void OnCustomStyleResolved(UnityEngine::UIElements::CustomStyleResolvedEvent e) ;

/// @brief Method SetScaleMode addr 0x2cbc028 size 0x24 virtual false final false
 void SetScaleMode(UnityEngine::ScaleMode mode) ;

/// @brief Method GetSourceRect addr 0x2cbaee0 size 0x244 virtual false final false
 UnityEngine::Rect GetSourceRect() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7179)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5091 }), TypeDefinitionIndex(TypeDefinitionIndex(7178)), TypeDefinitionIndex(TypeDefinitionIndex(7089))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7176))
// CS Name: UnityEngine.UIElements.Image::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__Image__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::Image,UnityEngine::UIElements::UnityEngine__UIElements__Image__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__Image__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Image__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__Image__UxmlFactory(UnityEngine__UIElements__Image__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Image__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__Image__UxmlFactory(UnityEngine__UIElements__Image__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__Image__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::Image,UnityEngine::UIElements::UnityEngine__UIElements__Image__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__Image__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__Image__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__Image__UxmlFactory& operator=(UnityEngine__UIElements__Image__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__Image__UxmlFactory& operator=(UnityEngine__UIElements__Image__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__Image__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cbc228 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<get_uxmlChildElementsDescription>d__1
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7177))
// CS Name: UnityEngine.UIElements.Image::UxmlTraits::<get_uxmlChildElementsDescription>d__1
class CORDL_TYPE UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1(UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1(UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1& operator=(UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1&& o) noexcept = default;
  constexpr UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1& operator=(UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::UIElements::UxmlChildElementDescription value) ;

constexpr UnityEngine::UIElements::UxmlChildElementDescription __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 UnityEngine::UIElements::UnityEngine__UIElements__Image__UxmlTraits __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UIElements::UnityEngine__UIElements__Image__UxmlTraits value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__Image__UxmlTraits __get___4__this() const;


// Properties

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2cbc2d4 size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2cbc320 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2cbc324 size 0x18 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current addr 0x2cbc33c size 0x8 virtual true final true
 UnityEngine::UIElements::UxmlChildElementDescription System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2cbc344 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2cbc384 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator addr 0x2cbc38c size 0xa0 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2cbc42c size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__UIElements__Image__UxmlTraits___get_uxmlChildElementsDescription_d__1, "UnityEngine.UIElements", "Image/UxmlTraits/<get_uxmlChildElementsDescription>d__1");
NEED_NO_BOX(UnityEngine::UIElements::Image);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Image, "UnityEngine.UIElements", "Image");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__Image__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__Image__UxmlFactory, "UnityEngine.UIElements", "Image/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__Image__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__Image__UxmlTraits, "UnityEngine.UIElements", "Image/UxmlTraits");
