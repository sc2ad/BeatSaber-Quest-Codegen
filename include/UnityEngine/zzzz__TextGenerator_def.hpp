#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
struct UILineInfo;
}
namespace UnityEngine {
struct TextGenerationError;
}
namespace UnityEngine {
struct UICharInfo;
}
namespace UnityEngine {
struct HorizontalWrapMode;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct TextGenerationSettings;
}
namespace UnityEngine {
struct VerticalWrapMode;
}
namespace UnityEngine {
struct UIVertex;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine {
class TextGenerator;
}
// Type: UnityEngine::TextGenerator
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15783))
// CS Name: UnityEngine.TextGenerator
class CORDL_TYPE TextGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~TextGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextGenerator", modifiers: " const&", def_value: None }]
constexpr TextGenerator(TextGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextGenerator", modifiers: "&&", def_value: None }]
constexpr TextGenerator(TextGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextGenerator& operator=(TextGenerator&& o) noexcept = default;
  constexpr TextGenerator& operator=(TextGenerator const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;

 ::StringW __declspec(property(get=__get_m_LastString, put=__set_m_LastString))  m_LastString;

constexpr void __set_m_LastString(::StringW value) ;

constexpr ::StringW __get_m_LastString() const;

 ::UnityEngine::TextGenerationSettings __declspec(property(get=__get_m_LastSettings, put=__set_m_LastSettings))  m_LastSettings;

constexpr void __set_m_LastSettings(::UnityEngine::TextGenerationSettings value) ;

constexpr ::UnityEngine::TextGenerationSettings __get_m_LastSettings() const;

 bool __declspec(property(get=__get_m_HasGenerated, put=__set_m_HasGenerated))  m_HasGenerated;

constexpr void __set_m_HasGenerated(bool value) ;

constexpr bool __get_m_HasGenerated() const;

 ::UnityEngine::TextGenerationError __declspec(property(get=__get_m_LastValid, put=__set_m_LastValid))  m_LastValid;

constexpr void __set_m_LastValid(::UnityEngine::TextGenerationError value) ;

constexpr ::UnityEngine::TextGenerationError __get_m_LastValid() const;

 ::System::Collections::Generic::List_1<::UnityEngine::UIVertex> __declspec(property(get=__get_m_Verts, put=__set_m_Verts))  m_Verts;

constexpr void __set_m_Verts(::System::Collections::Generic::List_1<::UnityEngine::UIVertex> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIVertex> __get_m_Verts() const;

 ::System::Collections::Generic::List_1<::UnityEngine::UICharInfo> __declspec(property(get=__get_m_Characters, put=__set_m_Characters))  m_Characters;

constexpr void __set_m_Characters(::System::Collections::Generic::List_1<::UnityEngine::UICharInfo> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UICharInfo> __get_m_Characters() const;

 ::System::Collections::Generic::List_1<::UnityEngine::UILineInfo> __declspec(property(get=__get_m_Lines, put=__set_m_Lines))  m_Lines;

constexpr void __set_m_Lines(::System::Collections::Generic::List_1<::UnityEngine::UILineInfo> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UILineInfo> __get_m_Lines() const;

 bool __declspec(property(get=__get_m_CachedVerts, put=__set_m_CachedVerts))  m_CachedVerts;

constexpr void __set_m_CachedVerts(bool value) ;

constexpr bool __get_m_CachedVerts() const;

 bool __declspec(property(get=__get_m_CachedCharacters, put=__set_m_CachedCharacters))  m_CachedCharacters;

constexpr void __set_m_CachedCharacters(bool value) ;

constexpr bool __get_m_CachedCharacters() const;

 bool __declspec(property(get=__get_m_CachedLines, put=__set_m_CachedLines))  m_CachedLines;

constexpr void __set_m_CachedLines(bool value) ;

constexpr bool __get_m_CachedLines() const;


// Properties

 int32_t __declspec(property(get=get_characterCountVisible))  characterCountVisible;

 ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex> __declspec(property(get=get_verts))  verts;

 ::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo> __declspec(property(get=get_characters))  characters;

 ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo> __declspec(property(get=get_lines))  lines;

 ::UnityEngine::Rect __declspec(property(get=get_rectExtents))  rectExtents;

 int32_t __declspec(property(get=get_characterCount))  characterCount;

 int32_t __declspec(property(get=get_lineCount))  lineCount;


// Methods

// Ctor Parameters []
explicit TextGenerator() ;

/// @brief Method .ctor addr 0x2bd4d18 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "initialCapacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit TextGenerator(int32_t initialCapacity) ;

/// @brief Method .ctor addr 0x2bd4d20 size 0x14c virtual false final false
 void _ctor(int32_t initialCapacity) ;

/// @brief Method Finalize addr 0x2bd4e94 size 0x110 virtual true final false
 void Finalize() ;

/// @brief Method System.IDisposable.Dispose addr 0x2bd4fa4 size 0xa0 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method get_characterCountVisible addr 0x2bd5080 size 0x44 virtual false final false
 int32_t get_characterCountVisible() ;

/// @brief Method ValidatedSettings addr 0x2bd5100 size 0x2b8 virtual false final false
 ::UnityEngine::TextGenerationSettings ValidatedSettings(::UnityEngine::TextGenerationSettings settings) ;

/// @brief Method Invalidate addr 0x2bd53f4 size 0x8 virtual false final false
 void Invalidate() ;

/// @brief Method GetCharacters addr 0x2bd53fc size 0x44 virtual false final false
 void GetCharacters(::System::Collections::Generic::List_1<::UnityEngine::UICharInfo> characters) ;

/// @brief Method GetLines addr 0x2bd5484 size 0x44 virtual false final false
 void GetLines(::System::Collections::Generic::List_1<::UnityEngine::UILineInfo> lines) ;

/// @brief Method GetVertices addr 0x2bd550c size 0x44 virtual false final false
 void GetVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex> vertices) ;

/// @brief Method GetPreferredWidth addr 0x2bd5594 size 0x74 virtual false final false
 float_t GetPreferredWidth(::StringW str, ::UnityEngine::TextGenerationSettings settings) ;

/// @brief Method GetPreferredHeight addr 0x2bd56b0 size 0x70 virtual false final false
 float_t GetPreferredHeight(::StringW str, ::UnityEngine::TextGenerationSettings settings) ;

/// @brief Method PopulateWithErrors addr 0x2bd5720 size 0x1b0 virtual false final false
 bool PopulateWithErrors(::StringW str, ::UnityEngine::TextGenerationSettings settings, ::UnityEngine::GameObject context) ;

/// @brief Method Populate addr 0x2bd5608 size 0x50 virtual false final false
 bool Populate(::StringW str, ::UnityEngine::TextGenerationSettings settings) ;

/// @brief Method PopulateWithError addr 0x2bd58d0 size 0x90 virtual false final false
 ::UnityEngine::TextGenerationError PopulateWithError(::StringW str, ::UnityEngine::TextGenerationSettings settings) ;

/// @brief Method PopulateAlways addr 0x2bd5960 size 0x108 virtual false final false
 ::UnityEngine::TextGenerationError PopulateAlways(::StringW str, ::UnityEngine::TextGenerationSettings settings) ;

/// @brief Method get_verts addr 0x2bd5c14 size 0x5c virtual false final false
 ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex> get_verts() ;

/// @brief Method get_characters addr 0x2bd5c70 size 0x5c virtual false final false
 ::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo> get_characters() ;

/// @brief Method get_lines addr 0x2bd5ccc size 0x5c virtual false final false
 ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo> get_lines() ;

/// @brief Method get_rectExtents addr 0x2bd5658 size 0x58 virtual false final false
 ::UnityEngine::Rect get_rectExtents() ;

/// @brief Method get_characterCount addr 0x2bd50c4 size 0x3c virtual false final false
 int32_t get_characterCount() ;

/// @brief Method get_lineCount addr 0x2bd5d6c size 0x3c virtual false final false
 int32_t get_lineCount() ;

/// @brief Method Internal_Create addr 0x2bd4e6c size 0x28 virtual false final false
static ::cordl_internals::intptr_t Internal_Create() ;

/// @brief Method Internal_Destroy addr 0x2bd5044 size 0x3c virtual false final false
static void Internal_Destroy(::cordl_internals::intptr_t ptr) ;

/// @brief Method Populate_Internal addr 0x2bd5da8 size 0x14c virtual false final false
 bool Populate_Internal(::StringW str, ::UnityEngine::Font font, ::UnityEngine::Color color, int32_t fontSize, float_t scaleFactor, float_t lineSpacing, ::UnityEngine::FontStyle style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, int32_t verticalOverFlow, int32_t horizontalOverflow, bool updateBounds, ::UnityEngine::TextAnchor anchor, float_t extentsX, float_t extentsY, float_t pivotX, float_t pivotY, bool generateOutOfBounds, bool alignByGeometry, ByRef<uint32_t> error) ;

/// @brief Method Populate_Internal addr 0x2bd5a68 size 0x1ac virtual false final false
 bool Populate_Internal(::StringW str, ::UnityEngine::Font font, ::UnityEngine::Color color, int32_t fontSize, float_t scaleFactor, float_t lineSpacing, ::UnityEngine::FontStyle style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, ::UnityEngine::VerticalWrapMode verticalOverFlow, ::UnityEngine::HorizontalWrapMode horizontalOverflow, bool updateBounds, ::UnityEngine::TextAnchor anchor, ::UnityEngine::Vector2 extents, ::UnityEngine::Vector2 pivot, bool generateOutOfBounds, bool alignByGeometry, ByRef<::UnityEngine::TextGenerationError> error) ;

/// @brief Method GetVerticesInternal addr 0x2bd5550 size 0x44 virtual false final false
 void GetVerticesInternal(::bs_hook::Il2CppWrapperType vertices) ;

/// @brief Method GetCharactersInternal addr 0x2bd5440 size 0x44 virtual false final false
 void GetCharactersInternal(::bs_hook::Il2CppWrapperType characters) ;

/// @brief Method GetLinesInternal addr 0x2bd54c8 size 0x44 virtual false final false
 void GetLinesInternal(::bs_hook::Il2CppWrapperType lines) ;

/// @brief Method get_rectExtents_Injected addr 0x2bd5d28 size 0x44 virtual false final false
 void get_rectExtents_Injected(ByRef<::UnityEngine::Rect> ret) ;

/// @brief Method Populate_Internal_Injected addr 0x2bd5ef4 size 0x130 virtual false final false
 bool Populate_Internal_Injected(::StringW str, ::UnityEngine::Font font, ByRef<::UnityEngine::Color> color, int32_t fontSize, float_t scaleFactor, float_t lineSpacing, ::UnityEngine::FontStyle style, bool richText, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, int32_t verticalOverFlow, int32_t horizontalOverflow, bool updateBounds, ::UnityEngine::TextAnchor anchor, float_t extentsX, float_t extentsY, float_t pivotX, float_t pivotY, bool generateOutOfBounds, bool alignByGeometry, ByRef<uint32_t> error) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::TextGenerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextGenerator, "UnityEngine", "TextGenerator");
