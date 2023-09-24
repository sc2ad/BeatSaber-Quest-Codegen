#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct UnityEngine__TextEditor__DblClickSnapping;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct UnityEngine__TextEditor__TextEditOp;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct UnityEngine__TextEditor__CharacterType;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct UnityEngine__TextEditor__Direction;
}
// Forward declare root types
namespace UnityEngine {
struct UnityEngine__TextEditor__CharacterType;
}
namespace UnityEngine {
struct UnityEngine__TextEditor__DblClickSnapping;
}
namespace UnityEngine {
struct UnityEngine__TextEditor__Direction;
}
namespace UnityEngine {
struct UnityEngine__TextEditor__TextEditOp;
}
namespace UnityEngine {
class TextEditor;
}
// Type: ::DblClickSnapping
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14772))
// CS Name: UnityEngine.TextEditor::DblClickSnapping
struct CORDL_TYPE UnityEngine__TextEditor__DblClickSnapping : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr UnityEngine__TextEditor__DblClickSnapping(uint8_t value__) noexcept;


                    constexpr UnityEngine__TextEditor__DblClickSnapping(UnityEngine__TextEditor__DblClickSnapping const&) = default;
                    constexpr UnityEngine__TextEditor__DblClickSnapping(UnityEngine__TextEditor__DblClickSnapping&&) = default;
                    constexpr UnityEngine__TextEditor__DblClickSnapping& operator=(UnityEngine__TextEditor__DblClickSnapping const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__TextEditor__DblClickSnapping& operator=(UnityEngine__TextEditor__DblClickSnapping&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__TextEditor__DblClickSnapping(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__TextEditor__DblClickSnapping_Unwrapped : uint8_t {
__WORDS = 0u,
__PARAGRAPHS = 1u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__TextEditor__DblClickSnapping_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__TextEditor__DblClickSnapping_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint8_t;


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field WORDS offset 0
static UnityEngine::UnityEngine__TextEditor__DblClickSnapping const WORDS;

/// @brief Field PARAGRAPHS offset 0
static UnityEngine::UnityEngine__TextEditor__DblClickSnapping const PARAGRAPHS;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::CharacterType
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14773))
// CS Name: UnityEngine.TextEditor::CharacterType
struct CORDL_TYPE UnityEngine__TextEditor__CharacterType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__TextEditor__CharacterType(int32_t value__) noexcept;


                    constexpr UnityEngine__TextEditor__CharacterType(UnityEngine__TextEditor__CharacterType const&) = default;
                    constexpr UnityEngine__TextEditor__CharacterType(UnityEngine__TextEditor__CharacterType&&) = default;
                    constexpr UnityEngine__TextEditor__CharacterType& operator=(UnityEngine__TextEditor__CharacterType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__TextEditor__CharacterType& operator=(UnityEngine__TextEditor__CharacterType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__TextEditor__CharacterType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__TextEditor__CharacterType_Unwrapped : int32_t {
__LetterLike = 0,
__Symbol = 1,
__Symbol2 = 2,
__WhiteSpace = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__TextEditor__CharacterType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__TextEditor__CharacterType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LetterLike offset 0
static UnityEngine::UnityEngine__TextEditor__CharacterType const LetterLike;

/// @brief Field Symbol offset 0
static UnityEngine::UnityEngine__TextEditor__CharacterType const Symbol;

/// @brief Field Symbol2 offset 0
static UnityEngine::UnityEngine__TextEditor__CharacterType const Symbol2;

/// @brief Field WhiteSpace offset 0
static UnityEngine::UnityEngine__TextEditor__CharacterType const WhiteSpace;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::Direction
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14774))
// CS Name: UnityEngine.TextEditor::Direction
struct CORDL_TYPE UnityEngine__TextEditor__Direction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__TextEditor__Direction(int32_t value__) noexcept;


                    constexpr UnityEngine__TextEditor__Direction(UnityEngine__TextEditor__Direction const&) = default;
                    constexpr UnityEngine__TextEditor__Direction(UnityEngine__TextEditor__Direction&&) = default;
                    constexpr UnityEngine__TextEditor__Direction& operator=(UnityEngine__TextEditor__Direction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__TextEditor__Direction& operator=(UnityEngine__TextEditor__Direction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__TextEditor__Direction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__TextEditor__Direction_Unwrapped : int32_t {
__Forward = 0,
__Backward = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__TextEditor__Direction_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__TextEditor__Direction_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Forward offset 0
static UnityEngine::UnityEngine__TextEditor__Direction const Forward;

/// @brief Field Backward offset 0
static UnityEngine::UnityEngine__TextEditor__Direction const Backward;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::TextEditOp
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14775))
// CS Name: UnityEngine.TextEditor::TextEditOp
struct CORDL_TYPE UnityEngine__TextEditor__TextEditOp : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__TextEditor__TextEditOp(int32_t value__) noexcept;


                    constexpr UnityEngine__TextEditor__TextEditOp(UnityEngine__TextEditor__TextEditOp const&) = default;
                    constexpr UnityEngine__TextEditor__TextEditOp(UnityEngine__TextEditor__TextEditOp&&) = default;
                    constexpr UnityEngine__TextEditor__TextEditOp& operator=(UnityEngine__TextEditor__TextEditOp const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__TextEditor__TextEditOp& operator=(UnityEngine__TextEditor__TextEditOp&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__TextEditor__TextEditOp(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__TextEditor__TextEditOp_Unwrapped : int32_t {
__MoveLeft = 0,
__MoveRight = 1,
__MoveUp = 2,
__MoveDown = 3,
__MoveLineStart = 4,
__MoveLineEnd = 5,
__MoveTextStart = 6,
__MoveTextEnd = 7,
__MovePageUp = 8,
__MovePageDown = 9,
__MoveGraphicalLineStart = 10,
__MoveGraphicalLineEnd = 11,
__MoveWordLeft = 12,
__MoveWordRight = 13,
__MoveParagraphForward = 14,
__MoveParagraphBackward = 15,
__MoveToStartOfNextWord = 16,
__MoveToEndOfPreviousWord = 17,
__SelectLeft = 18,
__SelectRight = 19,
__SelectUp = 20,
__SelectDown = 21,
__SelectTextStart = 22,
__SelectTextEnd = 23,
__SelectPageUp = 24,
__SelectPageDown = 25,
__ExpandSelectGraphicalLineStart = 26,
__ExpandSelectGraphicalLineEnd = 27,
__SelectGraphicalLineStart = 28,
__SelectGraphicalLineEnd = 29,
__SelectWordLeft = 30,
__SelectWordRight = 31,
__SelectToEndOfPreviousWord = 32,
__SelectToStartOfNextWord = 33,
__SelectParagraphBackward = 34,
__SelectParagraphForward = 35,
__Delete = 36,
__Backspace = 37,
__DeleteWordBack = 38,
__DeleteWordForward = 39,
__DeleteLineBack = 40,
__Cut = 41,
__Copy = 42,
__Paste = 43,
__SelectAll = 44,
__SelectNone = 45,
__ScrollStart = 46,
__ScrollEnd = 47,
__ScrollPageUp = 48,
__ScrollPageDown = 49,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__TextEditor__TextEditOp_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__TextEditor__TextEditOp_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MoveLeft offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MoveLeft;

/// @brief Field MoveRight offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MoveRight;

/// @brief Field MoveUp offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MoveUp;

/// @brief Field MoveDown offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MoveDown;

/// @brief Field MoveLineStart offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MoveLineStart;

/// @brief Field MoveLineEnd offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MoveLineEnd;

/// @brief Field MoveTextStart offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MoveTextStart;

/// @brief Field MoveTextEnd offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MoveTextEnd;

/// @brief Field MovePageUp offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MovePageUp;

/// @brief Field MovePageDown offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MovePageDown;

/// @brief Field MoveGraphicalLineStart offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MoveGraphicalLineStart;

/// @brief Field MoveGraphicalLineEnd offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MoveGraphicalLineEnd;

/// @brief Field MoveWordLeft offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MoveWordLeft;

/// @brief Field MoveWordRight offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MoveWordRight;

/// @brief Field MoveParagraphForward offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MoveParagraphForward;

/// @brief Field MoveParagraphBackward offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MoveParagraphBackward;

/// @brief Field MoveToStartOfNextWord offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MoveToStartOfNextWord;

/// @brief Field MoveToEndOfPreviousWord offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const MoveToEndOfPreviousWord;

/// @brief Field SelectLeft offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectLeft;

/// @brief Field SelectRight offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectRight;

/// @brief Field SelectUp offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectUp;

/// @brief Field SelectDown offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectDown;

/// @brief Field SelectTextStart offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectTextStart;

/// @brief Field SelectTextEnd offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectTextEnd;

/// @brief Field SelectPageUp offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectPageUp;

/// @brief Field SelectPageDown offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectPageDown;

/// @brief Field ExpandSelectGraphicalLineStart offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const ExpandSelectGraphicalLineStart;

/// @brief Field ExpandSelectGraphicalLineEnd offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const ExpandSelectGraphicalLineEnd;

/// @brief Field SelectGraphicalLineStart offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectGraphicalLineStart;

/// @brief Field SelectGraphicalLineEnd offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectGraphicalLineEnd;

/// @brief Field SelectWordLeft offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectWordLeft;

/// @brief Field SelectWordRight offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectWordRight;

/// @brief Field SelectToEndOfPreviousWord offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectToEndOfPreviousWord;

/// @brief Field SelectToStartOfNextWord offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectToStartOfNextWord;

/// @brief Field SelectParagraphBackward offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectParagraphBackward;

/// @brief Field SelectParagraphForward offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectParagraphForward;

/// @brief Field Delete offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const Delete;

/// @brief Field Backspace offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const Backspace;

/// @brief Field DeleteWordBack offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const DeleteWordBack;

/// @brief Field DeleteWordForward offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const DeleteWordForward;

/// @brief Field DeleteLineBack offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const DeleteLineBack;

/// @brief Field Cut offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const Cut;

/// @brief Field Copy offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const Copy;

/// @brief Field Paste offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const Paste;

/// @brief Field SelectAll offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectAll;

/// @brief Field SelectNone offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const SelectNone;

/// @brief Field ScrollStart offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const ScrollStart;

/// @brief Field ScrollEnd offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const ScrollEnd;

/// @brief Field ScrollPageUp offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const ScrollPageUp;

/// @brief Field ScrollPageDown offset 0
static UnityEngine::UnityEngine__TextEditor__TextEditOp const ScrollPageDown;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::TextEditor
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14776))
// CS Name: UnityEngine.TextEditor
class CORDL_TYPE TextEditor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TextEditOp = UnityEngine::UnityEngine__TextEditor__TextEditOp;

using Direction = UnityEngine::UnityEngine__TextEditor__Direction;

using CharacterType = UnityEngine::UnityEngine__TextEditor__CharacterType;

using DblClickSnapping = UnityEngine::UnityEngine__TextEditor__DblClickSnapping;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TextEditor() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextEditor", modifiers: " const&", def_value: None }]
constexpr TextEditor(TextEditor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextEditor", modifiers: "&&", def_value: None }]
constexpr TextEditor(TextEditor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextEditor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextEditor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextEditor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextEditor& operator=(TextEditor&& o) noexcept = default;
  constexpr TextEditor& operator=(TextEditor const& o) noexcept = default;
                


// Fields

 UnityEngine::TouchScreenKeyboard __declspec(property(get=__get_keyboardOnScreen, put=__set_keyboardOnScreen))  keyboardOnScreen;

constexpr void __set_keyboardOnScreen(UnityEngine::TouchScreenKeyboard value) ;

constexpr UnityEngine::TouchScreenKeyboard __get_keyboardOnScreen() const;

 int32_t __declspec(property(get=__get_controlID, put=__set_controlID))  controlID;

constexpr void __set_controlID(int32_t value) ;

constexpr int32_t __get_controlID() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_style() const;

 bool __declspec(property(get=__get_multiline, put=__set_multiline))  multiline;

constexpr void __set_multiline(bool value) ;

constexpr bool __get_multiline() const;

 bool __declspec(property(get=__get_hasHorizontalCursorPos, put=__set_hasHorizontalCursorPos))  hasHorizontalCursorPos;

constexpr void __set_hasHorizontalCursorPos(bool value) ;

constexpr bool __get_hasHorizontalCursorPos() const;

 bool __declspec(property(get=__get_isPasswordField, put=__set_isPasswordField))  isPasswordField;

constexpr void __set_isPasswordField(bool value) ;

constexpr bool __get_isPasswordField() const;

 bool __declspec(property(get=__get_m_HasFocus, put=__set_m_HasFocus))  m_HasFocus;

constexpr void __set_m_HasFocus(bool value) ;

constexpr bool __get_m_HasFocus() const;

 UnityEngine::Vector2 __declspec(property(get=__get_scrollOffset, put=__set_scrollOffset))  scrollOffset;

constexpr void __set_scrollOffset(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_scrollOffset() const;

 UnityEngine::GUIContent __declspec(property(get=__get_m_Content, put=__set_m_Content))  m_Content;

constexpr void __set_m_Content(UnityEngine::GUIContent value) ;

constexpr UnityEngine::GUIContent __get_m_Content() const;

 UnityEngine::Rect __declspec(property(get=__get_m_Position, put=__set_m_Position))  m_Position;

constexpr void __set_m_Position(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get_m_Position() const;

 int32_t __declspec(property(get=__get_m_CursorIndex, put=__set_m_CursorIndex))  m_CursorIndex;

constexpr void __set_m_CursorIndex(int32_t value) ;

constexpr int32_t __get_m_CursorIndex() const;

 int32_t __declspec(property(get=__get_m_SelectIndex, put=__set_m_SelectIndex))  m_SelectIndex;

constexpr void __set_m_SelectIndex(int32_t value) ;

constexpr int32_t __get_m_SelectIndex() const;

 bool __declspec(property(get=__get_m_RevealCursor, put=__set_m_RevealCursor))  m_RevealCursor;

constexpr void __set_m_RevealCursor(bool value) ;

constexpr bool __get_m_RevealCursor() const;

 UnityEngine::Vector2 __declspec(property(get=__get_graphicalCursorPos, put=__set_graphicalCursorPos))  graphicalCursorPos;

constexpr void __set_graphicalCursorPos(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_graphicalCursorPos() const;

 UnityEngine::Vector2 __declspec(property(get=__get_graphicalSelectCursorPos, put=__set_graphicalSelectCursorPos))  graphicalSelectCursorPos;

constexpr void __set_graphicalSelectCursorPos(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_graphicalSelectCursorPos() const;

 bool __declspec(property(get=__get_m_MouseDragSelectsWholeWords, put=__set_m_MouseDragSelectsWholeWords))  m_MouseDragSelectsWholeWords;

constexpr void __set_m_MouseDragSelectsWholeWords(bool value) ;

constexpr bool __get_m_MouseDragSelectsWholeWords() const;

 int32_t __declspec(property(get=__get_m_DblClickInitPos, put=__set_m_DblClickInitPos))  m_DblClickInitPos;

constexpr void __set_m_DblClickInitPos(int32_t value) ;

constexpr int32_t __get_m_DblClickInitPos() const;

 UnityEngine::UnityEngine__TextEditor__DblClickSnapping __declspec(property(get=__get_m_DblClickSnap, put=__set_m_DblClickSnap))  m_DblClickSnap;

constexpr void __set_m_DblClickSnap(UnityEngine::UnityEngine__TextEditor__DblClickSnapping value) ;

constexpr UnityEngine::UnityEngine__TextEditor__DblClickSnapping __get_m_DblClickSnap() const;

 bool __declspec(property(get=__get_m_bJustSelected, put=__set_m_bJustSelected))  m_bJustSelected;

constexpr void __set_m_bJustSelected(bool value) ;

constexpr bool __get_m_bJustSelected() const;

 int32_t __declspec(property(get=__get_m_iAltCursorPos, put=__set_m_iAltCursorPos))  m_iAltCursorPos;

constexpr void __set_m_iAltCursorPos(int32_t value) ;

constexpr int32_t __get_m_iAltCursorPos() const;

 ::StringW __declspec(property(get=__get_oldText, put=__set_oldText))  oldText;

constexpr void __set_oldText(::StringW value) ;

constexpr ::StringW __get_oldText() const;

 int32_t __declspec(property(get=__get_oldPos, put=__set_oldPos))  oldPos;

constexpr void __set_oldPos(int32_t value) ;

constexpr int32_t __get_oldPos() const;

 int32_t __declspec(property(get=__get_oldSelectPos, put=__set_oldSelectPos))  oldSelectPos;

constexpr void __set_oldSelectPos(int32_t value) ;

constexpr int32_t __get_oldSelectPos() const;

static System::Collections::Generic::Dictionary_2<UnityEngine::Event,UnityEngine::UnityEngine__TextEditor__TextEditOp> __declspec(property(get=__get_s_Keyactions, put=__set_s_Keyactions))  s_Keyactions;

static void __set_s_Keyactions(System::Collections::Generic::Dictionary_2<UnityEngine::Event,UnityEngine::UnityEngine__TextEditor__TextEditOp> value) ;

static System::Collections::Generic::Dictionary_2<UnityEngine::Event,UnityEngine::UnityEngine__TextEditor__TextEditOp> __get_s_Keyactions() ;


// Properties

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

 UnityEngine::Rect __declspec(property(get=get_position, put=set_position))  position;

 UnityEngine::Rect __declspec(property(get=get_localPosition))  localPosition;

 int32_t __declspec(property(get=get_cursorIndex, put=set_cursorIndex))  cursorIndex;

 int32_t __declspec(property(get=get_selectIndex, put=set_selectIndex))  selectIndex;

 int32_t __declspec(property(get=get_altCursorPosition))  altCursorPosition;

 bool __declspec(property(get=get_hasSelection))  hasSelection;

 ::StringW __declspec(property(get=get_SelectedText))  SelectedText;


// Methods

/// @brief Method get_text addr 0x2b8c7c4 size 0x1c virtual false final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x2b8c7e0 size 0x78 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method get_position addr 0x2b8c898 size 0xc virtual false final false
 UnityEngine::Rect get_position() ;

/// @brief Method set_position addr 0x2b8c8a4 size 0xb8 virtual false final false
 void set_position(UnityEngine::Rect value) ;

/// @brief Method get_localPosition addr 0x2b8cd00 size 0xc virtual true final false
 UnityEngine::Rect get_localPosition() ;

/// @brief Method get_cursorIndex addr 0x2b8cd0c size 0x8 virtual false final false
 int32_t get_cursorIndex() ;

/// @brief Method set_cursorIndex addr 0x2b8cd14 size 0x58 virtual false final false
 void set_cursorIndex(int32_t value) ;

/// @brief Method get_selectIndex addr 0x2b8cd6c size 0x8 virtual false final false
 int32_t get_selectIndex() ;

/// @brief Method set_selectIndex addr 0x2b8cd74 size 0x50 virtual false final false
 void set_selectIndex(int32_t value) ;

/// @brief Method ClearCursorPos addr 0x2b8cdc4 size 0x10 virtual false final false
 void ClearCursorPos() ;

/// @brief Method get_altCursorPosition addr 0x2b8cdd4 size 0x8 virtual false final false
 int32_t get_altCursorPosition() ;

static UnityEngine::TextEditor New_ctor() ;

/// @brief Method .ctor addr 0x2b8cddc size 0xf8 virtual false final false
 void _ctor() ;

/// @brief Method OnFocus addr 0x2b8ced4 size 0x44 virtual false final false
 void OnFocus() ;

/// @brief Method OnLostFocus addr 0x2b8cf5c size 0x54 virtual false final false
 void OnLostFocus() ;

/// @brief Method GrabGraphicalCursorPos addr 0x2b8cfb0 size 0x84 virtual false final false
 void GrabGraphicalCursorPos() ;

/// @brief Method HandleKeyEvent addr 0x2b8d034 size 0x1b4 virtual false final false
 bool HandleKeyEvent(UnityEngine::Event e, bool textIsReadOnly) ;

/// @brief Method DeleteLineBack addr 0x2b8e01c size 0xb8 virtual false final false
 bool DeleteLineBack() ;

/// @brief Method DeleteWordBack addr 0x2b8e1f0 size 0x90 virtual false final false
 bool DeleteWordBack() ;

/// @brief Method DeleteWordForward addr 0x2b8e348 size 0x7c virtual false final false
 bool DeleteWordForward() ;

/// @brief Method Delete addr 0x2b8e574 size 0x8c virtual false final false
 bool Delete() ;

/// @brief Method CanPaste addr 0x2b8e6c4 size 0x44 virtual false final false
 bool CanPaste() ;

/// @brief Method Backspace addr 0x2b8e708 size 0xa0 virtual false final false
 bool Backspace() ;

/// @brief Method SelectAll addr 0x2b8cf18 size 0x44 virtual false final false
 void SelectAll() ;

/// @brief Method SelectNone addr 0x2b8e868 size 0x24 virtual false final false
 void SelectNone() ;

/// @brief Method get_hasSelection addr 0x2b8e0d4 size 0x10 virtual false final false
 bool get_hasSelection() ;

/// @brief Method get_SelectedText addr 0x2b8e88c size 0x8c virtual false final false
 ::StringW get_SelectedText() ;

/// @brief Method DeleteSelection addr 0x2b8e0e4 size 0x10c virtual false final false
 bool DeleteSelection() ;

/// @brief Method ReplaceSelection addr 0x2b8e918 size 0x7c virtual false final false
 void ReplaceSelection(::StringW replace) ;

/// @brief Method Insert addr 0x2b8e994 size 0x34 virtual false final false
 void Insert(char16_t c) ;

/// @brief Method MoveSelectionToAltCursor addr 0x2b8e9c8 size 0xbc virtual false final false
 void MoveSelectionToAltCursor() ;

/// @brief Method MoveRight addr 0x2b8ea84 size 0x6c virtual false final false
 void MoveRight() ;

/// @brief Method MoveLeft addr 0x2b8eafc size 0x58 virtual false final false
 void MoveLeft() ;

/// @brief Method MoveUp addr 0x2b8eb54 size 0xb0 virtual false final false
 void MoveUp() ;

/// @brief Method MoveDown addr 0x2b8ec04 size 0xe0 virtual false final false
 void MoveDown() ;

/// @brief Method MoveLineStart addr 0x2b8ece4 size 0x74 virtual false final false
 void MoveLineStart() ;

/// @brief Method MoveLineEnd addr 0x2b8ed58 size 0x90 virtual false final false
 void MoveLineEnd() ;

/// @brief Method MoveGraphicalLineStart addr 0x2b8ede8 size 0x48 virtual false final false
 void MoveGraphicalLineStart() ;

/// @brief Method MoveGraphicalLineEnd addr 0x2b8eee0 size 0x48 virtual false final false
 void MoveGraphicalLineEnd() ;

/// @brief Method MoveTextStart addr 0x2b8efec size 0x20 virtual false final false
 void MoveTextStart() ;

/// @brief Method MoveTextEnd addr 0x2b8f00c size 0x40 virtual false final false
 void MoveTextEnd() ;

/// @brief Method IndexOfEndOfLine addr 0x2b8f04c size 0x50 virtual false final false
 int32_t IndexOfEndOfLine(int32_t startIndex) ;

/// @brief Method MoveParagraphForward addr 0x2b8f09c size 0x80 virtual false final false
 void MoveParagraphForward() ;

/// @brief Method MoveParagraphBackward addr 0x2b8f11c size 0x78 virtual false final false
 void MoveParagraphBackward() ;

/// @brief Method MoveCursorToPosition_Internal addr 0x2b8f194 size 0x88 virtual false final false
 void MoveCursorToPosition_Internal(UnityEngine::Vector2 cursorPosition, bool shift) ;

/// @brief Method MoveAltCursorToPosition addr 0x2b8f21c size 0x88 virtual false final false
 void MoveAltCursorToPosition(UnityEngine::Vector2 cursorPosition) ;

/// @brief Method SelectToPosition addr 0x2b8f2a4 size 0x1f8 virtual false final false
 void SelectToPosition(UnityEngine::Vector2 cursorPosition) ;

/// @brief Method SelectLeft addr 0x2b8f5b0 size 0x58 virtual false final false
 void SelectLeft() ;

/// @brief Method SelectRight addr 0x2b8f608 size 0x58 virtual false final false
 void SelectRight() ;

/// @brief Method SelectUp addr 0x2b8f660 size 0x64 virtual false final false
 void SelectUp() ;

/// @brief Method SelectDown addr 0x2b8f6c4 size 0x80 virtual false final false
 void SelectDown() ;

/// @brief Method SelectTextEnd addr 0x2b8f744 size 0x24 virtual false final false
 void SelectTextEnd() ;

/// @brief Method SelectTextStart addr 0x2b8f768 size 0x8 virtual false final false
 void SelectTextStart() ;

/// @brief Method MouseDragSelectsWholeWords addr 0x2b8f770 size 0x14 virtual false final false
 void MouseDragSelectsWholeWords(bool on) ;

/// @brief Method DblClickSnap addr 0x2b8f784 size 0x8 virtual false final false
 void DblClickSnap(UnityEngine::UnityEngine__TextEditor__DblClickSnapping snapping) ;

/// @brief Method GetGraphicalLineStart addr 0x2b8ee30 size 0xb0 virtual false final false
 int32_t GetGraphicalLineStart(int32_t p) ;

/// @brief Method GetGraphicalLineEnd addr 0x2b8ef28 size 0xc4 virtual false final false
 int32_t GetGraphicalLineEnd(int32_t p) ;

/// @brief Method FindNextSeperator addr 0x2b8f78c size 0x98 virtual false final false
 int32_t FindNextSeperator(int32_t startPos) ;

/// @brief Method FindPrevSeperator addr 0x2b8f90c size 0x9c virtual false final false
 int32_t FindPrevSeperator(int32_t startPos) ;

/// @brief Method MoveWordRight addr 0x2b8f9a8 size 0x64 virtual false final false
 void MoveWordRight() ;

/// @brief Method MoveToStartOfNextWord addr 0x2b8fa0c size 0x60 virtual false final false
 void MoveToStartOfNextWord() ;

/// @brief Method MoveToEndOfPreviousWord addr 0x2b8fa6c size 0x60 virtual false final false
 void MoveToEndOfPreviousWord() ;

/// @brief Method SelectToStartOfNextWord addr 0x2b8facc size 0x2c virtual false final false
 void SelectToStartOfNextWord() ;

/// @brief Method SelectToEndOfPreviousWord addr 0x2b8faf8 size 0x2c virtual false final false
 void SelectToEndOfPreviousWord() ;

/// @brief Method ClassifyChar addr 0x2b8f824 size 0xe8 virtual false final false
 UnityEngine::UnityEngine__TextEditor__CharacterType ClassifyChar(int32_t index) ;

/// @brief Method FindStartOfNextWord addr 0x2b8e3c4 size 0x1b0 virtual false final false
 int32_t FindStartOfNextWord(int32_t p) ;

/// @brief Method FindEndOfPreviousWord addr 0x2b8e280 size 0xc8 virtual false final false
 int32_t FindEndOfPreviousWord(int32_t p) ;

/// @brief Method MoveWordLeft addr 0x2b8fb24 size 0x48 virtual false final false
 void MoveWordLeft() ;

/// @brief Method SelectWordRight addr 0x2b8fb6c size 0x68 virtual false final false
 void SelectWordRight() ;

/// @brief Method SelectWordLeft addr 0x2b8fbd4 size 0x68 virtual false final false
 void SelectWordLeft() ;

/// @brief Method ExpandSelectGraphicalLineStart addr 0x2b8fc3c size 0x64 virtual false final false
 void ExpandSelectGraphicalLineStart() ;

/// @brief Method ExpandSelectGraphicalLineEnd addr 0x2b8fca0 size 0x64 virtual false final false
 void ExpandSelectGraphicalLineEnd() ;

/// @brief Method SelectGraphicalLineStart addr 0x2b8fd04 size 0x2c virtual false final false
 void SelectGraphicalLineStart() ;

/// @brief Method SelectGraphicalLineEnd addr 0x2b8fd30 size 0x2c virtual false final false
 void SelectGraphicalLineEnd() ;

/// @brief Method SelectParagraphForward addr 0x2b8fd5c size 0x88 virtual false final false
 void SelectParagraphForward() ;

/// @brief Method SelectParagraphBackward addr 0x2b8fde4 size 0xa4 virtual false final false
 void SelectParagraphBackward() ;

/// @brief Method SelectCurrentWord addr 0x2b8fe88 size 0x6c virtual false final false
 void SelectCurrentWord() ;

/// @brief Method FindEndOfClassification addr 0x2b8f49c size 0x114 virtual false final false
 int32_t FindEndOfClassification(int32_t p, UnityEngine::UnityEngine__TextEditor__Direction dir) ;

/// @brief Method SelectCurrentParagraph addr 0x2b8fef4 size 0x8c virtual false final false
 void SelectCurrentParagraph() ;

/// @brief Method UpdateScrollOffset addr 0x2b8c95c size 0x3a4 virtual false final false
 void UpdateScrollOffset() ;

/// @brief Method PerformOperation addr 0x2b8dc44 size 0x3d8 virtual false final false
 bool PerformOperation(UnityEngine::UnityEngine__TextEditor__TextEditOp operation, bool textIsReadOnly) ;

/// @brief Method SaveBackup addr 0x2b900e0 size 0x24 virtual false final false
 void SaveBackup() ;

/// @brief Method Cut addr 0x2b8ff80 size 0x2c virtual false final false
 bool Cut() ;

/// @brief Method Copy addr 0x2b8ffac size 0x90 virtual false final false
 void Copy() ;

/// @brief Method ReplaceNewlinesWithSpaces addr 0x2b90104 size 0x94 virtual false final false
static ::StringW ReplaceNewlinesWithSpaces(::StringW value) ;

/// @brief Method Paste addr 0x2b9003c size 0xa4 virtual false final false
 bool Paste() ;

/// @brief Method MapKey addr 0x2b90198 size 0x8c virtual false final false
static void MapKey(::StringW key, UnityEngine::UnityEngine__TextEditor__TextEditOp action) ;

/// @brief Method InitKeyActions addr 0x2b8d1e8 size 0xa5c virtual false final false
 void InitKeyActions() ;

/// @brief Method DetectFocusChange addr 0x2b8eaf0 size 0xc virtual false final false
 void DetectFocusChange() ;

/// @brief Method OnDetectFocusChange addr 0x2b90224 size 0x9c virtual true final false
 void OnDetectFocusChange() ;

/// @brief Method OnCursorIndexChange addr 0x2b902c0 size 0x4 virtual true final false
 void OnCursorIndexChange() ;

/// @brief Method OnSelectIndexChange addr 0x2b902c4 size 0x4 virtual true final false
 void OnSelectIndexChange() ;

/// @brief Method ClampTextIndex addr 0x2b902c8 size 0x3c virtual false final false
 void ClampTextIndex(ByRef<int32_t> index) ;

/// @brief Method EnsureValidCodePointIndex addr 0x2b8c858 size 0x40 virtual false final false
 void EnsureValidCodePointIndex(ByRef<int32_t> index) ;

/// @brief Method IsValidCodePointIndex addr 0x2b90304 size 0xb8 virtual false final false
 bool IsValidCodePointIndex(int32_t index) ;

/// @brief Method PreviousCodePointIndex addr 0x2b8e7a8 size 0xc0 virtual false final false
 int32_t PreviousCodePointIndex(int32_t index) ;

/// @brief Method NextCodePointIndex addr 0x2b8e600 size 0xc4 virtual false final false
 int32_t NextCodePointIndex(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__TextEditor__CharacterType, "UnityEngine", "TextEditor/CharacterType");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__TextEditor__DblClickSnapping, "UnityEngine", "TextEditor/DblClickSnapping");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__TextEditor__Direction, "UnityEngine", "TextEditor/Direction");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__TextEditor__TextEditOp, "UnityEngine", "TextEditor/TextEditOp");
NEED_NO_BOX(UnityEngine::TextEditor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextEditor, "UnityEngine", "TextEditor");
