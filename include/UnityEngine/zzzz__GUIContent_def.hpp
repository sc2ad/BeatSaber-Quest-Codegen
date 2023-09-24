#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine {
class GUIContent;
}
// Type: UnityEngine::GUIContent
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14771))
// CS Name: UnityEngine.GUIContent
class CORDL_TYPE GUIContent : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GUIContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "GUIContent", modifiers: " const&", def_value: None }]
constexpr GUIContent(GUIContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GUIContent", modifiers: "&&", def_value: None }]
constexpr GUIContent(GUIContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GUIContent(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GUIContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GUIContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GUIContent& operator=(GUIContent&& o) noexcept = default;
  constexpr GUIContent& operator=(GUIContent const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(::StringW value) ;

constexpr ::StringW __get_m_Text() const;

 UnityEngine::Texture __declspec(property(get=__get_m_Image, put=__set_m_Image))  m_Image;

constexpr void __set_m_Image(UnityEngine::Texture value) ;

constexpr UnityEngine::Texture __get_m_Image() const;

 ::StringW __declspec(property(get=__get_m_Tooltip, put=__set_m_Tooltip))  m_Tooltip;

constexpr void __set_m_Tooltip(::StringW value) ;

constexpr ::StringW __get_m_Tooltip() const;

static UnityEngine::GUIContent __declspec(property(get=__get_s_Text, put=__set_s_Text))  s_Text;

static void __set_s_Text(UnityEngine::GUIContent value) ;

static UnityEngine::GUIContent __get_s_Text() ;

static UnityEngine::GUIContent __declspec(property(get=__get_s_Image, put=__set_s_Image))  s_Image;

static void __set_s_Image(UnityEngine::GUIContent value) ;

static UnityEngine::GUIContent __get_s_Image() ;

static UnityEngine::GUIContent __declspec(property(get=__get_s_TextImage, put=__set_s_TextImage))  s_TextImage;

static void __set_s_TextImage(UnityEngine::GUIContent value) ;

static UnityEngine::GUIContent __get_s_TextImage() ;

static UnityEngine::GUIContent __declspec(property(get=__get_none, put=__set_none))  none;

static void __set_none(UnityEngine::GUIContent value) ;

static UnityEngine::GUIContent __get_none() ;


// Properties

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

 UnityEngine::Texture __declspec(property(put=set_image))  image;

 ::StringW __declspec(property(get=get_tooltip, put=set_tooltip))  tooltip;


// Methods

/// @brief Method get_text addr 0x2b8c570 size 0x8 virtual false final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x2b8c578 size 0x8 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method set_image addr 0x2b8c580 size 0x8 virtual false final false
 void set_image(UnityEngine::Texture value) ;

/// @brief Method get_tooltip addr 0x2b84f74 size 0x8 virtual false final false
 ::StringW get_tooltip() ;

/// @brief Method set_tooltip addr 0x2b8c588 size 0x8 virtual false final false
 void set_tooltip(::StringW value) ;

static UnityEngine::GUIContent New_ctor() ;

/// @brief Method .ctor addr 0x2b8c590 size 0x5c virtual false final false
 void _ctor() ;

static UnityEngine::GUIContent New_ctor(::StringW text) ;

/// @brief Method .ctor addr 0x2b8c5ec size 0x64 virtual false final false
 void _ctor(::StringW text) ;

static UnityEngine::GUIContent New_ctor(::StringW text, UnityEngine::Texture image, ::StringW tooltip) ;

/// @brief Method .ctor addr 0x2b8c650 size 0x84 virtual false final false
 void _ctor(::StringW text, UnityEngine::Texture image, ::StringW tooltip) ;

static UnityEngine::GUIContent New_ctor(UnityEngine::GUIContent src) ;

/// @brief Method .ctor addr 0x2b83ec8 size 0x84 virtual false final false
 void _ctor(UnityEngine::GUIContent src) ;

/// @brief Method Temp addr 0x2b84888 size 0x8c virtual false final false
static UnityEngine::GUIContent Temp(::StringW t) ;

/// @brief Method ClearStaticCache addr 0x2b8c040 size 0xa0 virtual false final false
static void ClearStaticCache() ;

/// @brief Method ToString addr 0x2b8c6d4 size 0x20 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::GUIContent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIContent, "UnityEngine", "GUIContent");
