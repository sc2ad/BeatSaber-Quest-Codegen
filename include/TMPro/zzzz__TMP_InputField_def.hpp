#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace TMPro {
class TMPro__TMP_InputField___MouseDragOutsideRect_d__294;
}
namespace TMPro {
struct TMPro__TMP_InputField__CharacterValidation;
}
namespace TMPro {
class TMPro__TMP_InputField__OnChangeEvent;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::UI {
class RectMask2D;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine::EventSystems {
class IScrollHandler;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace TMPro {
class TMPro__TMP_InputField__OnValidateInput;
}
namespace UnityEngine::UI {
class Scrollbar;
}
namespace TMPro {
struct TMPro__TMP_InputField__LineType;
}
namespace TMPro {
class TMP_ScrollbarEventHandler;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__Selectable__SelectionState;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class CanvasRenderer;
}
namespace UnityEngine::UI {
class LayoutGroup;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace TMPro {
class TMPro__TMP_InputField__SubmitEvent;
}
namespace UnityEngine::EventSystems {
class IEndDragHandler;
}
namespace TMPro {
class TMPro__TMP_InputField___CaretBlink_d__276;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::EventSystems {
class IUpdateSelectedHandler;
}
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace TMPro {
class TMPro__TMP_InputField__TouchScreenKeyboardEvent;
}
namespace TMPro {
struct TMPro__TMP_InputField__InputType;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class BaseInput;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace TMPro {
class TMP_InputValidator;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace TMPro {
struct TMPro__TMP_InputField__ContentType;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
namespace TMPro {
class TMPro__TMP_InputField__TextSelectionEvent;
}
namespace UnityEngine {
struct TouchScreenKeyboardType;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class WaitForSecondsRealtime;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace System::Collections {
class IEnumerator;
}
namespace TMPro {
class TMPro__TMP_InputField__SelectionEvent;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Transform;
}
namespace TMPro {
struct TMPro__TMP_InputField__EditState;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace TMPro {
struct TMPro__TMP_InputField__CharacterValidation;
}
namespace TMPro {
struct TMPro__TMP_InputField__ContentType;
}
namespace TMPro {
struct TMPro__TMP_InputField__EditState;
}
namespace TMPro {
struct TMPro__TMP_InputField__InputType;
}
namespace TMPro {
struct TMPro__TMP_InputField__LineType;
}
namespace TMPro {
class TMP_InputField;
}
namespace TMPro {
class TMPro__TMP_InputField__OnChangeEvent;
}
namespace TMPro {
class TMPro__TMP_InputField__OnValidateInput;
}
namespace TMPro {
class TMPro__TMP_InputField__SelectionEvent;
}
namespace TMPro {
class TMPro__TMP_InputField__SubmitEvent;
}
namespace TMPro {
class TMPro__TMP_InputField__TextSelectionEvent;
}
namespace TMPro {
class TMPro__TMP_InputField__TouchScreenKeyboardEvent;
}
namespace TMPro {
class TMPro__TMP_InputField___CaretBlink_d__276;
}
namespace TMPro {
class TMPro__TMP_InputField___MouseDragOutsideRect_d__294;
}
// Type: ::ContentType
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12320))
// CS Name: TMPro.TMP_InputField::ContentType
struct CORDL_TYPE TMPro__TMP_InputField__ContentType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMPro__TMP_InputField__ContentType(int32_t value__) noexcept;


                    constexpr TMPro__TMP_InputField__ContentType(TMPro__TMP_InputField__ContentType const&) = default;
                    constexpr TMPro__TMP_InputField__ContentType(TMPro__TMP_InputField__ContentType&&) = default;
                    constexpr TMPro__TMP_InputField__ContentType& operator=(TMPro__TMP_InputField__ContentType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__TMP_InputField__ContentType& operator=(TMPro__TMP_InputField__ContentType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_InputField__ContentType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TMPro__TMP_InputField__ContentType_Unwrapped : int32_t {
__Standard = 0,
__Autocorrected = 1,
__IntegerNumber = 2,
__DecimalNumber = 3,
__Alphanumeric = 4,
__Name = 5,
__EmailAddress = 6,
__Password = 7,
__Pin = 8,
__Custom = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TMPro__TMP_InputField__ContentType_Unwrapped () const noexcept {
return std::bit_cast<__TMPro__TMP_InputField__ContentType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Standard offset 0
static TMPro::TMPro__TMP_InputField__ContentType const Standard;

/// @brief Field Autocorrected offset 0
static TMPro::TMPro__TMP_InputField__ContentType const Autocorrected;

/// @brief Field IntegerNumber offset 0
static TMPro::TMPro__TMP_InputField__ContentType const IntegerNumber;

/// @brief Field DecimalNumber offset 0
static TMPro::TMPro__TMP_InputField__ContentType const DecimalNumber;

/// @brief Field Alphanumeric offset 0
static TMPro::TMPro__TMP_InputField__ContentType const Alphanumeric;

/// @brief Field Name offset 0
static TMPro::TMPro__TMP_InputField__ContentType const Name;

/// @brief Field EmailAddress offset 0
static TMPro::TMPro__TMP_InputField__ContentType const EmailAddress;

/// @brief Field Password offset 0
static TMPro::TMPro__TMP_InputField__ContentType const Password;

/// @brief Field Pin offset 0
static TMPro::TMPro__TMP_InputField__ContentType const Pin;

/// @brief Field Custom offset 0
static TMPro::TMPro__TMP_InputField__ContentType const Custom;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::InputType
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12321))
// CS Name: TMPro.TMP_InputField::InputType
struct CORDL_TYPE TMPro__TMP_InputField__InputType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMPro__TMP_InputField__InputType(int32_t value__) noexcept;


                    constexpr TMPro__TMP_InputField__InputType(TMPro__TMP_InputField__InputType const&) = default;
                    constexpr TMPro__TMP_InputField__InputType(TMPro__TMP_InputField__InputType&&) = default;
                    constexpr TMPro__TMP_InputField__InputType& operator=(TMPro__TMP_InputField__InputType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__TMP_InputField__InputType& operator=(TMPro__TMP_InputField__InputType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_InputField__InputType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TMPro__TMP_InputField__InputType_Unwrapped : int32_t {
__Standard = 0,
__AutoCorrect = 1,
__Password = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TMPro__TMP_InputField__InputType_Unwrapped () const noexcept {
return std::bit_cast<__TMPro__TMP_InputField__InputType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Standard offset 0
static TMPro::TMPro__TMP_InputField__InputType const Standard;

/// @brief Field AutoCorrect offset 0
static TMPro::TMPro__TMP_InputField__InputType const AutoCorrect;

/// @brief Field Password offset 0
static TMPro::TMPro__TMP_InputField__InputType const Password;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::CharacterValidation
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12322))
// CS Name: TMPro.TMP_InputField::CharacterValidation
struct CORDL_TYPE TMPro__TMP_InputField__CharacterValidation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMPro__TMP_InputField__CharacterValidation(int32_t value__) noexcept;


                    constexpr TMPro__TMP_InputField__CharacterValidation(TMPro__TMP_InputField__CharacterValidation const&) = default;
                    constexpr TMPro__TMP_InputField__CharacterValidation(TMPro__TMP_InputField__CharacterValidation&&) = default;
                    constexpr TMPro__TMP_InputField__CharacterValidation& operator=(TMPro__TMP_InputField__CharacterValidation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__TMP_InputField__CharacterValidation& operator=(TMPro__TMP_InputField__CharacterValidation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_InputField__CharacterValidation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TMPro__TMP_InputField__CharacterValidation_Unwrapped : int32_t {
__None = 0,
__Digit = 1,
__Integer = 2,
__Decimal = 3,
__Alphanumeric = 4,
__Name = 5,
__Regex = 6,
__EmailAddress = 7,
__CustomValidator = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TMPro__TMP_InputField__CharacterValidation_Unwrapped () const noexcept {
return std::bit_cast<__TMPro__TMP_InputField__CharacterValidation_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static TMPro::TMPro__TMP_InputField__CharacterValidation const None;

/// @brief Field Digit offset 0
static TMPro::TMPro__TMP_InputField__CharacterValidation const Digit;

/// @brief Field Integer offset 0
static TMPro::TMPro__TMP_InputField__CharacterValidation const Integer;

/// @brief Field Decimal offset 0
static TMPro::TMPro__TMP_InputField__CharacterValidation const Decimal;

/// @brief Field Alphanumeric offset 0
static TMPro::TMPro__TMP_InputField__CharacterValidation const Alphanumeric;

/// @brief Field Name offset 0
static TMPro::TMPro__TMP_InputField__CharacterValidation const Name;

/// @brief Field Regex offset 0
static TMPro::TMPro__TMP_InputField__CharacterValidation const Regex;

/// @brief Field EmailAddress offset 0
static TMPro::TMPro__TMP_InputField__CharacterValidation const EmailAddress;

/// @brief Field CustomValidator offset 0
static TMPro::TMPro__TMP_InputField__CharacterValidation const CustomValidator;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::LineType
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12323))
// CS Name: TMPro.TMP_InputField::LineType
struct CORDL_TYPE TMPro__TMP_InputField__LineType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMPro__TMP_InputField__LineType(int32_t value__) noexcept;


                    constexpr TMPro__TMP_InputField__LineType(TMPro__TMP_InputField__LineType const&) = default;
                    constexpr TMPro__TMP_InputField__LineType(TMPro__TMP_InputField__LineType&&) = default;
                    constexpr TMPro__TMP_InputField__LineType& operator=(TMPro__TMP_InputField__LineType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__TMP_InputField__LineType& operator=(TMPro__TMP_InputField__LineType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_InputField__LineType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TMPro__TMP_InputField__LineType_Unwrapped : int32_t {
__SingleLine = 0,
__MultiLineSubmit = 1,
__MultiLineNewline = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TMPro__TMP_InputField__LineType_Unwrapped () const noexcept {
return std::bit_cast<__TMPro__TMP_InputField__LineType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SingleLine offset 0
static TMPro::TMPro__TMP_InputField__LineType const SingleLine;

/// @brief Field MultiLineSubmit offset 0
static TMPro::TMPro__TMP_InputField__LineType const MultiLineSubmit;

/// @brief Field MultiLineNewline offset 0
static TMPro::TMPro__TMP_InputField__LineType const MultiLineNewline;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::OnValidateInput
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12324))
// CS Name: TMPro.TMP_InputField::OnValidateInput
class CORDL_TYPE TMPro__TMP_InputField__OnValidateInput : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~TMPro__TMP_InputField__OnValidateInput() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_InputField__OnValidateInput", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_InputField__OnValidateInput(TMPro__TMP_InputField__OnValidateInput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_InputField__OnValidateInput", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_InputField__OnValidateInput(TMPro__TMP_InputField__OnValidateInput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_InputField__OnValidateInput(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr TMPro__TMP_InputField__OnValidateInput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_InputField__OnValidateInput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_InputField__OnValidateInput& operator=(TMPro__TMP_InputField__OnValidateInput&& o) noexcept = default;
  constexpr TMPro__TMP_InputField__OnValidateInput& operator=(TMPro__TMP_InputField__OnValidateInput const& o) noexcept = default;
                


// Methods

static TMPro::TMPro__TMP_InputField__OnValidateInput New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2aa1570 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2aa1648 size 0x14 virtual true final false
 char16_t Invoke(::StringW text, int32_t charIndex, char16_t addedChar) ;

/// @brief Method BeginInvoke addr 0x2aa165c size 0xc0 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW text, int32_t charIndex, char16_t addedChar, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2aa171c size 0x28 virtual true final false
 char16_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::SubmitEvent
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 380 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12325))
// CS Name: TMPro.TMP_InputField::SubmitEvent
class CORDL_TYPE TMPro__TMP_InputField__SubmitEvent : public UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TMPro__TMP_InputField__SubmitEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_InputField__SubmitEvent", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_InputField__SubmitEvent(TMPro__TMP_InputField__SubmitEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_InputField__SubmitEvent", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_InputField__SubmitEvent(TMPro__TMP_InputField__SubmitEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_InputField__SubmitEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<::StringW>(ptr) {
}


  constexpr TMPro__TMP_InputField__SubmitEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_InputField__SubmitEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_InputField__SubmitEvent& operator=(TMPro__TMP_InputField__SubmitEvent&& o) noexcept = default;
  constexpr TMPro__TMP_InputField__SubmitEvent& operator=(TMPro__TMP_InputField__SubmitEvent const& o) noexcept = default;
                


// Methods

static TMPro::TMPro__TMP_InputField__SubmitEvent New_ctor() ;

/// @brief Method .ctor addr 0x2aa1744 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::OnChangeEvent
namespace TMPro {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 380 }), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12326))
// CS Name: TMPro.TMP_InputField::OnChangeEvent
class CORDL_TYPE TMPro__TMP_InputField__OnChangeEvent : public UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TMPro__TMP_InputField__OnChangeEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_InputField__OnChangeEvent", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_InputField__OnChangeEvent(TMPro__TMP_InputField__OnChangeEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_InputField__OnChangeEvent", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_InputField__OnChangeEvent(TMPro__TMP_InputField__OnChangeEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_InputField__OnChangeEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<::StringW>(ptr) {
}


  constexpr TMPro__TMP_InputField__OnChangeEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_InputField__OnChangeEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_InputField__OnChangeEvent& operator=(TMPro__TMP_InputField__OnChangeEvent&& o) noexcept = default;
  constexpr TMPro__TMP_InputField__OnChangeEvent& operator=(TMPro__TMP_InputField__OnChangeEvent const& o) noexcept = default;
                


// Methods

static TMPro::TMPro__TMP_InputField__OnChangeEvent New_ctor() ;

/// @brief Method .ctor addr 0x2aa178c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::SelectionEvent
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 380 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12327))
// CS Name: TMPro.TMP_InputField::SelectionEvent
class CORDL_TYPE TMPro__TMP_InputField__SelectionEvent : public UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TMPro__TMP_InputField__SelectionEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_InputField__SelectionEvent", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_InputField__SelectionEvent(TMPro__TMP_InputField__SelectionEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_InputField__SelectionEvent", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_InputField__SelectionEvent(TMPro__TMP_InputField__SelectionEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_InputField__SelectionEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<::StringW>(ptr) {
}


  constexpr TMPro__TMP_InputField__SelectionEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_InputField__SelectionEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_InputField__SelectionEvent& operator=(TMPro__TMP_InputField__SelectionEvent&& o) noexcept = default;
  constexpr TMPro__TMP_InputField__SelectionEvent& operator=(TMPro__TMP_InputField__SelectionEvent const& o) noexcept = default;
                


// Methods

static TMPro::TMPro__TMP_InputField__SelectionEvent New_ctor() ;

/// @brief Method .ctor addr 0x2aa17d4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::TextSelectionEvent
namespace TMPro {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10403), inst: 2404 }), TypeDefinitionIndex(TypeDefinitionIndex(10403))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12328))
// CS Name: TMPro.TMP_InputField::TextSelectionEvent
class CORDL_TYPE TMPro__TMP_InputField__TextSelectionEvent : public UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TMPro__TMP_InputField__TextSelectionEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_InputField__TextSelectionEvent", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_InputField__TextSelectionEvent(TMPro__TMP_InputField__TextSelectionEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_InputField__TextSelectionEvent", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_InputField__TextSelectionEvent(TMPro__TMP_InputField__TextSelectionEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_InputField__TextSelectionEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_3<::StringW,int32_t,int32_t>(ptr) {
}


  constexpr TMPro__TMP_InputField__TextSelectionEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_InputField__TextSelectionEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_InputField__TextSelectionEvent& operator=(TMPro__TMP_InputField__TextSelectionEvent&& o) noexcept = default;
  constexpr TMPro__TMP_InputField__TextSelectionEvent& operator=(TMPro__TMP_InputField__TextSelectionEvent const& o) noexcept = default;
                


// Methods

static TMPro::TMPro__TMP_InputField__TextSelectionEvent New_ctor() ;

/// @brief Method .ctor addr 0x2aa181c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::TouchScreenKeyboardEvent
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10125)), TypeDefinitionIndex(TypeDefinitionIndex(10401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 5067 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12329))
// CS Name: TMPro.TMP_InputField::TouchScreenKeyboardEvent
class CORDL_TYPE TMPro__TMP_InputField__TouchScreenKeyboardEvent : public UnityEngine::Events::UnityEvent_1<UnityEngine::UnityEngine__TouchScreenKeyboard__Status> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TMPro__TMP_InputField__TouchScreenKeyboardEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_InputField__TouchScreenKeyboardEvent", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_InputField__TouchScreenKeyboardEvent(TMPro__TMP_InputField__TouchScreenKeyboardEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_InputField__TouchScreenKeyboardEvent", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_InputField__TouchScreenKeyboardEvent(TMPro__TMP_InputField__TouchScreenKeyboardEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_InputField__TouchScreenKeyboardEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<UnityEngine::UnityEngine__TouchScreenKeyboard__Status>(ptr) {
}


  constexpr TMPro__TMP_InputField__TouchScreenKeyboardEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_InputField__TouchScreenKeyboardEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_InputField__TouchScreenKeyboardEvent& operator=(TMPro__TMP_InputField__TouchScreenKeyboardEvent&& o) noexcept = default;
  constexpr TMPro__TMP_InputField__TouchScreenKeyboardEvent& operator=(TMPro__TMP_InputField__TouchScreenKeyboardEvent const& o) noexcept = default;
                


// Methods

static TMPro::TMPro__TMP_InputField__TouchScreenKeyboardEvent New_ctor() ;

/// @brief Method .ctor addr 0x2aa1864 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::EditState
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12330))
// CS Name: TMPro.TMP_InputField::EditState
struct CORDL_TYPE TMPro__TMP_InputField__EditState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMPro__TMP_InputField__EditState(int32_t value__) noexcept;


                    constexpr TMPro__TMP_InputField__EditState(TMPro__TMP_InputField__EditState const&) = default;
                    constexpr TMPro__TMP_InputField__EditState(TMPro__TMP_InputField__EditState&&) = default;
                    constexpr TMPro__TMP_InputField__EditState& operator=(TMPro__TMP_InputField__EditState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMPro__TMP_InputField__EditState& operator=(TMPro__TMP_InputField__EditState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_InputField__EditState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TMPro__TMP_InputField__EditState_Unwrapped : int32_t {
__Continue = 0,
__Finish = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TMPro__TMP_InputField__EditState_Unwrapped () const noexcept {
return std::bit_cast<__TMPro__TMP_InputField__EditState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Continue offset 0
static TMPro::TMPro__TMP_InputField__EditState const Continue;

/// @brief Field Finish offset 0
static TMPro::TMPro__TMP_InputField__EditState const Finish;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::<CaretBlink>d__276
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12331))
// CS Name: TMPro.TMP_InputField::<CaretBlink>d__276
class CORDL_TYPE TMPro__TMP_InputField___CaretBlink_d__276 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TMPro__TMP_InputField___CaretBlink_d__276() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_InputField___CaretBlink_d__276", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_InputField___CaretBlink_d__276(TMPro__TMP_InputField___CaretBlink_d__276 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_InputField___CaretBlink_d__276", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_InputField___CaretBlink_d__276(TMPro__TMP_InputField___CaretBlink_d__276&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_InputField___CaretBlink_d__276(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__TMP_InputField___CaretBlink_d__276& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_InputField___CaretBlink_d__276& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_InputField___CaretBlink_d__276& operator=(TMPro__TMP_InputField___CaretBlink_d__276&& o) noexcept = default;
  constexpr TMPro__TMP_InputField___CaretBlink_d__276& operator=(TMPro__TMP_InputField___CaretBlink_d__276 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 TMPro::TMP_InputField __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(TMPro::TMP_InputField value) ;

constexpr TMPro::TMP_InputField __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static TMPro::TMPro__TMP_InputField___CaretBlink_d__276 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2aa18ac size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2aa18d4 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2aa18d8 size 0x10c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2aa19e4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2aa19ec size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2aa1a2c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: ::<MouseDragOutsideRect>d__294
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12332))
// CS Name: TMPro.TMP_InputField::<MouseDragOutsideRect>d__294
class CORDL_TYPE TMPro__TMP_InputField___MouseDragOutsideRect_d__294 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TMPro__TMP_InputField___MouseDragOutsideRect_d__294() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_InputField___MouseDragOutsideRect_d__294", modifiers: " const&", def_value: None }]
constexpr TMPro__TMP_InputField___MouseDragOutsideRect_d__294(TMPro__TMP_InputField___MouseDragOutsideRect_d__294 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro__TMP_InputField___MouseDragOutsideRect_d__294", modifiers: "&&", def_value: None }]
constexpr TMPro__TMP_InputField___MouseDragOutsideRect_d__294(TMPro__TMP_InputField___MouseDragOutsideRect_d__294&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro__TMP_InputField___MouseDragOutsideRect_d__294(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro__TMP_InputField___MouseDragOutsideRect_d__294& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro__TMP_InputField___MouseDragOutsideRect_d__294& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro__TMP_InputField___MouseDragOutsideRect_d__294& operator=(TMPro__TMP_InputField___MouseDragOutsideRect_d__294&& o) noexcept = default;
  constexpr TMPro__TMP_InputField___MouseDragOutsideRect_d__294& operator=(TMPro__TMP_InputField___MouseDragOutsideRect_d__294 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 TMPro::TMP_InputField __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(TMPro::TMP_InputField value) ;

constexpr TMPro::TMP_InputField __get___4__this() const;

 UnityEngine::EventSystems::PointerEventData __declspec(property(get=__get_eventData, put=__set_eventData))  eventData;

constexpr void __set_eventData(UnityEngine::EventSystems::PointerEventData value) ;

constexpr UnityEngine::EventSystems::PointerEventData __get_eventData() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static TMPro::TMPro__TMP_InputField___MouseDragOutsideRect_d__294 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2aa1a34 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2aa1a5c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2aa1a60 size 0x254 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2aa1cb4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2aa1cbc size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2aa1cfc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_InputField
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12333))
// CS Name: TMPro.TMP_InputField
class CORDL_TYPE TMP_InputField : public UnityEngine::UI::Selectable {
public:
// Declarations
using _MouseDragOutsideRect_d__294 = TMPro::TMPro__TMP_InputField___MouseDragOutsideRect_d__294;

using _CaretBlink_d__276 = TMPro::TMPro__TMP_InputField___CaretBlink_d__276;

using EditState = TMPro::TMPro__TMP_InputField__EditState;

using TouchScreenKeyboardEvent = TMPro::TMPro__TMP_InputField__TouchScreenKeyboardEvent;

using TextSelectionEvent = TMPro::TMPro__TMP_InputField__TextSelectionEvent;

using SelectionEvent = TMPro::TMPro__TMP_InputField__SelectionEvent;

using OnChangeEvent = TMPro::TMPro__TMP_InputField__OnChangeEvent;

using SubmitEvent = TMPro::TMPro__TMP_InputField__SubmitEvent;

using OnValidateInput = TMPro::TMPro__TMP_InputField__OnValidateInput;

using LineType = TMPro::TMPro__TMP_InputField__LineType;

using CharacterValidation = TMPro::TMPro__TMP_InputField__CharacterValidation;

using InputType = TMPro::TMPro__TMP_InputField__InputType;

using ContentType = TMPro::TMPro__TMP_InputField__ContentType;

/// @brief Convert operator to UnityEngine::EventSystems::IUpdateSelectedHandler
constexpr operator  UnityEngine::EventSystems::IUpdateSelectedHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IBeginDragHandler
constexpr operator  UnityEngine::EventSystems::IBeginDragHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IDragHandler
constexpr operator  UnityEngine::EventSystems::IDragHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEndDragHandler
constexpr operator  UnityEngine::EventSystems::IEndDragHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerClickHandler
constexpr operator  UnityEngine::EventSystems::IPointerClickHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::ISubmitHandler
constexpr operator  UnityEngine::EventSystems::ISubmitHandler() const noexcept;

/// @brief Convert operator to UnityEngine::UI::ICanvasElement
constexpr operator  UnityEngine::UI::ICanvasElement() const noexcept;

/// @brief Convert operator to UnityEngine::UI::ILayoutElement
constexpr operator  UnityEngine::UI::ILayoutElement() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IScrollHandler
constexpr operator  UnityEngine::EventSystems::IScrollHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x2f0};

virtual ~TMP_InputField() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_InputField", modifiers: " const&", def_value: None }]
constexpr TMP_InputField(TMP_InputField const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_InputField", modifiers: "&&", def_value: None }]
constexpr TMP_InputField(TMP_InputField&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_InputField(void* ptr) noexcept : UnityEngine::UI::Selectable(ptr) {
}


  constexpr TMP_InputField& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_InputField& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_InputField& operator=(TMP_InputField&& o) noexcept = default;
  constexpr TMP_InputField& operator=(TMP_InputField const& o) noexcept = default;
                


// Fields

 UnityEngine::TouchScreenKeyboard __declspec(property(get=__get_m_SoftKeyboard, put=__set_m_SoftKeyboard))  m_SoftKeyboard;

constexpr void __set_m_SoftKeyboard(UnityEngine::TouchScreenKeyboard value) ;

constexpr UnityEngine::TouchScreenKeyboard __get_m_SoftKeyboard() const;

static ::ArrayW<char16_t> __declspec(property(get=__get_kSeparators, put=__set_kSeparators))  kSeparators;

static void __set_kSeparators(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_kSeparators() ;

 UnityEngine::RectTransform __declspec(property(get=__get_m_RectTransform, put=__set_m_RectTransform))  m_RectTransform;

constexpr void __set_m_RectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_RectTransform() const;

 UnityEngine::RectTransform __declspec(property(get=__get_m_TextViewport, put=__set_m_TextViewport))  m_TextViewport;

constexpr void __set_m_TextViewport(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_TextViewport() const;

 UnityEngine::UI::RectMask2D __declspec(property(get=__get_m_TextComponentRectMask, put=__set_m_TextComponentRectMask))  m_TextComponentRectMask;

constexpr void __set_m_TextComponentRectMask(UnityEngine::UI::RectMask2D value) ;

constexpr UnityEngine::UI::RectMask2D __get_m_TextComponentRectMask() const;

 UnityEngine::UI::RectMask2D __declspec(property(get=__get_m_TextViewportRectMask, put=__set_m_TextViewportRectMask))  m_TextViewportRectMask;

constexpr void __set_m_TextViewportRectMask(UnityEngine::UI::RectMask2D value) ;

constexpr UnityEngine::UI::RectMask2D __get_m_TextViewportRectMask() const;

 UnityEngine::Rect __declspec(property(get=__get_m_CachedViewportRect, put=__set_m_CachedViewportRect))  m_CachedViewportRect;

constexpr void __set_m_CachedViewportRect(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get_m_CachedViewportRect() const;

 TMPro::TMP_Text __declspec(property(get=__get_m_TextComponent, put=__set_m_TextComponent))  m_TextComponent;

constexpr void __set_m_TextComponent(TMPro::TMP_Text value) ;

constexpr TMPro::TMP_Text __get_m_TextComponent() const;

 UnityEngine::RectTransform __declspec(property(get=__get_m_TextComponentRectTransform, put=__set_m_TextComponentRectTransform))  m_TextComponentRectTransform;

constexpr void __set_m_TextComponentRectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_TextComponentRectTransform() const;

 UnityEngine::UI::Graphic __declspec(property(get=__get_m_Placeholder, put=__set_m_Placeholder))  m_Placeholder;

constexpr void __set_m_Placeholder(UnityEngine::UI::Graphic value) ;

constexpr UnityEngine::UI::Graphic __get_m_Placeholder() const;

 UnityEngine::UI::Scrollbar __declspec(property(get=__get_m_VerticalScrollbar, put=__set_m_VerticalScrollbar))  m_VerticalScrollbar;

constexpr void __set_m_VerticalScrollbar(UnityEngine::UI::Scrollbar value) ;

constexpr UnityEngine::UI::Scrollbar __get_m_VerticalScrollbar() const;

 TMPro::TMP_ScrollbarEventHandler __declspec(property(get=__get_m_VerticalScrollbarEventHandler, put=__set_m_VerticalScrollbarEventHandler))  m_VerticalScrollbarEventHandler;

constexpr void __set_m_VerticalScrollbarEventHandler(TMPro::TMP_ScrollbarEventHandler value) ;

constexpr TMPro::TMP_ScrollbarEventHandler __get_m_VerticalScrollbarEventHandler() const;

 bool __declspec(property(get=__get_m_IsDrivenByLayoutComponents, put=__set_m_IsDrivenByLayoutComponents))  m_IsDrivenByLayoutComponents;

constexpr void __set_m_IsDrivenByLayoutComponents(bool value) ;

constexpr bool __get_m_IsDrivenByLayoutComponents() const;

 UnityEngine::UI::LayoutGroup __declspec(property(get=__get_m_LayoutGroup, put=__set_m_LayoutGroup))  m_LayoutGroup;

constexpr void __set_m_LayoutGroup(UnityEngine::UI::LayoutGroup value) ;

constexpr UnityEngine::UI::LayoutGroup __get_m_LayoutGroup() const;

 UnityEngine::EventSystems::IScrollHandler __declspec(property(get=__get_m_IScrollHandlerParent, put=__set_m_IScrollHandlerParent))  m_IScrollHandlerParent;

constexpr void __set_m_IScrollHandlerParent(UnityEngine::EventSystems::IScrollHandler value) ;

constexpr UnityEngine::EventSystems::IScrollHandler __get_m_IScrollHandlerParent() const;

 float_t __declspec(property(get=__get_m_ScrollPosition, put=__set_m_ScrollPosition))  m_ScrollPosition;

constexpr void __set_m_ScrollPosition(float_t value) ;

constexpr float_t __get_m_ScrollPosition() const;

 float_t __declspec(property(get=__get_m_ScrollSensitivity, put=__set_m_ScrollSensitivity))  m_ScrollSensitivity;

constexpr void __set_m_ScrollSensitivity(float_t value) ;

constexpr float_t __get_m_ScrollSensitivity() const;

 TMPro::TMPro__TMP_InputField__ContentType __declspec(property(get=__get_m_ContentType, put=__set_m_ContentType))  m_ContentType;

constexpr void __set_m_ContentType(TMPro::TMPro__TMP_InputField__ContentType value) ;

constexpr TMPro::TMPro__TMP_InputField__ContentType __get_m_ContentType() const;

 TMPro::TMPro__TMP_InputField__InputType __declspec(property(get=__get_m_InputType, put=__set_m_InputType))  m_InputType;

constexpr void __set_m_InputType(TMPro::TMPro__TMP_InputField__InputType value) ;

constexpr TMPro::TMPro__TMP_InputField__InputType __get_m_InputType() const;

 char16_t __declspec(property(get=__get_m_AsteriskChar, put=__set_m_AsteriskChar))  m_AsteriskChar;

constexpr void __set_m_AsteriskChar(char16_t value) ;

constexpr char16_t __get_m_AsteriskChar() const;

 UnityEngine::TouchScreenKeyboardType __declspec(property(get=__get_m_KeyboardType, put=__set_m_KeyboardType))  m_KeyboardType;

constexpr void __set_m_KeyboardType(UnityEngine::TouchScreenKeyboardType value) ;

constexpr UnityEngine::TouchScreenKeyboardType __get_m_KeyboardType() const;

 TMPro::TMPro__TMP_InputField__LineType __declspec(property(get=__get_m_LineType, put=__set_m_LineType))  m_LineType;

constexpr void __set_m_LineType(TMPro::TMPro__TMP_InputField__LineType value) ;

constexpr TMPro::TMPro__TMP_InputField__LineType __get_m_LineType() const;

 bool __declspec(property(get=__get_m_HideMobileInput, put=__set_m_HideMobileInput))  m_HideMobileInput;

constexpr void __set_m_HideMobileInput(bool value) ;

constexpr bool __get_m_HideMobileInput() const;

 bool __declspec(property(get=__get_m_HideSoftKeyboard, put=__set_m_HideSoftKeyboard))  m_HideSoftKeyboard;

constexpr void __set_m_HideSoftKeyboard(bool value) ;

constexpr bool __get_m_HideSoftKeyboard() const;

 TMPro::TMPro__TMP_InputField__CharacterValidation __declspec(property(get=__get_m_CharacterValidation, put=__set_m_CharacterValidation))  m_CharacterValidation;

constexpr void __set_m_CharacterValidation(TMPro::TMPro__TMP_InputField__CharacterValidation value) ;

constexpr TMPro::TMPro__TMP_InputField__CharacterValidation __get_m_CharacterValidation() const;

 ::StringW __declspec(property(get=__get_m_RegexValue, put=__set_m_RegexValue))  m_RegexValue;

constexpr void __set_m_RegexValue(::StringW value) ;

constexpr ::StringW __get_m_RegexValue() const;

 float_t __declspec(property(get=__get_m_GlobalPointSize, put=__set_m_GlobalPointSize))  m_GlobalPointSize;

constexpr void __set_m_GlobalPointSize(float_t value) ;

constexpr float_t __get_m_GlobalPointSize() const;

 int32_t __declspec(property(get=__get_m_CharacterLimit, put=__set_m_CharacterLimit))  m_CharacterLimit;

constexpr void __set_m_CharacterLimit(int32_t value) ;

constexpr int32_t __get_m_CharacterLimit() const;

 TMPro::TMPro__TMP_InputField__SubmitEvent __declspec(property(get=__get_m_OnEndEdit, put=__set_m_OnEndEdit))  m_OnEndEdit;

constexpr void __set_m_OnEndEdit(TMPro::TMPro__TMP_InputField__SubmitEvent value) ;

constexpr TMPro::TMPro__TMP_InputField__SubmitEvent __get_m_OnEndEdit() const;

 TMPro::TMPro__TMP_InputField__SubmitEvent __declspec(property(get=__get_m_OnSubmit, put=__set_m_OnSubmit))  m_OnSubmit;

constexpr void __set_m_OnSubmit(TMPro::TMPro__TMP_InputField__SubmitEvent value) ;

constexpr TMPro::TMPro__TMP_InputField__SubmitEvent __get_m_OnSubmit() const;

 TMPro::TMPro__TMP_InputField__SelectionEvent __declspec(property(get=__get_m_OnSelect, put=__set_m_OnSelect))  m_OnSelect;

constexpr void __set_m_OnSelect(TMPro::TMPro__TMP_InputField__SelectionEvent value) ;

constexpr TMPro::TMPro__TMP_InputField__SelectionEvent __get_m_OnSelect() const;

 TMPro::TMPro__TMP_InputField__SelectionEvent __declspec(property(get=__get_m_OnDeselect, put=__set_m_OnDeselect))  m_OnDeselect;

constexpr void __set_m_OnDeselect(TMPro::TMPro__TMP_InputField__SelectionEvent value) ;

constexpr TMPro::TMPro__TMP_InputField__SelectionEvent __get_m_OnDeselect() const;

 TMPro::TMPro__TMP_InputField__TextSelectionEvent __declspec(property(get=__get_m_OnTextSelection, put=__set_m_OnTextSelection))  m_OnTextSelection;

constexpr void __set_m_OnTextSelection(TMPro::TMPro__TMP_InputField__TextSelectionEvent value) ;

constexpr TMPro::TMPro__TMP_InputField__TextSelectionEvent __get_m_OnTextSelection() const;

 TMPro::TMPro__TMP_InputField__TextSelectionEvent __declspec(property(get=__get_m_OnEndTextSelection, put=__set_m_OnEndTextSelection))  m_OnEndTextSelection;

constexpr void __set_m_OnEndTextSelection(TMPro::TMPro__TMP_InputField__TextSelectionEvent value) ;

constexpr TMPro::TMPro__TMP_InputField__TextSelectionEvent __get_m_OnEndTextSelection() const;

 TMPro::TMPro__TMP_InputField__OnChangeEvent __declspec(property(get=__get_m_OnValueChanged, put=__set_m_OnValueChanged))  m_OnValueChanged;

constexpr void __set_m_OnValueChanged(TMPro::TMPro__TMP_InputField__OnChangeEvent value) ;

constexpr TMPro::TMPro__TMP_InputField__OnChangeEvent __get_m_OnValueChanged() const;

 TMPro::TMPro__TMP_InputField__TouchScreenKeyboardEvent __declspec(property(get=__get_m_OnTouchScreenKeyboardStatusChanged, put=__set_m_OnTouchScreenKeyboardStatusChanged))  m_OnTouchScreenKeyboardStatusChanged;

constexpr void __set_m_OnTouchScreenKeyboardStatusChanged(TMPro::TMPro__TMP_InputField__TouchScreenKeyboardEvent value) ;

constexpr TMPro::TMPro__TMP_InputField__TouchScreenKeyboardEvent __get_m_OnTouchScreenKeyboardStatusChanged() const;

 TMPro::TMPro__TMP_InputField__OnValidateInput __declspec(property(get=__get_m_OnValidateInput, put=__set_m_OnValidateInput))  m_OnValidateInput;

constexpr void __set_m_OnValidateInput(TMPro::TMPro__TMP_InputField__OnValidateInput value) ;

constexpr TMPro::TMPro__TMP_InputField__OnValidateInput __get_m_OnValidateInput() const;

 UnityEngine::Color __declspec(property(get=__get_m_CaretColor, put=__set_m_CaretColor))  m_CaretColor;

constexpr void __set_m_CaretColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_CaretColor() const;

 bool __declspec(property(get=__get_m_CustomCaretColor, put=__set_m_CustomCaretColor))  m_CustomCaretColor;

constexpr void __set_m_CustomCaretColor(bool value) ;

constexpr bool __get_m_CustomCaretColor() const;

 UnityEngine::Color __declspec(property(get=__get_m_SelectionColor, put=__set_m_SelectionColor))  m_SelectionColor;

constexpr void __set_m_SelectionColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_SelectionColor() const;

 ::StringW __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(::StringW value) ;

constexpr ::StringW __get_m_Text() const;

 float_t __declspec(property(get=__get_m_CaretBlinkRate, put=__set_m_CaretBlinkRate))  m_CaretBlinkRate;

constexpr void __set_m_CaretBlinkRate(float_t value) ;

constexpr float_t __get_m_CaretBlinkRate() const;

 int32_t __declspec(property(get=__get_m_CaretWidth, put=__set_m_CaretWidth))  m_CaretWidth;

constexpr void __set_m_CaretWidth(int32_t value) ;

constexpr int32_t __get_m_CaretWidth() const;

 bool __declspec(property(get=__get_m_ReadOnly, put=__set_m_ReadOnly))  m_ReadOnly;

constexpr void __set_m_ReadOnly(bool value) ;

constexpr bool __get_m_ReadOnly() const;

 bool __declspec(property(get=__get_m_RichText, put=__set_m_RichText))  m_RichText;

constexpr void __set_m_RichText(bool value) ;

constexpr bool __get_m_RichText() const;

 int32_t __declspec(property(get=__get_m_StringPosition, put=__set_m_StringPosition))  m_StringPosition;

constexpr void __set_m_StringPosition(int32_t value) ;

constexpr int32_t __get_m_StringPosition() const;

 int32_t __declspec(property(get=__get_m_StringSelectPosition, put=__set_m_StringSelectPosition))  m_StringSelectPosition;

constexpr void __set_m_StringSelectPosition(int32_t value) ;

constexpr int32_t __get_m_StringSelectPosition() const;

 int32_t __declspec(property(get=__get_m_CaretPosition, put=__set_m_CaretPosition))  m_CaretPosition;

constexpr void __set_m_CaretPosition(int32_t value) ;

constexpr int32_t __get_m_CaretPosition() const;

 int32_t __declspec(property(get=__get_m_CaretSelectPosition, put=__set_m_CaretSelectPosition))  m_CaretSelectPosition;

constexpr void __set_m_CaretSelectPosition(int32_t value) ;

constexpr int32_t __get_m_CaretSelectPosition() const;

 UnityEngine::RectTransform __declspec(property(get=__get_caretRectTrans, put=__set_caretRectTrans))  caretRectTrans;

constexpr void __set_caretRectTrans(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_caretRectTrans() const;

 ::ArrayW<UnityEngine::UIVertex> __declspec(property(get=__get_m_CursorVerts, put=__set_m_CursorVerts))  m_CursorVerts;

constexpr void __set_m_CursorVerts(::ArrayW<UnityEngine::UIVertex> value) ;

constexpr ::ArrayW<UnityEngine::UIVertex> __get_m_CursorVerts() const;

 UnityEngine::CanvasRenderer __declspec(property(get=__get_m_CachedInputRenderer, put=__set_m_CachedInputRenderer))  m_CachedInputRenderer;

constexpr void __set_m_CachedInputRenderer(UnityEngine::CanvasRenderer value) ;

constexpr UnityEngine::CanvasRenderer __get_m_CachedInputRenderer() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_LastPosition, put=__set_m_LastPosition))  m_LastPosition;

constexpr void __set_m_LastPosition(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_LastPosition() const;

 UnityEngine::Mesh __declspec(property(get=__get_m_Mesh, put=__set_m_Mesh))  m_Mesh;

constexpr void __set_m_Mesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get_m_Mesh() const;

 bool __declspec(property(get=__get_m_AllowInput, put=__set_m_AllowInput))  m_AllowInput;

constexpr void __set_m_AllowInput(bool value) ;

constexpr bool __get_m_AllowInput() const;

 bool __declspec(property(get=__get_m_ShouldActivateNextUpdate, put=__set_m_ShouldActivateNextUpdate))  m_ShouldActivateNextUpdate;

constexpr void __set_m_ShouldActivateNextUpdate(bool value) ;

constexpr bool __get_m_ShouldActivateNextUpdate() const;

 bool __declspec(property(get=__get_m_UpdateDrag, put=__set_m_UpdateDrag))  m_UpdateDrag;

constexpr void __set_m_UpdateDrag(bool value) ;

constexpr bool __get_m_UpdateDrag() const;

 bool __declspec(property(get=__get_m_DragPositionOutOfBounds, put=__set_m_DragPositionOutOfBounds))  m_DragPositionOutOfBounds;

constexpr void __set_m_DragPositionOutOfBounds(bool value) ;

constexpr bool __get_m_DragPositionOutOfBounds() const;

/// @brief Field kHScrollSpeed offset 0
static constexpr float_t  kHScrollSpeed{0.05};

/// @brief Field kVScrollSpeed offset 0
static constexpr float_t  kVScrollSpeed{0.1};

 bool __declspec(property(get=__get_m_CaretVisible, put=__set_m_CaretVisible))  m_CaretVisible;

constexpr void __set_m_CaretVisible(bool value) ;

constexpr bool __get_m_CaretVisible() const;

 UnityEngine::Coroutine __declspec(property(get=__get_m_BlinkCoroutine, put=__set_m_BlinkCoroutine))  m_BlinkCoroutine;

constexpr void __set_m_BlinkCoroutine(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get_m_BlinkCoroutine() const;

 float_t __declspec(property(get=__get_m_BlinkStartTime, put=__set_m_BlinkStartTime))  m_BlinkStartTime;

constexpr void __set_m_BlinkStartTime(float_t value) ;

constexpr float_t __get_m_BlinkStartTime() const;

 UnityEngine::Coroutine __declspec(property(get=__get_m_DragCoroutine, put=__set_m_DragCoroutine))  m_DragCoroutine;

constexpr void __set_m_DragCoroutine(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get_m_DragCoroutine() const;

 ::StringW __declspec(property(get=__get_m_OriginalText, put=__set_m_OriginalText))  m_OriginalText;

constexpr void __set_m_OriginalText(::StringW value) ;

constexpr ::StringW __get_m_OriginalText() const;

 bool __declspec(property(get=__get_m_WasCanceled, put=__set_m_WasCanceled))  m_WasCanceled;

constexpr void __set_m_WasCanceled(bool value) ;

constexpr bool __get_m_WasCanceled() const;

 bool __declspec(property(get=__get_m_HasDoneFocusTransition, put=__set_m_HasDoneFocusTransition))  m_HasDoneFocusTransition;

constexpr void __set_m_HasDoneFocusTransition(bool value) ;

constexpr bool __get_m_HasDoneFocusTransition() const;

 UnityEngine::WaitForSecondsRealtime __declspec(property(get=__get_m_WaitForSecondsRealtime, put=__set_m_WaitForSecondsRealtime))  m_WaitForSecondsRealtime;

constexpr void __set_m_WaitForSecondsRealtime(UnityEngine::WaitForSecondsRealtime value) ;

constexpr UnityEngine::WaitForSecondsRealtime __get_m_WaitForSecondsRealtime() const;

 bool __declspec(property(get=__get_m_PreventCallback, put=__set_m_PreventCallback))  m_PreventCallback;

constexpr void __set_m_PreventCallback(bool value) ;

constexpr bool __get_m_PreventCallback() const;

 bool __declspec(property(get=__get_m_TouchKeyboardAllowsInPlaceEditing, put=__set_m_TouchKeyboardAllowsInPlaceEditing))  m_TouchKeyboardAllowsInPlaceEditing;

constexpr void __set_m_TouchKeyboardAllowsInPlaceEditing(bool value) ;

constexpr bool __get_m_TouchKeyboardAllowsInPlaceEditing() const;

 bool __declspec(property(get=__get_m_IsTextComponentUpdateRequired, put=__set_m_IsTextComponentUpdateRequired))  m_IsTextComponentUpdateRequired;

constexpr void __set_m_IsTextComponentUpdateRequired(bool value) ;

constexpr bool __get_m_IsTextComponentUpdateRequired() const;

 bool __declspec(property(get=__get_m_isLastKeyBackspace, put=__set_m_isLastKeyBackspace))  m_isLastKeyBackspace;

constexpr void __set_m_isLastKeyBackspace(bool value) ;

constexpr bool __get_m_isLastKeyBackspace() const;

 float_t __declspec(property(get=__get_m_PointerDownClickStartTime, put=__set_m_PointerDownClickStartTime))  m_PointerDownClickStartTime;

constexpr void __set_m_PointerDownClickStartTime(float_t value) ;

constexpr float_t __get_m_PointerDownClickStartTime() const;

 float_t __declspec(property(get=__get_m_KeyDownStartTime, put=__set_m_KeyDownStartTime))  m_KeyDownStartTime;

constexpr void __set_m_KeyDownStartTime(float_t value) ;

constexpr float_t __get_m_KeyDownStartTime() const;

 float_t __declspec(property(get=__get_m_DoubleClickDelay, put=__set_m_DoubleClickDelay))  m_DoubleClickDelay;

constexpr void __set_m_DoubleClickDelay(float_t value) ;

constexpr float_t __get_m_DoubleClickDelay() const;

/// @brief Field kEmailSpecialCharacters offset 0
static constexpr ::ConstString  kEmailSpecialCharacters{u"!#$%&\'*+-/=?^_`{|}~"};

 bool __declspec(property(get=__get_m_IsCompositionActive, put=__set_m_IsCompositionActive))  m_IsCompositionActive;

constexpr void __set_m_IsCompositionActive(bool value) ;

constexpr bool __get_m_IsCompositionActive() const;

 bool __declspec(property(get=__get_m_ShouldUpdateIMEWindowPosition, put=__set_m_ShouldUpdateIMEWindowPosition))  m_ShouldUpdateIMEWindowPosition;

constexpr void __set_m_ShouldUpdateIMEWindowPosition(bool value) ;

constexpr bool __get_m_ShouldUpdateIMEWindowPosition() const;

 int32_t __declspec(property(get=__get_m_PreviousIMEInsertionLine, put=__set_m_PreviousIMEInsertionLine))  m_PreviousIMEInsertionLine;

constexpr void __set_m_PreviousIMEInsertionLine(int32_t value) ;

constexpr int32_t __get_m_PreviousIMEInsertionLine() const;

 TMPro::TMP_FontAsset __declspec(property(get=__get_m_GlobalFontAsset, put=__set_m_GlobalFontAsset))  m_GlobalFontAsset;

constexpr void __set_m_GlobalFontAsset(TMPro::TMP_FontAsset value) ;

constexpr TMPro::TMP_FontAsset __get_m_GlobalFontAsset() const;

 bool __declspec(property(get=__get_m_OnFocusSelectAll, put=__set_m_OnFocusSelectAll))  m_OnFocusSelectAll;

constexpr void __set_m_OnFocusSelectAll(bool value) ;

constexpr bool __get_m_OnFocusSelectAll() const;

 bool __declspec(property(get=__get_m_isSelectAll, put=__set_m_isSelectAll))  m_isSelectAll;

constexpr void __set_m_isSelectAll(bool value) ;

constexpr bool __get_m_isSelectAll() const;

 bool __declspec(property(get=__get_m_ResetOnDeActivation, put=__set_m_ResetOnDeActivation))  m_ResetOnDeActivation;

constexpr void __set_m_ResetOnDeActivation(bool value) ;

constexpr bool __get_m_ResetOnDeActivation() const;

 bool __declspec(property(get=__get_m_SelectionStillActive, put=__set_m_SelectionStillActive))  m_SelectionStillActive;

constexpr void __set_m_SelectionStillActive(bool value) ;

constexpr bool __get_m_SelectionStillActive() const;

 bool __declspec(property(get=__get_m_ReleaseSelection, put=__set_m_ReleaseSelection))  m_ReleaseSelection;

constexpr void __set_m_ReleaseSelection(bool value) ;

constexpr bool __get_m_ReleaseSelection() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_PreviouslySelectedObject, put=__set_m_PreviouslySelectedObject))  m_PreviouslySelectedObject;

constexpr void __set_m_PreviouslySelectedObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_PreviouslySelectedObject() const;

 bool __declspec(property(get=__get_m_RestoreOriginalTextOnEscape, put=__set_m_RestoreOriginalTextOnEscape))  m_RestoreOriginalTextOnEscape;

constexpr void __set_m_RestoreOriginalTextOnEscape(bool value) ;

constexpr bool __get_m_RestoreOriginalTextOnEscape() const;

 bool __declspec(property(get=__get_m_isRichTextEditingAllowed, put=__set_m_isRichTextEditingAllowed))  m_isRichTextEditingAllowed;

constexpr void __set_m_isRichTextEditingAllowed(bool value) ;

constexpr bool __get_m_isRichTextEditingAllowed() const;

 int32_t __declspec(property(get=__get_m_LineLimit, put=__set_m_LineLimit))  m_LineLimit;

constexpr void __set_m_LineLimit(int32_t value) ;

constexpr int32_t __get_m_LineLimit() const;

 TMPro::TMP_InputValidator __declspec(property(get=__get_m_InputValidator, put=__set_m_InputValidator))  m_InputValidator;

constexpr void __set_m_InputValidator(TMPro::TMP_InputValidator value) ;

constexpr TMPro::TMP_InputValidator __get_m_InputValidator() const;

 bool __declspec(property(get=__get_m_isSelected, put=__set_m_isSelected))  m_isSelected;

constexpr void __set_m_isSelected(bool value) ;

constexpr bool __get_m_isSelected() const;

 bool __declspec(property(get=__get_m_IsStringPositionDirty, put=__set_m_IsStringPositionDirty))  m_IsStringPositionDirty;

constexpr void __set_m_IsStringPositionDirty(bool value) ;

constexpr bool __get_m_IsStringPositionDirty() const;

 bool __declspec(property(get=__get_m_IsCaretPositionDirty, put=__set_m_IsCaretPositionDirty))  m_IsCaretPositionDirty;

constexpr void __set_m_IsCaretPositionDirty(bool value) ;

constexpr bool __get_m_IsCaretPositionDirty() const;

 bool __declspec(property(get=__get_m_forceRectTransformAdjustment, put=__set_m_forceRectTransformAdjustment))  m_forceRectTransformAdjustment;

constexpr void __set_m_forceRectTransformAdjustment(bool value) ;

constexpr bool __get_m_forceRectTransformAdjustment() const;

 UnityEngine::Event __declspec(property(get=__get_m_ProcessingEvent, put=__set_m_ProcessingEvent))  m_ProcessingEvent;

constexpr void __set_m_ProcessingEvent(UnityEngine::Event value) ;

constexpr UnityEngine::Event __get_m_ProcessingEvent() const;


// Properties

 UnityEngine::EventSystems::BaseInput __declspec(property(get=get_inputSystem))  inputSystem;

 ::StringW __declspec(property(get=get_compositionString))  compositionString;

 int32_t __declspec(property(get=get_compositionLength))  compositionLength;

 UnityEngine::Mesh __declspec(property(get=get_mesh))  mesh;

 bool __declspec(property(get=get_shouldHideMobileInput, put=set_shouldHideMobileInput))  shouldHideMobileInput;

 bool __declspec(property(get=get_shouldHideSoftKeyboard, put=set_shouldHideSoftKeyboard))  shouldHideSoftKeyboard;

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

 bool __declspec(property(get=get_isFocused))  isFocused;

 float_t __declspec(property(get=get_caretBlinkRate, put=set_caretBlinkRate))  caretBlinkRate;

 int32_t __declspec(property(get=get_caretWidth, put=set_caretWidth))  caretWidth;

 UnityEngine::RectTransform __declspec(property(get=get_textViewport, put=set_textViewport))  textViewport;

 TMPro::TMP_Text __declspec(property(get=get_textComponent, put=set_textComponent))  textComponent;

 UnityEngine::UI::Graphic __declspec(property(get=get_placeholder, put=set_placeholder))  placeholder;

 UnityEngine::UI::Scrollbar __declspec(property(get=get_verticalScrollbar, put=set_verticalScrollbar))  verticalScrollbar;

 float_t __declspec(property(get=get_scrollSensitivity, put=set_scrollSensitivity))  scrollSensitivity;

 UnityEngine::Color __declspec(property(get=get_caretColor, put=set_caretColor))  caretColor;

 bool __declspec(property(get=get_customCaretColor, put=set_customCaretColor))  customCaretColor;

 UnityEngine::Color __declspec(property(get=get_selectionColor, put=set_selectionColor))  selectionColor;

 TMPro::TMPro__TMP_InputField__SubmitEvent __declspec(property(get=get_onEndEdit, put=set_onEndEdit))  onEndEdit;

 TMPro::TMPro__TMP_InputField__SubmitEvent __declspec(property(get=get_onSubmit, put=set_onSubmit))  onSubmit;

 TMPro::TMPro__TMP_InputField__SelectionEvent __declspec(property(get=get_onSelect, put=set_onSelect))  onSelect;

 TMPro::TMPro__TMP_InputField__SelectionEvent __declspec(property(get=get_onDeselect, put=set_onDeselect))  onDeselect;

 TMPro::TMPro__TMP_InputField__TextSelectionEvent __declspec(property(get=get_onTextSelection, put=set_onTextSelection))  onTextSelection;

 TMPro::TMPro__TMP_InputField__TextSelectionEvent __declspec(property(get=get_onEndTextSelection, put=set_onEndTextSelection))  onEndTextSelection;

 TMPro::TMPro__TMP_InputField__OnChangeEvent __declspec(property(get=get_onValueChanged, put=set_onValueChanged))  onValueChanged;

 TMPro::TMPro__TMP_InputField__TouchScreenKeyboardEvent __declspec(property(get=get_onTouchScreenKeyboardStatusChanged, put=set_onTouchScreenKeyboardStatusChanged))  onTouchScreenKeyboardStatusChanged;

 TMPro::TMPro__TMP_InputField__OnValidateInput __declspec(property(get=get_onValidateInput, put=set_onValidateInput))  onValidateInput;

 int32_t __declspec(property(get=get_characterLimit, put=set_characterLimit))  characterLimit;

 float_t __declspec(property(get=get_pointSize, put=set_pointSize))  pointSize;

 TMPro::TMP_FontAsset __declspec(property(get=get_fontAsset, put=set_fontAsset))  fontAsset;

 bool __declspec(property(get=get_onFocusSelectAll, put=set_onFocusSelectAll))  onFocusSelectAll;

 bool __declspec(property(get=get_resetOnDeActivation, put=set_resetOnDeActivation))  resetOnDeActivation;

 bool __declspec(property(get=get_restoreOriginalTextOnEscape, put=set_restoreOriginalTextOnEscape))  restoreOriginalTextOnEscape;

 bool __declspec(property(get=get_isRichTextEditingAllowed, put=set_isRichTextEditingAllowed))  isRichTextEditingAllowed;

 TMPro::TMPro__TMP_InputField__ContentType __declspec(property(get=get_contentType, put=set_contentType))  contentType;

 TMPro::TMPro__TMP_InputField__LineType __declspec(property(get=get_lineType, put=set_lineType))  lineType;

 int32_t __declspec(property(get=get_lineLimit, put=set_lineLimit))  lineLimit;

 TMPro::TMPro__TMP_InputField__InputType __declspec(property(get=get_inputType, put=set_inputType))  inputType;

 UnityEngine::TouchScreenKeyboardType __declspec(property(get=get_keyboardType, put=set_keyboardType))  keyboardType;

 TMPro::TMPro__TMP_InputField__CharacterValidation __declspec(property(get=get_characterValidation, put=set_characterValidation))  characterValidation;

 TMPro::TMP_InputValidator __declspec(property(get=get_inputValidator, put=set_inputValidator))  inputValidator;

 bool __declspec(property(get=get_readOnly, put=set_readOnly))  readOnly;

 bool __declspec(property(get=get_richText, put=set_richText))  richText;

 bool __declspec(property(get=get_multiLine))  multiLine;

 char16_t __declspec(property(get=get_asteriskChar, put=set_asteriskChar))  asteriskChar;

 bool __declspec(property(get=get_wasCanceled))  wasCanceled;

 int32_t __declspec(property(get=get_caretPositionInternal, put=set_caretPositionInternal))  caretPositionInternal;

 int32_t __declspec(property(get=get_stringPositionInternal, put=set_stringPositionInternal))  stringPositionInternal;

 int32_t __declspec(property(get=get_caretSelectPositionInternal, put=set_caretSelectPositionInternal))  caretSelectPositionInternal;

 int32_t __declspec(property(get=get_stringSelectPositionInternal, put=set_stringSelectPositionInternal))  stringSelectPositionInternal;

 bool __declspec(property(get=get_hasSelection))  hasSelection;

 int32_t __declspec(property(get=get_caretPosition, put=set_caretPosition))  caretPosition;

 int32_t __declspec(property(get=get_selectionAnchorPosition, put=set_selectionAnchorPosition))  selectionAnchorPosition;

 int32_t __declspec(property(get=get_selectionFocusPosition, put=set_selectionFocusPosition))  selectionFocusPosition;

 int32_t __declspec(property(get=get_stringPosition, put=set_stringPosition))  stringPosition;

 int32_t __declspec(property(get=get_selectionStringAnchorPosition, put=set_selectionStringAnchorPosition))  selectionStringAnchorPosition;

 int32_t __declspec(property(get=get_selectionStringFocusPosition, put=set_selectionStringFocusPosition))  selectionStringFocusPosition;

static ::StringW __declspec(property(get=get_clipboard, put=set_clipboard))  clipboard;

 float_t __declspec(property(get=get_minWidth))  minWidth;

 float_t __declspec(property(get=get_preferredWidth))  preferredWidth;

 float_t __declspec(property(get=get_flexibleWidth))  flexibleWidth;

 float_t __declspec(property(get=get_minHeight))  minHeight;

 float_t __declspec(property(get=get_preferredHeight))  preferredHeight;

 float_t __declspec(property(get=get_flexibleHeight))  flexibleHeight;

 int32_t __declspec(property(get=get_layoutPriority))  layoutPriority;


// Methods

/// @brief Method get_inputSystem addr 0x2a7a9e0 size 0x110 virtual false final false
 UnityEngine::EventSystems::BaseInput get_inputSystem() ;

/// @brief Method get_compositionString addr 0x2a7aaf0 size 0x94 virtual false final false
 ::StringW get_compositionString() ;

/// @brief Method get_compositionLength addr 0x2a7ab84 size 0x2c virtual false final false
 int32_t get_compositionLength() ;

static TMPro::TMP_InputField New_ctor() ;

/// @brief Method .ctor addr 0x2a7abb0 size 0x290 virtual false final false
 void _ctor() ;

/// @brief Method get_mesh addr 0x2a7aed4 size 0xa8 virtual false final false
 UnityEngine::Mesh get_mesh() ;

/// @brief Method get_shouldHideMobileInput addr 0x2a7af7c size 0x48 virtual false final false
 bool get_shouldHideMobileInput() ;

/// @brief Method set_shouldHideMobileInput addr 0x2a7afc4 size 0x8c virtual false final false
 void set_shouldHideMobileInput(bool value) ;

/// @brief Method get_shouldHideSoftKeyboard addr 0x2a7b050 size 0x94 virtual false final false
 bool get_shouldHideSoftKeyboard() ;

/// @brief Method set_shouldHideSoftKeyboard addr 0x2a7b0e4 size 0x114 virtual false final false
 void set_shouldHideSoftKeyboard(bool value) ;

/// @brief Method isKeyboardUsingEvents addr 0x2a7b1f8 size 0x54 virtual false final false
 bool isKeyboardUsingEvents() ;

/// @brief Method get_text addr 0x2a7b24c size 0x8 virtual false final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x2a7b254 size 0x8 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method SetTextWithoutNotify addr 0x2a7b390 size 0x8 virtual false final false
 void SetTextWithoutNotify(::StringW input) ;

/// @brief Method SetText addr 0x2a7b25c size 0x134 virtual false final false
 void SetText(::StringW value, bool sendCallback) ;

/// @brief Method get_isFocused addr 0x2a7b910 size 0x8 virtual false final false
 bool get_isFocused() ;

/// @brief Method get_caretBlinkRate addr 0x2a7b918 size 0x8 virtual false final false
 float_t get_caretBlinkRate() ;

/// @brief Method set_caretBlinkRate addr 0x2a7b920 size 0x7c virtual false final false
 void set_caretBlinkRate(float_t value) ;

/// @brief Method get_caretWidth addr 0x2a7b9f0 size 0x8 virtual false final false
 int32_t get_caretWidth() ;

/// @brief Method set_caretWidth addr 0x2a7b9f8 size 0x74 virtual false final false
 void set_caretWidth(int32_t value) ;

/// @brief Method get_textViewport addr 0x2a7bac4 size 0x8 virtual false final false
 UnityEngine::RectTransform get_textViewport() ;

/// @brief Method set_textViewport addr 0x2a6bbac size 0x58 virtual false final false
 void set_textViewport(UnityEngine::RectTransform value) ;

/// @brief Method get_textComponent addr 0x2a7bacc size 0x8 virtual false final false
 TMPro::TMP_Text get_textComponent() ;

/// @brief Method set_textComponent addr 0x2a6bc04 size 0x74 virtual false final false
 void set_textComponent(TMPro::TMP_Text value) ;

/// @brief Method get_placeholder addr 0x2a7bad4 size 0x8 virtual false final false
 UnityEngine::UI::Graphic get_placeholder() ;

/// @brief Method set_placeholder addr 0x2a6bc78 size 0x58 virtual false final false
 void set_placeholder(UnityEngine::UI::Graphic value) ;

/// @brief Method get_verticalScrollbar addr 0x2a7badc size 0x8 virtual false final false
 UnityEngine::UI::Scrollbar get_verticalScrollbar() ;

/// @brief Method set_verticalScrollbar addr 0x2a7bae4 size 0x1b8 virtual false final false
 void set_verticalScrollbar(UnityEngine::UI::Scrollbar value) ;

/// @brief Method get_scrollSensitivity addr 0x2a7bc9c size 0x8 virtual false final false
 float_t get_scrollSensitivity() ;

/// @brief Method set_scrollSensitivity addr 0x2a7bca4 size 0x74 virtual false final false
 void set_scrollSensitivity(float_t value) ;

/// @brief Method get_caretColor addr 0x2a7bd18 size 0x44 virtual false final false
 UnityEngine::Color get_caretColor() ;

/// @brief Method set_caretColor addr 0x2a7bd5c size 0x2c virtual false final false
 void set_caretColor(UnityEngine::Color value) ;

/// @brief Method get_customCaretColor addr 0x2a7bd88 size 0x8 virtual false final false
 bool get_customCaretColor() ;

/// @brief Method set_customCaretColor addr 0x2a7bd90 size 0x1c virtual false final false
 void set_customCaretColor(bool value) ;

/// @brief Method get_selectionColor addr 0x2a7bdac size 0x14 virtual false final false
 UnityEngine::Color get_selectionColor() ;

/// @brief Method set_selectionColor addr 0x2a7bdc0 size 0x2c virtual false final false
 void set_selectionColor(UnityEngine::Color value) ;

/// @brief Method get_onEndEdit addr 0x2a7bdec size 0x8 virtual false final false
 TMPro::TMPro__TMP_InputField__SubmitEvent get_onEndEdit() ;

/// @brief Method set_onEndEdit addr 0x2a7bdf4 size 0x58 virtual false final false
 void set_onEndEdit(TMPro::TMPro__TMP_InputField__SubmitEvent value) ;

/// @brief Method get_onSubmit addr 0x2a7be4c size 0x8 virtual false final false
 TMPro::TMPro__TMP_InputField__SubmitEvent get_onSubmit() ;

/// @brief Method set_onSubmit addr 0x2a7be54 size 0x58 virtual false final false
 void set_onSubmit(TMPro::TMPro__TMP_InputField__SubmitEvent value) ;

/// @brief Method get_onSelect addr 0x2a7beac size 0x8 virtual false final false
 TMPro::TMPro__TMP_InputField__SelectionEvent get_onSelect() ;

/// @brief Method set_onSelect addr 0x2a7beb4 size 0x58 virtual false final false
 void set_onSelect(TMPro::TMPro__TMP_InputField__SelectionEvent value) ;

/// @brief Method get_onDeselect addr 0x2a7bf0c size 0x8 virtual false final false
 TMPro::TMPro__TMP_InputField__SelectionEvent get_onDeselect() ;

/// @brief Method set_onDeselect addr 0x2a7bf14 size 0x58 virtual false final false
 void set_onDeselect(TMPro::TMPro__TMP_InputField__SelectionEvent value) ;

/// @brief Method get_onTextSelection addr 0x2a7bf6c size 0x8 virtual false final false
 TMPro::TMPro__TMP_InputField__TextSelectionEvent get_onTextSelection() ;

/// @brief Method set_onTextSelection addr 0x2a7bf74 size 0x58 virtual false final false
 void set_onTextSelection(TMPro::TMPro__TMP_InputField__TextSelectionEvent value) ;

/// @brief Method get_onEndTextSelection addr 0x2a7bfcc size 0x8 virtual false final false
 TMPro::TMPro__TMP_InputField__TextSelectionEvent get_onEndTextSelection() ;

/// @brief Method set_onEndTextSelection addr 0x2a7bfd4 size 0x58 virtual false final false
 void set_onEndTextSelection(TMPro::TMPro__TMP_InputField__TextSelectionEvent value) ;

/// @brief Method get_onValueChanged addr 0x2a7c02c size 0x8 virtual false final false
 TMPro::TMPro__TMP_InputField__OnChangeEvent get_onValueChanged() ;

/// @brief Method set_onValueChanged addr 0x2a7c034 size 0x58 virtual false final false
 void set_onValueChanged(TMPro::TMPro__TMP_InputField__OnChangeEvent value) ;

/// @brief Method get_onTouchScreenKeyboardStatusChanged addr 0x2a7c08c size 0x8 virtual false final false
 TMPro::TMPro__TMP_InputField__TouchScreenKeyboardEvent get_onTouchScreenKeyboardStatusChanged() ;

/// @brief Method set_onTouchScreenKeyboardStatusChanged addr 0x2a7c094 size 0x58 virtual false final false
 void set_onTouchScreenKeyboardStatusChanged(TMPro::TMPro__TMP_InputField__TouchScreenKeyboardEvent value) ;

/// @brief Method get_onValidateInput addr 0x2a7c0ec size 0x8 virtual false final false
 TMPro::TMPro__TMP_InputField__OnValidateInput get_onValidateInput() ;

/// @brief Method set_onValidateInput addr 0x2a7c0f4 size 0x58 virtual false final false
 void set_onValidateInput(TMPro::TMPro__TMP_InputField__OnValidateInput value) ;

/// @brief Method get_characterLimit addr 0x2a7c14c size 0x8 virtual false final false
 int32_t get_characterLimit() ;

/// @brief Method set_characterLimit addr 0x2a7c154 size 0xc0 virtual false final false
 void set_characterLimit(int32_t value) ;

/// @brief Method get_pointSize addr 0x2a7c214 size 0x8 virtual false final false
 float_t get_pointSize() ;

/// @brief Method set_pointSize addr 0x2a7c21c size 0xb4 virtual false final false
 void set_pointSize(float_t value) ;

/// @brief Method get_fontAsset addr 0x2a7c3b8 size 0x8 virtual false final false
 TMPro::TMP_FontAsset get_fontAsset() ;

/// @brief Method set_fontAsset addr 0x2a6bcd0 size 0x80 virtual false final false
 void set_fontAsset(TMPro::TMP_FontAsset value) ;

/// @brief Method get_onFocusSelectAll addr 0x2a7c4a0 size 0x8 virtual false final false
 bool get_onFocusSelectAll() ;

/// @brief Method set_onFocusSelectAll addr 0x2a7c4a8 size 0xc virtual false final false
 void set_onFocusSelectAll(bool value) ;

/// @brief Method get_resetOnDeActivation addr 0x2a7c4b4 size 0x8 virtual false final false
 bool get_resetOnDeActivation() ;

/// @brief Method set_resetOnDeActivation addr 0x2a7c4bc size 0xc virtual false final false
 void set_resetOnDeActivation(bool value) ;

/// @brief Method get_restoreOriginalTextOnEscape addr 0x2a7c4c8 size 0x8 virtual false final false
 bool get_restoreOriginalTextOnEscape() ;

/// @brief Method set_restoreOriginalTextOnEscape addr 0x2a7c4d0 size 0xc virtual false final false
 void set_restoreOriginalTextOnEscape(bool value) ;

/// @brief Method get_isRichTextEditingAllowed addr 0x2a7c4dc size 0x8 virtual false final false
 bool get_isRichTextEditingAllowed() ;

/// @brief Method set_isRichTextEditingAllowed addr 0x2a7c4e4 size 0xc virtual false final false
 void set_isRichTextEditingAllowed(bool value) ;

/// @brief Method get_contentType addr 0x2a7c4f0 size 0x8 virtual false final false
 TMPro::TMPro__TMP_InputField__ContentType get_contentType() ;

/// @brief Method set_contentType addr 0x2a7c4f8 size 0x74 virtual false final false
 void set_contentType(TMPro::TMPro__TMP_InputField__ContentType value) ;

/// @brief Method get_lineType addr 0x2a7c628 size 0x8 virtual false final false
 TMPro::TMPro__TMP_InputField__LineType get_lineType() ;

/// @brief Method set_lineType addr 0x2a7c630 size 0xc0 virtual false final false
 void set_lineType(TMPro::TMPro__TMP_InputField__LineType value) ;

/// @brief Method get_lineLimit addr 0x2a7c748 size 0x8 virtual false final false
 int32_t get_lineLimit() ;

/// @brief Method set_lineLimit addr 0x2a7c750 size 0x6c virtual false final false
 void set_lineLimit(int32_t value) ;

/// @brief Method get_inputType addr 0x2a7c7bc size 0x8 virtual false final false
 TMPro::TMPro__TMP_InputField__InputType get_inputType() ;

/// @brief Method set_inputType addr 0x2a7c7c4 size 0x84 virtual false final false
 void set_inputType(TMPro::TMPro__TMP_InputField__InputType value) ;

/// @brief Method get_keyboardType addr 0x2a7c860 size 0x8 virtual false final false
 UnityEngine::TouchScreenKeyboardType get_keyboardType() ;

/// @brief Method set_keyboardType addr 0x2a7c868 size 0x84 virtual false final false
 void set_keyboardType(UnityEngine::TouchScreenKeyboardType value) ;

/// @brief Method get_characterValidation addr 0x2a7c8ec size 0x8 virtual false final false
 TMPro::TMPro__TMP_InputField__CharacterValidation get_characterValidation() ;

/// @brief Method set_characterValidation addr 0x2a7c8f4 size 0x84 virtual false final false
 void set_characterValidation(TMPro::TMPro__TMP_InputField__CharacterValidation value) ;

/// @brief Method get_inputValidator addr 0x2a7c978 size 0x8 virtual false final false
 TMPro::TMP_InputValidator get_inputValidator() ;

/// @brief Method set_inputValidator addr 0x2a7c980 size 0x84 virtual false final false
 void set_inputValidator(TMPro::TMP_InputValidator value) ;

/// @brief Method get_readOnly addr 0x2a7ca1c size 0x8 virtual false final false
 bool get_readOnly() ;

/// @brief Method set_readOnly addr 0x2a7ca24 size 0xc virtual false final false
 void set_readOnly(bool value) ;

/// @brief Method get_richText addr 0x2a7ca30 size 0x8 virtual false final false
 bool get_richText() ;

/// @brief Method set_richText addr 0x2a7ca38 size 0xc virtual false final false
 void set_richText(bool value) ;

/// @brief Method get_multiLine addr 0x2a7cacc size 0x14 virtual false final false
 bool get_multiLine() ;

/// @brief Method get_asteriskChar addr 0x2a7cae0 size 0x8 virtual false final false
 char16_t get_asteriskChar() ;

/// @brief Method set_asteriskChar addr 0x2a7cae8 size 0x74 virtual false final false
 void set_asteriskChar(char16_t value) ;

/// @brief Method get_wasCanceled addr 0x2a7cb5c size 0x8 virtual false final false
 bool get_wasCanceled() ;

/// @brief Method ClampStringPos addr 0x2a7cb64 size 0x38 virtual false final false
 void ClampStringPos(ByRef<int32_t> pos) ;

/// @brief Method ClampCaretPos addr 0x2a7cb9c size 0x44 virtual false final false
 void ClampCaretPos(ByRef<int32_t> pos) ;

/// @brief Method get_caretPositionInternal addr 0x2a7cbe0 size 0x18 virtual false final false
 int32_t get_caretPositionInternal() ;

/// @brief Method set_caretPositionInternal addr 0x2a7cbf8 size 0x10 virtual false final false
 void set_caretPositionInternal(int32_t value) ;

/// @brief Method get_stringPositionInternal addr 0x2a7cc08 size 0x18 virtual false final false
 int32_t get_stringPositionInternal() ;

/// @brief Method set_stringPositionInternal addr 0x2a7cc20 size 0x38 virtual false final false
 void set_stringPositionInternal(int32_t value) ;

/// @brief Method get_caretSelectPositionInternal addr 0x2a7cc58 size 0x18 virtual false final false
 int32_t get_caretSelectPositionInternal() ;

/// @brief Method set_caretSelectPositionInternal addr 0x2a7cc70 size 0x10 virtual false final false
 void set_caretSelectPositionInternal(int32_t value) ;

/// @brief Method get_stringSelectPositionInternal addr 0x2a7cc80 size 0x18 virtual false final false
 int32_t get_stringSelectPositionInternal() ;

/// @brief Method set_stringSelectPositionInternal addr 0x2a7cc98 size 0x38 virtual false final false
 void set_stringSelectPositionInternal(int32_t value) ;

/// @brief Method get_hasSelection addr 0x2a7ccd0 size 0x3c virtual false final false
 bool get_hasSelection() ;

/// @brief Method get_caretPosition addr 0x2a7cd0c size 0x18 virtual false final false
 int32_t get_caretPosition() ;

/// @brief Method set_caretPosition addr 0x2a7cd24 size 0x34 virtual false final false
 void set_caretPosition(int32_t value) ;

/// @brief Method get_selectionAnchorPosition addr 0x2a7cdd0 size 0x18 virtual false final false
 int32_t get_selectionAnchorPosition() ;

/// @brief Method set_selectionAnchorPosition addr 0x2a7cd58 size 0x3c virtual false final false
 void set_selectionAnchorPosition(int32_t value) ;

/// @brief Method get_selectionFocusPosition addr 0x2a7cde8 size 0x18 virtual false final false
 int32_t get_selectionFocusPosition() ;

/// @brief Method set_selectionFocusPosition addr 0x2a7cd94 size 0x3c virtual false final false
 void set_selectionFocusPosition(int32_t value) ;

/// @brief Method get_stringPosition addr 0x2a7ce00 size 0x18 virtual false final false
 int32_t get_stringPosition() ;

/// @brief Method set_stringPosition addr 0x2a7ce18 size 0x34 virtual false final false
 void set_stringPosition(int32_t value) ;

/// @brief Method get_selectionStringAnchorPosition addr 0x2a7cefc size 0x18 virtual false final false
 int32_t get_selectionStringAnchorPosition() ;

/// @brief Method set_selectionStringAnchorPosition addr 0x2a7ce4c size 0x58 virtual false final false
 void set_selectionStringAnchorPosition(int32_t value) ;

/// @brief Method get_selectionStringFocusPosition addr 0x2a7cf14 size 0x18 virtual false final false
 int32_t get_selectionStringFocusPosition() ;

/// @brief Method set_selectionStringFocusPosition addr 0x2a7cea4 size 0x58 virtual false final false
 void set_selectionStringFocusPosition(int32_t value) ;

/// @brief Method OnEnable addr 0x2a7cf2c size 0x720 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2a7db50 size 0x330 virtual true final false
 void OnDisable() ;

/// @brief Method ON_TEXT_CHANGED addr 0x2a7e03c size 0x114 virtual false final false
 void ON_TEXT_CHANGED(UnityEngine::Object obj) ;

/// @brief Method CaretBlink addr 0x2a7e2ac size 0x68 virtual false final false
 System::Collections::IEnumerator CaretBlink() ;

/// @brief Method SetCaretVisible addr 0x2a7e314 size 0x38 virtual false final false
 void SetCaretVisible() ;

/// @brief Method SetCaretActive addr 0x2a7b99c size 0x54 virtual false final false
 void SetCaretActive() ;

/// @brief Method OnFocus addr 0x2a7e34c size 0x10 virtual false final false
 void OnFocus() ;

/// @brief Method SelectAll addr 0x2a7e35c size 0x3c virtual false final false
 void SelectAll() ;

/// @brief Method MoveTextEnd addr 0x2a7e398 size 0x138 virtual false final false
 void MoveTextEnd(bool shift) ;

/// @brief Method MoveTextStart addr 0x2a7e530 size 0x13c virtual false final false
 void MoveTextStart(bool shift) ;

/// @brief Method MoveToEndOfLine addr 0x2a7e66c size 0x180 virtual false final false
 void MoveToEndOfLine(bool shift, bool ctrl) ;

/// @brief Method MoveToStartOfLine addr 0x2a7e7ec size 0x190 virtual false final false
 void MoveToStartOfLine(bool shift, bool ctrl) ;

/// @brief Method get_clipboard addr 0x2a7e97c size 0x8 virtual false final false
static ::StringW get_clipboard() ;

/// @brief Method set_clipboard addr 0x2a7e984 size 0x8 virtual false final false
static void set_clipboard(::StringW value) ;

/// @brief Method InPlaceEditing addr 0x2a7e98c size 0xc4 virtual false final false
 bool InPlaceEditing() ;

/// @brief Method UpdateStringPositionFromKeyboard addr 0x2a7ea50 size 0x148 virtual false final false
 void UpdateStringPositionFromKeyboard() ;

/// @brief Method LateUpdate addr 0x2a7eb98 size 0x668 virtual true final false
 void LateUpdate() ;

/// @brief Method MayDrag addr 0x2a7fe8c size 0x104 virtual false final false
 bool MayDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnBeginDrag addr 0x2a7ff90 size 0x20 virtual true final false
 void OnBeginDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnDrag addr 0x2a7ffb0 size 0x28c virtual true final false
 void OnDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method MouseDragOutsideRect addr 0x2a8023c size 0x74 virtual false final false
 System::Collections::IEnumerator MouseDragOutsideRect(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnEndDrag addr 0x2a802b0 size 0x1c virtual true final false
 void OnEndDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerDown addr 0x2a802cc size 0x730 virtual true final false
 void OnPointerDown(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method KeyPressed addr 0x2a809fc size 0x414 virtual false final false
 TMPro::TMPro__TMP_InputField__EditState KeyPressed(UnityEngine::Event evt) ;

/// @brief Method IsValidChar addr 0x2a81e2c size 0x20 virtual true final false
 bool IsValidChar(char16_t c) ;

/// @brief Method ProcessEvent addr 0x2a81e4c size 0x4 virtual false final false
 void ProcessEvent(UnityEngine::Event e) ;

/// @brief Method OnUpdateSelected addr 0x2a81e50 size 0x1a0 virtual true final false
 void OnUpdateSelected(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnScroll addr 0x2a8204c size 0x1c0 virtual true final false
 void OnScroll(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method GetScrollPositionRelativeToViewport addr 0x2a8220c size 0x110 virtual false final false
 float_t GetScrollPositionRelativeToViewport() ;

/// @brief Method GetSelectedString addr 0x2a813bc size 0xc0 virtual false final false
 ::StringW GetSelectedString() ;

/// @brief Method FindNextWordBegin addr 0x2a824ec size 0xd4 virtual false final false
 int32_t FindNextWordBegin() ;

/// @brief Method MoveRight addr 0x2a81a00 size 0x3fc virtual false final false
 void MoveRight(bool shift, bool ctrl) ;

/// @brief Method FindPrevWordBegin addr 0x2a825c0 size 0xb8 virtual false final false
 int32_t FindPrevWordBegin() ;

/// @brief Method MoveLeft addr 0x2a81650 size 0x3b0 virtual false final false
 void MoveLeft(bool shift, bool ctrl) ;

/// @brief Method LineUpCharacterPosition addr 0x2a82678 size 0x150 virtual false final false
 int32_t LineUpCharacterPosition(int32_t originalPos, bool goToFirstChar) ;

/// @brief Method LineDownCharacterPosition addr 0x2a827c8 size 0x14c virtual false final false
 int32_t LineDownCharacterPosition(int32_t originalPos, bool goToLastChar) ;

/// @brief Method PageUpCharacterPosition addr 0x2a82914 size 0x20c virtual false final false
 int32_t PageUpCharacterPosition(int32_t originalPos, bool goToFirstChar) ;

/// @brief Method PageDownCharacterPosition addr 0x2a82b20 size 0x20c virtual false final false
 int32_t PageDownCharacterPosition(int32_t originalPos, bool goToLastChar) ;

/// @brief Method MoveDown addr 0x2a81e08 size 0xc virtual false final false
 void MoveDown(bool shift) ;

/// @brief Method MoveDown addr 0x2a82d2c size 0x1c4 virtual false final false
 void MoveDown(bool shift, bool goToLastChar) ;

/// @brief Method MoveUp addr 0x2a81dfc size 0xc virtual false final false
 void MoveUp(bool shift) ;

/// @brief Method MoveUp addr 0x2a82ef0 size 0x1b0 virtual false final false
 void MoveUp(bool shift, bool goToFirstChar) ;

/// @brief Method MovePageUp addr 0x2a81e14 size 0xc virtual false final false
 void MovePageUp(bool shift) ;

/// @brief Method MovePageUp addr 0x2a830a0 size 0x2e8 virtual false final false
 void MovePageUp(bool shift, bool goToFirstChar) ;

/// @brief Method MovePageDown addr 0x2a81e20 size 0xc virtual false final false
 void MovePageDown(bool shift) ;

/// @brief Method MovePageDown addr 0x2a83388 size 0x2fc virtual false final false
 void MovePageDown(bool shift, bool goToLastChar) ;

/// @brief Method Delete addr 0x2a8147c size 0x198 virtual false final false
 void Delete() ;

/// @brief Method DeleteKey addr 0x2a81198 size 0x224 virtual false final false
 void DeleteKey() ;

/// @brief Method Backspace addr 0x2a80e10 size 0x388 virtual false final false
 void Backspace() ;

/// @brief Method Append addr 0x2a83684 size 0xb0 virtual true final false
 void Append(::StringW input) ;

/// @brief Method Append addr 0x2a83734 size 0x23c virtual true final false
 void Append(char16_t input) ;

/// @brief Method Insert addr 0x2a83970 size 0x100 virtual false final false
 void Insert(char16_t c) ;

/// @brief Method UpdateTouchKeyboardFromEditChanges addr 0x2a81614 size 0x3c virtual false final false
 void UpdateTouchKeyboardFromEditChanges() ;

/// @brief Method SendOnValueChangedAndUpdateLabel addr 0x2a7fe74 size 0x18 virtual false final false
 void SendOnValueChangedAndUpdateLabel() ;

/// @brief Method SendOnValueChanged addr 0x2a7b8b4 size 0x5c virtual false final false
 void SendOnValueChanged() ;

/// @brief Method SendOnEndEdit addr 0x2a83a70 size 0x5c virtual false final false
 void SendOnEndEdit() ;

/// @brief Method SendOnSubmit addr 0x2a81ff0 size 0x5c virtual false final false
 void SendOnSubmit() ;

/// @brief Method SendOnFocus addr 0x2a83acc size 0x5c virtual false final false
 void SendOnFocus() ;

/// @brief Method SendOnFocusLost addr 0x2a83b28 size 0x5c virtual false final false
 void SendOnFocusLost() ;

/// @brief Method SendOnTextSelection addr 0x2a83b84 size 0xa8 virtual false final false
 void SendOnTextSelection() ;

/// @brief Method SendOnEndTextSelection addr 0x2a83c2c size 0x9c virtual false final false
 void SendOnEndTextSelection() ;

/// @brief Method SendTouchScreenKeyboardStatusChanged addr 0x2a7f62c size 0x74 virtual false final false
 void SendTouchScreenKeyboardStatusChanged() ;

/// @brief Method UpdateLabel addr 0x2a7b398 size 0x51c virtual false final false
 void UpdateLabel() ;

/// @brief Method UpdateScrollbar addr 0x2a7e1c0 size 0xec virtual false final false
 void UpdateScrollbar() ;

/// @brief Method OnScrollbarValueChange addr 0x2a83cc8 size 0x3c virtual false final false
 void OnScrollbarValueChange(float_t value) ;

/// @brief Method UpdateMaskRegions addr 0x2a7db4c size 0x4 virtual false final false
 void UpdateMaskRegions() ;

/// @brief Method AdjustTextPositionRelativeToViewport addr 0x2a8231c size 0x1d0 virtual false final false
 void AdjustTextPositionRelativeToViewport(float_t relativePosition) ;

/// @brief Method GetCaretPositionFromStringIndex addr 0x2a7e150 size 0x70 virtual false final false
 int32_t GetCaretPositionFromStringIndex(int32_t stringIndex) ;

/// @brief Method GetMinCaretPositionFromStringIndex addr 0x2a83d04 size 0x74 virtual false final false
 int32_t GetMinCaretPositionFromStringIndex(int32_t stringIndex) ;

/// @brief Method GetMaxCaretPositionFromStringIndex addr 0x2a83d78 size 0x70 virtual false final false
 int32_t GetMaxCaretPositionFromStringIndex(int32_t stringIndex) ;

/// @brief Method GetStringIndexFromCaretPosition addr 0x2a7e4d0 size 0x60 virtual false final false
 int32_t GetStringIndexFromCaretPosition(int32_t caretPosition) ;

/// @brief Method ForceLabelUpdate addr 0x2a83de8 size 0x4 virtual false final false
 void ForceLabelUpdate() ;

/// @brief Method MarkGeometryAsDirty addr 0x2a7ba6c size 0x58 virtual false final false
 void MarkGeometryAsDirty() ;

/// @brief Method Rebuild addr 0x2a83dec size 0x10 virtual true final false
 void Rebuild(UnityEngine::UI::CanvasUpdate update) ;

/// @brief Method LayoutComplete addr 0x2a83eb0 size 0x4 virtual true final false
 void LayoutComplete() ;

/// @brief Method GraphicUpdateComplete addr 0x2a83eb4 size 0x4 virtual true final false
 void GraphicUpdateComplete() ;

/// @brief Method UpdateGeometry addr 0x2a83dfc size 0xb4 virtual false final false
 void UpdateGeometry() ;

/// @brief Method AssignPositioningIfNeeded addr 0x2a7d64c size 0x500 virtual false final false
 void AssignPositioningIfNeeded() ;

/// @brief Method OnFillVBO addr 0x2a83eb8 size 0x358 virtual false final false
 void OnFillVBO(UnityEngine::Mesh vbo) ;

/// @brief Method GenerateCaret addr 0x2a84210 size 0xfe4 virtual false final false
 void GenerateCaret(UnityEngine::UI::VertexHelper vbo, UnityEngine::Vector2 roundingOffset) ;

/// @brief Method CreateCursorVerts addr 0x2a85ab0 size 0x150 virtual false final false
 void CreateCursorVerts() ;

/// @brief Method GenerateHightlight addr 0x2a851f4 size 0x8bc virtual false final false
 void GenerateHightlight(UnityEngine::UI::VertexHelper vbo, UnityEngine::Vector2 roundingOffset) ;

/// @brief Method AdjustRectTransformRelativeToViewport addr 0x2a85c00 size 0x530 virtual false final false
 void AdjustRectTransformRelativeToViewport(UnityEngine::Vector2 startPosition, float_t height, bool isCharVisible) ;

/// @brief Method Validate addr 0x2a7f6a0 size 0x7d4 virtual false final false
 char16_t Validate(::StringW text, int32_t pos, char16_t ch) ;

/// @brief Method ActivateInputField addr 0x2a86130 size 0x114 virtual false final false
 void ActivateInputField() ;

/// @brief Method ActivateInputFieldInternal addr 0x2a7f200 size 0x400 virtual false final false
 void ActivateInputFieldInternal() ;

/// @brief Method OnSelect addr 0x2a86244 size 0x24 virtual true final false
 void OnSelect(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnPointerClick addr 0x2a86268 size 0x24 virtual true final false
 void OnPointerClick(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnControlClick addr 0x2a8628c size 0x4 virtual false final false
 void OnControlClick() ;

/// @brief Method ReleaseSelection addr 0x2a7f600 size 0x2c virtual false final false
 void ReleaseSelection() ;

/// @brief Method DeactivateInputField addr 0x2a7de80 size 0x1bc virtual false final false
 void DeactivateInputField(bool clearSelection) ;

/// @brief Method OnDeselect addr 0x2a86290 size 0x38 virtual true final false
 void OnDeselect(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnSubmit addr 0x2a862c8 size 0x54 virtual true final false
 void OnSubmit(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method EnforceContentType addr 0x2a7c56c size 0xbc virtual false final false
 void EnforceContentType() ;

/// @brief Method SetTextComponentWrapMode addr 0x2a7ae40 size 0x94 virtual false final false
 void SetTextComponentWrapMode() ;

/// @brief Method SetTextComponentRichTextMode addr 0x2a7ca44 size 0x88 virtual false final false
 void SetTextComponentRichTextMode() ;

/// @brief Method SetToCustomIfContentTypeIsNot addr 0x2a7c6f0 size 0x58 virtual false final false
 void SetToCustomIfContentTypeIsNot(::ArrayW<TMPro::TMPro__TMP_InputField__ContentType> allowedContentTypes) ;

/// @brief Method SetToCustom addr 0x2a7c848 size 0x18 virtual false final false
 void SetToCustom() ;

/// @brief Method SetToCustom addr 0x2a7ca04 size 0x18 virtual false final false
 void SetToCustom(TMPro::TMPro__TMP_InputField__CharacterValidation characterValidation) ;

/// @brief Method DoStateTransition addr 0x2a8631c size 0x2c virtual true final false
 void DoStateTransition(UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState state, bool instant) ;

/// @brief Method CalculateLayoutInputHorizontal addr 0x2a86348 size 0x4 virtual true final false
 void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical addr 0x2a8634c size 0x4 virtual true final false
 void CalculateLayoutInputVertical() ;

/// @brief Method get_minWidth addr 0x2a86350 size 0x8 virtual true final false
 float_t get_minWidth() ;

/// @brief Method get_preferredWidth addr 0x2a86358 size 0x130 virtual true final false
 float_t get_preferredWidth() ;

/// @brief Method get_flexibleWidth addr 0x2a86488 size 0x8 virtual true final false
 float_t get_flexibleWidth() ;

/// @brief Method get_minHeight addr 0x2a86490 size 0x8 virtual true final false
 float_t get_minHeight() ;

/// @brief Method get_preferredHeight addr 0x2a86498 size 0x130 virtual true final false
 float_t get_preferredHeight() ;

/// @brief Method get_flexibleHeight addr 0x2a865c8 size 0x8 virtual true final false
 float_t get_flexibleHeight() ;

/// @brief Method get_layoutPriority addr 0x2a865d0 size 0x8 virtual true final false
 int32_t get_layoutPriority() ;

/// @brief Method SetGlobalPointSize addr 0x2a7c2d0 size 0xe8 virtual false final false
 void SetGlobalPointSize(float_t pointSize) ;

/// @brief Method SetGlobalFontAsset addr 0x2a7c3c0 size 0xe0 virtual false final false
 void SetGlobalFontAsset(TMPro::TMP_FontAsset fontAsset) ;

/// @brief Method UnityEngine.UI.ICanvasElement.get_transform addr 0x2a8666c size 0x8 virtual true final true
 UnityEngine::Transform UnityEngine_UI_ICanvasElement_get_transform() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_InputField__CharacterValidation, "TMPro", "TMP_InputField/CharacterValidation");
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_InputField__ContentType, "TMPro", "TMP_InputField/ContentType");
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_InputField__EditState, "TMPro", "TMP_InputField/EditState");
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_InputField__InputType, "TMPro", "TMP_InputField/InputType");
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_InputField__LineType, "TMPro", "TMP_InputField/LineType");
NEED_NO_BOX(TMPro::TMP_InputField);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_InputField, "TMPro", "TMP_InputField");
NEED_NO_BOX(TMPro::TMPro__TMP_InputField__OnChangeEvent);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_InputField__OnChangeEvent, "TMPro", "TMP_InputField/OnChangeEvent");
NEED_NO_BOX(TMPro::TMPro__TMP_InputField__OnValidateInput);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_InputField__OnValidateInput, "TMPro", "TMP_InputField/OnValidateInput");
NEED_NO_BOX(TMPro::TMPro__TMP_InputField__SelectionEvent);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_InputField__SelectionEvent, "TMPro", "TMP_InputField/SelectionEvent");
NEED_NO_BOX(TMPro::TMPro__TMP_InputField__SubmitEvent);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_InputField__SubmitEvent, "TMPro", "TMP_InputField/SubmitEvent");
NEED_NO_BOX(TMPro::TMPro__TMP_InputField__TextSelectionEvent);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_InputField__TextSelectionEvent, "TMPro", "TMP_InputField/TextSelectionEvent");
NEED_NO_BOX(TMPro::TMPro__TMP_InputField__TouchScreenKeyboardEvent);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_InputField__TouchScreenKeyboardEvent, "TMPro", "TMP_InputField/TouchScreenKeyboardEvent");
NEED_NO_BOX(TMPro::TMPro__TMP_InputField___CaretBlink_d__276);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_InputField___CaretBlink_d__276, "TMPro", "TMP_InputField/<CaretBlink>d__276");
NEED_NO_BOX(TMPro::TMPro__TMP_InputField___MouseDragOutsideRect_d__294);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro__TMP_InputField___MouseDragOutsideRect_d__294, "TMPro", "TMP_InputField/<MouseDragOutsideRect>d__294");
