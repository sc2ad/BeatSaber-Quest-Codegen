#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UI {
class LayoutElement;
}
namespace System {
struct Decimal;
}
namespace TMPro {
struct FontWeight;
}
namespace UnityEngine {
struct Vector3;
}
namespace TMPro {
struct TextOverflowModes;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T>
class Action_1;
}
namespace TMPro {
class TMP_ColorGradient;
}
namespace TMPro {
template<typename T>
struct TMP_TextProcessingStack_1;
}
namespace TMPro {
struct TextAlignmentOptions;
}
namespace TMPro {
struct MaterialReference;
}
namespace TMPro {
struct VerticalAlignmentOptions;
}
namespace TMPro {
struct TMPro__TMP_Text__TextInputSources;
}
namespace UnityEngine {
struct Vector4;
}
namespace TMPro {
class TMP_TextElement;
}
namespace TMPro {
struct TMPro__TMP_Text__SpecialCharacter;
}
namespace TMPro {
struct RichTextTagAttribute;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Color32;
}
namespace TMPro {
class TMP_Style;
}
namespace UnityEngine {
struct Vector2;
}
namespace TMPro {
struct Extents;
}
namespace TMPro {
class TMP_SpriteAnimator;
}
namespace TMPro {
struct HorizontalAlignmentOptions;
}
namespace TMPro {
struct TMPro__TMP_Text__CharacterSubstitution;
}
namespace TMPro {
struct TMPro__TMP_Text__TextBackingContainer;
}
namespace TMPro {
struct TextureMappingOptions;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace TMPro {
class ITextPreprocessor;
}
namespace TMPro {
struct WordWrapState;
}
namespace TMPro {
struct VertexGradient;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
struct HighlightState;
}
namespace TMPro {
class TMPro__TMP_Text____c;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Mesh;
}
namespace TMPro {
struct TextRenderFlags;
}
namespace TMPro {
struct VertexSortingOrder;
}
namespace TMPro {
struct FontStyles;
}
namespace TMPro {
struct ColorMode;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
class TMP_TextInfo;
}
namespace UnityEngine {
class Transform;
}
namespace TMPro {
struct TMP_TextElementType;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Rect;
}
namespace TMPro {
struct TMP_CharacterInfo;
}
namespace TMPro {
struct TMP_VertexDataUpdateFlags;
}
namespace TMPro {
struct TMP_FontStyleStack;
}
namespace TMPro {
struct TMPro__TMP_Text__UnicodeChar;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TMP_StyleSheet;
}
namespace TMPro {
class TMP_Character;
}
// Forward declare root types
namespace TMPro {
struct TMPro__TMP_Text__TextInputSources;
}
namespace TMPro {
class TMP_Text;
}
namespace TMPro {
class TMPro__TMP_Text____c;
}
namespace TMPro {
struct TMPro__TMP_Text__CharacterSubstitution;
}
namespace TMPro {
struct TMPro__TMP_Text__SpecialCharacter;
}
namespace TMPro {
struct TMPro__TMP_Text__TextBackingContainer;
}
namespace TMPro {
struct TMPro__TMP_Text__UnicodeChar;
}
// Type: ::CharacterSubstitution
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12382))
// CS Name: TMPro.TMP_Text::CharacterSubstitution
struct CORDL_TYPE TMPro__TMP_Text__CharacterSubstitution : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr TMPro__TMP_Text__CharacterSubstitution(int32_t index, uint32_t unicode) noexcept;


                    constexpr TMPro__TMP_Text__CharacterSubstitution(TMPro__TMP_Text__CharacterSubstitution const&) = default;
                    constexpr TMPro__TMP_Text__CharacterSubstitution(TMPro__TMP_Text__CharacterSubstitution&&) = default;
                    constexpr TMPro__TMP_Text__CharacterSubstitution& operator=(TMPro__TMP_Text__CharacterSubstitution const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__TMP_Text__CharacterSubstitution& operator=(TMPro__TMP_Text__CharacterSubstitution&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_Text__CharacterSubstitution(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 uint32_t __declspec(property(get=__get_unicode, put=__set_unicode))  unicode;

constexpr void __set_unicode(uint32_t value) ;

constexpr uint32_t __get_unicode() const;


// Methods

/// @brief Method .ctor addr 0x2ab0190 size 0x8 virtual false final false
 void _ctor(int32_t index, uint32_t unicode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::TextInputSources
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12383))
// CS Name: TMPro.TMP_Text::TextInputSources
struct CORDL_TYPE TMPro__TMP_Text__TextInputSources : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMPro__TMP_Text__TextInputSources(int32_t value__) noexcept;


                    constexpr TMPro__TMP_Text__TextInputSources(TMPro__TMP_Text__TextInputSources const&) = default;
                    constexpr TMPro__TMP_Text__TextInputSources(TMPro__TMP_Text__TextInputSources&&) = default;
                    constexpr TMPro__TMP_Text__TextInputSources& operator=(TMPro__TMP_Text__TextInputSources const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__TMP_Text__TextInputSources& operator=(TMPro__TMP_Text__TextInputSources&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_Text__TextInputSources(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TMPro__TMP_Text__TextInputSources_Unwrapped : int32_t {
__TextInputBox = 0,
__SetText = 1,
__SetTextArray = 2,
__TextString = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TMPro__TMP_Text__TextInputSources_Unwrapped () const noexcept {
return std::bit_cast<__TMPro__TMP_Text__TextInputSources_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TextInputBox offset 0
static TMPro::TMPro__TMP_Text__TextInputSources const TextInputBox;

/// @brief Field SetText offset 0
static TMPro::TMPro__TMP_Text__TextInputSources const SetText;

/// @brief Field SetTextArray offset 0
static TMPro::TMPro__TMP_Text__TextInputSources const SetTextArray;

/// @brief Field TextString offset 0
static TMPro::TMPro__TMP_Text__TextInputSources const TextString;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::UnicodeChar
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12384))
// CS Name: TMPro.TMP_Text::UnicodeChar
struct CORDL_TYPE TMPro__TMP_Text__UnicodeChar : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "unicode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "stringIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMPro__TMP_Text__UnicodeChar(int32_t unicode, int32_t stringIndex, int32_t length) noexcept;


                    constexpr TMPro__TMP_Text__UnicodeChar(TMPro__TMP_Text__UnicodeChar const&) = default;
                    constexpr TMPro__TMP_Text__UnicodeChar(TMPro__TMP_Text__UnicodeChar&&) = default;
                    constexpr TMPro__TMP_Text__UnicodeChar& operator=(TMPro__TMP_Text__UnicodeChar const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__TMP_Text__UnicodeChar& operator=(TMPro__TMP_Text__UnicodeChar&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_Text__UnicodeChar(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_unicode, put=__set_unicode))  unicode;

constexpr void __set_unicode(int32_t value) ;

constexpr int32_t __get_unicode() const;

 int32_t __declspec(property(get=__get_stringIndex, put=__set_stringIndex))  stringIndex;

constexpr void __set_stringIndex(int32_t value) ;

constexpr int32_t __get_stringIndex() const;

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::SpecialCharacter
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12385))
// CS Name: TMPro.TMP_Text::SpecialCharacter
struct CORDL_TYPE TMPro__TMP_Text__SpecialCharacter : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "character", ty: "TMPro::TMP_Character", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "TMPro::TMP_FontAsset", modifiers: "", def_value: None }, CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "materialIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMPro__TMP_Text__SpecialCharacter(TMPro::TMP_Character character, TMPro::TMP_FontAsset fontAsset, UnityEngine::Material material, int32_t materialIndex) noexcept;


                    constexpr TMPro__TMP_Text__SpecialCharacter(TMPro__TMP_Text__SpecialCharacter const&) = default;
                    constexpr TMPro__TMP_Text__SpecialCharacter(TMPro__TMP_Text__SpecialCharacter&&) = default;
                    constexpr TMPro__TMP_Text__SpecialCharacter& operator=(TMPro__TMP_Text__SpecialCharacter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__TMP_Text__SpecialCharacter& operator=(TMPro__TMP_Text__SpecialCharacter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_Text__SpecialCharacter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 TMPro::TMP_Character __declspec(property(get=__get_character, put=__set_character))  character;

constexpr void __set_character(TMPro::TMP_Character value) ;

constexpr TMPro::TMP_Character __get_character() const;

 TMPro::TMP_FontAsset __declspec(property(get=__get_fontAsset, put=__set_fontAsset))  fontAsset;

constexpr void __set_fontAsset(TMPro::TMP_FontAsset value) ;

constexpr TMPro::TMP_FontAsset __get_fontAsset() const;

 UnityEngine::Material __declspec(property(get=__get_material, put=__set_material))  material;

constexpr void __set_material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_material() const;

 int32_t __declspec(property(get=__get_materialIndex, put=__set_materialIndex))  materialIndex;

constexpr void __set_materialIndex(int32_t value) ;

constexpr int32_t __get_materialIndex() const;


// Methods

/// @brief Method .ctor addr 0x2ab0198 size 0xec virtual false final false
 void _ctor(TMPro::TMP_Character character, int32_t materialIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::TextBackingContainer
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12386))
// CS Name: TMPro.TMP_Text::TextBackingContainer
struct CORDL_TYPE TMPro__TMP_Text__TextBackingContainer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMPro__TMP_Text__TextBackingContainer(::ArrayW<uint32_t> m_Array, int32_t m_Count) noexcept;


                    constexpr TMPro__TMP_Text__TextBackingContainer(TMPro__TMP_Text__TextBackingContainer const&) = default;
                    constexpr TMPro__TMP_Text__TextBackingContainer(TMPro__TMP_Text__TextBackingContainer&&) = default;
                    constexpr TMPro__TMP_Text__TextBackingContainer& operator=(TMPro__TMP_Text__TextBackingContainer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__TMP_Text__TextBackingContainer& operator=(TMPro__TMP_Text__TextBackingContainer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_Text__TextBackingContainer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<uint32_t> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 int32_t __declspec(property(get=get_Count, put=set_Count))  Count;

 uint32_t __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_Capacity addr 0x2ab0284 size 0x1c virtual false final false
 int32_t get_Capacity() ;

/// @brief Method get_Count addr 0x2ab02a0 size 0x8 virtual false final false
 int32_t get_Count() ;

/// @brief Method set_Count addr 0x2ab02a8 size 0x8 virtual false final false
 void set_Count(int32_t value) ;

/// @brief Method get_Item addr 0x2ab02b0 size 0x30 virtual false final false
 uint32_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x2ab02e0 size 0x60 virtual false final false
 void set_Item(int32_t index, uint32_t value) ;

/// @brief Method .ctor addr 0x2ab03a4 size 0x60 virtual false final false
 void _ctor(int32_t size) ;

/// @brief Method Resize addr 0x2ab0340 size 0x64 virtual false final false
 void Resize(int32_t size) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::<>c
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12387))
// CS Name: TMPro.TMP_Text::<>c
class CORDL_TYPE TMPro__TMP_Text____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMPro__TMP_Text____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_Text____c", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_Text____c(TMPro__TMP_Text____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_Text____c", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_Text____c(TMPro__TMP_Text____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_Text____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__TMP_Text____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_Text____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_Text____c& operator=(TMPro__TMP_Text____c&& o) noexcept = default;
  constexpr TMPro__TMP_Text____c& operator=(TMPro__TMP_Text____c const& o) noexcept = default;
                


// Fields

static TMPro::TMPro__TMP_Text____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(TMPro::TMPro__TMP_Text____c value) ;

static TMPro::TMPro__TMP_Text____c __get___9() ;

static System::Action_1<TMPro::TMP_TextInfo> __declspec(property(get=__get___9__622_0, put=__set___9__622_0))  __9__622_0;

static void __set___9__622_0(System::Action_1<TMPro::TMP_TextInfo> value) ;

static System::Action_1<TMPro::TMP_TextInfo> __get___9__622_0() ;


// Methods

static TMPro::TMPro__TMP_Text____c New_ctor() ;

/// @brief Method .ctor addr 0x2ab0468 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__622_0 addr 0x2ab0470 size 0x4 virtual false final false
 void __ctor_b__622_0(TMPro::TMP_TextInfo _p0_) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_Text
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13038))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12388))
// CS Name: TMPro.TMP_Text
class CORDL_TYPE TMP_Text : public UnityEngine::UI::MaskableGraphic {
public:
// Declarations
using __c = TMPro::TMPro__TMP_Text____c;

using TextBackingContainer = TMPro::TMPro__TMP_Text__TextBackingContainer;

using SpecialCharacter = TMPro::TMPro__TMP_Text__SpecialCharacter;

using UnicodeChar = TMPro::TMPro__TMP_Text__UnicodeChar;

using TextInputSources = TMPro::TMPro__TMP_Text__TextInputSources;

using CharacterSubstitution = TMPro::TMPro__TMP_Text__CharacterSubstitution;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x6c0};

virtual ~TMP_Text() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Text", modifiers: " const&", def_value: None }]
constexpr TMP_Text(TMP_Text const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Text", modifiers: "&&", def_value: None }]
constexpr TMP_Text(TMP_Text&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_Text(void* ptr) noexcept : UnityEngine::UI::MaskableGraphic(ptr) {
}


  constexpr TMP_Text& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_Text& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_Text& operator=(TMP_Text&& o) noexcept = default;
  constexpr TMP_Text& operator=(TMP_Text const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_text, put=__set_m_text))  m_text;

constexpr void __set_m_text(::StringW value) ;

constexpr ::StringW __get_m_text() const;

 bool __declspec(property(get=__get_m_IsTextBackingStringDirty, put=__set_m_IsTextBackingStringDirty))  m_IsTextBackingStringDirty;

constexpr void __set_m_IsTextBackingStringDirty(bool value) ;

constexpr bool __get_m_IsTextBackingStringDirty() const;

 TMPro::ITextPreprocessor __declspec(property(get=__get_m_TextPreprocessor, put=__set_m_TextPreprocessor))  m_TextPreprocessor;

constexpr void __set_m_TextPreprocessor(TMPro::ITextPreprocessor value) ;

constexpr TMPro::ITextPreprocessor __get_m_TextPreprocessor() const;

 bool __declspec(property(get=__get_m_isRightToLeft, put=__set_m_isRightToLeft))  m_isRightToLeft;

constexpr void __set_m_isRightToLeft(bool value) ;

constexpr bool __get_m_isRightToLeft() const;

 TMPro::TMP_FontAsset __declspec(property(get=__get_m_fontAsset, put=__set_m_fontAsset))  m_fontAsset;

constexpr void __set_m_fontAsset(TMPro::TMP_FontAsset value) ;

constexpr TMPro::TMP_FontAsset __get_m_fontAsset() const;

 TMPro::TMP_FontAsset __declspec(property(get=__get_m_currentFontAsset, put=__set_m_currentFontAsset))  m_currentFontAsset;

constexpr void __set_m_currentFontAsset(TMPro::TMP_FontAsset value) ;

constexpr TMPro::TMP_FontAsset __get_m_currentFontAsset() const;

 bool __declspec(property(get=__get_m_isSDFShader, put=__set_m_isSDFShader))  m_isSDFShader;

constexpr void __set_m_isSDFShader(bool value) ;

constexpr bool __get_m_isSDFShader() const;

 UnityEngine::Material __declspec(property(get=__get_m_sharedMaterial, put=__set_m_sharedMaterial))  m_sharedMaterial;

constexpr void __set_m_sharedMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_m_sharedMaterial() const;

 UnityEngine::Material __declspec(property(get=__get_m_currentMaterial, put=__set_m_currentMaterial))  m_currentMaterial;

constexpr void __set_m_currentMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_m_currentMaterial() const;

static ::ArrayW<TMPro::MaterialReference> __declspec(property(get=__get_m_materialReferences, put=__set_m_materialReferences))  m_materialReferences;

static void __set_m_materialReferences(::ArrayW<TMPro::MaterialReference> value) ;

static ::ArrayW<TMPro::MaterialReference> __get_m_materialReferences() ;

static System::Collections::Generic::Dictionary_2<int32_t,int32_t> __declspec(property(get=__get_m_materialReferenceIndexLookup, put=__set_m_materialReferenceIndexLookup))  m_materialReferenceIndexLookup;

static void __set_m_materialReferenceIndexLookup(System::Collections::Generic::Dictionary_2<int32_t,int32_t> value) ;

static System::Collections::Generic::Dictionary_2<int32_t,int32_t> __get_m_materialReferenceIndexLookup() ;

static TMPro::TMP_TextProcessingStack_1<TMPro::MaterialReference> __declspec(property(get=__get_m_materialReferenceStack, put=__set_m_materialReferenceStack))  m_materialReferenceStack;

static void __set_m_materialReferenceStack(TMPro::TMP_TextProcessingStack_1<TMPro::MaterialReference> value) ;

static TMPro::TMP_TextProcessingStack_1<TMPro::MaterialReference> __get_m_materialReferenceStack() ;

 int32_t __declspec(property(get=__get_m_currentMaterialIndex, put=__set_m_currentMaterialIndex))  m_currentMaterialIndex;

constexpr void __set_m_currentMaterialIndex(int32_t value) ;

constexpr int32_t __get_m_currentMaterialIndex() const;

 ::ArrayW<UnityEngine::Material> __declspec(property(get=__get_m_fontSharedMaterials, put=__set_m_fontSharedMaterials))  m_fontSharedMaterials;

constexpr void __set_m_fontSharedMaterials(::ArrayW<UnityEngine::Material> value) ;

constexpr ::ArrayW<UnityEngine::Material> __get_m_fontSharedMaterials() const;

 UnityEngine::Material __declspec(property(get=__get_m_fontMaterial, put=__set_m_fontMaterial))  m_fontMaterial;

constexpr void __set_m_fontMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_m_fontMaterial() const;

 ::ArrayW<UnityEngine::Material> __declspec(property(get=__get_m_fontMaterials, put=__set_m_fontMaterials))  m_fontMaterials;

constexpr void __set_m_fontMaterials(::ArrayW<UnityEngine::Material> value) ;

constexpr ::ArrayW<UnityEngine::Material> __get_m_fontMaterials() const;

 bool __declspec(property(get=__get_m_isMaterialDirty, put=__set_m_isMaterialDirty))  m_isMaterialDirty;

constexpr void __set_m_isMaterialDirty(bool value) ;

constexpr bool __get_m_isMaterialDirty() const;

 UnityEngine::Color32 __declspec(property(get=__get_m_fontColor32, put=__set_m_fontColor32))  m_fontColor32;

constexpr void __set_m_fontColor32(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_m_fontColor32() const;

 UnityEngine::Color __declspec(property(get=__get_m_fontColor, put=__set_m_fontColor))  m_fontColor;

constexpr void __set_m_fontColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_fontColor() const;

static UnityEngine::Color32 __declspec(property(get=__get_s_colorWhite, put=__set_s_colorWhite))  s_colorWhite;

static void __set_s_colorWhite(UnityEngine::Color32 value) ;

static UnityEngine::Color32 __get_s_colorWhite() ;

 UnityEngine::Color32 __declspec(property(get=__get_m_underlineColor, put=__set_m_underlineColor))  m_underlineColor;

constexpr void __set_m_underlineColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_m_underlineColor() const;

 UnityEngine::Color32 __declspec(property(get=__get_m_strikethroughColor, put=__set_m_strikethroughColor))  m_strikethroughColor;

constexpr void __set_m_strikethroughColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_m_strikethroughColor() const;

 bool __declspec(property(get=__get_m_enableVertexGradient, put=__set_m_enableVertexGradient))  m_enableVertexGradient;

constexpr void __set_m_enableVertexGradient(bool value) ;

constexpr bool __get_m_enableVertexGradient() const;

 TMPro::ColorMode __declspec(property(get=__get_m_colorMode, put=__set_m_colorMode))  m_colorMode;

constexpr void __set_m_colorMode(TMPro::ColorMode value) ;

constexpr TMPro::ColorMode __get_m_colorMode() const;

 TMPro::VertexGradient __declspec(property(get=__get_m_fontColorGradient, put=__set_m_fontColorGradient))  m_fontColorGradient;

constexpr void __set_m_fontColorGradient(TMPro::VertexGradient value) ;

constexpr TMPro::VertexGradient __get_m_fontColorGradient() const;

 TMPro::TMP_ColorGradient __declspec(property(get=__get_m_fontColorGradientPreset, put=__set_m_fontColorGradientPreset))  m_fontColorGradientPreset;

constexpr void __set_m_fontColorGradientPreset(TMPro::TMP_ColorGradient value) ;

constexpr TMPro::TMP_ColorGradient __get_m_fontColorGradientPreset() const;

 TMPro::TMP_SpriteAsset __declspec(property(get=__get_m_spriteAsset, put=__set_m_spriteAsset))  m_spriteAsset;

constexpr void __set_m_spriteAsset(TMPro::TMP_SpriteAsset value) ;

constexpr TMPro::TMP_SpriteAsset __get_m_spriteAsset() const;

 bool __declspec(property(get=__get_m_tintAllSprites, put=__set_m_tintAllSprites))  m_tintAllSprites;

constexpr void __set_m_tintAllSprites(bool value) ;

constexpr bool __get_m_tintAllSprites() const;

 bool __declspec(property(get=__get_m_tintSprite, put=__set_m_tintSprite))  m_tintSprite;

constexpr void __set_m_tintSprite(bool value) ;

constexpr bool __get_m_tintSprite() const;

 UnityEngine::Color32 __declspec(property(get=__get_m_spriteColor, put=__set_m_spriteColor))  m_spriteColor;

constexpr void __set_m_spriteColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_m_spriteColor() const;

 TMPro::TMP_StyleSheet __declspec(property(get=__get_m_StyleSheet, put=__set_m_StyleSheet))  m_StyleSheet;

constexpr void __set_m_StyleSheet(TMPro::TMP_StyleSheet value) ;

constexpr TMPro::TMP_StyleSheet __get_m_StyleSheet() const;

 TMPro::TMP_Style __declspec(property(get=__get_m_TextStyle, put=__set_m_TextStyle))  m_TextStyle;

constexpr void __set_m_TextStyle(TMPro::TMP_Style value) ;

constexpr TMPro::TMP_Style __get_m_TextStyle() const;

 int32_t __declspec(property(get=__get_m_TextStyleHashCode, put=__set_m_TextStyleHashCode))  m_TextStyleHashCode;

constexpr void __set_m_TextStyleHashCode(int32_t value) ;

constexpr int32_t __get_m_TextStyleHashCode() const;

 bool __declspec(property(get=__get_m_overrideHtmlColors, put=__set_m_overrideHtmlColors))  m_overrideHtmlColors;

constexpr void __set_m_overrideHtmlColors(bool value) ;

constexpr bool __get_m_overrideHtmlColors() const;

 UnityEngine::Color32 __declspec(property(get=__get_m_faceColor, put=__set_m_faceColor))  m_faceColor;

constexpr void __set_m_faceColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_m_faceColor() const;

 UnityEngine::Color32 __declspec(property(get=__get_m_outlineColor, put=__set_m_outlineColor))  m_outlineColor;

constexpr void __set_m_outlineColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_m_outlineColor() const;

 float_t __declspec(property(get=__get_m_outlineWidth, put=__set_m_outlineWidth))  m_outlineWidth;

constexpr void __set_m_outlineWidth(float_t value) ;

constexpr float_t __get_m_outlineWidth() const;

 float_t __declspec(property(get=__get_m_fontSize, put=__set_m_fontSize))  m_fontSize;

constexpr void __set_m_fontSize(float_t value) ;

constexpr float_t __get_m_fontSize() const;

 float_t __declspec(property(get=__get_m_currentFontSize, put=__set_m_currentFontSize))  m_currentFontSize;

constexpr void __set_m_currentFontSize(float_t value) ;

constexpr float_t __get_m_currentFontSize() const;

 float_t __declspec(property(get=__get_m_fontSizeBase, put=__set_m_fontSizeBase))  m_fontSizeBase;

constexpr void __set_m_fontSizeBase(float_t value) ;

constexpr float_t __get_m_fontSizeBase() const;

 TMPro::TMP_TextProcessingStack_1<float_t> __declspec(property(get=__get_m_sizeStack, put=__set_m_sizeStack))  m_sizeStack;

constexpr void __set_m_sizeStack(TMPro::TMP_TextProcessingStack_1<float_t> value) ;

constexpr TMPro::TMP_TextProcessingStack_1<float_t> __get_m_sizeStack() const;

 TMPro::FontWeight __declspec(property(get=__get_m_fontWeight, put=__set_m_fontWeight))  m_fontWeight;

constexpr void __set_m_fontWeight(TMPro::FontWeight value) ;

constexpr TMPro::FontWeight __get_m_fontWeight() const;

 TMPro::FontWeight __declspec(property(get=__get_m_FontWeightInternal, put=__set_m_FontWeightInternal))  m_FontWeightInternal;

constexpr void __set_m_FontWeightInternal(TMPro::FontWeight value) ;

constexpr TMPro::FontWeight __get_m_FontWeightInternal() const;

 TMPro::TMP_TextProcessingStack_1<TMPro::FontWeight> __declspec(property(get=__get_m_FontWeightStack, put=__set_m_FontWeightStack))  m_FontWeightStack;

constexpr void __set_m_FontWeightStack(TMPro::TMP_TextProcessingStack_1<TMPro::FontWeight> value) ;

constexpr TMPro::TMP_TextProcessingStack_1<TMPro::FontWeight> __get_m_FontWeightStack() const;

 bool __declspec(property(get=__get_m_enableAutoSizing, put=__set_m_enableAutoSizing))  m_enableAutoSizing;

constexpr void __set_m_enableAutoSizing(bool value) ;

constexpr bool __get_m_enableAutoSizing() const;

 float_t __declspec(property(get=__get_m_maxFontSize, put=__set_m_maxFontSize))  m_maxFontSize;

constexpr void __set_m_maxFontSize(float_t value) ;

constexpr float_t __get_m_maxFontSize() const;

 float_t __declspec(property(get=__get_m_minFontSize, put=__set_m_minFontSize))  m_minFontSize;

constexpr void __set_m_minFontSize(float_t value) ;

constexpr float_t __get_m_minFontSize() const;

 int32_t __declspec(property(get=__get_m_AutoSizeIterationCount, put=__set_m_AutoSizeIterationCount))  m_AutoSizeIterationCount;

constexpr void __set_m_AutoSizeIterationCount(int32_t value) ;

constexpr int32_t __get_m_AutoSizeIterationCount() const;

 int32_t __declspec(property(get=__get_m_AutoSizeMaxIterationCount, put=__set_m_AutoSizeMaxIterationCount))  m_AutoSizeMaxIterationCount;

constexpr void __set_m_AutoSizeMaxIterationCount(int32_t value) ;

constexpr int32_t __get_m_AutoSizeMaxIterationCount() const;

 bool __declspec(property(get=__get_m_IsAutoSizePointSizeSet, put=__set_m_IsAutoSizePointSizeSet))  m_IsAutoSizePointSizeSet;

constexpr void __set_m_IsAutoSizePointSizeSet(bool value) ;

constexpr bool __get_m_IsAutoSizePointSizeSet() const;

 float_t __declspec(property(get=__get_m_fontSizeMin, put=__set_m_fontSizeMin))  m_fontSizeMin;

constexpr void __set_m_fontSizeMin(float_t value) ;

constexpr float_t __get_m_fontSizeMin() const;

 float_t __declspec(property(get=__get_m_fontSizeMax, put=__set_m_fontSizeMax))  m_fontSizeMax;

constexpr void __set_m_fontSizeMax(float_t value) ;

constexpr float_t __get_m_fontSizeMax() const;

 TMPro::FontStyles __declspec(property(get=__get_m_fontStyle, put=__set_m_fontStyle))  m_fontStyle;

constexpr void __set_m_fontStyle(TMPro::FontStyles value) ;

constexpr TMPro::FontStyles __get_m_fontStyle() const;

 TMPro::FontStyles __declspec(property(get=__get_m_FontStyleInternal, put=__set_m_FontStyleInternal))  m_FontStyleInternal;

constexpr void __set_m_FontStyleInternal(TMPro::FontStyles value) ;

constexpr TMPro::FontStyles __get_m_FontStyleInternal() const;

 TMPro::TMP_FontStyleStack __declspec(property(get=__get_m_fontStyleStack, put=__set_m_fontStyleStack))  m_fontStyleStack;

constexpr void __set_m_fontStyleStack(TMPro::TMP_FontStyleStack value) ;

constexpr TMPro::TMP_FontStyleStack __get_m_fontStyleStack() const;

 bool __declspec(property(get=__get_m_isUsingBold, put=__set_m_isUsingBold))  m_isUsingBold;

constexpr void __set_m_isUsingBold(bool value) ;

constexpr bool __get_m_isUsingBold() const;

 TMPro::HorizontalAlignmentOptions __declspec(property(get=__get_m_HorizontalAlignment, put=__set_m_HorizontalAlignment))  m_HorizontalAlignment;

constexpr void __set_m_HorizontalAlignment(TMPro::HorizontalAlignmentOptions value) ;

constexpr TMPro::HorizontalAlignmentOptions __get_m_HorizontalAlignment() const;

 TMPro::VerticalAlignmentOptions __declspec(property(get=__get_m_VerticalAlignment, put=__set_m_VerticalAlignment))  m_VerticalAlignment;

constexpr void __set_m_VerticalAlignment(TMPro::VerticalAlignmentOptions value) ;

constexpr TMPro::VerticalAlignmentOptions __get_m_VerticalAlignment() const;

 TMPro::TextAlignmentOptions __declspec(property(get=__get_m_textAlignment, put=__set_m_textAlignment))  m_textAlignment;

constexpr void __set_m_textAlignment(TMPro::TextAlignmentOptions value) ;

constexpr TMPro::TextAlignmentOptions __get_m_textAlignment() const;

 TMPro::HorizontalAlignmentOptions __declspec(property(get=__get_m_lineJustification, put=__set_m_lineJustification))  m_lineJustification;

constexpr void __set_m_lineJustification(TMPro::HorizontalAlignmentOptions value) ;

constexpr TMPro::HorizontalAlignmentOptions __get_m_lineJustification() const;

 TMPro::TMP_TextProcessingStack_1<TMPro::HorizontalAlignmentOptions> __declspec(property(get=__get_m_lineJustificationStack, put=__set_m_lineJustificationStack))  m_lineJustificationStack;

constexpr void __set_m_lineJustificationStack(TMPro::TMP_TextProcessingStack_1<TMPro::HorizontalAlignmentOptions> value) ;

constexpr TMPro::TMP_TextProcessingStack_1<TMPro::HorizontalAlignmentOptions> __get_m_lineJustificationStack() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_m_textContainerLocalCorners, put=__set_m_textContainerLocalCorners))  m_textContainerLocalCorners;

constexpr void __set_m_textContainerLocalCorners(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_m_textContainerLocalCorners() const;

 float_t __declspec(property(get=__get_m_characterSpacing, put=__set_m_characterSpacing))  m_characterSpacing;

constexpr void __set_m_characterSpacing(float_t value) ;

constexpr float_t __get_m_characterSpacing() const;

 float_t __declspec(property(get=__get_m_cSpacing, put=__set_m_cSpacing))  m_cSpacing;

constexpr void __set_m_cSpacing(float_t value) ;

constexpr float_t __get_m_cSpacing() const;

 float_t __declspec(property(get=__get_m_monoSpacing, put=__set_m_monoSpacing))  m_monoSpacing;

constexpr void __set_m_monoSpacing(float_t value) ;

constexpr float_t __get_m_monoSpacing() const;

 float_t __declspec(property(get=__get_m_wordSpacing, put=__set_m_wordSpacing))  m_wordSpacing;

constexpr void __set_m_wordSpacing(float_t value) ;

constexpr float_t __get_m_wordSpacing() const;

 float_t __declspec(property(get=__get_m_lineSpacing, put=__set_m_lineSpacing))  m_lineSpacing;

constexpr void __set_m_lineSpacing(float_t value) ;

constexpr float_t __get_m_lineSpacing() const;

 float_t __declspec(property(get=__get_m_lineSpacingDelta, put=__set_m_lineSpacingDelta))  m_lineSpacingDelta;

constexpr void __set_m_lineSpacingDelta(float_t value) ;

constexpr float_t __get_m_lineSpacingDelta() const;

 float_t __declspec(property(get=__get_m_lineHeight, put=__set_m_lineHeight))  m_lineHeight;

constexpr void __set_m_lineHeight(float_t value) ;

constexpr float_t __get_m_lineHeight() const;

 bool __declspec(property(get=__get_m_IsDrivenLineSpacing, put=__set_m_IsDrivenLineSpacing))  m_IsDrivenLineSpacing;

constexpr void __set_m_IsDrivenLineSpacing(bool value) ;

constexpr bool __get_m_IsDrivenLineSpacing() const;

 float_t __declspec(property(get=__get_m_lineSpacingMax, put=__set_m_lineSpacingMax))  m_lineSpacingMax;

constexpr void __set_m_lineSpacingMax(float_t value) ;

constexpr float_t __get_m_lineSpacingMax() const;

 float_t __declspec(property(get=__get_m_paragraphSpacing, put=__set_m_paragraphSpacing))  m_paragraphSpacing;

constexpr void __set_m_paragraphSpacing(float_t value) ;

constexpr float_t __get_m_paragraphSpacing() const;

 float_t __declspec(property(get=__get_m_charWidthMaxAdj, put=__set_m_charWidthMaxAdj))  m_charWidthMaxAdj;

constexpr void __set_m_charWidthMaxAdj(float_t value) ;

constexpr float_t __get_m_charWidthMaxAdj() const;

 float_t __declspec(property(get=__get_m_charWidthAdjDelta, put=__set_m_charWidthAdjDelta))  m_charWidthAdjDelta;

constexpr void __set_m_charWidthAdjDelta(float_t value) ;

constexpr float_t __get_m_charWidthAdjDelta() const;

 bool __declspec(property(get=__get_m_enableWordWrapping, put=__set_m_enableWordWrapping))  m_enableWordWrapping;

constexpr void __set_m_enableWordWrapping(bool value) ;

constexpr bool __get_m_enableWordWrapping() const;

 bool __declspec(property(get=__get_m_isCharacterWrappingEnabled, put=__set_m_isCharacterWrappingEnabled))  m_isCharacterWrappingEnabled;

constexpr void __set_m_isCharacterWrappingEnabled(bool value) ;

constexpr bool __get_m_isCharacterWrappingEnabled() const;

 bool __declspec(property(get=__get_m_isNonBreakingSpace, put=__set_m_isNonBreakingSpace))  m_isNonBreakingSpace;

constexpr void __set_m_isNonBreakingSpace(bool value) ;

constexpr bool __get_m_isNonBreakingSpace() const;

 bool __declspec(property(get=__get_m_isIgnoringAlignment, put=__set_m_isIgnoringAlignment))  m_isIgnoringAlignment;

constexpr void __set_m_isIgnoringAlignment(bool value) ;

constexpr bool __get_m_isIgnoringAlignment() const;

 float_t __declspec(property(get=__get_m_wordWrappingRatios, put=__set_m_wordWrappingRatios))  m_wordWrappingRatios;

constexpr void __set_m_wordWrappingRatios(float_t value) ;

constexpr float_t __get_m_wordWrappingRatios() const;

 TMPro::TextOverflowModes __declspec(property(get=__get_m_overflowMode, put=__set_m_overflowMode))  m_overflowMode;

constexpr void __set_m_overflowMode(TMPro::TextOverflowModes value) ;

constexpr TMPro::TextOverflowModes __get_m_overflowMode() const;

 int32_t __declspec(property(get=__get_m_firstOverflowCharacterIndex, put=__set_m_firstOverflowCharacterIndex))  m_firstOverflowCharacterIndex;

constexpr void __set_m_firstOverflowCharacterIndex(int32_t value) ;

constexpr int32_t __get_m_firstOverflowCharacterIndex() const;

 TMPro::TMP_Text __declspec(property(get=__get_m_linkedTextComponent, put=__set_m_linkedTextComponent))  m_linkedTextComponent;

constexpr void __set_m_linkedTextComponent(TMPro::TMP_Text value) ;

constexpr TMPro::TMP_Text __get_m_linkedTextComponent() const;

 TMPro::TMP_Text __declspec(property(get=__get_parentLinkedComponent, put=__set_parentLinkedComponent))  parentLinkedComponent;

constexpr void __set_parentLinkedComponent(TMPro::TMP_Text value) ;

constexpr TMPro::TMP_Text __get_parentLinkedComponent() const;

 bool __declspec(property(get=__get_m_isTextTruncated, put=__set_m_isTextTruncated))  m_isTextTruncated;

constexpr void __set_m_isTextTruncated(bool value) ;

constexpr bool __get_m_isTextTruncated() const;

 bool __declspec(property(get=__get_m_enableKerning, put=__set_m_enableKerning))  m_enableKerning;

constexpr void __set_m_enableKerning(bool value) ;

constexpr bool __get_m_enableKerning() const;

 float_t __declspec(property(get=__get_m_GlyphHorizontalAdvanceAdjustment, put=__set_m_GlyphHorizontalAdvanceAdjustment))  m_GlyphHorizontalAdvanceAdjustment;

constexpr void __set_m_GlyphHorizontalAdvanceAdjustment(float_t value) ;

constexpr float_t __get_m_GlyphHorizontalAdvanceAdjustment() const;

 bool __declspec(property(get=__get_m_enableExtraPadding, put=__set_m_enableExtraPadding))  m_enableExtraPadding;

constexpr void __set_m_enableExtraPadding(bool value) ;

constexpr bool __get_m_enableExtraPadding() const;

 bool __declspec(property(get=__get_checkPaddingRequired, put=__set_checkPaddingRequired))  checkPaddingRequired;

constexpr void __set_checkPaddingRequired(bool value) ;

constexpr bool __get_checkPaddingRequired() const;

 bool __declspec(property(get=__get_m_isRichText, put=__set_m_isRichText))  m_isRichText;

constexpr void __set_m_isRichText(bool value) ;

constexpr bool __get_m_isRichText() const;

 bool __declspec(property(get=__get_m_parseCtrlCharacters, put=__set_m_parseCtrlCharacters))  m_parseCtrlCharacters;

constexpr void __set_m_parseCtrlCharacters(bool value) ;

constexpr bool __get_m_parseCtrlCharacters() const;

 bool __declspec(property(get=__get_m_isOverlay, put=__set_m_isOverlay))  m_isOverlay;

constexpr void __set_m_isOverlay(bool value) ;

constexpr bool __get_m_isOverlay() const;

 bool __declspec(property(get=__get_m_isOrthographic, put=__set_m_isOrthographic))  m_isOrthographic;

constexpr void __set_m_isOrthographic(bool value) ;

constexpr bool __get_m_isOrthographic() const;

 bool __declspec(property(get=__get_m_isCullingEnabled, put=__set_m_isCullingEnabled))  m_isCullingEnabled;

constexpr void __set_m_isCullingEnabled(bool value) ;

constexpr bool __get_m_isCullingEnabled() const;

 bool __declspec(property(get=__get_m_isMaskingEnabled, put=__set_m_isMaskingEnabled))  m_isMaskingEnabled;

constexpr void __set_m_isMaskingEnabled(bool value) ;

constexpr bool __get_m_isMaskingEnabled() const;

 bool __declspec(property(get=__get_isMaskUpdateRequired, put=__set_isMaskUpdateRequired))  isMaskUpdateRequired;

constexpr void __set_isMaskUpdateRequired(bool value) ;

constexpr bool __get_isMaskUpdateRequired() const;

 bool __declspec(property(get=__get_m_ignoreCulling, put=__set_m_ignoreCulling))  m_ignoreCulling;

constexpr void __set_m_ignoreCulling(bool value) ;

constexpr bool __get_m_ignoreCulling() const;

 TMPro::TextureMappingOptions __declspec(property(get=__get_m_horizontalMapping, put=__set_m_horizontalMapping))  m_horizontalMapping;

constexpr void __set_m_horizontalMapping(TMPro::TextureMappingOptions value) ;

constexpr TMPro::TextureMappingOptions __get_m_horizontalMapping() const;

 TMPro::TextureMappingOptions __declspec(property(get=__get_m_verticalMapping, put=__set_m_verticalMapping))  m_verticalMapping;

constexpr void __set_m_verticalMapping(TMPro::TextureMappingOptions value) ;

constexpr TMPro::TextureMappingOptions __get_m_verticalMapping() const;

 float_t __declspec(property(get=__get_m_uvLineOffset, put=__set_m_uvLineOffset))  m_uvLineOffset;

constexpr void __set_m_uvLineOffset(float_t value) ;

constexpr float_t __get_m_uvLineOffset() const;

 TMPro::TextRenderFlags __declspec(property(get=__get_m_renderMode, put=__set_m_renderMode))  m_renderMode;

constexpr void __set_m_renderMode(TMPro::TextRenderFlags value) ;

constexpr TMPro::TextRenderFlags __get_m_renderMode() const;

 TMPro::VertexSortingOrder __declspec(property(get=__get_m_geometrySortingOrder, put=__set_m_geometrySortingOrder))  m_geometrySortingOrder;

constexpr void __set_m_geometrySortingOrder(TMPro::VertexSortingOrder value) ;

constexpr TMPro::VertexSortingOrder __get_m_geometrySortingOrder() const;

 bool __declspec(property(get=__get_m_IsTextObjectScaleStatic, put=__set_m_IsTextObjectScaleStatic))  m_IsTextObjectScaleStatic;

constexpr void __set_m_IsTextObjectScaleStatic(bool value) ;

constexpr bool __get_m_IsTextObjectScaleStatic() const;

 bool __declspec(property(get=__get_m_VertexBufferAutoSizeReduction, put=__set_m_VertexBufferAutoSizeReduction))  m_VertexBufferAutoSizeReduction;

constexpr void __set_m_VertexBufferAutoSizeReduction(bool value) ;

constexpr bool __get_m_VertexBufferAutoSizeReduction() const;

 int32_t __declspec(property(get=__get_m_firstVisibleCharacter, put=__set_m_firstVisibleCharacter))  m_firstVisibleCharacter;

constexpr void __set_m_firstVisibleCharacter(int32_t value) ;

constexpr int32_t __get_m_firstVisibleCharacter() const;

 int32_t __declspec(property(get=__get_m_maxVisibleCharacters, put=__set_m_maxVisibleCharacters))  m_maxVisibleCharacters;

constexpr void __set_m_maxVisibleCharacters(int32_t value) ;

constexpr int32_t __get_m_maxVisibleCharacters() const;

 int32_t __declspec(property(get=__get_m_maxVisibleWords, put=__set_m_maxVisibleWords))  m_maxVisibleWords;

constexpr void __set_m_maxVisibleWords(int32_t value) ;

constexpr int32_t __get_m_maxVisibleWords() const;

 int32_t __declspec(property(get=__get_m_maxVisibleLines, put=__set_m_maxVisibleLines))  m_maxVisibleLines;

constexpr void __set_m_maxVisibleLines(int32_t value) ;

constexpr int32_t __get_m_maxVisibleLines() const;

 bool __declspec(property(get=__get_m_useMaxVisibleDescender, put=__set_m_useMaxVisibleDescender))  m_useMaxVisibleDescender;

constexpr void __set_m_useMaxVisibleDescender(bool value) ;

constexpr bool __get_m_useMaxVisibleDescender() const;

 int32_t __declspec(property(get=__get_m_pageToDisplay, put=__set_m_pageToDisplay))  m_pageToDisplay;

constexpr void __set_m_pageToDisplay(int32_t value) ;

constexpr int32_t __get_m_pageToDisplay() const;

 bool __declspec(property(get=__get_m_isNewPage, put=__set_m_isNewPage))  m_isNewPage;

constexpr void __set_m_isNewPage(bool value) ;

constexpr bool __get_m_isNewPage() const;

 UnityEngine::Vector4 __declspec(property(get=__get_m_margin, put=__set_m_margin))  m_margin;

constexpr void __set_m_margin(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_m_margin() const;

 float_t __declspec(property(get=__get_m_marginLeft, put=__set_m_marginLeft))  m_marginLeft;

constexpr void __set_m_marginLeft(float_t value) ;

constexpr float_t __get_m_marginLeft() const;

 float_t __declspec(property(get=__get_m_marginRight, put=__set_m_marginRight))  m_marginRight;

constexpr void __set_m_marginRight(float_t value) ;

constexpr float_t __get_m_marginRight() const;

 float_t __declspec(property(get=__get_m_marginWidth, put=__set_m_marginWidth))  m_marginWidth;

constexpr void __set_m_marginWidth(float_t value) ;

constexpr float_t __get_m_marginWidth() const;

 float_t __declspec(property(get=__get_m_marginHeight, put=__set_m_marginHeight))  m_marginHeight;

constexpr void __set_m_marginHeight(float_t value) ;

constexpr float_t __get_m_marginHeight() const;

 float_t __declspec(property(get=__get_m_width, put=__set_m_width))  m_width;

constexpr void __set_m_width(float_t value) ;

constexpr float_t __get_m_width() const;

 TMPro::TMP_TextInfo __declspec(property(get=__get_m_textInfo, put=__set_m_textInfo))  m_textInfo;

constexpr void __set_m_textInfo(TMPro::TMP_TextInfo value) ;

constexpr TMPro::TMP_TextInfo __get_m_textInfo() const;

 bool __declspec(property(get=__get_m_havePropertiesChanged, put=__set_m_havePropertiesChanged))  m_havePropertiesChanged;

constexpr void __set_m_havePropertiesChanged(bool value) ;

constexpr bool __get_m_havePropertiesChanged() const;

 bool __declspec(property(get=__get_m_isUsingLegacyAnimationComponent, put=__set_m_isUsingLegacyAnimationComponent))  m_isUsingLegacyAnimationComponent;

constexpr void __set_m_isUsingLegacyAnimationComponent(bool value) ;

constexpr bool __get_m_isUsingLegacyAnimationComponent() const;

 UnityEngine::Transform __declspec(property(get=__get_m_transform, put=__set_m_transform))  m_transform;

constexpr void __set_m_transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_m_transform() const;

 UnityEngine::RectTransform __declspec(property(get=__get_m_rectTransform, put=__set_m_rectTransform))  m_rectTransform;

constexpr void __set_m_rectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_rectTransform() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_PreviousRectTransformSize, put=__set_m_PreviousRectTransformSize))  m_PreviousRectTransformSize;

constexpr void __set_m_PreviousRectTransformSize(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_PreviousRectTransformSize() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_PreviousPivotPosition, put=__set_m_PreviousPivotPosition))  m_PreviousPivotPosition;

constexpr void __set_m_PreviousPivotPosition(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_PreviousPivotPosition() const;

 bool __declspec(property(get=__get__autoSizeTextContainer_k__BackingField, put=__set__autoSizeTextContainer_k__BackingField))  _autoSizeTextContainer_k__BackingField;

constexpr void __set__autoSizeTextContainer_k__BackingField(bool value) ;

constexpr bool __get__autoSizeTextContainer_k__BackingField() const;

 bool __declspec(property(get=__get_m_autoSizeTextContainer, put=__set_m_autoSizeTextContainer))  m_autoSizeTextContainer;

constexpr void __set_m_autoSizeTextContainer(bool value) ;

constexpr bool __get_m_autoSizeTextContainer() const;

 UnityEngine::Mesh __declspec(property(get=__get_m_mesh, put=__set_m_mesh))  m_mesh;

constexpr void __set_m_mesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get_m_mesh() const;

 bool __declspec(property(get=__get_m_isVolumetricText, put=__set_m_isVolumetricText))  m_isVolumetricText;

constexpr void __set_m_isVolumetricText(bool value) ;

constexpr bool __get_m_isVolumetricText() const;

static System::Func_3<int32_t,::StringW,TMPro::TMP_FontAsset> __declspec(property(get=__get_OnFontAssetRequest, put=__set_OnFontAssetRequest))  OnFontAssetRequest;

static void __set_OnFontAssetRequest(System::Func_3<int32_t,::StringW,TMPro::TMP_FontAsset> value) ;

static System::Func_3<int32_t,::StringW,TMPro::TMP_FontAsset> __get_OnFontAssetRequest() ;

static System::Func_3<int32_t,::StringW,TMPro::TMP_SpriteAsset> __declspec(property(get=__get_OnSpriteAssetRequest, put=__set_OnSpriteAssetRequest))  OnSpriteAssetRequest;

static void __set_OnSpriteAssetRequest(System::Func_3<int32_t,::StringW,TMPro::TMP_SpriteAsset> value) ;

static System::Func_3<int32_t,::StringW,TMPro::TMP_SpriteAsset> __get_OnSpriteAssetRequest() ;

 System::Action_1<TMPro::TMP_TextInfo> __declspec(property(get=__get_OnPreRenderText, put=__set_OnPreRenderText))  OnPreRenderText;

constexpr void __set_OnPreRenderText(System::Action_1<TMPro::TMP_TextInfo> value) ;

constexpr System::Action_1<TMPro::TMP_TextInfo> __get_OnPreRenderText() const;

 TMPro::TMP_SpriteAnimator __declspec(property(get=__get_m_spriteAnimator, put=__set_m_spriteAnimator))  m_spriteAnimator;

constexpr void __set_m_spriteAnimator(TMPro::TMP_SpriteAnimator value) ;

constexpr TMPro::TMP_SpriteAnimator __get_m_spriteAnimator() const;

 float_t __declspec(property(get=__get_m_flexibleHeight, put=__set_m_flexibleHeight))  m_flexibleHeight;

constexpr void __set_m_flexibleHeight(float_t value) ;

constexpr float_t __get_m_flexibleHeight() const;

 float_t __declspec(property(get=__get_m_flexibleWidth, put=__set_m_flexibleWidth))  m_flexibleWidth;

constexpr void __set_m_flexibleWidth(float_t value) ;

constexpr float_t __get_m_flexibleWidth() const;

 float_t __declspec(property(get=__get_m_minWidth, put=__set_m_minWidth))  m_minWidth;

constexpr void __set_m_minWidth(float_t value) ;

constexpr float_t __get_m_minWidth() const;

 float_t __declspec(property(get=__get_m_minHeight, put=__set_m_minHeight))  m_minHeight;

constexpr void __set_m_minHeight(float_t value) ;

constexpr float_t __get_m_minHeight() const;

 float_t __declspec(property(get=__get_m_maxWidth, put=__set_m_maxWidth))  m_maxWidth;

constexpr void __set_m_maxWidth(float_t value) ;

constexpr float_t __get_m_maxWidth() const;

 float_t __declspec(property(get=__get_m_maxHeight, put=__set_m_maxHeight))  m_maxHeight;

constexpr void __set_m_maxHeight(float_t value) ;

constexpr float_t __get_m_maxHeight() const;

 UnityEngine::UI::LayoutElement __declspec(property(get=__get_m_LayoutElement, put=__set_m_LayoutElement))  m_LayoutElement;

constexpr void __set_m_LayoutElement(UnityEngine::UI::LayoutElement value) ;

constexpr UnityEngine::UI::LayoutElement __get_m_LayoutElement() const;

 float_t __declspec(property(get=__get_m_preferredWidth, put=__set_m_preferredWidth))  m_preferredWidth;

constexpr void __set_m_preferredWidth(float_t value) ;

constexpr float_t __get_m_preferredWidth() const;

 float_t __declspec(property(get=__get_m_renderedWidth, put=__set_m_renderedWidth))  m_renderedWidth;

constexpr void __set_m_renderedWidth(float_t value) ;

constexpr float_t __get_m_renderedWidth() const;

 bool __declspec(property(get=__get_m_isPreferredWidthDirty, put=__set_m_isPreferredWidthDirty))  m_isPreferredWidthDirty;

constexpr void __set_m_isPreferredWidthDirty(bool value) ;

constexpr bool __get_m_isPreferredWidthDirty() const;

 float_t __declspec(property(get=__get_m_preferredHeight, put=__set_m_preferredHeight))  m_preferredHeight;

constexpr void __set_m_preferredHeight(float_t value) ;

constexpr float_t __get_m_preferredHeight() const;

 float_t __declspec(property(get=__get_m_renderedHeight, put=__set_m_renderedHeight))  m_renderedHeight;

constexpr void __set_m_renderedHeight(float_t value) ;

constexpr float_t __get_m_renderedHeight() const;

 bool __declspec(property(get=__get_m_isPreferredHeightDirty, put=__set_m_isPreferredHeightDirty))  m_isPreferredHeightDirty;

constexpr void __set_m_isPreferredHeightDirty(bool value) ;

constexpr bool __get_m_isPreferredHeightDirty() const;

 bool __declspec(property(get=__get_m_isCalculatingPreferredValues, put=__set_m_isCalculatingPreferredValues))  m_isCalculatingPreferredValues;

constexpr void __set_m_isCalculatingPreferredValues(bool value) ;

constexpr bool __get_m_isCalculatingPreferredValues() const;

 int32_t __declspec(property(get=__get_m_layoutPriority, put=__set_m_layoutPriority))  m_layoutPriority;

constexpr void __set_m_layoutPriority(int32_t value) ;

constexpr int32_t __get_m_layoutPriority() const;

 bool __declspec(property(get=__get_m_isLayoutDirty, put=__set_m_isLayoutDirty))  m_isLayoutDirty;

constexpr void __set_m_isLayoutDirty(bool value) ;

constexpr bool __get_m_isLayoutDirty() const;

 bool __declspec(property(get=__get_m_isAwake, put=__set_m_isAwake))  m_isAwake;

constexpr void __set_m_isAwake(bool value) ;

constexpr bool __get_m_isAwake() const;

 bool __declspec(property(get=__get_m_isWaitingOnResourceLoad, put=__set_m_isWaitingOnResourceLoad))  m_isWaitingOnResourceLoad;

constexpr void __set_m_isWaitingOnResourceLoad(bool value) ;

constexpr bool __get_m_isWaitingOnResourceLoad() const;

 TMPro::TMPro__TMP_Text__TextInputSources __declspec(property(get=__get_m_inputSource, put=__set_m_inputSource))  m_inputSource;

constexpr void __set_m_inputSource(TMPro::TMPro__TMP_Text__TextInputSources value) ;

constexpr TMPro::TMPro__TMP_Text__TextInputSources __get_m_inputSource() const;

 float_t __declspec(property(get=__get_m_fontScaleMultiplier, put=__set_m_fontScaleMultiplier))  m_fontScaleMultiplier;

constexpr void __set_m_fontScaleMultiplier(float_t value) ;

constexpr float_t __get_m_fontScaleMultiplier() const;

static ::ArrayW<char16_t> __declspec(property(get=__get_m_htmlTag, put=__set_m_htmlTag))  m_htmlTag;

static void __set_m_htmlTag(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_m_htmlTag() ;

static ::ArrayW<TMPro::RichTextTagAttribute> __declspec(property(get=__get_m_xmlAttribute, put=__set_m_xmlAttribute))  m_xmlAttribute;

static void __set_m_xmlAttribute(::ArrayW<TMPro::RichTextTagAttribute> value) ;

static ::ArrayW<TMPro::RichTextTagAttribute> __get_m_xmlAttribute() ;

static ::ArrayW<float_t> __declspec(property(get=__get_m_attributeParameterValues, put=__set_m_attributeParameterValues))  m_attributeParameterValues;

static void __set_m_attributeParameterValues(::ArrayW<float_t> value) ;

static ::ArrayW<float_t> __get_m_attributeParameterValues() ;

 float_t __declspec(property(get=__get_tag_LineIndent, put=__set_tag_LineIndent))  tag_LineIndent;

constexpr void __set_tag_LineIndent(float_t value) ;

constexpr float_t __get_tag_LineIndent() const;

 float_t __declspec(property(get=__get_tag_Indent, put=__set_tag_Indent))  tag_Indent;

constexpr void __set_tag_Indent(float_t value) ;

constexpr float_t __get_tag_Indent() const;

 TMPro::TMP_TextProcessingStack_1<float_t> __declspec(property(get=__get_m_indentStack, put=__set_m_indentStack))  m_indentStack;

constexpr void __set_m_indentStack(TMPro::TMP_TextProcessingStack_1<float_t> value) ;

constexpr TMPro::TMP_TextProcessingStack_1<float_t> __get_m_indentStack() const;

 bool __declspec(property(get=__get_tag_NoParsing, put=__set_tag_NoParsing))  tag_NoParsing;

constexpr void __set_tag_NoParsing(bool value) ;

constexpr bool __get_tag_NoParsing() const;

 bool __declspec(property(get=__get_m_isParsingText, put=__set_m_isParsingText))  m_isParsingText;

constexpr void __set_m_isParsingText(bool value) ;

constexpr bool __get_m_isParsingText() const;

 UnityEngine::Matrix4x4 __declspec(property(get=__get_m_FXMatrix, put=__set_m_FXMatrix))  m_FXMatrix;

constexpr void __set_m_FXMatrix(UnityEngine::Matrix4x4 value) ;

constexpr UnityEngine::Matrix4x4 __get_m_FXMatrix() const;

 bool __declspec(property(get=__get_m_isFXMatrixSet, put=__set_m_isFXMatrixSet))  m_isFXMatrixSet;

constexpr void __set_m_isFXMatrixSet(bool value) ;

constexpr bool __get_m_isFXMatrixSet() const;

 ::ArrayW<TMPro::TMPro__TMP_Text__UnicodeChar> __declspec(property(get=__get_m_TextProcessingArray, put=__set_m_TextProcessingArray))  m_TextProcessingArray;

constexpr void __set_m_TextProcessingArray(::ArrayW<TMPro::TMPro__TMP_Text__UnicodeChar> value) ;

constexpr ::ArrayW<TMPro::TMPro__TMP_Text__UnicodeChar> __get_m_TextProcessingArray() const;

 int32_t __declspec(property(get=__get_m_InternalTextProcessingArraySize, put=__set_m_InternalTextProcessingArraySize))  m_InternalTextProcessingArraySize;

constexpr void __set_m_InternalTextProcessingArraySize(int32_t value) ;

constexpr int32_t __get_m_InternalTextProcessingArraySize() const;

 ::ArrayW<TMPro::TMP_CharacterInfo> __declspec(property(get=__get_m_internalCharacterInfo, put=__set_m_internalCharacterInfo))  m_internalCharacterInfo;

constexpr void __set_m_internalCharacterInfo(::ArrayW<TMPro::TMP_CharacterInfo> value) ;

constexpr ::ArrayW<TMPro::TMP_CharacterInfo> __get_m_internalCharacterInfo() const;

 int32_t __declspec(property(get=__get_m_totalCharacterCount, put=__set_m_totalCharacterCount))  m_totalCharacterCount;

constexpr void __set_m_totalCharacterCount(int32_t value) ;

constexpr int32_t __get_m_totalCharacterCount() const;

static TMPro::WordWrapState __declspec(property(get=__get_m_SavedWordWrapState, put=__set_m_SavedWordWrapState))  m_SavedWordWrapState;

static void __set_m_SavedWordWrapState(TMPro::WordWrapState value) ;

static TMPro::WordWrapState __get_m_SavedWordWrapState() ;

static TMPro::WordWrapState __declspec(property(get=__get_m_SavedLineState, put=__set_m_SavedLineState))  m_SavedLineState;

static void __set_m_SavedLineState(TMPro::WordWrapState value) ;

static TMPro::WordWrapState __get_m_SavedLineState() ;

static TMPro::WordWrapState __declspec(property(get=__get_m_SavedEllipsisState, put=__set_m_SavedEllipsisState))  m_SavedEllipsisState;

static void __set_m_SavedEllipsisState(TMPro::WordWrapState value) ;

static TMPro::WordWrapState __get_m_SavedEllipsisState() ;

static TMPro::WordWrapState __declspec(property(get=__get_m_SavedLastValidState, put=__set_m_SavedLastValidState))  m_SavedLastValidState;

static void __set_m_SavedLastValidState(TMPro::WordWrapState value) ;

static TMPro::WordWrapState __get_m_SavedLastValidState() ;

static TMPro::WordWrapState __declspec(property(get=__get_m_SavedSoftLineBreakState, put=__set_m_SavedSoftLineBreakState))  m_SavedSoftLineBreakState;

static void __set_m_SavedSoftLineBreakState(TMPro::WordWrapState value) ;

static TMPro::WordWrapState __get_m_SavedSoftLineBreakState() ;

static TMPro::TMP_TextProcessingStack_1<TMPro::WordWrapState> __declspec(property(get=__get_m_EllipsisInsertionCandidateStack, put=__set_m_EllipsisInsertionCandidateStack))  m_EllipsisInsertionCandidateStack;

static void __set_m_EllipsisInsertionCandidateStack(TMPro::TMP_TextProcessingStack_1<TMPro::WordWrapState> value) ;

static TMPro::TMP_TextProcessingStack_1<TMPro::WordWrapState> __get_m_EllipsisInsertionCandidateStack() ;

 int32_t __declspec(property(get=__get_m_characterCount, put=__set_m_characterCount))  m_characterCount;

constexpr void __set_m_characterCount(int32_t value) ;

constexpr int32_t __get_m_characterCount() const;

 int32_t __declspec(property(get=__get_m_firstCharacterOfLine, put=__set_m_firstCharacterOfLine))  m_firstCharacterOfLine;

constexpr void __set_m_firstCharacterOfLine(int32_t value) ;

constexpr int32_t __get_m_firstCharacterOfLine() const;

 int32_t __declspec(property(get=__get_m_firstVisibleCharacterOfLine, put=__set_m_firstVisibleCharacterOfLine))  m_firstVisibleCharacterOfLine;

constexpr void __set_m_firstVisibleCharacterOfLine(int32_t value) ;

constexpr int32_t __get_m_firstVisibleCharacterOfLine() const;

 int32_t __declspec(property(get=__get_m_lastCharacterOfLine, put=__set_m_lastCharacterOfLine))  m_lastCharacterOfLine;

constexpr void __set_m_lastCharacterOfLine(int32_t value) ;

constexpr int32_t __get_m_lastCharacterOfLine() const;

 int32_t __declspec(property(get=__get_m_lastVisibleCharacterOfLine, put=__set_m_lastVisibleCharacterOfLine))  m_lastVisibleCharacterOfLine;

constexpr void __set_m_lastVisibleCharacterOfLine(int32_t value) ;

constexpr int32_t __get_m_lastVisibleCharacterOfLine() const;

 int32_t __declspec(property(get=__get_m_lineNumber, put=__set_m_lineNumber))  m_lineNumber;

constexpr void __set_m_lineNumber(int32_t value) ;

constexpr int32_t __get_m_lineNumber() const;

 int32_t __declspec(property(get=__get_m_lineVisibleCharacterCount, put=__set_m_lineVisibleCharacterCount))  m_lineVisibleCharacterCount;

constexpr void __set_m_lineVisibleCharacterCount(int32_t value) ;

constexpr int32_t __get_m_lineVisibleCharacterCount() const;

 int32_t __declspec(property(get=__get_m_pageNumber, put=__set_m_pageNumber))  m_pageNumber;

constexpr void __set_m_pageNumber(int32_t value) ;

constexpr int32_t __get_m_pageNumber() const;

 float_t __declspec(property(get=__get_m_PageAscender, put=__set_m_PageAscender))  m_PageAscender;

constexpr void __set_m_PageAscender(float_t value) ;

constexpr float_t __get_m_PageAscender() const;

 float_t __declspec(property(get=__get_m_maxTextAscender, put=__set_m_maxTextAscender))  m_maxTextAscender;

constexpr void __set_m_maxTextAscender(float_t value) ;

constexpr float_t __get_m_maxTextAscender() const;

 float_t __declspec(property(get=__get_m_maxCapHeight, put=__set_m_maxCapHeight))  m_maxCapHeight;

constexpr void __set_m_maxCapHeight(float_t value) ;

constexpr float_t __get_m_maxCapHeight() const;

 float_t __declspec(property(get=__get_m_ElementAscender, put=__set_m_ElementAscender))  m_ElementAscender;

constexpr void __set_m_ElementAscender(float_t value) ;

constexpr float_t __get_m_ElementAscender() const;

 float_t __declspec(property(get=__get_m_ElementDescender, put=__set_m_ElementDescender))  m_ElementDescender;

constexpr void __set_m_ElementDescender(float_t value) ;

constexpr float_t __get_m_ElementDescender() const;

 float_t __declspec(property(get=__get_m_maxLineAscender, put=__set_m_maxLineAscender))  m_maxLineAscender;

constexpr void __set_m_maxLineAscender(float_t value) ;

constexpr float_t __get_m_maxLineAscender() const;

 float_t __declspec(property(get=__get_m_maxLineDescender, put=__set_m_maxLineDescender))  m_maxLineDescender;

constexpr void __set_m_maxLineDescender(float_t value) ;

constexpr float_t __get_m_maxLineDescender() const;

 float_t __declspec(property(get=__get_m_startOfLineAscender, put=__set_m_startOfLineAscender))  m_startOfLineAscender;

constexpr void __set_m_startOfLineAscender(float_t value) ;

constexpr float_t __get_m_startOfLineAscender() const;

 float_t __declspec(property(get=__get_m_startOfLineDescender, put=__set_m_startOfLineDescender))  m_startOfLineDescender;

constexpr void __set_m_startOfLineDescender(float_t value) ;

constexpr float_t __get_m_startOfLineDescender() const;

 float_t __declspec(property(get=__get_m_lineOffset, put=__set_m_lineOffset))  m_lineOffset;

constexpr void __set_m_lineOffset(float_t value) ;

constexpr float_t __get_m_lineOffset() const;

 TMPro::Extents __declspec(property(get=__get_m_meshExtents, put=__set_m_meshExtents))  m_meshExtents;

constexpr void __set_m_meshExtents(TMPro::Extents value) ;

constexpr TMPro::Extents __get_m_meshExtents() const;

 UnityEngine::Color32 __declspec(property(get=__get_m_htmlColor, put=__set_m_htmlColor))  m_htmlColor;

constexpr void __set_m_htmlColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_m_htmlColor() const;

 TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> __declspec(property(get=__get_m_colorStack, put=__set_m_colorStack))  m_colorStack;

constexpr void __set_m_colorStack(TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> value) ;

constexpr TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> __get_m_colorStack() const;

 TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> __declspec(property(get=__get_m_underlineColorStack, put=__set_m_underlineColorStack))  m_underlineColorStack;

constexpr void __set_m_underlineColorStack(TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> value) ;

constexpr TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> __get_m_underlineColorStack() const;

 TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> __declspec(property(get=__get_m_strikethroughColorStack, put=__set_m_strikethroughColorStack))  m_strikethroughColorStack;

constexpr void __set_m_strikethroughColorStack(TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> value) ;

constexpr TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> __get_m_strikethroughColorStack() const;

 TMPro::TMP_TextProcessingStack_1<TMPro::HighlightState> __declspec(property(get=__get_m_HighlightStateStack, put=__set_m_HighlightStateStack))  m_HighlightStateStack;

constexpr void __set_m_HighlightStateStack(TMPro::TMP_TextProcessingStack_1<TMPro::HighlightState> value) ;

constexpr TMPro::TMP_TextProcessingStack_1<TMPro::HighlightState> __get_m_HighlightStateStack() const;

 TMPro::TMP_ColorGradient __declspec(property(get=__get_m_colorGradientPreset, put=__set_m_colorGradientPreset))  m_colorGradientPreset;

constexpr void __set_m_colorGradientPreset(TMPro::TMP_ColorGradient value) ;

constexpr TMPro::TMP_ColorGradient __get_m_colorGradientPreset() const;

 TMPro::TMP_TextProcessingStack_1<TMPro::TMP_ColorGradient> __declspec(property(get=__get_m_colorGradientStack, put=__set_m_colorGradientStack))  m_colorGradientStack;

constexpr void __set_m_colorGradientStack(TMPro::TMP_TextProcessingStack_1<TMPro::TMP_ColorGradient> value) ;

constexpr TMPro::TMP_TextProcessingStack_1<TMPro::TMP_ColorGradient> __get_m_colorGradientStack() const;

 bool __declspec(property(get=__get_m_colorGradientPresetIsTinted, put=__set_m_colorGradientPresetIsTinted))  m_colorGradientPresetIsTinted;

constexpr void __set_m_colorGradientPresetIsTinted(bool value) ;

constexpr bool __get_m_colorGradientPresetIsTinted() const;

 float_t __declspec(property(get=__get_m_tabSpacing, put=__set_m_tabSpacing))  m_tabSpacing;

constexpr void __set_m_tabSpacing(float_t value) ;

constexpr float_t __get_m_tabSpacing() const;

 float_t __declspec(property(get=__get_m_spacing, put=__set_m_spacing))  m_spacing;

constexpr void __set_m_spacing(float_t value) ;

constexpr float_t __get_m_spacing() const;

 ::ArrayW<TMPro::TMP_TextProcessingStack_1<int32_t>> __declspec(property(get=__get_m_TextStyleStacks, put=__set_m_TextStyleStacks))  m_TextStyleStacks;

constexpr void __set_m_TextStyleStacks(::ArrayW<TMPro::TMP_TextProcessingStack_1<int32_t>> value) ;

constexpr ::ArrayW<TMPro::TMP_TextProcessingStack_1<int32_t>> __get_m_TextStyleStacks() const;

 int32_t __declspec(property(get=__get_m_TextStyleStackDepth, put=__set_m_TextStyleStackDepth))  m_TextStyleStackDepth;

constexpr void __set_m_TextStyleStackDepth(int32_t value) ;

constexpr int32_t __get_m_TextStyleStackDepth() const;

 TMPro::TMP_TextProcessingStack_1<int32_t> __declspec(property(get=__get_m_ItalicAngleStack, put=__set_m_ItalicAngleStack))  m_ItalicAngleStack;

constexpr void __set_m_ItalicAngleStack(TMPro::TMP_TextProcessingStack_1<int32_t> value) ;

constexpr TMPro::TMP_TextProcessingStack_1<int32_t> __get_m_ItalicAngleStack() const;

 int32_t __declspec(property(get=__get_m_ItalicAngle, put=__set_m_ItalicAngle))  m_ItalicAngle;

constexpr void __set_m_ItalicAngle(int32_t value) ;

constexpr int32_t __get_m_ItalicAngle() const;

 TMPro::TMP_TextProcessingStack_1<int32_t> __declspec(property(get=__get_m_actionStack, put=__set_m_actionStack))  m_actionStack;

constexpr void __set_m_actionStack(TMPro::TMP_TextProcessingStack_1<int32_t> value) ;

constexpr TMPro::TMP_TextProcessingStack_1<int32_t> __get_m_actionStack() const;

 float_t __declspec(property(get=__get_m_padding, put=__set_m_padding))  m_padding;

constexpr void __set_m_padding(float_t value) ;

constexpr float_t __get_m_padding() const;

 float_t __declspec(property(get=__get_m_baselineOffset, put=__set_m_baselineOffset))  m_baselineOffset;

constexpr void __set_m_baselineOffset(float_t value) ;

constexpr float_t __get_m_baselineOffset() const;

 TMPro::TMP_TextProcessingStack_1<float_t> __declspec(property(get=__get_m_baselineOffsetStack, put=__set_m_baselineOffsetStack))  m_baselineOffsetStack;

constexpr void __set_m_baselineOffsetStack(TMPro::TMP_TextProcessingStack_1<float_t> value) ;

constexpr TMPro::TMP_TextProcessingStack_1<float_t> __get_m_baselineOffsetStack() const;

 float_t __declspec(property(get=__get_m_xAdvance, put=__set_m_xAdvance))  m_xAdvance;

constexpr void __set_m_xAdvance(float_t value) ;

constexpr float_t __get_m_xAdvance() const;

 TMPro::TMP_TextElementType __declspec(property(get=__get_m_textElementType, put=__set_m_textElementType))  m_textElementType;

constexpr void __set_m_textElementType(TMPro::TMP_TextElementType value) ;

constexpr TMPro::TMP_TextElementType __get_m_textElementType() const;

 TMPro::TMP_TextElement __declspec(property(get=__get_m_cached_TextElement, put=__set_m_cached_TextElement))  m_cached_TextElement;

constexpr void __set_m_cached_TextElement(TMPro::TMP_TextElement value) ;

constexpr TMPro::TMP_TextElement __get_m_cached_TextElement() const;

 TMPro::TMPro__TMP_Text__SpecialCharacter __declspec(property(get=__get_m_Ellipsis, put=__set_m_Ellipsis))  m_Ellipsis;

constexpr void __set_m_Ellipsis(TMPro::TMPro__TMP_Text__SpecialCharacter value) ;

constexpr TMPro::TMPro__TMP_Text__SpecialCharacter __get_m_Ellipsis() const;

 TMPro::TMPro__TMP_Text__SpecialCharacter __declspec(property(get=__get_m_Underline, put=__set_m_Underline))  m_Underline;

constexpr void __set_m_Underline(TMPro::TMPro__TMP_Text__SpecialCharacter value) ;

constexpr TMPro::TMPro__TMP_Text__SpecialCharacter __get_m_Underline() const;

 TMPro::TMP_SpriteAsset __declspec(property(get=__get_m_defaultSpriteAsset, put=__set_m_defaultSpriteAsset))  m_defaultSpriteAsset;

constexpr void __set_m_defaultSpriteAsset(TMPro::TMP_SpriteAsset value) ;

constexpr TMPro::TMP_SpriteAsset __get_m_defaultSpriteAsset() const;

 TMPro::TMP_SpriteAsset __declspec(property(get=__get_m_currentSpriteAsset, put=__set_m_currentSpriteAsset))  m_currentSpriteAsset;

constexpr void __set_m_currentSpriteAsset(TMPro::TMP_SpriteAsset value) ;

constexpr TMPro::TMP_SpriteAsset __get_m_currentSpriteAsset() const;

 int32_t __declspec(property(get=__get_m_spriteCount, put=__set_m_spriteCount))  m_spriteCount;

constexpr void __set_m_spriteCount(int32_t value) ;

constexpr int32_t __get_m_spriteCount() const;

 int32_t __declspec(property(get=__get_m_spriteIndex, put=__set_m_spriteIndex))  m_spriteIndex;

constexpr void __set_m_spriteIndex(int32_t value) ;

constexpr int32_t __get_m_spriteIndex() const;

 int32_t __declspec(property(get=__get_m_spriteAnimationID, put=__set_m_spriteAnimationID))  m_spriteAnimationID;

constexpr void __set_m_spriteAnimationID(int32_t value) ;

constexpr int32_t __get_m_spriteAnimationID() const;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_ParseTextMarker, put=__set_k_ParseTextMarker))  k_ParseTextMarker;

static void __set_k_ParseTextMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_ParseTextMarker() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_InsertNewLineMarker, put=__set_k_InsertNewLineMarker))  k_InsertNewLineMarker;

static void __set_k_InsertNewLineMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_k_InsertNewLineMarker() ;

 bool __declspec(property(get=__get_m_ignoreActiveState, put=__set_m_ignoreActiveState))  m_ignoreActiveState;

constexpr void __set_m_ignoreActiveState(bool value) ;

constexpr bool __get_m_ignoreActiveState() const;

 TMPro::TMPro__TMP_Text__TextBackingContainer __declspec(property(get=__get_m_TextBackingArray, put=__set_m_TextBackingArray))  m_TextBackingArray;

constexpr void __set_m_TextBackingArray(TMPro::TMPro__TMP_Text__TextBackingContainer value) ;

constexpr TMPro::TMPro__TMP_Text__TextBackingContainer __get_m_TextBackingArray() const;

 ::ArrayW<System::Decimal> __declspec(property(get=__get_k_Power, put=__set_k_Power))  k_Power;

constexpr void __set_k_Power(::ArrayW<System::Decimal> value) ;

constexpr ::ArrayW<System::Decimal> __get_k_Power() const;

static UnityEngine::Vector2 __declspec(property(get=__get_k_LargePositiveVector2, put=__set_k_LargePositiveVector2))  k_LargePositiveVector2;

static void __set_k_LargePositiveVector2(UnityEngine::Vector2 value) ;

static UnityEngine::Vector2 __get_k_LargePositiveVector2() ;

static UnityEngine::Vector2 __declspec(property(get=__get_k_LargeNegativeVector2, put=__set_k_LargeNegativeVector2))  k_LargeNegativeVector2;

static void __set_k_LargeNegativeVector2(UnityEngine::Vector2 value) ;

static UnityEngine::Vector2 __get_k_LargeNegativeVector2() ;

static float_t __declspec(property(get=__get_k_LargePositiveFloat, put=__set_k_LargePositiveFloat))  k_LargePositiveFloat;

static void __set_k_LargePositiveFloat(float_t value) ;

static float_t __get_k_LargePositiveFloat() ;

static float_t __declspec(property(get=__get_k_LargeNegativeFloat, put=__set_k_LargeNegativeFloat))  k_LargeNegativeFloat;

static void __set_k_LargeNegativeFloat(float_t value) ;

static float_t __get_k_LargeNegativeFloat() ;

static int32_t __declspec(property(get=__get_k_LargePositiveInt, put=__set_k_LargePositiveInt))  k_LargePositiveInt;

static void __set_k_LargePositiveInt(int32_t value) ;

static int32_t __get_k_LargePositiveInt() ;

static int32_t __declspec(property(get=__get_k_LargeNegativeInt, put=__set_k_LargeNegativeInt))  k_LargeNegativeInt;

static void __set_k_LargeNegativeInt(int32_t value) ;

static int32_t __get_k_LargeNegativeInt() ;


// Properties

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

 TMPro::ITextPreprocessor __declspec(property(get=get_textPreprocessor, put=set_textPreprocessor))  textPreprocessor;

 bool __declspec(property(get=get_isRightToLeftText, put=set_isRightToLeftText))  isRightToLeftText;

 TMPro::TMP_FontAsset __declspec(property(get=get_font, put=set_font))  font;

 UnityEngine::Material __declspec(property(get=get_fontSharedMaterial, put=set_fontSharedMaterial))  fontSharedMaterial;

 ::ArrayW<UnityEngine::Material> __declspec(property(get=get_fontSharedMaterials, put=set_fontSharedMaterials))  fontSharedMaterials;

 UnityEngine::Material __declspec(property(get=get_fontMaterial, put=set_fontMaterial))  fontMaterial;

 ::ArrayW<UnityEngine::Material> __declspec(property(get=get_fontMaterials, put=set_fontMaterials))  fontMaterials;

 UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;

 float_t __declspec(property(get=get_alpha, put=set_alpha))  alpha;

 bool __declspec(property(get=get_enableVertexGradient, put=set_enableVertexGradient))  enableVertexGradient;

 TMPro::VertexGradient __declspec(property(get=get_colorGradient, put=set_colorGradient))  colorGradient;

 TMPro::TMP_ColorGradient __declspec(property(get=get_colorGradientPreset, put=set_colorGradientPreset))  colorGradientPreset;

 TMPro::TMP_SpriteAsset __declspec(property(get=get_spriteAsset, put=set_spriteAsset))  spriteAsset;

 bool __declspec(property(get=get_tintAllSprites, put=set_tintAllSprites))  tintAllSprites;

 TMPro::TMP_StyleSheet __declspec(property(get=get_styleSheet, put=set_styleSheet))  styleSheet;

 TMPro::TMP_Style __declspec(property(get=get_textStyle, put=set_textStyle))  textStyle;

 bool __declspec(property(get=get_overrideColorTags, put=set_overrideColorTags))  overrideColorTags;

 UnityEngine::Color32 __declspec(property(get=get_faceColor, put=set_faceColor))  faceColor;

 UnityEngine::Color32 __declspec(property(get=get_outlineColor, put=set_outlineColor))  outlineColor;

 float_t __declspec(property(get=get_outlineWidth, put=set_outlineWidth))  outlineWidth;

 float_t __declspec(property(get=get_fontSize, put=set_fontSize))  fontSize;

 TMPro::FontWeight __declspec(property(get=get_fontWeight, put=set_fontWeight))  fontWeight;

 float_t __declspec(property(get=get_pixelsPerUnit))  pixelsPerUnit;

 bool __declspec(property(get=get_enableAutoSizing, put=set_enableAutoSizing))  enableAutoSizing;

 float_t __declspec(property(get=get_fontSizeMin, put=set_fontSizeMin))  fontSizeMin;

 float_t __declspec(property(get=get_fontSizeMax, put=set_fontSizeMax))  fontSizeMax;

 TMPro::FontStyles __declspec(property(get=get_fontStyle, put=set_fontStyle))  fontStyle;

 bool __declspec(property(get=get_isUsingBold))  isUsingBold;

 TMPro::HorizontalAlignmentOptions __declspec(property(get=get_horizontalAlignment, put=set_horizontalAlignment))  horizontalAlignment;

 TMPro::VerticalAlignmentOptions __declspec(property(get=get_verticalAlignment, put=set_verticalAlignment))  verticalAlignment;

 TMPro::TextAlignmentOptions __declspec(property(get=get_alignment, put=set_alignment))  alignment;

 float_t __declspec(property(get=get_characterSpacing, put=set_characterSpacing))  characterSpacing;

 float_t __declspec(property(get=get_wordSpacing, put=set_wordSpacing))  wordSpacing;

 float_t __declspec(property(get=get_lineSpacing, put=set_lineSpacing))  lineSpacing;

 float_t __declspec(property(get=get_lineSpacingAdjustment, put=set_lineSpacingAdjustment))  lineSpacingAdjustment;

 float_t __declspec(property(get=get_paragraphSpacing, put=set_paragraphSpacing))  paragraphSpacing;

 float_t __declspec(property(get=get_characterWidthAdjustment, put=set_characterWidthAdjustment))  characterWidthAdjustment;

 bool __declspec(property(get=get_enableWordWrapping, put=set_enableWordWrapping))  enableWordWrapping;

 float_t __declspec(property(get=get_wordWrappingRatios, put=set_wordWrappingRatios))  wordWrappingRatios;

 TMPro::TextOverflowModes __declspec(property(get=get_overflowMode, put=set_overflowMode))  overflowMode;

 bool __declspec(property(get=get_isTextOverflowing))  isTextOverflowing;

 int32_t __declspec(property(get=get_firstOverflowCharacterIndex))  firstOverflowCharacterIndex;

 TMPro::TMP_Text __declspec(property(get=get_linkedTextComponent, put=set_linkedTextComponent))  linkedTextComponent;

 bool __declspec(property(get=get_isTextTruncated))  isTextTruncated;

 bool __declspec(property(get=get_enableKerning, put=set_enableKerning))  enableKerning;

 bool __declspec(property(get=get_extraPadding, put=set_extraPadding))  extraPadding;

 bool __declspec(property(get=get_richText, put=set_richText))  richText;

 bool __declspec(property(get=get_parseCtrlCharacters, put=set_parseCtrlCharacters))  parseCtrlCharacters;

 bool __declspec(property(get=get_isOverlay, put=set_isOverlay))  isOverlay;

 bool __declspec(property(get=get_isOrthographic, put=set_isOrthographic))  isOrthographic;

 bool __declspec(property(get=get_enableCulling, put=set_enableCulling))  enableCulling;

 bool __declspec(property(get=get_ignoreVisibility, put=set_ignoreVisibility))  ignoreVisibility;

 TMPro::TextureMappingOptions __declspec(property(get=get_horizontalMapping, put=set_horizontalMapping))  horizontalMapping;

 TMPro::TextureMappingOptions __declspec(property(get=get_verticalMapping, put=set_verticalMapping))  verticalMapping;

 float_t __declspec(property(get=get_mappingUvLineOffset, put=set_mappingUvLineOffset))  mappingUvLineOffset;

 TMPro::TextRenderFlags __declspec(property(get=get_renderMode, put=set_renderMode))  renderMode;

 TMPro::VertexSortingOrder __declspec(property(get=get_geometrySortingOrder, put=set_geometrySortingOrder))  geometrySortingOrder;

 bool __declspec(property(get=get_isTextObjectScaleStatic, put=set_isTextObjectScaleStatic))  isTextObjectScaleStatic;

 bool __declspec(property(get=get_vertexBufferAutoSizeReduction, put=set_vertexBufferAutoSizeReduction))  vertexBufferAutoSizeReduction;

 int32_t __declspec(property(get=get_firstVisibleCharacter, put=set_firstVisibleCharacter))  firstVisibleCharacter;

 int32_t __declspec(property(get=get_maxVisibleCharacters, put=set_maxVisibleCharacters))  maxVisibleCharacters;

 int32_t __declspec(property(get=get_maxVisibleWords, put=set_maxVisibleWords))  maxVisibleWords;

 int32_t __declspec(property(get=get_maxVisibleLines, put=set_maxVisibleLines))  maxVisibleLines;

 bool __declspec(property(get=get_useMaxVisibleDescender, put=set_useMaxVisibleDescender))  useMaxVisibleDescender;

 int32_t __declspec(property(get=get_pageToDisplay, put=set_pageToDisplay))  pageToDisplay;

 UnityEngine::Vector4 __declspec(property(get=get_margin, put=set_margin))  margin;

 TMPro::TMP_TextInfo __declspec(property(get=get_textInfo))  textInfo;

 bool __declspec(property(get=get_havePropertiesChanged, put=set_havePropertiesChanged))  havePropertiesChanged;

 bool __declspec(property(get=get_isUsingLegacyAnimationComponent, put=set_isUsingLegacyAnimationComponent))  isUsingLegacyAnimationComponent;

 UnityEngine::Transform __declspec(property(get=get_transform))  transform;

 UnityEngine::RectTransform __declspec(property(get=get_rectTransform))  rectTransform;

 bool __declspec(property(get=get_autoSizeTextContainer, put=set_autoSizeTextContainer))  autoSizeTextContainer;

 UnityEngine::Mesh __declspec(property(get=get_mesh))  mesh;

 bool __declspec(property(get=get_isVolumetricText, put=set_isVolumetricText))  isVolumetricText;

 UnityEngine::Bounds __declspec(property(get=get_bounds))  bounds;

 UnityEngine::Bounds __declspec(property(get=get_textBounds))  textBounds;

 TMPro::TMP_SpriteAnimator __declspec(property(get=get_spriteAnimator))  spriteAnimator;

 float_t __declspec(property(get=get_flexibleHeight))  flexibleHeight;

 float_t __declspec(property(get=get_flexibleWidth))  flexibleWidth;

 float_t __declspec(property(get=get_minWidth))  minWidth;

 float_t __declspec(property(get=get_minHeight))  minHeight;

 float_t __declspec(property(get=get_maxWidth))  maxWidth;

 float_t __declspec(property(get=get_maxHeight))  maxHeight;

 UnityEngine::UI::LayoutElement __declspec(property(get=get_layoutElement))  layoutElement;

 float_t __declspec(property(get=get_preferredWidth))  preferredWidth;

 float_t __declspec(property(get=get_preferredHeight))  preferredHeight;

 float_t __declspec(property(get=get_renderedWidth))  renderedWidth;

 float_t __declspec(property(get=get_renderedHeight))  renderedHeight;

 int32_t __declspec(property(get=get_layoutPriority))  layoutPriority;


// Methods

/// @brief Method get_text addr 0x2a86674 size 0x14 virtual true final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x2a8675c size 0x98 virtual true final false
 void set_text(::StringW value) ;

/// @brief Method get_textPreprocessor addr 0x2a867f4 size 0x8 virtual false final false
 TMPro::ITextPreprocessor get_textPreprocessor() ;

/// @brief Method set_textPreprocessor addr 0x2a867fc size 0x8 virtual false final false
 void set_textPreprocessor(TMPro::ITextPreprocessor value) ;

/// @brief Method get_isRightToLeftText addr 0x2a86804 size 0x8 virtual false final false
 bool get_isRightToLeftText() ;

/// @brief Method set_isRightToLeftText addr 0x2a8680c size 0x54 virtual false final false
 void set_isRightToLeftText(bool value) ;

/// @brief Method get_font addr 0x2a86860 size 0x8 virtual false final false
 TMPro::TMP_FontAsset get_font() ;

/// @brief Method set_font addr 0x2a86868 size 0xc8 virtual false final false
 void set_font(TMPro::TMP_FontAsset value) ;

/// @brief Method get_fontSharedMaterial addr 0x2a86930 size 0x8 virtual true final false
 UnityEngine::Material get_fontSharedMaterial() ;

/// @brief Method set_fontSharedMaterial addr 0x2a86938 size 0xc8 virtual true final false
 void set_fontSharedMaterial(UnityEngine::Material value) ;

/// @brief Method get_fontSharedMaterials addr 0x2a86a00 size 0x10 virtual true final false
 ::ArrayW<UnityEngine::Material> get_fontSharedMaterials() ;

/// @brief Method set_fontSharedMaterials addr 0x2a86a10 size 0x4c virtual true final false
 void set_fontSharedMaterials(::ArrayW<UnityEngine::Material> value) ;

/// @brief Method get_fontMaterial addr 0x2a86a5c size 0x14 virtual false final false
 UnityEngine::Material get_fontMaterial() ;

/// @brief Method set_fontMaterial addr 0x2a86a70 size 0xfc virtual false final false
 void set_fontMaterial(UnityEngine::Material value) ;

/// @brief Method get_fontMaterials addr 0x2a86b6c size 0x14 virtual true final false
 ::ArrayW<UnityEngine::Material> get_fontMaterials() ;

/// @brief Method set_fontMaterials addr 0x2a86b80 size 0x4c virtual true final false
 void set_fontMaterials(::ArrayW<UnityEngine::Material> value) ;

/// @brief Method get_color addr 0x2a86bcc size 0x14 virtual true final false
 UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x2a86be0 size 0x78 virtual true final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method get_alpha addr 0x2a86c58 size 0x8 virtual false final false
 float_t get_alpha() ;

/// @brief Method set_alpha addr 0x2a86c60 size 0x2c virtual false final false
 void set_alpha(float_t value) ;

/// @brief Method get_enableVertexGradient addr 0x2a86c8c size 0x8 virtual false final false
 bool get_enableVertexGradient() ;

/// @brief Method set_enableVertexGradient addr 0x2a86c94 size 0x30 virtual false final false
 void set_enableVertexGradient(bool value) ;

/// @brief Method get_colorGradient addr 0x2a86cc4 size 0x14 virtual false final false
 TMPro::VertexGradient get_colorGradient() ;

/// @brief Method set_colorGradient addr 0x2a86cd8 size 0x28 virtual false final false
 void set_colorGradient(TMPro::VertexGradient value) ;

/// @brief Method get_colorGradientPreset addr 0x2a86d00 size 0x8 virtual false final false
 TMPro::TMP_ColorGradient get_colorGradientPreset() ;

/// @brief Method set_colorGradientPreset addr 0x2a86d08 size 0x1c virtual false final false
 void set_colorGradientPreset(TMPro::TMP_ColorGradient value) ;

/// @brief Method get_spriteAsset addr 0x2a86d24 size 0x8 virtual false final false
 TMPro::TMP_SpriteAsset get_spriteAsset() ;

/// @brief Method set_spriteAsset addr 0x2a86d2c size 0x3c virtual false final false
 void set_spriteAsset(TMPro::TMP_SpriteAsset value) ;

/// @brief Method get_tintAllSprites addr 0x2a86d68 size 0x8 virtual false final false
 bool get_tintAllSprites() ;

/// @brief Method set_tintAllSprites addr 0x2a86d70 size 0x30 virtual false final false
 void set_tintAllSprites(bool value) ;

/// @brief Method get_styleSheet addr 0x2a86da0 size 0x8 virtual false final false
 TMPro::TMP_StyleSheet get_styleSheet() ;

/// @brief Method set_styleSheet addr 0x2a86da8 size 0x3c virtual false final false
 void set_styleSheet(TMPro::TMP_StyleSheet value) ;

/// @brief Method get_textStyle addr 0x2a86de4 size 0x38 virtual false final false
 TMPro::TMP_Style get_textStyle() ;

/// @brief Method set_textStyle addr 0x2a86f0c size 0x4c virtual false final false
 void set_textStyle(TMPro::TMP_Style value) ;

/// @brief Method get_overrideColorTags addr 0x2a86f58 size 0x8 virtual false final false
 bool get_overrideColorTags() ;

/// @brief Method set_overrideColorTags addr 0x2a86f60 size 0x30 virtual false final false
 void set_overrideColorTags(bool value) ;

/// @brief Method get_faceColor addr 0x2a86f90 size 0x378 virtual false final false
 UnityEngine::Color32 get_faceColor() ;

/// @brief Method set_faceColor addr 0x2a87308 size 0x88 virtual false final false
 void set_faceColor(UnityEngine::Color32 value) ;

/// @brief Method get_outlineColor addr 0x2a87390 size 0x378 virtual false final false
 UnityEngine::Color32 get_outlineColor() ;

/// @brief Method set_outlineColor addr 0x2a87708 size 0x74 virtual false final false
 void set_outlineColor(UnityEngine::Color32 value) ;

/// @brief Method get_outlineWidth addr 0x2a8777c size 0xbc virtual false final false
 float_t get_outlineWidth() ;

/// @brief Method set_outlineWidth addr 0x2a87838 size 0x60 virtual false final false
 void set_outlineWidth(float_t value) ;

/// @brief Method get_fontSize addr 0x2a87898 size 0x8 virtual false final false
 float_t get_fontSize() ;

/// @brief Method set_fontSize addr 0x2a878a0 size 0x60 virtual false final false
 void set_fontSize(float_t value) ;

/// @brief Method get_fontWeight addr 0x2a87900 size 0x8 virtual false final false
 TMPro::FontWeight get_fontWeight() ;

/// @brief Method set_fontWeight addr 0x2a87908 size 0x50 virtual false final false
 void set_fontWeight(TMPro::FontWeight value) ;

/// @brief Method get_pixelsPerUnit addr 0x2a87958 size 0x170 virtual false final false
 float_t get_pixelsPerUnit() ;

/// @brief Method get_enableAutoSizing addr 0x2a87ac8 size 0x8 virtual false final false
 bool get_enableAutoSizing() ;

/// @brief Method set_enableAutoSizing addr 0x2a87ad0 size 0x4c virtual false final false
 void set_enableAutoSizing(bool value) ;

/// @brief Method get_fontSizeMin addr 0x2a87b1c size 0x8 virtual false final false
 float_t get_fontSizeMin() ;

/// @brief Method set_fontSizeMin addr 0x2a87b24 size 0x48 virtual false final false
 void set_fontSizeMin(float_t value) ;

/// @brief Method get_fontSizeMax addr 0x2a87b6c size 0x8 virtual false final false
 float_t get_fontSizeMax() ;

/// @brief Method set_fontSizeMax addr 0x2a87b74 size 0x48 virtual false final false
 void set_fontSizeMax(float_t value) ;

/// @brief Method get_fontStyle addr 0x2a87bbc size 0x8 virtual false final false
 TMPro::FontStyles get_fontStyle() ;

/// @brief Method set_fontStyle addr 0x2a87bc4 size 0x50 virtual false final false
 void set_fontStyle(TMPro::FontStyles value) ;

/// @brief Method get_isUsingBold addr 0x2a87c14 size 0x8 virtual false final false
 bool get_isUsingBold() ;

/// @brief Method get_horizontalAlignment addr 0x2a87c1c size 0x8 virtual false final false
 TMPro::HorizontalAlignmentOptions get_horizontalAlignment() ;

/// @brief Method set_horizontalAlignment addr 0x2a87c24 size 0x2c virtual false final false
 void set_horizontalAlignment(TMPro::HorizontalAlignmentOptions value) ;

/// @brief Method get_verticalAlignment addr 0x2a87c50 size 0x8 virtual false final false
 TMPro::VerticalAlignmentOptions get_verticalAlignment() ;

/// @brief Method set_verticalAlignment addr 0x2a87c58 size 0x2c virtual false final false
 void set_verticalAlignment(TMPro::VerticalAlignmentOptions value) ;

/// @brief Method get_alignment addr 0x2a87c84 size 0x10 virtual false final false
 TMPro::TextAlignmentOptions get_alignment() ;

/// @brief Method set_alignment addr 0x2a87c94 size 0x44 virtual false final false
 void set_alignment(TMPro::TextAlignmentOptions value) ;

/// @brief Method get_characterSpacing addr 0x2a87cd8 size 0x8 virtual false final false
 float_t get_characterSpacing() ;

/// @brief Method set_characterSpacing addr 0x2a87ce0 size 0x50 virtual false final false
 void set_characterSpacing(float_t value) ;

/// @brief Method get_wordSpacing addr 0x2a87d30 size 0x8 virtual false final false
 float_t get_wordSpacing() ;

/// @brief Method set_wordSpacing addr 0x2a87d38 size 0x50 virtual false final false
 void set_wordSpacing(float_t value) ;

/// @brief Method get_lineSpacing addr 0x2a87d88 size 0x8 virtual false final false
 float_t get_lineSpacing() ;

/// @brief Method set_lineSpacing addr 0x2a87d90 size 0x50 virtual false final false
 void set_lineSpacing(float_t value) ;

/// @brief Method get_lineSpacingAdjustment addr 0x2a87de0 size 0x8 virtual false final false
 float_t get_lineSpacingAdjustment() ;

/// @brief Method set_lineSpacingAdjustment addr 0x2a87de8 size 0x50 virtual false final false
 void set_lineSpacingAdjustment(float_t value) ;

/// @brief Method get_paragraphSpacing addr 0x2a87e38 size 0x8 virtual false final false
 float_t get_paragraphSpacing() ;

/// @brief Method set_paragraphSpacing addr 0x2a87e40 size 0x50 virtual false final false
 void set_paragraphSpacing(float_t value) ;

/// @brief Method get_characterWidthAdjustment addr 0x2a87e90 size 0x8 virtual false final false
 float_t get_characterWidthAdjustment() ;

/// @brief Method set_characterWidthAdjustment addr 0x2a87e98 size 0x50 virtual false final false
 void set_characterWidthAdjustment(float_t value) ;

/// @brief Method get_enableWordWrapping addr 0x2a87ee8 size 0x8 virtual false final false
 bool get_enableWordWrapping() ;

/// @brief Method set_enableWordWrapping addr 0x2a87ef0 size 0x54 virtual false final false
 void set_enableWordWrapping(bool value) ;

/// @brief Method get_wordWrappingRatios addr 0x2a87f44 size 0x8 virtual false final false
 float_t get_wordWrappingRatios() ;

/// @brief Method set_wordWrappingRatios addr 0x2a87f4c size 0x50 virtual false final false
 void set_wordWrappingRatios(float_t value) ;

/// @brief Method get_overflowMode addr 0x2a87f9c size 0x8 virtual false final false
 TMPro::TextOverflowModes get_overflowMode() ;

/// @brief Method set_overflowMode addr 0x2a87fa4 size 0x50 virtual false final false
 void set_overflowMode(TMPro::TextOverflowModes value) ;

/// @brief Method get_isTextOverflowing addr 0x2a87ff4 size 0x10 virtual false final false
 bool get_isTextOverflowing() ;

/// @brief Method get_firstOverflowCharacterIndex addr 0x2a88004 size 0x8 virtual false final false
 int32_t get_firstOverflowCharacterIndex() ;

/// @brief Method get_linkedTextComponent addr 0x2a8800c size 0x8 virtual false final false
 TMPro::TMP_Text get_linkedTextComponent() ;

/// @brief Method set_linkedTextComponent addr 0x2a88014 size 0xec virtual false final false
 void set_linkedTextComponent(TMPro::TMP_Text value) ;

/// @brief Method get_isTextTruncated addr 0x2a882f8 size 0x8 virtual false final false
 bool get_isTextTruncated() ;

/// @brief Method get_enableKerning addr 0x2a88300 size 0x8 virtual false final false
 bool get_enableKerning() ;

/// @brief Method set_enableKerning addr 0x2a88308 size 0x54 virtual false final false
 void set_enableKerning(bool value) ;

/// @brief Method get_extraPadding addr 0x2a8835c size 0x8 virtual false final false
 bool get_extraPadding() ;

/// @brief Method set_extraPadding addr 0x2a88364 size 0x54 virtual false final false
 void set_extraPadding(bool value) ;

/// @brief Method get_richText addr 0x2a883b8 size 0x8 virtual false final false
 bool get_richText() ;

/// @brief Method set_richText addr 0x2a883c0 size 0x54 virtual false final false
 void set_richText(bool value) ;

/// @brief Method get_parseCtrlCharacters addr 0x2a88414 size 0x8 virtual false final false
 bool get_parseCtrlCharacters() ;

/// @brief Method set_parseCtrlCharacters addr 0x2a8841c size 0x54 virtual false final false
 void set_parseCtrlCharacters(bool value) ;

/// @brief Method get_isOverlay addr 0x2a88470 size 0x8 virtual false final false
 bool get_isOverlay() ;

/// @brief Method set_isOverlay addr 0x2a88478 size 0x54 virtual false final false
 void set_isOverlay(bool value) ;

/// @brief Method get_isOrthographic addr 0x2a884cc size 0x8 virtual false final false
 bool get_isOrthographic() ;

/// @brief Method set_isOrthographic addr 0x2a884d4 size 0x30 virtual false final false
 void set_isOrthographic(bool value) ;

/// @brief Method get_enableCulling addr 0x2a88504 size 0x8 virtual false final false
 bool get_enableCulling() ;

/// @brief Method set_enableCulling addr 0x2a8850c size 0x3c virtual false final false
 void set_enableCulling(bool value) ;

/// @brief Method get_ignoreVisibility addr 0x2a88548 size 0x8 virtual false final false
 bool get_ignoreVisibility() ;

/// @brief Method set_ignoreVisibility addr 0x2a88550 size 0x20 virtual false final false
 void set_ignoreVisibility(bool value) ;

/// @brief Method get_horizontalMapping addr 0x2a88570 size 0x8 virtual false final false
 TMPro::TextureMappingOptions get_horizontalMapping() ;

/// @brief Method set_horizontalMapping addr 0x2a88578 size 0x2c virtual false final false
 void set_horizontalMapping(TMPro::TextureMappingOptions value) ;

/// @brief Method get_verticalMapping addr 0x2a885a4 size 0x8 virtual false final false
 TMPro::TextureMappingOptions get_verticalMapping() ;

/// @brief Method set_verticalMapping addr 0x2a885ac size 0x2c virtual false final false
 void set_verticalMapping(TMPro::TextureMappingOptions value) ;

/// @brief Method get_mappingUvLineOffset addr 0x2a885d8 size 0x8 virtual false final false
 float_t get_mappingUvLineOffset() ;

/// @brief Method set_mappingUvLineOffset addr 0x2a885e0 size 0x2c virtual false final false
 void set_mappingUvLineOffset(float_t value) ;

/// @brief Method get_renderMode addr 0x2a8860c size 0x8 virtual false final false
 TMPro::TextRenderFlags get_renderMode() ;

/// @brief Method set_renderMode addr 0x2a88614 size 0x1c virtual false final false
 void set_renderMode(TMPro::TextRenderFlags value) ;

/// @brief Method get_geometrySortingOrder addr 0x2a88630 size 0x8 virtual false final false
 TMPro::VertexSortingOrder get_geometrySortingOrder() ;

/// @brief Method set_geometrySortingOrder addr 0x2a88638 size 0x1c virtual false final false
 void set_geometrySortingOrder(TMPro::VertexSortingOrder value) ;

/// @brief Method get_isTextObjectScaleStatic addr 0x2a88654 size 0x8 virtual false final false
 bool get_isTextObjectScaleStatic() ;

/// @brief Method set_isTextObjectScaleStatic addr 0x2a8865c size 0x80 virtual false final false
 void set_isTextObjectScaleStatic(bool value) ;

/// @brief Method get_vertexBufferAutoSizeReduction addr 0x2a886dc size 0x8 virtual false final false
 bool get_vertexBufferAutoSizeReduction() ;

/// @brief Method set_vertexBufferAutoSizeReduction addr 0x2a886e4 size 0x20 virtual false final false
 void set_vertexBufferAutoSizeReduction(bool value) ;

/// @brief Method get_firstVisibleCharacter addr 0x2a88704 size 0x8 virtual false final false
 int32_t get_firstVisibleCharacter() ;

/// @brief Method set_firstVisibleCharacter addr 0x2a8870c size 0x2c virtual false final false
 void set_firstVisibleCharacter(int32_t value) ;

/// @brief Method get_maxVisibleCharacters addr 0x2a88738 size 0x8 virtual false final false
 int32_t get_maxVisibleCharacters() ;

/// @brief Method set_maxVisibleCharacters addr 0x2a88740 size 0x2c virtual false final false
 void set_maxVisibleCharacters(int32_t value) ;

/// @brief Method get_maxVisibleWords addr 0x2a8876c size 0x8 virtual false final false
 int32_t get_maxVisibleWords() ;

/// @brief Method set_maxVisibleWords addr 0x2a88774 size 0x2c virtual false final false
 void set_maxVisibleWords(int32_t value) ;

/// @brief Method get_maxVisibleLines addr 0x2a887a0 size 0x8 virtual false final false
 int32_t get_maxVisibleLines() ;

/// @brief Method set_maxVisibleLines addr 0x2a887a8 size 0x2c virtual false final false
 void set_maxVisibleLines(int32_t value) ;

/// @brief Method get_useMaxVisibleDescender addr 0x2a887d4 size 0x8 virtual false final false
 bool get_useMaxVisibleDescender() ;

/// @brief Method set_useMaxVisibleDescender addr 0x2a887dc size 0x30 virtual false final false
 void set_useMaxVisibleDescender(bool value) ;

/// @brief Method get_pageToDisplay addr 0x2a8880c size 0x8 virtual false final false
 int32_t get_pageToDisplay() ;

/// @brief Method set_pageToDisplay addr 0x2a88814 size 0x2c virtual false final false
 void set_pageToDisplay(int32_t value) ;

/// @brief Method get_margin addr 0x2a88840 size 0x14 virtual true final false
 UnityEngine::Vector4 get_margin() ;

/// @brief Method set_margin addr 0x2a88854 size 0x9c virtual true final false
 void set_margin(UnityEngine::Vector4 value) ;

/// @brief Method get_textInfo addr 0x2a888f0 size 0x8 virtual false final false
 TMPro::TMP_TextInfo get_textInfo() ;

/// @brief Method get_havePropertiesChanged addr 0x2a888f8 size 0x8 virtual false final false
 bool get_havePropertiesChanged() ;

/// @brief Method set_havePropertiesChanged addr 0x2a88900 size 0x28 virtual false final false
 void set_havePropertiesChanged(bool value) ;

/// @brief Method get_isUsingLegacyAnimationComponent addr 0x2a88928 size 0x8 virtual false final false
 bool get_isUsingLegacyAnimationComponent() ;

/// @brief Method set_isUsingLegacyAnimationComponent addr 0x2a88930 size 0xc virtual false final false
 void set_isUsingLegacyAnimationComponent(bool value) ;

/// @brief Method get_transform addr 0x2a8893c size 0x94 virtual false final false
 UnityEngine::Transform get_transform() ;

/// @brief Method get_rectTransform addr 0x2a889d0 size 0x94 virtual false final false
 UnityEngine::RectTransform get_rectTransform() ;

/// @brief Method get_autoSizeTextContainer addr 0x2a88a64 size 0x8 virtual true final false
 bool get_autoSizeTextContainer() ;

/// @brief Method set_autoSizeTextContainer addr 0x2a88a6c size 0xc virtual true final false
 void set_autoSizeTextContainer(bool value) ;

/// @brief Method get_mesh addr 0x2a88a78 size 0x8 virtual true final false
 UnityEngine::Mesh get_mesh() ;

/// @brief Method get_isVolumetricText addr 0x2a88a80 size 0x8 virtual false final false
 bool get_isVolumetricText() ;

/// @brief Method set_isVolumetricText addr 0x2a88a88 size 0x68 virtual false final false
 void set_isVolumetricText(bool value) ;

/// @brief Method get_bounds addr 0x2a88af0 size 0xb0 virtual false final false
 UnityEngine::Bounds get_bounds() ;

/// @brief Method get_textBounds addr 0x2a88ba0 size 0x44 virtual false final false
 UnityEngine::Bounds get_textBounds() ;

/// @brief Method add_OnFontAssetRequest addr 0x2a88d64 size 0xf4 virtual false final false
static void add_OnFontAssetRequest(System::Func_3<int32_t,::StringW,TMPro::TMP_FontAsset> value) ;

/// @brief Method remove_OnFontAssetRequest addr 0x2a88e58 size 0xf4 virtual false final false
static void remove_OnFontAssetRequest(System::Func_3<int32_t,::StringW,TMPro::TMP_FontAsset> value) ;

/// @brief Method add_OnSpriteAssetRequest addr 0x2a88f4c size 0xf4 virtual false final false
static void add_OnSpriteAssetRequest(System::Func_3<int32_t,::StringW,TMPro::TMP_SpriteAsset> value) ;

/// @brief Method remove_OnSpriteAssetRequest addr 0x2a89040 size 0xf4 virtual false final false
static void remove_OnSpriteAssetRequest(System::Func_3<int32_t,::StringW,TMPro::TMP_SpriteAsset> value) ;

/// @brief Method add_OnPreRenderText addr 0x2a89134 size 0xb4 virtual true final false
 void add_OnPreRenderText(System::Action_1<TMPro::TMP_TextInfo> value) ;

/// @brief Method remove_OnPreRenderText addr 0x2a891e8 size 0xb4 virtual true final false
 void remove_OnPreRenderText(System::Action_1<TMPro::TMP_TextInfo> value) ;

/// @brief Method get_spriteAnimator addr 0x2a8929c size 0xec virtual false final false
 TMPro::TMP_SpriteAnimator get_spriteAnimator() ;

/// @brief Method get_flexibleHeight addr 0x2a89388 size 0x8 virtual true final true
 float_t get_flexibleHeight() ;

/// @brief Method get_flexibleWidth addr 0x2a89390 size 0x8 virtual true final true
 float_t get_flexibleWidth() ;

/// @brief Method get_minWidth addr 0x2a89398 size 0x8 virtual true final true
 float_t get_minWidth() ;

/// @brief Method get_minHeight addr 0x2a893a0 size 0x8 virtual true final true
 float_t get_minHeight() ;

/// @brief Method get_maxWidth addr 0x2a893a8 size 0x8 virtual false final false
 float_t get_maxWidth() ;

/// @brief Method get_maxHeight addr 0x2a893b0 size 0x8 virtual false final false
 float_t get_maxHeight() ;

/// @brief Method get_layoutElement addr 0x2a893b8 size 0x94 virtual false final false
 UnityEngine::UI::LayoutElement get_layoutElement() ;

/// @brief Method get_preferredWidth addr 0x2a8944c size 0x18 virtual true final false
 float_t get_preferredWidth() ;

/// @brief Method get_preferredHeight addr 0x2a895a4 size 0x18 virtual true final false
 float_t get_preferredHeight() ;

/// @brief Method get_renderedWidth addr 0x2a89748 size 0x4 virtual true final false
 float_t get_renderedWidth() ;

/// @brief Method get_renderedHeight addr 0x2a89750 size 0x14 virtual true final false
 float_t get_renderedHeight() ;

/// @brief Method get_layoutPriority addr 0x2a89778 size 0x8 virtual true final true
 int32_t get_layoutPriority() ;

/// @brief Method LoadFontAsset addr 0x2a89780 size 0x4 virtual true final false
 void LoadFontAsset() ;

/// @brief Method SetSharedMaterial addr 0x2a89784 size 0x4 virtual true final false
 void SetSharedMaterial(UnityEngine::Material mat) ;

/// @brief Method GetMaterial addr 0x2a89788 size 0x8 virtual true final false
 UnityEngine::Material GetMaterial(UnityEngine::Material mat) ;

/// @brief Method SetFontBaseMaterial addr 0x2a89790 size 0x4 virtual true final false
 void SetFontBaseMaterial(UnityEngine::Material mat) ;

/// @brief Method GetSharedMaterials addr 0x2a89794 size 0x8 virtual true final false
 ::ArrayW<UnityEngine::Material> GetSharedMaterials() ;

/// @brief Method SetSharedMaterials addr 0x2a8979c size 0x4 virtual true final false
 void SetSharedMaterials(::ArrayW<UnityEngine::Material> materials) ;

/// @brief Method GetMaterials addr 0x2a897a0 size 0x8 virtual true final false
 ::ArrayW<UnityEngine::Material> GetMaterials(::ArrayW<UnityEngine::Material> mats) ;

/// @brief Method CreateMaterialInstance addr 0x2a897a8 size 0xc0 virtual true final false
 UnityEngine::Material CreateMaterialInstance(UnityEngine::Material source) ;

/// @brief Method SetVertexColorGradient addr 0x2a89868 size 0xb8 virtual false final false
 void SetVertexColorGradient(TMPro::TMP_ColorGradient gradient) ;

/// @brief Method SetTextSortingOrder addr 0x2a89920 size 0x4 virtual false final false
 void SetTextSortingOrder(TMPro::VertexSortingOrder order) ;

/// @brief Method SetTextSortingOrder addr 0x2a89924 size 0x4 virtual false final false
 void SetTextSortingOrder(::ArrayW<int32_t> order) ;

/// @brief Method SetFaceColor addr 0x2a89928 size 0x4 virtual true final false
 void SetFaceColor(UnityEngine::Color32 color) ;

/// @brief Method SetOutlineColor addr 0x2a8992c size 0x4 virtual true final false
 void SetOutlineColor(UnityEngine::Color32 color) ;

/// @brief Method SetOutlineThickness addr 0x2a89930 size 0x4 virtual true final false
 void SetOutlineThickness(float_t thickness) ;

/// @brief Method SetShaderDepth addr 0x2a89934 size 0x4 virtual true final false
 void SetShaderDepth() ;

/// @brief Method SetCulling addr 0x2a89938 size 0x4 virtual true final false
 void SetCulling() ;

/// @brief Method UpdateCulling addr 0x2a8993c size 0x4 virtual true final false
 void UpdateCulling() ;

/// @brief Method GetPaddingForMaterial addr 0x2a89940 size 0x120 virtual true final false
 float_t GetPaddingForMaterial() ;

/// @brief Method GetPaddingForMaterial addr 0x2a89a60 size 0x100 virtual true final false
 float_t GetPaddingForMaterial(UnityEngine::Material mat) ;

/// @brief Method GetTextContainerLocalCorners addr 0x2a89b60 size 0x8 virtual true final false
 ::ArrayW<UnityEngine::Vector3> GetTextContainerLocalCorners() ;

/// @brief Method ForceMeshUpdate addr 0x2a89b68 size 0x4 virtual true final false
 void ForceMeshUpdate(bool ignoreActiveState, bool forceTextReparsing) ;

/// @brief Method UpdateGeometry addr 0x2a89b6c size 0x4 virtual true final false
 void UpdateGeometry(UnityEngine::Mesh mesh, int32_t index) ;

/// @brief Method UpdateVertexData addr 0x2a89b70 size 0x4 virtual true final false
 void UpdateVertexData(TMPro::TMP_VertexDataUpdateFlags flags) ;

/// @brief Method UpdateVertexData addr 0x2a89b74 size 0x4 virtual true final false
 void UpdateVertexData() ;

/// @brief Method SetVertices addr 0x2a89b78 size 0x4 virtual true final false
 void SetVertices(::ArrayW<UnityEngine::Vector3> vertices) ;

/// @brief Method UpdateMeshPadding addr 0x2a89b7c size 0x4 virtual true final false
 void UpdateMeshPadding() ;

/// @brief Method CrossFadeColor addr 0x2a89b80 size 0x88 virtual true final false
 void CrossFadeColor(UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha) ;

/// @brief Method CrossFadeAlpha addr 0x2a89c08 size 0x54 virtual true final false
 void CrossFadeAlpha(float_t alpha, float_t duration, bool ignoreTimeScale) ;

/// @brief Method InternalCrossFadeColor addr 0x2a89c5c size 0x4 virtual true final false
 void InternalCrossFadeColor(UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha) ;

/// @brief Method InternalCrossFadeAlpha addr 0x2a89c60 size 0x4 virtual true final false
 void InternalCrossFadeAlpha(float_t alpha, float_t duration, bool ignoreTimeScale) ;

/// @brief Method ParseInputText addr 0x2a89c64 size 0x100 virtual false final false
 void ParseInputText() ;

/// @brief Method PopulateTextBackingArray addr 0x2a89d64 size 0x18 virtual false final false
 void PopulateTextBackingArray(::StringW sourceText) ;

/// @brief Method PopulateTextBackingArray addr 0x2a8a7ec size 0xf8 virtual false final false
 void PopulateTextBackingArray(::StringW sourceText, int32_t start, int32_t length) ;

/// @brief Method PopulateTextBackingArray addr 0x2a8a8e4 size 0x128 virtual false final false
 void PopulateTextBackingArray(System::Text::StringBuilder sourceText, int32_t start, int32_t length) ;

/// @brief Method PopulateTextBackingArray addr 0x2a8aa0c size 0x114 virtual false final false
 void PopulateTextBackingArray(::ArrayW<char16_t> sourceText, int32_t start, int32_t length) ;

/// @brief Method PopulateTextProcessingArray addr 0x2a89d7c size 0xa70 virtual false final false
 void PopulateTextProcessingArray() ;

/// @brief Method SetTextInternal addr 0x2a8bdb4 size 0x4c virtual false final false
 void SetTextInternal(::StringW sourceText) ;

/// @brief Method SetText addr 0x2a8be00 size 0x7c virtual false final false
 void SetText(::StringW sourceText, bool syncTextInputBox) ;

/// @brief Method SetText addr 0x2a8be7c size 0x20 virtual false final false
 void SetText(::StringW sourceText, float_t arg0) ;

/// @brief Method SetText addr 0x2a8c15c size 0x1c virtual false final false
 void SetText(::StringW sourceText, float_t arg0, float_t arg1) ;

/// @brief Method SetText addr 0x2a8c178 size 0x18 virtual false final false
 void SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2) ;

/// @brief Method SetText addr 0x2a8c190 size 0x14 virtual false final false
 void SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2, float_t arg3) ;

/// @brief Method SetText addr 0x2a8c1a4 size 0x10 virtual false final false
 void SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2, float_t arg3, float_t arg4) ;

/// @brief Method SetText addr 0x2a8c1b4 size 0xc virtual false final false
 void SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2, float_t arg3, float_t arg4, float_t arg5) ;

/// @brief Method SetText addr 0x2a8c1c0 size 0x8 virtual false final false
 void SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2, float_t arg3, float_t arg4, float_t arg5, float_t arg6) ;

/// @brief Method SetText addr 0x2a8be9c size 0x2c0 virtual false final false
 void SetText(::StringW sourceText, float_t arg0, float_t arg1, float_t arg2, float_t arg3, float_t arg4, float_t arg5, float_t arg6, float_t arg7) ;

/// @brief Method SetText addr 0x2a8c4a4 size 0x44 virtual false final false
 void SetText(System::Text::StringBuilder sourceText) ;

/// @brief Method SetText addr 0x2a8c4e8 size 0x5c virtual false final false
 void SetText(System::Text::StringBuilder sourceText, int32_t start, int32_t length) ;

/// @brief Method SetText addr 0x2a8c544 size 0x18 virtual false final false
 void SetText(::ArrayW<char16_t> sourceText) ;

/// @brief Method SetText addr 0x2a8c5b8 size 0x4 virtual false final false
 void SetText(::ArrayW<char16_t> sourceText, int32_t start, int32_t length) ;

/// @brief Method SetCharArray addr 0x2a8c5bc size 0x18 virtual false final false
 void SetCharArray(::ArrayW<char16_t> sourceText) ;

/// @brief Method SetCharArray addr 0x2a8c55c size 0x5c virtual false final false
 void SetCharArray(::ArrayW<char16_t> sourceText, int32_t start, int32_t length) ;

/// @brief Method GetStyle addr 0x2a86e1c size 0xf0 virtual false final false
 TMPro::TMP_Style GetStyle(int32_t hashCode) ;

/// @brief Method ReplaceOpeningStyleTag addr 0x2a8b1dc size 0x420 virtual false final false
 bool ReplaceOpeningStyleTag(ByRef<TMPro::TMPro__TMP_Text__TextBackingContainer> sourceText, int32_t srcIndex, ByRef<int32_t> srcOffset, ByRef<::ArrayW<TMPro::TMPro__TMP_Text__UnicodeChar>> charBuffer, ByRef<int32_t> writeIndex) ;

/// @brief Method ReplaceOpeningStyleTag addr 0x2a8c9dc size 0x420 virtual false final false
 bool ReplaceOpeningStyleTag(ByRef<::ArrayW<int32_t>> sourceText, int32_t srcIndex, ByRef<int32_t> srcOffset, ByRef<::ArrayW<TMPro::TMPro__TMP_Text__UnicodeChar>> charBuffer, ByRef<int32_t> writeIndex) ;

/// @brief Method ReplaceClosingStyleTag addr 0x2a8b5fc size 0x3f0 virtual false final false
 void ReplaceClosingStyleTag(ByRef<TMPro::TMPro__TMP_Text__TextBackingContainer> sourceText, int32_t srcIndex, ByRef<::ArrayW<TMPro::TMPro__TMP_Text__UnicodeChar>> charBuffer, ByRef<int32_t> writeIndex) ;

/// @brief Method ReplaceClosingStyleTag addr 0x2a8cdfc size 0x3f0 virtual false final false
 void ReplaceClosingStyleTag(ByRef<::ArrayW<int32_t>> sourceText, int32_t srcIndex, ByRef<::ArrayW<TMPro::TMPro__TMP_Text__UnicodeChar>> charBuffer, ByRef<int32_t> writeIndex) ;

/// @brief Method InsertOpeningStyleTag addr 0x2a8ab20 size 0x3d0 virtual false final false
 bool InsertOpeningStyleTag(TMPro::TMP_Style style, int32_t srcIndex, ByRef<::ArrayW<TMPro::TMPro__TMP_Text__UnicodeChar>> charBuffer, ByRef<int32_t> writeIndex) ;

/// @brief Method InsertClosingStyleTag addr 0x2a8b9ec size 0x3c8 virtual false final false
 void InsertClosingStyleTag(ByRef<::ArrayW<TMPro::TMPro__TMP_Text__UnicodeChar>> charBuffer, ByRef<int32_t> writeIndex) ;

/// @brief Method GetMarkupTagHashCode addr 0x2a8c8c0 size 0x11c virtual false final false
 int32_t GetMarkupTagHashCode(::ArrayW<int32_t> tagDefinition, int32_t readIndex) ;

/// @brief Method GetMarkupTagHashCode addr 0x2a8b0d0 size 0x10c virtual false final false
 int32_t GetMarkupTagHashCode(TMPro::TMPro__TMP_Text__TextBackingContainer tagDefinition, int32_t readIndex) ;

/// @brief Method GetStyleHashCode addr 0x2a8d1ec size 0xdc virtual false final false
 int32_t GetStyleHashCode(ByRef<::ArrayW<int32_t>> text, int32_t index, ByRef<int32_t> closeIndex) ;

/// @brief Method GetStyleHashCode addr 0x2a8c5d4 size 0x10c virtual false final false
 int32_t GetStyleHashCode(ByRef<TMPro::TMPro__TMP_Text__TextBackingContainer> text, int32_t index, ByRef<int32_t> closeIndex) ;

/// @brief Method ResizeInternalArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void ResizeInternalArray(ByRef<::ArrayW<T>> array) ;

/// @brief Method ResizeInternalArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void ResizeInternalArray(ByRef<::ArrayW<T>> array, int32_t size) ;

/// @brief Method AddFloatToInternalTextBackingArray addr 0x2a8c1c8 size 0x2dc virtual false final false
 void AddFloatToInternalTextBackingArray(float_t value, int32_t padding, int32_t precision, ByRef<int32_t> writeIndex) ;

/// @brief Method AddIntegerToInternalTextBackingArray addr 0x2a8d2c8 size 0x130 virtual false final false
 void AddIntegerToInternalTextBackingArray(double_t number, int32_t padding, ByRef<int32_t> writeIndex) ;

/// @brief Method InternalTextBackingArrayToString addr 0x2a86688 size 0xd4 virtual false final false
 ::StringW InternalTextBackingArrayToString() ;

/// @brief Method SetArraySizes addr 0x2a8d3f8 size 0x8 virtual true final false
 int32_t SetArraySizes(::ArrayW<TMPro::TMPro__TMP_Text__UnicodeChar> unicodeChars) ;

/// @brief Method GetPreferredValues addr 0x2a8d400 size 0x4c virtual false final false
 UnityEngine::Vector2 GetPreferredValues() ;

/// @brief Method GetPreferredValues addr 0x2a8d44c size 0xac virtual false final false
 UnityEngine::Vector2 GetPreferredValues(float_t width, float_t height) ;

/// @brief Method GetPreferredValues addr 0x2a8d600 size 0x128 virtual false final false
 UnityEngine::Vector2 GetPreferredValues(::StringW text) ;

/// @brief Method GetPreferredValues addr 0x2a8d728 size 0xc4 virtual false final false
 UnityEngine::Vector2 GetPreferredValues(::StringW text, float_t width, float_t height) ;

/// @brief Method GetPreferredWidth addr 0x2a89464 size 0x140 virtual false final false
 float_t GetPreferredWidth() ;

/// @brief Method GetPreferredWidth addr 0x2a8d4f8 size 0x5c virtual false final false
 float_t GetPreferredWidth(UnityEngine::Vector2 margin) ;

/// @brief Method GetPreferredHeight addr 0x2a895bc size 0x18c virtual false final false
 float_t GetPreferredHeight() ;

/// @brief Method GetPreferredHeight addr 0x2a8d554 size 0xac virtual false final false
 float_t GetPreferredHeight(UnityEngine::Vector2 margin) ;

/// @brief Method GetRenderedValues addr 0x2a8d7ec size 0x40 virtual false final false
 UnityEngine::Vector2 GetRenderedValues() ;

/// @brief Method GetRenderedValues addr 0x2a8d82c size 0x44 virtual false final false
 UnityEngine::Vector2 GetRenderedValues(bool onlyVisibleCharacters) ;

/// @brief Method GetRenderedWidth addr 0x2a8974c size 0x4 virtual false final false
 float_t GetRenderedWidth() ;

/// @brief Method GetRenderedWidth addr 0x2a8da4c size 0x8 virtual false final false
 float_t GetRenderedWidth(bool onlyVisibleCharacters) ;

/// @brief Method GetRenderedHeight addr 0x2a89764 size 0x14 virtual false final false
 float_t GetRenderedHeight() ;

/// @brief Method GetRenderedHeight addr 0x2a8da54 size 0x18 virtual false final false
 float_t GetRenderedHeight(bool onlyVisibleCharacters) ;

/// @brief Method CalculatePreferredValues addr 0x2a8da6c size 0x20ac virtual true final false
 UnityEngine::Vector2 CalculatePreferredValues(ByRef<float_t> fontSize, UnityEngine::Vector2 marginSize, bool isTextAutoSizingEnabled, bool isWordWrappingEnabled) ;

/// @brief Method GetCompoundBounds addr 0x2a96140 size 0xc virtual true final false
 UnityEngine::Bounds GetCompoundBounds() ;

/// @brief Method GetCanvasSpaceClippingRect addr 0x2a9614c size 0x8 virtual true final false
 UnityEngine::Rect GetCanvasSpaceClippingRect() ;

/// @brief Method GetTextBounds addr 0x2a88be4 size 0x180 virtual false final false
 UnityEngine::Bounds GetTextBounds() ;

/// @brief Method GetTextBounds addr 0x2a8d870 size 0x1dc virtual false final false
 UnityEngine::Bounds GetTextBounds(bool onlyVisibleCharacters) ;

/// @brief Method AdjustLineOffset addr 0x2a96154 size 0x1b8 virtual false final false
 void AdjustLineOffset(int32_t startIndex, int32_t endIndex, float_t offset) ;

/// @brief Method ResizeLineExtents addr 0x2a9630c size 0x1a8 virtual false final false
 void ResizeLineExtents(int32_t size) ;

/// @brief Method GetTextInfo addr 0x2a964b4 size 0x8 virtual true final false
 TMPro::TMP_TextInfo GetTextInfo(::StringW text) ;

/// @brief Method ComputeMarginSize addr 0x2a964bc size 0x4 virtual true final false
 void ComputeMarginSize() ;

/// @brief Method InsertNewLine addr 0x2a964c0 size 0x4cc virtual false final false
 void InsertNewLine(int32_t i, float_t baseScale, float_t currentElementScale, float_t currentEmScale, float_t glyphAdjustment, float_t boldSpacingAdjustment, float_t characterSpacingAdjustment, float_t width, float_t lineGap, ByRef<bool> isMaxVisibleDescenderSet, ByRef<float_t> maxVisibleDescender) ;

/// @brief Method SaveWordWrappingState addr 0x2a95e80 size 0x2c0 virtual false final false
 void SaveWordWrappingState(ByRef<TMPro::WordWrapState> state, int32_t index, int32_t count) ;

/// @brief Method RestoreWordWrappingState addr 0x2a95b98 size 0x2e8 virtual false final false
 int32_t RestoreWordWrappingState(ByRef<TMPro::WordWrapState> state) ;

/// @brief Method SaveGlyphVertexInfo addr 0x2a9698c size 0x32e0 virtual true final false
 void SaveGlyphVertexInfo(float_t padding, float_t style_padding, UnityEngine::Color32 vertexColor) ;

/// @brief Method SaveSpriteVertexInfo addr 0x2a99c6c size 0x2240 virtual true final false
 void SaveSpriteVertexInfo(UnityEngine::Color32 vertexColor) ;

/// @brief Method FillCharacterVertexBuffers addr 0x2a9beac size 0x6d8 virtual true final false
 void FillCharacterVertexBuffers(int32_t i, int32_t index_X4) ;

/// @brief Method FillCharacterVertexBuffers addr 0x2a9c584 size 0xae4 virtual true final false
 void FillCharacterVertexBuffers(int32_t i, int32_t index_X4, bool isVolumetric) ;

/// @brief Method FillSpriteVertexBuffers addr 0x2a9d068 size 0x6d8 virtual true final false
 void FillSpriteVertexBuffers(int32_t i, int32_t index_X4) ;

/// @brief Method DrawUnderlineMesh addr 0x2a9d740 size 0xdc0 virtual true final false
 void DrawUnderlineMesh(UnityEngine::Vector3 start, UnityEngine::Vector3 end, ByRef<int32_t> index, float_t startScale, float_t endScale, float_t maxScale, float_t sdfScale, UnityEngine::Color32 underlineColor) ;

/// @brief Method DrawTextHighlight addr 0x2a9e6b0 size 0x4d8 virtual true final false
 void DrawTextHighlight(UnityEngine::Vector3 start, UnityEngine::Vector3 end, ByRef<int32_t> index, UnityEngine::Color32 highlightColor) ;

/// @brief Method LoadDefaultSettings addr 0x2a9eb88 size 0x274 virtual false final false
 void LoadDefaultSettings() ;

/// @brief Method GetSpecialCharacters addr 0x2a9edfc size 0x28 virtual false final false
 void GetSpecialCharacters(TMPro::TMP_FontAsset fontAsset) ;

/// @brief Method GetEllipsisSpecialCharacter addr 0x2a9ee24 size 0x244 virtual false final false
 void GetEllipsisSpecialCharacter(TMPro::TMP_FontAsset fontAsset) ;

/// @brief Method GetUnderlineSpecialCharacter addr 0x2a9e500 size 0x150 virtual false final false
 void GetUnderlineSpecialCharacter(TMPro::TMP_FontAsset fontAsset) ;

/// @brief Method ReplaceTagWithCharacter addr 0x2a9f068 size 0x78 virtual false final false
 void ReplaceTagWithCharacter(::ArrayW<int32_t> chars, int32_t insertionIndex, int32_t tagLength, char16_t c) ;

/// @brief Method GetFontAssetForWeight addr 0x2a9f0e0 size 0x78 virtual false final false
 TMPro::TMP_FontAsset GetFontAssetForWeight(int32_t fontWeight) ;

/// @brief Method GetTextElement addr 0x2a9f158 size 0x3e4 virtual false final false
 TMPro::TMP_TextElement GetTextElement(uint32_t unicode, TMPro::TMP_FontAsset fontAsset, TMPro::FontStyles fontStyle, TMPro::FontWeight fontWeight, ByRef<bool> isUsingAlternativeTypeface) ;

/// @brief Method SetActiveSubMeshes addr 0x2a9f53c size 0x4 virtual true final false
 void SetActiveSubMeshes(bool state) ;

/// @brief Method DestroySubMeshObjects addr 0x2a9f540 size 0x4 virtual true final false
 void DestroySubMeshObjects() ;

/// @brief Method ClearMesh addr 0x2a9f544 size 0x4 virtual true final false
 void ClearMesh() ;

/// @brief Method ClearMesh addr 0x2a9f548 size 0x4 virtual true final false
 void ClearMesh(bool uploadGeometry) ;

/// @brief Method GetParsedText addr 0x2a9f54c size 0xf8 virtual true final false
 ::StringW GetParsedText() ;

/// @brief Method IsSelfOrLinkedAncestor addr 0x2a88218 size 0xe0 virtual false final false
 bool IsSelfOrLinkedAncestor(TMPro::TMP_Text targetTextComponent) ;

/// @brief Method ReleaseLinkedTextComponent addr 0x2a88100 size 0x118 virtual false final false
 void ReleaseLinkedTextComponent(TMPro::TMP_Text targetTextComponent) ;

/// @brief Method PackUV addr 0x2a9e650 size 0x60 virtual false final false
 UnityEngine::Vector2 PackUV(float_t x, float_t y, float_t scale) ;

/// @brief Method PackUV addr 0x2a9f644 size 0x60 virtual false final false
 float_t PackUV(float_t x, float_t y) ;

/// @brief Method InternalUpdate addr 0x2a9f6a4 size 0x4 virtual true final false
 void InternalUpdate() ;

/// @brief Method HexToInt addr 0x2a9f6a8 size 0x2c virtual false final false
 int32_t HexToInt(char16_t hex) ;

/// @brief Method GetUTF16 addr 0x2a9f6d4 size 0xa8 virtual false final false
 int32_t GetUTF16(::StringW text, int32_t i) ;

/// @brief Method GetUTF16 addr 0x2a8c6e0 size 0xa8 virtual false final false
 int32_t GetUTF16(::ArrayW<int32_t> text, int32_t i) ;

/// @brief Method GetUTF16 addr 0x2a9f77c size 0xa8 virtual false final false
 int32_t GetUTF16(::ArrayW<uint32_t> text, int32_t i) ;

/// @brief Method GetUTF16 addr 0x2a9f824 size 0xa8 virtual false final false
 int32_t GetUTF16(System::Text::StringBuilder text, int32_t i) ;

/// @brief Method GetUTF16 addr 0x2a8aef0 size 0xa8 virtual false final false
 int32_t GetUTF16(TMPro::TMPro__TMP_Text__TextBackingContainer text, int32_t i) ;

/// @brief Method GetUTF32 addr 0x2a9f8cc size 0x138 virtual false final false
 int32_t GetUTF32(::StringW text, int32_t i) ;

/// @brief Method GetUTF32 addr 0x2a8c788 size 0x138 virtual false final false
 int32_t GetUTF32(::ArrayW<int32_t> text, int32_t i) ;

/// @brief Method GetUTF32 addr 0x2a9fa04 size 0x138 virtual false final false
 int32_t GetUTF32(::ArrayW<uint32_t> text, int32_t i) ;

/// @brief Method GetUTF32 addr 0x2a9fb3c size 0x138 virtual false final false
 int32_t GetUTF32(System::Text::StringBuilder text, int32_t i) ;

/// @brief Method GetUTF32 addr 0x2a8af98 size 0x138 virtual false final false
 int32_t GetUTF32(TMPro::TMPro__TMP_Text__TextBackingContainer text, int32_t i) ;

/// @brief Method HexCharsToColor addr 0x2a9fc74 size 0x414 virtual false final false
 UnityEngine::Color32 HexCharsToColor(::ArrayW<char16_t> hexChars, int32_t tagCount) ;

/// @brief Method HexCharsToColor addr 0x2aa0088 size 0x24c virtual false final false
 UnityEngine::Color32 HexCharsToColor(::ArrayW<char16_t> hexChars, int32_t startIndex, int32_t length) ;

/// @brief Method GetAttributeParameters addr 0x2aa02d4 size 0xac virtual false final false
 int32_t GetAttributeParameters(::ArrayW<char16_t> chars, int32_t startIndex, int32_t length, ByRef<::ArrayW<float_t>> parameters) ;

/// @brief Method ConvertToFloat addr 0x2aa0504 size 0x18 virtual false final false
 float_t ConvertToFloat(::ArrayW<char16_t> chars, int32_t startIndex, int32_t length) ;

/// @brief Method ConvertToFloat addr 0x2aa0380 size 0x184 virtual false final false
 float_t ConvertToFloat(::ArrayW<char16_t> chars, int32_t startIndex, int32_t length, ByRef<int32_t> lastIndex) ;

/// @brief Method ValidateHtmlTag addr 0x2a8fb18 size 0x6080 virtual false final false
 bool ValidateHtmlTag(::ArrayW<TMPro::TMPro__TMP_Text__UnicodeChar> chars, int32_t startIndex, ByRef<int32_t> endIndex) ;

static TMPro::TMP_Text New_ctor() ;

/// @brief Method .ctor addr 0x2aa051c size 0xd30 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_Text__TextInputSources, "TMPro", "TMP_Text/TextInputSources");
NEED_NO_BOX(TMPro::TMP_Text);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Text, "TMPro", "TMP_Text");
NEED_NO_BOX(TMPro::TMPro__TMP_Text____c);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_Text____c, "TMPro", "TMP_Text/<>c");
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_Text__CharacterSubstitution, "TMPro", "TMP_Text/CharacterSubstitution");
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_Text__SpecialCharacter, "TMPro", "TMP_Text/SpecialCharacter");
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_Text__TextBackingContainer, "TMPro", "TMP_Text/TextBackingContainer");
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_Text__UnicodeChar, "TMPro", "TMP_Text/UnicodeChar");
