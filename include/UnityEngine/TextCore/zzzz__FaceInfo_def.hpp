#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::TextCore {
struct FaceInfo;
}
// Type: UnityEngine.TextCore::FaceInfo
namespace UnityEngine::TextCore {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15502))
// CS Name: UnityEngine.TextCore.FaceInfo
struct CORDL_TYPE FaceInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_FaceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_FamilyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_StyleName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_PointSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UnitsPerEM", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_LineHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AscentLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_CapLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_MeanLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Baseline", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_DescentLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_SuperscriptOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_SuperscriptSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_SubscriptOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_SubscriptSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UnderlineOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_UnderlineThickness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_StrikethroughOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_StrikethroughThickness", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TabWidth", ty: "float_t", modifiers: "", def_value: None }]
constexpr FaceInfo(int32_t m_FaceIndex, ::StringW m_FamilyName, ::StringW m_StyleName, int32_t m_PointSize, float_t m_Scale, int32_t m_UnitsPerEM, float_t m_LineHeight, float_t m_AscentLine, float_t m_CapLine, float_t m_MeanLine, float_t m_Baseline, float_t m_DescentLine, float_t m_SuperscriptOffset, float_t m_SuperscriptSize, float_t m_SubscriptOffset, float_t m_SubscriptSize, float_t m_UnderlineOffset, float_t m_UnderlineThickness, float_t m_StrikethroughOffset, float_t m_StrikethroughThickness, float_t m_TabWidth) noexcept;


                    constexpr FaceInfo(FaceInfo const&) = default;
                    constexpr FaceInfo(FaceInfo&&) = default;
                    constexpr FaceInfo& operator=(FaceInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FaceInfo& operator=(FaceInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FaceInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_FaceIndex, put=__set_m_FaceIndex))  m_FaceIndex;

constexpr void __set_m_FaceIndex(int32_t value) ;

constexpr int32_t __get_m_FaceIndex() const;

 ::StringW __declspec(property(get=__get_m_FamilyName, put=__set_m_FamilyName))  m_FamilyName;

constexpr void __set_m_FamilyName(::StringW value) ;

constexpr ::StringW __get_m_FamilyName() const;

 ::StringW __declspec(property(get=__get_m_StyleName, put=__set_m_StyleName))  m_StyleName;

constexpr void __set_m_StyleName(::StringW value) ;

constexpr ::StringW __get_m_StyleName() const;

 int32_t __declspec(property(get=__get_m_PointSize, put=__set_m_PointSize))  m_PointSize;

constexpr void __set_m_PointSize(int32_t value) ;

constexpr int32_t __get_m_PointSize() const;

 float_t __declspec(property(get=__get_m_Scale, put=__set_m_Scale))  m_Scale;

constexpr void __set_m_Scale(float_t value) ;

constexpr float_t __get_m_Scale() const;

 int32_t __declspec(property(get=__get_m_UnitsPerEM, put=__set_m_UnitsPerEM))  m_UnitsPerEM;

constexpr void __set_m_UnitsPerEM(int32_t value) ;

constexpr int32_t __get_m_UnitsPerEM() const;

 float_t __declspec(property(get=__get_m_LineHeight, put=__set_m_LineHeight))  m_LineHeight;

constexpr void __set_m_LineHeight(float_t value) ;

constexpr float_t __get_m_LineHeight() const;

 float_t __declspec(property(get=__get_m_AscentLine, put=__set_m_AscentLine))  m_AscentLine;

constexpr void __set_m_AscentLine(float_t value) ;

constexpr float_t __get_m_AscentLine() const;

 float_t __declspec(property(get=__get_m_CapLine, put=__set_m_CapLine))  m_CapLine;

constexpr void __set_m_CapLine(float_t value) ;

constexpr float_t __get_m_CapLine() const;

 float_t __declspec(property(get=__get_m_MeanLine, put=__set_m_MeanLine))  m_MeanLine;

constexpr void __set_m_MeanLine(float_t value) ;

constexpr float_t __get_m_MeanLine() const;

 float_t __declspec(property(get=__get_m_Baseline, put=__set_m_Baseline))  m_Baseline;

constexpr void __set_m_Baseline(float_t value) ;

constexpr float_t __get_m_Baseline() const;

 float_t __declspec(property(get=__get_m_DescentLine, put=__set_m_DescentLine))  m_DescentLine;

constexpr void __set_m_DescentLine(float_t value) ;

constexpr float_t __get_m_DescentLine() const;

 float_t __declspec(property(get=__get_m_SuperscriptOffset, put=__set_m_SuperscriptOffset))  m_SuperscriptOffset;

constexpr void __set_m_SuperscriptOffset(float_t value) ;

constexpr float_t __get_m_SuperscriptOffset() const;

 float_t __declspec(property(get=__get_m_SuperscriptSize, put=__set_m_SuperscriptSize))  m_SuperscriptSize;

constexpr void __set_m_SuperscriptSize(float_t value) ;

constexpr float_t __get_m_SuperscriptSize() const;

 float_t __declspec(property(get=__get_m_SubscriptOffset, put=__set_m_SubscriptOffset))  m_SubscriptOffset;

constexpr void __set_m_SubscriptOffset(float_t value) ;

constexpr float_t __get_m_SubscriptOffset() const;

 float_t __declspec(property(get=__get_m_SubscriptSize, put=__set_m_SubscriptSize))  m_SubscriptSize;

constexpr void __set_m_SubscriptSize(float_t value) ;

constexpr float_t __get_m_SubscriptSize() const;

 float_t __declspec(property(get=__get_m_UnderlineOffset, put=__set_m_UnderlineOffset))  m_UnderlineOffset;

constexpr void __set_m_UnderlineOffset(float_t value) ;

constexpr float_t __get_m_UnderlineOffset() const;

 float_t __declspec(property(get=__get_m_UnderlineThickness, put=__set_m_UnderlineThickness))  m_UnderlineThickness;

constexpr void __set_m_UnderlineThickness(float_t value) ;

constexpr float_t __get_m_UnderlineThickness() const;

 float_t __declspec(property(get=__get_m_StrikethroughOffset, put=__set_m_StrikethroughOffset))  m_StrikethroughOffset;

constexpr void __set_m_StrikethroughOffset(float_t value) ;

constexpr float_t __get_m_StrikethroughOffset() const;

 float_t __declspec(property(get=__get_m_StrikethroughThickness, put=__set_m_StrikethroughThickness))  m_StrikethroughThickness;

constexpr void __set_m_StrikethroughThickness(float_t value) ;

constexpr float_t __get_m_StrikethroughThickness() const;

 float_t __declspec(property(get=__get_m_TabWidth, put=__set_m_TabWidth))  m_TabWidth;

constexpr void __set_m_TabWidth(float_t value) ;

constexpr float_t __get_m_TabWidth() const;


// Properties

 int32_t __declspec(property(get=get_faceIndex))  faceIndex;

 ::StringW __declspec(property(get=get_familyName, put=set_familyName))  familyName;

 ::StringW __declspec(property(get=get_styleName, put=set_styleName))  styleName;

 int32_t __declspec(property(get=get_pointSize, put=set_pointSize))  pointSize;

 float_t __declspec(property(get=get_scale, put=set_scale))  scale;

 float_t __declspec(property(get=get_lineHeight, put=set_lineHeight))  lineHeight;

 float_t __declspec(property(get=get_ascentLine, put=set_ascentLine))  ascentLine;

 float_t __declspec(property(get=get_capLine, put=set_capLine))  capLine;

 float_t __declspec(property(get=get_meanLine, put=set_meanLine))  meanLine;

 float_t __declspec(property(get=get_baseline, put=set_baseline))  baseline;

 float_t __declspec(property(get=get_descentLine, put=set_descentLine))  descentLine;

 float_t __declspec(property(get=get_superscriptOffset, put=set_superscriptOffset))  superscriptOffset;

 float_t __declspec(property(get=get_superscriptSize, put=set_superscriptSize))  superscriptSize;

 float_t __declspec(property(get=get_subscriptOffset, put=set_subscriptOffset))  subscriptOffset;

 float_t __declspec(property(get=get_subscriptSize, put=set_subscriptSize))  subscriptSize;

 float_t __declspec(property(get=get_underlineOffset, put=set_underlineOffset))  underlineOffset;

 float_t __declspec(property(get=get_underlineThickness, put=set_underlineThickness))  underlineThickness;

 float_t __declspec(property(get=get_strikethroughOffset, put=set_strikethroughOffset))  strikethroughOffset;

 float_t __declspec(property(put=set_strikethroughThickness))  strikethroughThickness;

 float_t __declspec(property(get=get_tabWidth, put=set_tabWidth))  tabWidth;


// Methods

/// @brief Method get_faceIndex addr 0x2baa2c8 size 0x8 virtual false final false
 int32_t get_faceIndex() ;

/// @brief Method get_familyName addr 0x2baa2d0 size 0x8 virtual false final false
 ::StringW get_familyName() ;

/// @brief Method set_familyName addr 0x2baa2d8 size 0x8 virtual false final false
 void set_familyName(::StringW value) ;

/// @brief Method get_styleName addr 0x2baa2e0 size 0x8 virtual false final false
 ::StringW get_styleName() ;

/// @brief Method set_styleName addr 0x2baa2e8 size 0x8 virtual false final false
 void set_styleName(::StringW value) ;

/// @brief Method get_pointSize addr 0x2baa2f0 size 0x8 virtual false final false
 int32_t get_pointSize() ;

/// @brief Method set_pointSize addr 0x2baa2f8 size 0x8 virtual false final false
 void set_pointSize(int32_t value) ;

/// @brief Method get_scale addr 0x2baa300 size 0x8 virtual false final false
 float_t get_scale() ;

/// @brief Method set_scale addr 0x2baa308 size 0x8 virtual false final false
 void set_scale(float_t value) ;

/// @brief Method get_lineHeight addr 0x2baa310 size 0x8 virtual false final false
 float_t get_lineHeight() ;

/// @brief Method set_lineHeight addr 0x2baa318 size 0x8 virtual false final false
 void set_lineHeight(float_t value) ;

/// @brief Method get_ascentLine addr 0x2baa320 size 0x8 virtual false final false
 float_t get_ascentLine() ;

/// @brief Method set_ascentLine addr 0x2baa328 size 0x8 virtual false final false
 void set_ascentLine(float_t value) ;

/// @brief Method get_capLine addr 0x2baa330 size 0x8 virtual false final false
 float_t get_capLine() ;

/// @brief Method set_capLine addr 0x2baa338 size 0x8 virtual false final false
 void set_capLine(float_t value) ;

/// @brief Method get_meanLine addr 0x2baa340 size 0x8 virtual false final false
 float_t get_meanLine() ;

/// @brief Method set_meanLine addr 0x2baa348 size 0x8 virtual false final false
 void set_meanLine(float_t value) ;

/// @brief Method get_baseline addr 0x2baa350 size 0x8 virtual false final false
 float_t get_baseline() ;

/// @brief Method set_baseline addr 0x2baa358 size 0x8 virtual false final false
 void set_baseline(float_t value) ;

/// @brief Method get_descentLine addr 0x2baa360 size 0x8 virtual false final false
 float_t get_descentLine() ;

/// @brief Method set_descentLine addr 0x2baa368 size 0x8 virtual false final false
 void set_descentLine(float_t value) ;

/// @brief Method get_superscriptOffset addr 0x2baa370 size 0x8 virtual false final false
 float_t get_superscriptOffset() ;

/// @brief Method set_superscriptOffset addr 0x2baa378 size 0x8 virtual false final false
 void set_superscriptOffset(float_t value) ;

/// @brief Method get_superscriptSize addr 0x2baa380 size 0x8 virtual false final false
 float_t get_superscriptSize() ;

/// @brief Method set_superscriptSize addr 0x2baa388 size 0x8 virtual false final false
 void set_superscriptSize(float_t value) ;

/// @brief Method get_subscriptOffset addr 0x2baa390 size 0x8 virtual false final false
 float_t get_subscriptOffset() ;

/// @brief Method set_subscriptOffset addr 0x2baa398 size 0x8 virtual false final false
 void set_subscriptOffset(float_t value) ;

/// @brief Method get_subscriptSize addr 0x2baa3a0 size 0x8 virtual false final false
 float_t get_subscriptSize() ;

/// @brief Method set_subscriptSize addr 0x2baa3a8 size 0x8 virtual false final false
 void set_subscriptSize(float_t value) ;

/// @brief Method get_underlineOffset addr 0x2baa3b0 size 0x8 virtual false final false
 float_t get_underlineOffset() ;

/// @brief Method set_underlineOffset addr 0x2baa3b8 size 0x8 virtual false final false
 void set_underlineOffset(float_t value) ;

/// @brief Method get_underlineThickness addr 0x2baa3c0 size 0x8 virtual false final false
 float_t get_underlineThickness() ;

/// @brief Method set_underlineThickness addr 0x2baa3c8 size 0x8 virtual false final false
 void set_underlineThickness(float_t value) ;

/// @brief Method get_strikethroughOffset addr 0x2baa3d0 size 0x8 virtual false final false
 float_t get_strikethroughOffset() ;

/// @brief Method set_strikethroughOffset addr 0x2baa3d8 size 0x8 virtual false final false
 void set_strikethroughOffset(float_t value) ;

/// @brief Method set_strikethroughThickness addr 0x2baa3e0 size 0x8 virtual false final false
 void set_strikethroughThickness(float_t value) ;

/// @brief Method get_tabWidth addr 0x2baa3e8 size 0x8 virtual false final false
 float_t get_tabWidth() ;

/// @brief Method set_tabWidth addr 0x2baa3f0 size 0x8 virtual false final false
 void set_tabWidth(float_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::FaceInfo, "UnityEngine.TextCore", "FaceInfo");
