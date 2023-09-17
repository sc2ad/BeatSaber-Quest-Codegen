#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
// Forward declare root types
namespace TMPro {
class FaceInfo_Legacy;
}
// Type: TMPro::FaceInfo_Legacy
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12299))
// CS Name: TMPro.FaceInfo_Legacy
class CORDL_TYPE FaceInfo_Legacy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~FaceInfo_Legacy() = default;

// Ctor Parameters [CppParam { name: "", ty: "FaceInfo_Legacy", modifiers: " const&", def_value: None }]
constexpr FaceInfo_Legacy(FaceInfo_Legacy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FaceInfo_Legacy", modifiers: "&&", def_value: None }]
constexpr FaceInfo_Legacy(FaceInfo_Legacy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FaceInfo_Legacy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FaceInfo_Legacy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FaceInfo_Legacy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FaceInfo_Legacy& operator=(FaceInfo_Legacy&& o) noexcept = default;
  constexpr FaceInfo_Legacy& operator=(FaceInfo_Legacy const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Name, put=__set_Name))  Name;

constexpr void __set_Name(::StringW value) ;

constexpr ::StringW __get_Name() const;

 float_t __declspec(property(get=__get_PointSize, put=__set_PointSize))  PointSize;

constexpr void __set_PointSize(float_t value) ;

constexpr float_t __get_PointSize() const;

 float_t __declspec(property(get=__get_Scale, put=__set_Scale))  Scale;

constexpr void __set_Scale(float_t value) ;

constexpr float_t __get_Scale() const;

 int32_t __declspec(property(get=__get_CharacterCount, put=__set_CharacterCount))  CharacterCount;

constexpr void __set_CharacterCount(int32_t value) ;

constexpr int32_t __get_CharacterCount() const;

 float_t __declspec(property(get=__get_LineHeight, put=__set_LineHeight))  LineHeight;

constexpr void __set_LineHeight(float_t value) ;

constexpr float_t __get_LineHeight() const;

 float_t __declspec(property(get=__get_Baseline, put=__set_Baseline))  Baseline;

constexpr void __set_Baseline(float_t value) ;

constexpr float_t __get_Baseline() const;

 float_t __declspec(property(get=__get_Ascender, put=__set_Ascender))  Ascender;

constexpr void __set_Ascender(float_t value) ;

constexpr float_t __get_Ascender() const;

 float_t __declspec(property(get=__get_CapHeight, put=__set_CapHeight))  CapHeight;

constexpr void __set_CapHeight(float_t value) ;

constexpr float_t __get_CapHeight() const;

 float_t __declspec(property(get=__get_Descender, put=__set_Descender))  Descender;

constexpr void __set_Descender(float_t value) ;

constexpr float_t __get_Descender() const;

 float_t __declspec(property(get=__get_CenterLine, put=__set_CenterLine))  CenterLine;

constexpr void __set_CenterLine(float_t value) ;

constexpr float_t __get_CenterLine() const;

 float_t __declspec(property(get=__get_SuperscriptOffset, put=__set_SuperscriptOffset))  SuperscriptOffset;

constexpr void __set_SuperscriptOffset(float_t value) ;

constexpr float_t __get_SuperscriptOffset() const;

 float_t __declspec(property(get=__get_SubscriptOffset, put=__set_SubscriptOffset))  SubscriptOffset;

constexpr void __set_SubscriptOffset(float_t value) ;

constexpr float_t __get_SubscriptOffset() const;

 float_t __declspec(property(get=__get_SubSize, put=__set_SubSize))  SubSize;

constexpr void __set_SubSize(float_t value) ;

constexpr float_t __get_SubSize() const;

 float_t __declspec(property(get=__get_Underline, put=__set_Underline))  Underline;

constexpr void __set_Underline(float_t value) ;

constexpr float_t __get_Underline() const;

 float_t __declspec(property(get=__get_UnderlineThickness, put=__set_UnderlineThickness))  UnderlineThickness;

constexpr void __set_UnderlineThickness(float_t value) ;

constexpr float_t __get_UnderlineThickness() const;

 float_t __declspec(property(get=__get_strikethrough, put=__set_strikethrough))  strikethrough;

constexpr void __set_strikethrough(float_t value) ;

constexpr float_t __get_strikethrough() const;

 float_t __declspec(property(get=__get_strikethroughThickness, put=__set_strikethroughThickness))  strikethroughThickness;

constexpr void __set_strikethroughThickness(float_t value) ;

constexpr float_t __get_strikethroughThickness() const;

 float_t __declspec(property(get=__get_TabWidth, put=__set_TabWidth))  TabWidth;

constexpr void __set_TabWidth(float_t value) ;

constexpr float_t __get_TabWidth() const;

 float_t __declspec(property(get=__get_Padding, put=__set_Padding))  Padding;

constexpr void __set_Padding(float_t value) ;

constexpr float_t __get_Padding() const;

 float_t __declspec(property(get=__get_AtlasWidth, put=__set_AtlasWidth))  AtlasWidth;

constexpr void __set_AtlasWidth(float_t value) ;

constexpr float_t __get_AtlasWidth() const;

 float_t __declspec(property(get=__get_AtlasHeight, put=__set_AtlasHeight))  AtlasHeight;

constexpr void __set_AtlasHeight(float_t value) ;

constexpr float_t __get_AtlasHeight() const;


// Methods

// Ctor Parameters []
explicit FaceInfo_Legacy() ;

/// @brief Method .ctor addr 0x2a7880c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::FaceInfo_Legacy);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::FaceInfo_Legacy, "TMPro", "FaceInfo_Legacy");
