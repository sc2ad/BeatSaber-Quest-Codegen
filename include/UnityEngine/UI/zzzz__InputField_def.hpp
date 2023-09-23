#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class TextGenerator;
}
namespace UnityEngine::EventSystems {
class BaseInput;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine {
struct TouchScreenKeyboardType;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine {
class WaitForSecondsRealtime;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::EventSystems {
class IUpdateSelectedHandler;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__Selectable__SelectionState;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine::EventSystems {
class IEndDragHandler;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class CanvasRenderer;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
class Mesh;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UI {
struct UnityEngine__UI__InputField__CharacterValidation;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__InputField__ContentType;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__InputField__EditState;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__InputField__InputType;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__InputField__LineType;
}
namespace UnityEngine::UI {
class InputField;
}
namespace UnityEngine::UI {
class UnityEngine__UI__InputField__EndEditEvent;
}
namespace UnityEngine::UI {
class UnityEngine__UI__InputField__OnChangeEvent;
}
namespace UnityEngine::UI {
class UnityEngine__UI__InputField__OnValidateInput;
}
namespace UnityEngine::UI {
class UnityEngine__UI__InputField__SubmitEvent;
}
namespace UnityEngine::UI {
class UnityEngine__UI__InputField___CaretBlink_d__172;
}
namespace UnityEngine::UI {
class UnityEngine__UI__InputField___MouseDragOutsideRect_d__194;
}
// Type: ::ContentType
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12997))
// CS Name: UnityEngine.UI.InputField::ContentType
struct CORDL_TYPE UnityEngine__UI__InputField__ContentType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__InputField__ContentType(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__InputField__ContentType(UnityEngine__UI__InputField__ContentType const&) = default;
                    constexpr UnityEngine__UI__InputField__ContentType(UnityEngine__UI__InputField__ContentType&&) = default;
                    constexpr UnityEngine__UI__InputField__ContentType& operator=(UnityEngine__UI__InputField__ContentType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__InputField__ContentType& operator=(UnityEngine__UI__InputField__ContentType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__InputField__ContentType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__InputField__ContentType_Unwrapped : int32_t {
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
constexpr operator __UnityEngine__UI__InputField__ContentType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__InputField__ContentType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Standard offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__ContentType const Standard;

/// @brief Field Autocorrected offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__ContentType const Autocorrected;

/// @brief Field IntegerNumber offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__ContentType const IntegerNumber;

/// @brief Field DecimalNumber offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__ContentType const DecimalNumber;

/// @brief Field Alphanumeric offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__ContentType const Alphanumeric;

/// @brief Field Name offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__ContentType const Name;

/// @brief Field EmailAddress offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__ContentType const EmailAddress;

/// @brief Field Password offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__ContentType const Password;

/// @brief Field Pin offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__ContentType const Pin;

/// @brief Field Custom offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__ContentType const Custom;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::InputType
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12998))
// CS Name: UnityEngine.UI.InputField::InputType
struct CORDL_TYPE UnityEngine__UI__InputField__InputType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__InputField__InputType(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__InputField__InputType(UnityEngine__UI__InputField__InputType const&) = default;
                    constexpr UnityEngine__UI__InputField__InputType(UnityEngine__UI__InputField__InputType&&) = default;
                    constexpr UnityEngine__UI__InputField__InputType& operator=(UnityEngine__UI__InputField__InputType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__InputField__InputType& operator=(UnityEngine__UI__InputField__InputType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__InputField__InputType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__InputField__InputType_Unwrapped : int32_t {
__Standard = 0,
__AutoCorrect = 1,
__Password = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__InputField__InputType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__InputField__InputType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Standard offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__InputType const Standard;

/// @brief Field AutoCorrect offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__InputType const AutoCorrect;

/// @brief Field Password offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__InputType const Password;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::CharacterValidation
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12999))
// CS Name: UnityEngine.UI.InputField::CharacterValidation
struct CORDL_TYPE UnityEngine__UI__InputField__CharacterValidation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__InputField__CharacterValidation(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__InputField__CharacterValidation(UnityEngine__UI__InputField__CharacterValidation const&) = default;
                    constexpr UnityEngine__UI__InputField__CharacterValidation(UnityEngine__UI__InputField__CharacterValidation&&) = default;
                    constexpr UnityEngine__UI__InputField__CharacterValidation& operator=(UnityEngine__UI__InputField__CharacterValidation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__InputField__CharacterValidation& operator=(UnityEngine__UI__InputField__CharacterValidation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__InputField__CharacterValidation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__InputField__CharacterValidation_Unwrapped : int32_t {
__None = 0,
__Integer = 1,
__Decimal = 2,
__Alphanumeric = 3,
__Name = 4,
__EmailAddress = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__InputField__CharacterValidation_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__InputField__CharacterValidation_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation const None;

/// @brief Field Integer offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation const Integer;

/// @brief Field Decimal offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation const Decimal;

/// @brief Field Alphanumeric offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation const Alphanumeric;

/// @brief Field Name offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation const Name;

/// @brief Field EmailAddress offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation const EmailAddress;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::LineType
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13000))
// CS Name: UnityEngine.UI.InputField::LineType
struct CORDL_TYPE UnityEngine__UI__InputField__LineType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__InputField__LineType(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__InputField__LineType(UnityEngine__UI__InputField__LineType const&) = default;
                    constexpr UnityEngine__UI__InputField__LineType(UnityEngine__UI__InputField__LineType&&) = default;
                    constexpr UnityEngine__UI__InputField__LineType& operator=(UnityEngine__UI__InputField__LineType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__InputField__LineType& operator=(UnityEngine__UI__InputField__LineType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__InputField__LineType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__InputField__LineType_Unwrapped : int32_t {
__SingleLine = 0,
__MultiLineSubmit = 1,
__MultiLineNewline = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__InputField__LineType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__InputField__LineType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SingleLine offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__LineType const SingleLine;

/// @brief Field MultiLineSubmit offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__LineType const MultiLineSubmit;

/// @brief Field MultiLineNewline offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__LineType const MultiLineNewline;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::OnValidateInput
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13001))
// CS Name: UnityEngine.UI.InputField::OnValidateInput
class CORDL_TYPE UnityEngine__UI__InputField__OnValidateInput : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__UI__InputField__OnValidateInput() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__InputField__OnValidateInput", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__InputField__OnValidateInput(UnityEngine__UI__InputField__OnValidateInput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__InputField__OnValidateInput", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__InputField__OnValidateInput(UnityEngine__UI__InputField__OnValidateInput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__InputField__OnValidateInput(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__UI__InputField__OnValidateInput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__InputField__OnValidateInput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__InputField__OnValidateInput& operator=(UnityEngine__UI__InputField__OnValidateInput&& o) noexcept = default;
  constexpr UnityEngine__UI__InputField__OnValidateInput& operator=(UnityEngine__UI__InputField__OnValidateInput const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__UI__InputField__OnValidateInput(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2bf0b60 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2bf9b20 size 0x14 virtual true final false
 char16_t Invoke(::StringW text, int32_t charIndex, char16_t addedChar) ;

/// @brief Method BeginInvoke addr 0x2bf9b34 size 0xc0 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW text, int32_t charIndex, char16_t addedChar, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2bf9bf4 size 0x28 virtual true final false
 char16_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::SubmitEvent
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 380 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13002))
// CS Name: UnityEngine.UI.InputField::SubmitEvent
class CORDL_TYPE UnityEngine__UI__InputField__SubmitEvent : public UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UI__InputField__SubmitEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__InputField__SubmitEvent", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__InputField__SubmitEvent(UnityEngine__UI__InputField__SubmitEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__InputField__SubmitEvent", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__InputField__SubmitEvent(UnityEngine__UI__InputField__SubmitEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__InputField__SubmitEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<::StringW>(ptr) {
}


  constexpr UnityEngine__UI__InputField__SubmitEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__InputField__SubmitEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__InputField__SubmitEvent& operator=(UnityEngine__UI__InputField__SubmitEvent&& o) noexcept = default;
  constexpr UnityEngine__UI__InputField__SubmitEvent& operator=(UnityEngine__UI__InputField__SubmitEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UI__InputField__SubmitEvent() ;

/// @brief Method .ctor addr 0x2bf04e4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::EndEditEvent
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 380 }), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13003))
// CS Name: UnityEngine.UI.InputField::EndEditEvent
class CORDL_TYPE UnityEngine__UI__InputField__EndEditEvent : public UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UI__InputField__EndEditEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__InputField__EndEditEvent", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__InputField__EndEditEvent(UnityEngine__UI__InputField__EndEditEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__InputField__EndEditEvent", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__InputField__EndEditEvent(UnityEngine__UI__InputField__EndEditEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__InputField__EndEditEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<::StringW>(ptr) {
}


  constexpr UnityEngine__UI__InputField__EndEditEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__InputField__EndEditEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__InputField__EndEditEvent& operator=(UnityEngine__UI__InputField__EndEditEvent&& o) noexcept = default;
  constexpr UnityEngine__UI__InputField__EndEditEvent& operator=(UnityEngine__UI__InputField__EndEditEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UI__InputField__EndEditEvent() ;

/// @brief Method .ctor addr 0x2bf052c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::OnChangeEvent
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 380 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13004))
// CS Name: UnityEngine.UI.InputField::OnChangeEvent
class CORDL_TYPE UnityEngine__UI__InputField__OnChangeEvent : public UnityEngine::Events::UnityEvent_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UI__InputField__OnChangeEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__InputField__OnChangeEvent", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__InputField__OnChangeEvent(UnityEngine__UI__InputField__OnChangeEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__InputField__OnChangeEvent", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__InputField__OnChangeEvent(UnityEngine__UI__InputField__OnChangeEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__InputField__OnChangeEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<::StringW>(ptr) {
}


  constexpr UnityEngine__UI__InputField__OnChangeEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__InputField__OnChangeEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__InputField__OnChangeEvent& operator=(UnityEngine__UI__InputField__OnChangeEvent&& o) noexcept = default;
  constexpr UnityEngine__UI__InputField__OnChangeEvent& operator=(UnityEngine__UI__InputField__OnChangeEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UI__InputField__OnChangeEvent() ;

/// @brief Method .ctor addr 0x2bf0574 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::EditState
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13005))
// CS Name: UnityEngine.UI.InputField::EditState
struct CORDL_TYPE UnityEngine__UI__InputField__EditState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__InputField__EditState(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__InputField__EditState(UnityEngine__UI__InputField__EditState const&) = default;
                    constexpr UnityEngine__UI__InputField__EditState(UnityEngine__UI__InputField__EditState&&) = default;
                    constexpr UnityEngine__UI__InputField__EditState& operator=(UnityEngine__UI__InputField__EditState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__InputField__EditState& operator=(UnityEngine__UI__InputField__EditState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__InputField__EditState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__InputField__EditState_Unwrapped : int32_t {
__Continue = 0,
__Finish = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__InputField__EditState_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__InputField__EditState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Continue offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__EditState const Continue;

/// @brief Field Finish offset 0
static UnityEngine::UI::UnityEngine__UI__InputField__EditState const Finish;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::<CaretBlink>d__172
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13006))
// CS Name: UnityEngine.UI.InputField::<CaretBlink>d__172
class CORDL_TYPE UnityEngine__UI__InputField___CaretBlink_d__172 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~UnityEngine__UI__InputField___CaretBlink_d__172() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__InputField___CaretBlink_d__172", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__InputField___CaretBlink_d__172(UnityEngine__UI__InputField___CaretBlink_d__172 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__InputField___CaretBlink_d__172", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__InputField___CaretBlink_d__172(UnityEngine__UI__InputField___CaretBlink_d__172&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__InputField___CaretBlink_d__172(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UI__InputField___CaretBlink_d__172& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__InputField___CaretBlink_d__172& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__InputField___CaretBlink_d__172& operator=(UnityEngine__UI__InputField___CaretBlink_d__172&& o) noexcept = default;
  constexpr UnityEngine__UI__InputField___CaretBlink_d__172& operator=(UnityEngine__UI__InputField___CaretBlink_d__172 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 UnityEngine::UI::InputField __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UI::InputField value) ;

constexpr UnityEngine::UI::InputField __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__UI__InputField___CaretBlink_d__172(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2bf2798 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2bf9c1c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2bf9c20 size 0x10c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2bf9d2c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2bf9d34 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2bf9d74 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::<MouseDragOutsideRect>d__194
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13007))
// CS Name: UnityEngine.UI.InputField::<MouseDragOutsideRect>d__194
class CORDL_TYPE UnityEngine__UI__InputField___MouseDragOutsideRect_d__194 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~UnityEngine__UI__InputField___MouseDragOutsideRect_d__194() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__InputField___MouseDragOutsideRect_d__194", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__InputField___MouseDragOutsideRect_d__194(UnityEngine__UI__InputField___MouseDragOutsideRect_d__194 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__InputField___MouseDragOutsideRect_d__194", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__InputField___MouseDragOutsideRect_d__194(UnityEngine__UI__InputField___MouseDragOutsideRect_d__194&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__InputField___MouseDragOutsideRect_d__194(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UI__InputField___MouseDragOutsideRect_d__194& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__InputField___MouseDragOutsideRect_d__194& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__InputField___MouseDragOutsideRect_d__194& operator=(UnityEngine__UI__InputField___MouseDragOutsideRect_d__194&& o) noexcept = default;
  constexpr UnityEngine__UI__InputField___MouseDragOutsideRect_d__194& operator=(UnityEngine__UI__InputField___MouseDragOutsideRect_d__194 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 UnityEngine::EventSystems::PointerEventData __declspec(property(get=__get_eventData, put=__set_eventData))  eventData;

constexpr void __set_eventData(UnityEngine::EventSystems::PointerEventData value) ;

constexpr UnityEngine::EventSystems::PointerEventData __get_eventData() const;

 UnityEngine::UI::InputField __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UI::InputField value) ;

constexpr UnityEngine::UI::InputField __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__UI__InputField___MouseDragOutsideRect_d__194(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2bf4df8 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2bf9d7c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2bf9d80 size 0x2a8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2bfa028 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2bfa030 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2bfa070 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::InputField
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13008))
// CS Name: UnityEngine.UI.InputField
class CORDL_TYPE InputField : public UnityEngine::UI::Selectable {
public:
// Declarations
using _MouseDragOutsideRect_d__194 = UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194;

using _CaretBlink_d__172 = UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172;

using EditState = UnityEngine::UI::UnityEngine__UI__InputField__EditState;

using OnChangeEvent = UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent;

using EndEditEvent = UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent;

using SubmitEvent = UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent;

using OnValidateInput = UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput;

using LineType = UnityEngine::UI::UnityEngine__UI__InputField__LineType;

using CharacterValidation = UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation;

using InputType = UnityEngine::UI::UnityEngine__UI__InputField__InputType;

using ContentType = UnityEngine::UI::UnityEngine__UI__InputField__ContentType;

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

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x218};

virtual ~InputField() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputField", modifiers: " const&", def_value: None }]
constexpr InputField(InputField const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputField", modifiers: "&&", def_value: None }]
constexpr InputField(InputField&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputField(void* ptr) noexcept : UnityEngine::UI::Selectable(ptr) {
}


  constexpr InputField& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputField& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputField& operator=(InputField&& o) noexcept = default;
  constexpr InputField& operator=(InputField const& o) noexcept = default;
                


// Fields

 UnityEngine::TouchScreenKeyboard __declspec(property(get=__get_m_Keyboard, put=__set_m_Keyboard))  m_Keyboard;

constexpr void __set_m_Keyboard(UnityEngine::TouchScreenKeyboard value) ;

constexpr UnityEngine::TouchScreenKeyboard __get_m_Keyboard() const;

static ::ArrayW<char16_t> __declspec(property(get=__get_kSeparators, put=__set_kSeparators))  kSeparators;

static void __set_kSeparators(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_kSeparators() ;

static bool __declspec(property(get=__get_s_IsQuestDeviceEvaluated, put=__set_s_IsQuestDeviceEvaluated))  s_IsQuestDeviceEvaluated;

static void __set_s_IsQuestDeviceEvaluated(bool value) ;

static bool __get_s_IsQuestDeviceEvaluated() ;

static bool __declspec(property(get=__get_s_IsQuestDevice, put=__set_s_IsQuestDevice))  s_IsQuestDevice;

static void __set_s_IsQuestDevice(bool value) ;

static bool __get_s_IsQuestDevice() ;

 UnityEngine::UI::Text __declspec(property(get=__get_m_TextComponent, put=__set_m_TextComponent))  m_TextComponent;

constexpr void __set_m_TextComponent(UnityEngine::UI::Text value) ;

constexpr UnityEngine::UI::Text __get_m_TextComponent() const;

 UnityEngine::UI::Graphic __declspec(property(get=__get_m_Placeholder, put=__set_m_Placeholder))  m_Placeholder;

constexpr void __set_m_Placeholder(UnityEngine::UI::Graphic value) ;

constexpr UnityEngine::UI::Graphic __get_m_Placeholder() const;

 UnityEngine::UI::UnityEngine__UI__InputField__ContentType __declspec(property(get=__get_m_ContentType, put=__set_m_ContentType))  m_ContentType;

constexpr void __set_m_ContentType(UnityEngine::UI::UnityEngine__UI__InputField__ContentType value) ;

constexpr UnityEngine::UI::UnityEngine__UI__InputField__ContentType __get_m_ContentType() const;

 UnityEngine::UI::UnityEngine__UI__InputField__InputType __declspec(property(get=__get_m_InputType, put=__set_m_InputType))  m_InputType;

constexpr void __set_m_InputType(UnityEngine::UI::UnityEngine__UI__InputField__InputType value) ;

constexpr UnityEngine::UI::UnityEngine__UI__InputField__InputType __get_m_InputType() const;

 char16_t __declspec(property(get=__get_m_AsteriskChar, put=__set_m_AsteriskChar))  m_AsteriskChar;

constexpr void __set_m_AsteriskChar(char16_t value) ;

constexpr char16_t __get_m_AsteriskChar() const;

 UnityEngine::TouchScreenKeyboardType __declspec(property(get=__get_m_KeyboardType, put=__set_m_KeyboardType))  m_KeyboardType;

constexpr void __set_m_KeyboardType(UnityEngine::TouchScreenKeyboardType value) ;

constexpr UnityEngine::TouchScreenKeyboardType __get_m_KeyboardType() const;

 UnityEngine::UI::UnityEngine__UI__InputField__LineType __declspec(property(get=__get_m_LineType, put=__set_m_LineType))  m_LineType;

constexpr void __set_m_LineType(UnityEngine::UI::UnityEngine__UI__InputField__LineType value) ;

constexpr UnityEngine::UI::UnityEngine__UI__InputField__LineType __get_m_LineType() const;

 bool __declspec(property(get=__get_m_HideMobileInput, put=__set_m_HideMobileInput))  m_HideMobileInput;

constexpr void __set_m_HideMobileInput(bool value) ;

constexpr bool __get_m_HideMobileInput() const;

 UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation __declspec(property(get=__get_m_CharacterValidation, put=__set_m_CharacterValidation))  m_CharacterValidation;

constexpr void __set_m_CharacterValidation(UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation value) ;

constexpr UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation __get_m_CharacterValidation() const;

 int32_t __declspec(property(get=__get_m_CharacterLimit, put=__set_m_CharacterLimit))  m_CharacterLimit;

constexpr void __set_m_CharacterLimit(int32_t value) ;

constexpr int32_t __get_m_CharacterLimit() const;

 UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent __declspec(property(get=__get_m_OnSubmit, put=__set_m_OnSubmit))  m_OnSubmit;

constexpr void __set_m_OnSubmit(UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent value) ;

constexpr UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent __get_m_OnSubmit() const;

 UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent __declspec(property(get=__get_m_OnDidEndEdit, put=__set_m_OnDidEndEdit))  m_OnDidEndEdit;

constexpr void __set_m_OnDidEndEdit(UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent value) ;

constexpr UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent __get_m_OnDidEndEdit() const;

 UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent __declspec(property(get=__get_m_OnValueChanged, put=__set_m_OnValueChanged))  m_OnValueChanged;

constexpr void __set_m_OnValueChanged(UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent value) ;

constexpr UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent __get_m_OnValueChanged() const;

 UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput __declspec(property(get=__get_m_OnValidateInput, put=__set_m_OnValidateInput))  m_OnValidateInput;

constexpr void __set_m_OnValidateInput(UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput value) ;

constexpr UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput __get_m_OnValidateInput() const;

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

 bool __declspec(property(get=__get_m_ShouldActivateOnSelect, put=__set_m_ShouldActivateOnSelect))  m_ShouldActivateOnSelect;

constexpr void __set_m_ShouldActivateOnSelect(bool value) ;

constexpr bool __get_m_ShouldActivateOnSelect() const;

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

 UnityEngine::TextGenerator __declspec(property(get=__get_m_InputTextCache, put=__set_m_InputTextCache))  m_InputTextCache;

constexpr void __set_m_InputTextCache(UnityEngine::TextGenerator value) ;

constexpr UnityEngine::TextGenerator __get_m_InputTextCache() const;

 UnityEngine::CanvasRenderer __declspec(property(get=__get_m_CachedInputRenderer, put=__set_m_CachedInputRenderer))  m_CachedInputRenderer;

constexpr void __set_m_CachedInputRenderer(UnityEngine::CanvasRenderer value) ;

constexpr UnityEngine::CanvasRenderer __get_m_CachedInputRenderer() const;

 bool __declspec(property(get=__get_m_PreventFontCallback, put=__set_m_PreventFontCallback))  m_PreventFontCallback;

constexpr void __set_m_PreventFontCallback(bool value) ;

constexpr bool __get_m_PreventFontCallback() const;

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

 int32_t __declspec(property(get=__get_m_DrawStart, put=__set_m_DrawStart))  m_DrawStart;

constexpr void __set_m_DrawStart(int32_t value) ;

constexpr int32_t __get_m_DrawStart() const;

 int32_t __declspec(property(get=__get_m_DrawEnd, put=__set_m_DrawEnd))  m_DrawEnd;

constexpr void __set_m_DrawEnd(int32_t value) ;

constexpr int32_t __get_m_DrawEnd() const;

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

 bool __declspec(property(get=__get_m_TouchKeyboardAllowsInPlaceEditing, put=__set_m_TouchKeyboardAllowsInPlaceEditing))  m_TouchKeyboardAllowsInPlaceEditing;

constexpr void __set_m_TouchKeyboardAllowsInPlaceEditing(bool value) ;

constexpr bool __get_m_TouchKeyboardAllowsInPlaceEditing() const;

 bool __declspec(property(get=__get_m_IsCompositionActive, put=__set_m_IsCompositionActive))  m_IsCompositionActive;

constexpr void __set_m_IsCompositionActive(bool value) ;

constexpr bool __get_m_IsCompositionActive() const;

/// @brief Field kEmailSpecialCharacters offset 0
static constexpr ::ConstString  kEmailSpecialCharacters{u"!#$%&\'*+-/=?^_`{|}~"};

/// @brief Field kOculusQuestDeviceModel offset 0
static constexpr ::ConstString  kOculusQuestDeviceModel{u"Oculus Quest"};

 UnityEngine::Event __declspec(property(get=__get_m_ProcessingEvent, put=__set_m_ProcessingEvent))  m_ProcessingEvent;

constexpr void __set_m_ProcessingEvent(UnityEngine::Event value) ;

constexpr UnityEngine::Event __get_m_ProcessingEvent() const;

/// @brief Field k_MaxTextLength offset 0
static constexpr int32_t  k_MaxTextLength{16382};


// Properties

 UnityEngine::EventSystems::BaseInput __declspec(property(get=get_input))  input;

 ::StringW __declspec(property(get=get_compositionString))  compositionString;

 UnityEngine::Mesh __declspec(property(get=get_mesh))  mesh;

 UnityEngine::TextGenerator __declspec(property(get=get_cachedInputTextGenerator))  cachedInputTextGenerator;

 bool __declspec(property(get=get_shouldHideMobileInput, put=set_shouldHideMobileInput))  shouldHideMobileInput;

 bool __declspec(property(get=get_shouldActivateOnSelect, put=set_shouldActivateOnSelect))  shouldActivateOnSelect;

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

 bool __declspec(property(get=get_isFocused))  isFocused;

 float_t __declspec(property(get=get_caretBlinkRate, put=set_caretBlinkRate))  caretBlinkRate;

 int32_t __declspec(property(get=get_caretWidth, put=set_caretWidth))  caretWidth;

 UnityEngine::UI::Text __declspec(property(get=get_textComponent, put=set_textComponent))  textComponent;

 UnityEngine::UI::Graphic __declspec(property(get=get_placeholder, put=set_placeholder))  placeholder;

 UnityEngine::Color __declspec(property(get=get_caretColor, put=set_caretColor))  caretColor;

 bool __declspec(property(get=get_customCaretColor, put=set_customCaretColor))  customCaretColor;

 UnityEngine::Color __declspec(property(get=get_selectionColor, put=set_selectionColor))  selectionColor;

 UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent __declspec(property(get=get_onEndEdit, put=set_onEndEdit))  onEndEdit;

 UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent __declspec(property(get=get_onSubmit, put=set_onSubmit))  onSubmit;

 UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent __declspec(property(get=get_onValueChange, put=set_onValueChange))  onValueChange;

 UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent __declspec(property(get=get_onValueChanged, put=set_onValueChanged))  onValueChanged;

 UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput __declspec(property(get=get_onValidateInput, put=set_onValidateInput))  onValidateInput;

 int32_t __declspec(property(get=get_characterLimit, put=set_characterLimit))  characterLimit;

 UnityEngine::UI::UnityEngine__UI__InputField__ContentType __declspec(property(get=get_contentType, put=set_contentType))  contentType;

 UnityEngine::UI::UnityEngine__UI__InputField__LineType __declspec(property(get=get_lineType, put=set_lineType))  lineType;

 UnityEngine::UI::UnityEngine__UI__InputField__InputType __declspec(property(get=get_inputType, put=set_inputType))  inputType;

 UnityEngine::TouchScreenKeyboard __declspec(property(get=get_touchScreenKeyboard))  touchScreenKeyboard;

 UnityEngine::TouchScreenKeyboardType __declspec(property(get=get_keyboardType, put=set_keyboardType))  keyboardType;

 UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation __declspec(property(get=get_characterValidation, put=set_characterValidation))  characterValidation;

 bool __declspec(property(get=get_readOnly, put=set_readOnly))  readOnly;

 bool __declspec(property(get=get_multiLine))  multiLine;

 char16_t __declspec(property(get=get_asteriskChar, put=set_asteriskChar))  asteriskChar;

 bool __declspec(property(get=get_wasCanceled))  wasCanceled;

 int32_t __declspec(property(get=get_caretPositionInternal, put=set_caretPositionInternal))  caretPositionInternal;

 int32_t __declspec(property(get=get_caretSelectPositionInternal, put=set_caretSelectPositionInternal))  caretSelectPositionInternal;

 bool __declspec(property(get=get_hasSelection))  hasSelection;

 int32_t __declspec(property(get=get_caretPosition, put=set_caretPosition))  caretPosition;

 int32_t __declspec(property(get=get_selectionAnchorPosition, put=set_selectionAnchorPosition))  selectionAnchorPosition;

 int32_t __declspec(property(get=get_selectionFocusPosition, put=set_selectionFocusPosition))  selectionFocusPosition;

static ::StringW __declspec(property(get=get_clipboard, put=set_clipboard))  clipboard;

 float_t __declspec(property(get=get_minWidth))  minWidth;

 float_t __declspec(property(get=get_preferredWidth))  preferredWidth;

 float_t __declspec(property(get=get_flexibleWidth))  flexibleWidth;

 float_t __declspec(property(get=get_minHeight))  minHeight;

 float_t __declspec(property(get=get_preferredHeight))  preferredHeight;

 float_t __declspec(property(get=get_flexibleHeight))  flexibleHeight;

 int32_t __declspec(property(get=get_layoutPriority))  layoutPriority;


// Methods

/// @brief Method get_input addr 0x2bf01a8 size 0x110 virtual false final false
 UnityEngine::EventSystems::BaseInput get_input() ;

/// @brief Method get_compositionString addr 0x2bf02b8 size 0x94 virtual false final false
 ::StringW get_compositionString() ;

// Ctor Parameters []
explicit InputField() ;

/// @brief Method .ctor addr 0x2bf034c size 0x198 virtual false final false
 void _ctor() ;

/// @brief Method get_mesh addr 0x2bf0650 size 0xa8 virtual false final false
 UnityEngine::Mesh get_mesh() ;

/// @brief Method get_cachedInputTextGenerator addr 0x2bf06f8 size 0x6c virtual false final false
 UnityEngine::TextGenerator get_cachedInputTextGenerator() ;

/// @brief Method set_shouldHideMobileInput addr 0x2bf0764 size 0x58 virtual false final false
 void set_shouldHideMobileInput(bool value) ;

/// @brief Method get_shouldHideMobileInput addr 0x2bf07bc size 0x48 virtual false final false
 bool get_shouldHideMobileInput() ;

/// @brief Method set_shouldActivateOnSelect addr 0x2bf0804 size 0xc virtual true final false
 void set_shouldActivateOnSelect(bool value) ;

/// @brief Method get_shouldActivateOnSelect addr 0x2bf0810 size 0x2c virtual true final false
 bool get_shouldActivateOnSelect() ;

/// @brief Method get_text addr 0x2bf083c size 0x8 virtual false final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x2bf0844 size 0x8 virtual false final false
 void set_text(::StringW value) ;

/// @brief Method SetTextWithoutNotify addr 0x2bf0b58 size 0x8 virtual false final false
 void SetTextWithoutNotify(::StringW input) ;

/// @brief Method SetText addr 0x2bf084c size 0x30c virtual false final false
 void SetText(::StringW value, bool sendCallback) ;

/// @brief Method get_isFocused addr 0x2bf10d4 size 0x8 virtual false final false
 bool get_isFocused() ;

/// @brief Method get_caretBlinkRate addr 0x2bf10dc size 0x8 virtual false final false
 float_t get_caretBlinkRate() ;

/// @brief Method set_caretBlinkRate addr 0x2bf10e4 size 0x7c virtual false final false
 void set_caretBlinkRate(float_t value) ;

/// @brief Method get_caretWidth addr 0x2bf11b4 size 0x8 virtual false final false
 int32_t get_caretWidth() ;

/// @brief Method set_caretWidth addr 0x2bf11bc size 0x74 virtual false final false
 void set_caretWidth(int32_t value) ;

/// @brief Method get_textComponent addr 0x2bf1288 size 0x8 virtual false final false
 UnityEngine::UI::Text get_textComponent() ;

/// @brief Method set_textComponent addr 0x2bf1290 size 0x2a4 virtual false final false
 void set_textComponent(UnityEngine::UI::Text value) ;

/// @brief Method get_placeholder addr 0x2bf1534 size 0x8 virtual false final false
 UnityEngine::UI::Graphic get_placeholder() ;

/// @brief Method set_placeholder addr 0x2bf153c size 0x58 virtual false final false
 void set_placeholder(UnityEngine::UI::Graphic value) ;

/// @brief Method get_caretColor addr 0x2bf1594 size 0x44 virtual false final false
 UnityEngine::Color get_caretColor() ;

/// @brief Method set_caretColor addr 0x2bf15d8 size 0x2c virtual false final false
 void set_caretColor(UnityEngine::Color value) ;

/// @brief Method get_customCaretColor addr 0x2bf1604 size 0x8 virtual false final false
 bool get_customCaretColor() ;

/// @brief Method set_customCaretColor addr 0x2bf160c size 0x1c virtual false final false
 void set_customCaretColor(bool value) ;

/// @brief Method get_selectionColor addr 0x2bf1628 size 0x14 virtual false final false
 UnityEngine::Color get_selectionColor() ;

/// @brief Method set_selectionColor addr 0x2bf163c size 0x2c virtual false final false
 void set_selectionColor(UnityEngine::Color value) ;

/// @brief Method get_onEndEdit addr 0x2bf1668 size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent get_onEndEdit() ;

/// @brief Method set_onEndEdit addr 0x2bf1670 size 0x58 virtual false final false
 void set_onEndEdit(UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent value) ;

/// @brief Method get_onSubmit addr 0x2bf16c8 size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent get_onSubmit() ;

/// @brief Method set_onSubmit addr 0x2bf16d0 size 0x58 virtual false final false
 void set_onSubmit(UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent value) ;

/// @brief Method get_onValueChange addr 0x2bf1728 size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent get_onValueChange() ;

/// @brief Method set_onValueChange addr 0x2bf1730 size 0x4 virtual false final false
 void set_onValueChange(UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent value) ;

/// @brief Method get_onValueChanged addr 0x2bf178c size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent get_onValueChanged() ;

/// @brief Method set_onValueChanged addr 0x2bf1734 size 0x58 virtual false final false
 void set_onValueChanged(UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent value) ;

/// @brief Method get_onValidateInput addr 0x2bf1794 size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput get_onValidateInput() ;

/// @brief Method set_onValidateInput addr 0x2bf179c size 0x58 virtual false final false
 void set_onValidateInput(UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput value) ;

/// @brief Method get_characterLimit addr 0x2bf17f4 size 0x8 virtual false final false
 int32_t get_characterLimit() ;

/// @brief Method set_characterLimit addr 0x2bf17fc size 0xc0 virtual false final false
 void set_characterLimit(int32_t value) ;

/// @brief Method get_contentType addr 0x2bf18bc size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__InputField__ContentType get_contentType() ;

/// @brief Method set_contentType addr 0x2bf18c4 size 0x74 virtual false final false
 void set_contentType(UnityEngine::UI::UnityEngine__UI__InputField__ContentType value) ;

/// @brief Method get_lineType addr 0x2bf19f4 size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__InputField__LineType get_lineType() ;

/// @brief Method set_lineType addr 0x2bf19fc size 0xc0 virtual false final false
 void set_lineType(UnityEngine::UI::UnityEngine__UI__InputField__LineType value) ;

/// @brief Method get_inputType addr 0x2bf1b14 size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__InputField__InputType get_inputType() ;

/// @brief Method set_inputType addr 0x2bf1b1c size 0x84 virtual false final false
 void set_inputType(UnityEngine::UI::UnityEngine__UI__InputField__InputType value) ;

/// @brief Method get_touchScreenKeyboard addr 0x2bf1bb8 size 0x8 virtual false final false
 UnityEngine::TouchScreenKeyboard get_touchScreenKeyboard() ;

/// @brief Method get_keyboardType addr 0x2bf1bc0 size 0x8 virtual false final false
 UnityEngine::TouchScreenKeyboardType get_keyboardType() ;

/// @brief Method set_keyboardType addr 0x2bf1bc8 size 0x84 virtual false final false
 void set_keyboardType(UnityEngine::TouchScreenKeyboardType value) ;

/// @brief Method get_characterValidation addr 0x2bf1c4c size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation get_characterValidation() ;

/// @brief Method set_characterValidation addr 0x2bf1c54 size 0x84 virtual false final false
 void set_characterValidation(UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation value) ;

/// @brief Method get_readOnly addr 0x2bf1cd8 size 0x8 virtual false final false
 bool get_readOnly() ;

/// @brief Method set_readOnly addr 0x2bf1ce0 size 0xc virtual false final false
 void set_readOnly(bool value) ;

/// @brief Method get_multiLine addr 0x2bf1cec size 0x14 virtual false final false
 bool get_multiLine() ;

/// @brief Method get_asteriskChar addr 0x2bf1d00 size 0x8 virtual false final false
 char16_t get_asteriskChar() ;

/// @brief Method set_asteriskChar addr 0x2bf1d08 size 0x74 virtual false final false
 void set_asteriskChar(char16_t value) ;

/// @brief Method get_wasCanceled addr 0x2bf1d7c size 0x8 virtual false final false
 bool get_wasCanceled() ;

/// @brief Method ClampPos addr 0x2bf1d84 size 0x38 virtual false final false
 void ClampPos(ByRef<int32_t> pos) ;

/// @brief Method get_caretPositionInternal addr 0x2bf1dbc size 0x24 virtual false final false
 int32_t get_caretPositionInternal() ;

/// @brief Method set_caretPositionInternal addr 0x2bf1de0 size 0x38 virtual false final false
 void set_caretPositionInternal(int32_t value) ;

/// @brief Method get_caretSelectPositionInternal addr 0x2bf1e18 size 0x24 virtual false final false
 int32_t get_caretSelectPositionInternal() ;

/// @brief Method set_caretSelectPositionInternal addr 0x2bf1e3c size 0x38 virtual false final false
 void set_caretSelectPositionInternal(int32_t value) ;

/// @brief Method get_hasSelection addr 0x2bf1e74 size 0x30 virtual false final false
 bool get_hasSelection() ;

/// @brief Method get_caretPosition addr 0x2bf1ea4 size 0x24 virtual false final false
 int32_t get_caretPosition() ;

/// @brief Method set_caretPosition addr 0x2bf1ec8 size 0x28 virtual false final false
 void set_caretPosition(int32_t value) ;

/// @brief Method get_selectionAnchorPosition addr 0x2bf1fa8 size 0x24 virtual false final false
 int32_t get_selectionAnchorPosition() ;

/// @brief Method set_selectionAnchorPosition addr 0x2bf1ef0 size 0x5c virtual false final false
 void set_selectionAnchorPosition(int32_t value) ;

/// @brief Method get_selectionFocusPosition addr 0x2bf1fcc size 0x24 virtual false final false
 int32_t get_selectionFocusPosition() ;

/// @brief Method set_selectionFocusPosition addr 0x2bf1f4c size 0x5c virtual false final false
 void set_selectionFocusPosition(int32_t value) ;

/// @brief Method Awake addr 0x2bf1ff0 size 0xc0 virtual true final false
 void Awake() ;

/// @brief Method OnEnable addr 0x2bf20b0 size 0x26c virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2bf231c size 0x234 virtual true final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x2bf26cc size 0x64 virtual true final false
 void OnDestroy() ;

/// @brief Method CaretBlink addr 0x2bf2730 size 0x68 virtual false final false
 System::Collections::IEnumerator CaretBlink() ;

/// @brief Method SetCaretVisible addr 0x2bf27c0 size 0x38 virtual false final false
 void SetCaretVisible() ;

/// @brief Method SetCaretActive addr 0x2bf1160 size 0x54 virtual false final false
 void SetCaretActive() ;

/// @brief Method UpdateCaretMaterial addr 0x2bf27f8 size 0x110 virtual false final false
 void UpdateCaretMaterial() ;

/// @brief Method OnFocus addr 0x2bf2908 size 0x4 virtual false final false
 void OnFocus() ;

/// @brief Method SelectAll addr 0x2bf290c size 0x34 virtual false final false
 void SelectAll() ;

/// @brief Method MoveTextEnd addr 0x2bf2940 size 0x60 virtual false final false
 void MoveTextEnd(bool shift) ;

/// @brief Method MoveTextStart addr 0x2bf29a0 size 0x7c virtual false final false
 void MoveTextStart(bool shift) ;

/// @brief Method get_clipboard addr 0x2bf2a1c size 0x8 virtual false final false
static ::StringW get_clipboard() ;

/// @brief Method set_clipboard addr 0x2bf2a24 size 0x8 virtual false final false
static void set_clipboard(::StringW value) ;

/// @brief Method TouchScreenKeyboardShouldBeUsed addr 0x2bf2a2c size 0x80 virtual false final false
 bool TouchScreenKeyboardShouldBeUsed() ;

/// @brief Method InPlaceEditing addr 0x2bf2aac size 0x30 virtual false final false
 bool InPlaceEditing() ;

/// @brief Method InPlaceEditingChanged addr 0x2bf2adc size 0x84 virtual false final false
 bool InPlaceEditingChanged() ;

/// @brief Method UpdateCaretFromKeyboard addr 0x2bf2b60 size 0xe8 virtual false final false
 void UpdateCaretFromKeyboard() ;

/// @brief Method LateUpdate addr 0x2bf2c48 size 0x628 virtual true final false
 void LateUpdate() ;

/// @brief Method ScreenToLocal addr 0x2bf422c size 0x270 virtual false final false
 UnityEngine::Vector2 ScreenToLocal(UnityEngine::Vector2 screen) ;

/// @brief Method GetUnclampedCharacterLineFromPosition addr 0x2bf449c size 0x210 virtual false final false
 int32_t GetUnclampedCharacterLineFromPosition(UnityEngine::Vector2 pos, UnityEngine::TextGenerator generator) ;

/// @brief Method GetCharacterIndexFromPosition addr 0x2bf46ac size 0x294 virtual false final false
 int32_t GetCharacterIndexFromPosition(UnityEngine::Vector2 pos) ;

/// @brief Method MayDrag addr 0x2bf4aa4 size 0xd8 virtual false final false
 bool MayDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnBeginDrag addr 0x2bf4b7c size 0x20 virtual true final false
 void OnBeginDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnDrag addr 0x2bf4b9c size 0x1e8 virtual true final false
 void OnDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method MouseDragOutsideRect addr 0x2bf4d84 size 0x74 virtual false final false
 System::Collections::IEnumerator MouseDragOutsideRect(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnEndDrag addr 0x2bf4e20 size 0x1c virtual true final false
 void OnEndDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerDown addr 0x2bf4e3c size 0x1f0 virtual true final false
 void OnPointerDown(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method KeyPressed addr 0x2bf502c size 0x3d8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__InputField__EditState KeyPressed(UnityEngine::Event evt) ;

/// @brief Method IsValidChar addr 0x2bf5ac0 size 0x70 virtual false final false
 bool IsValidChar(char16_t c) ;

/// @brief Method ProcessEvent addr 0x2bf5b30 size 0x4 virtual false final false
 void ProcessEvent(UnityEngine::Event e) ;

/// @brief Method OnUpdateSelected addr 0x2bf5b34 size 0x188 virtual true final false
 void OnUpdateSelected(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method GetSelectedString addr 0x2bf55ac size 0xa8 virtual false final false
 ::StringW GetSelectedString() ;

/// @brief Method FindtNextWordBegin addr 0x2bf5cbc size 0xbc virtual false final false
 int32_t FindtNextWordBegin() ;

/// @brief Method MoveRight addr 0x2bf597c size 0x12c virtual false final false
 void MoveRight(bool shift, bool ctrl) ;

/// @brief Method FindtPrevWordBegin addr 0x2bf5d78 size 0xa0 virtual false final false
 int32_t FindtPrevWordBegin() ;

/// @brief Method MoveLeft addr 0x2bf5850 size 0x12c virtual false final false
 void MoveLeft(bool shift, bool ctrl) ;

/// @brief Method DetermineCharacterLine addr 0x2bf5e18 size 0x110 virtual false final false
 int32_t DetermineCharacterLine(int32_t charPos, UnityEngine::TextGenerator generator) ;

/// @brief Method LineUpCharacterPosition addr 0x2bf5f28 size 0x358 virtual false final false
 int32_t LineUpCharacterPosition(int32_t originalPos, bool goToFirstChar) ;

/// @brief Method LineDownCharacterPosition addr 0x2bf6280 size 0x2b4 virtual false final false
 int32_t LineDownCharacterPosition(int32_t originalPos, bool goToLastChar) ;

/// @brief Method MoveDown addr 0x2bf5ab4 size 0xc virtual false final false
 void MoveDown(bool shift) ;

/// @brief Method MoveDown addr 0x2bf6534 size 0x134 virtual false final false
 void MoveDown(bool shift, bool goToLastChar) ;

/// @brief Method MoveUp addr 0x2bf5aa8 size 0xc virtual false final false
 void MoveUp(bool shift) ;

/// @brief Method MoveUp addr 0x2bf6668 size 0x140 virtual false final false
 void MoveUp(bool shift, bool goToFirstChar) ;

/// @brief Method Delete addr 0x2bf5654 size 0x1b4 virtual false final false
 void Delete() ;

/// @brief Method ForwardSpace addr 0x2bf5508 size 0xa4 virtual false final false
 void ForwardSpace() ;

/// @brief Method Backspace addr 0x2bf5404 size 0x104 virtual false final false
 void Backspace() ;

/// @brief Method Insert addr 0x2bf67a8 size 0xe0 virtual false final false
 void Insert(char16_t c) ;

/// @brief Method UpdateTouchKeyboardFromEditChanges addr 0x2bf5808 size 0x48 virtual false final false
 void UpdateTouchKeyboardFromEditChanges() ;

/// @brief Method SendOnValueChangedAndUpdateLabel addr 0x2bf4214 size 0x18 virtual false final false
 void SendOnValueChangedAndUpdateLabel() ;

/// @brief Method SendOnValueChanged addr 0x2bf0c38 size 0x80 virtual false final false
 void SendOnValueChanged() ;

/// @brief Method SendOnEndEdit addr 0x2bf6888 size 0x80 virtual false final false
 void SendOnEndEdit() ;

/// @brief Method SendOnSubmit addr 0x2bf3ac0 size 0x80 virtual false final false
 void SendOnSubmit() ;

/// @brief Method Append addr 0x2bf6908 size 0xbc virtual true final false
 void Append(::StringW input) ;

/// @brief Method Append addr 0x2bf69c4 size 0x270 virtual true final false
 void Append(char16_t input) ;

/// @brief Method UpdateLabel addr 0x2bf0cb8 size 0x41c virtual false final false
 void UpdateLabel() ;

/// @brief Method IsSelectionVisible addr 0x2bf7750 size 0x6c virtual false final false
 bool IsSelectionVisible() ;

/// @brief Method GetLineStartPosition addr 0x2bf77bc size 0x150 virtual false final false
static int32_t GetLineStartPosition(UnityEngine::TextGenerator gen, int32_t line) ;

/// @brief Method GetLineEndPosition addr 0x2bf4940 size 0x164 virtual false final false
static int32_t GetLineEndPosition(UnityEngine::TextGenerator gen, int32_t line) ;

/// @brief Method SetDrawRangeToContainCaretPosition addr 0x2bf6c34 size 0xb1c virtual false final false
 void SetDrawRangeToContainCaretPosition(int32_t caretPos) ;

/// @brief Method ForceLabelUpdate addr 0x2bf790c size 0x4 virtual false final false
 void ForceLabelUpdate() ;

/// @brief Method MarkGeometryAsDirty addr 0x2bf1230 size 0x58 virtual false final false
 void MarkGeometryAsDirty() ;

/// @brief Method Rebuild addr 0x2bf7910 size 0x10 virtual true final false
 void Rebuild(UnityEngine::UI::CanvasUpdate update) ;

/// @brief Method LayoutComplete addr 0x2bf7d70 size 0x4 virtual true final false
 void LayoutComplete() ;

/// @brief Method GraphicUpdateComplete addr 0x2bf7d74 size 0x4 virtual true final false
 void GraphicUpdateComplete() ;

/// @brief Method UpdateGeometry addr 0x2bf7920 size 0x450 virtual false final false
 void UpdateGeometry() ;

/// @brief Method AssignPositioningIfNeeded addr 0x2bf35c0 size 0x500 virtual false final false
 void AssignPositioningIfNeeded() ;

/// @brief Method OnFillVBO addr 0x2bf7d78 size 0x278 virtual false final false
 void OnFillVBO(UnityEngine::Mesh vbo) ;

/// @brief Method GenerateCaret addr 0x2bf7ff0 size 0x9d4 virtual false final false
 void GenerateCaret(UnityEngine::UI::VertexHelper vbo, UnityEngine::Vector2 roundingOffset) ;

/// @brief Method CreateCursorVerts addr 0x2bf9420 size 0x150 virtual false final false
 void CreateCursorVerts() ;

/// @brief Method GenerateHighlight addr 0x2bf89c4 size 0xa5c virtual false final false
 void GenerateHighlight(UnityEngine::UI::VertexHelper vbo, UnityEngine::Vector2 roundingOffset) ;

/// @brief Method Validate addr 0x2bf3b40 size 0x6d4 virtual false final false
 char16_t Validate(::StringW text, int32_t pos, char16_t ch) ;

/// @brief Method ActivateInputField addr 0x2bf9570 size 0x120 virtual false final false
 void ActivateInputField() ;

/// @brief Method ActivateInputFieldInternal addr 0x2bf3270 size 0x350 virtual false final false
 void ActivateInputFieldInternal() ;

/// @brief Method OnSelect addr 0x2bf9690 size 0x3c virtual true final false
 void OnSelect(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnPointerClick addr 0x2bf96cc size 0x24 virtual true final false
 void OnPointerClick(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method DeactivateInputField addr 0x2bf2550 size 0x17c virtual false final false
 void DeactivateInputField() ;

/// @brief Method OnDeselect addr 0x2bf96f0 size 0x2c virtual true final false
 void OnDeselect(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnSubmit addr 0x2bf971c size 0x48 virtual true final false
 void OnSubmit(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method EnforceContentType addr 0x2bf1938 size 0xbc virtual false final false
 void EnforceContentType() ;

/// @brief Method EnforceTextHOverflow addr 0x2bf05bc size 0x94 virtual false final false
 void EnforceTextHOverflow() ;

/// @brief Method SetToCustomIfContentTypeIsNot addr 0x2bf1abc size 0x58 virtual false final false
 void SetToCustomIfContentTypeIsNot(::ArrayW<UnityEngine::UI::UnityEngine__UI__InputField__ContentType> allowedContentTypes) ;

/// @brief Method SetToCustom addr 0x2bf1ba0 size 0x18 virtual false final false
 void SetToCustom() ;

/// @brief Method DoStateTransition addr 0x2bf9764 size 0x2c virtual true final false
 void DoStateTransition(UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState state, bool instant) ;

/// @brief Method CalculateLayoutInputHorizontal addr 0x2bf9790 size 0x4 virtual true final false
 void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical addr 0x2bf9794 size 0x4 virtual true final false
 void CalculateLayoutInputVertical() ;

/// @brief Method get_minWidth addr 0x2bf9798 size 0x8 virtual true final false
 float_t get_minWidth() ;

/// @brief Method get_preferredWidth addr 0x2bf97a0 size 0x15c virtual true final false
 float_t get_preferredWidth() ;

/// @brief Method get_flexibleWidth addr 0x2bf98fc size 0x8 virtual true final false
 float_t get_flexibleWidth() ;

/// @brief Method get_minHeight addr 0x2bf9904 size 0x8 virtual true final false
 float_t get_minHeight() ;

/// @brief Method get_preferredHeight addr 0x2bf990c size 0x15c virtual true final false
 float_t get_preferredHeight() ;

/// @brief Method get_flexibleHeight addr 0x2bf9a68 size 0x8 virtual true final false
 float_t get_flexibleHeight() ;

/// @brief Method get_layoutPriority addr 0x2bf9a70 size 0x8 virtual true final false
 int32_t get_layoutPriority() ;

/// @brief Method UnityEngine.UI.ICanvasElement.get_transform addr 0x2bf9b18 size 0x8 virtual true final true
 UnityEngine::Transform UnityEngine_UI_ICanvasElement_get_transform() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__InputField__CharacterValidation, "UnityEngine.UI", "InputField/CharacterValidation");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__InputField__ContentType, "UnityEngine.UI", "InputField/ContentType");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__InputField__EditState, "UnityEngine.UI", "InputField/EditState");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__InputField__InputType, "UnityEngine.UI", "InputField/InputType");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__InputField__LineType, "UnityEngine.UI", "InputField/LineType");
NEED_NO_BOX(UnityEngine::UI::InputField);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::InputField, "UnityEngine.UI", "InputField");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__InputField__EndEditEvent, "UnityEngine.UI", "InputField/EndEditEvent");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__InputField__OnChangeEvent, "UnityEngine.UI", "InputField/OnChangeEvent");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__InputField__OnValidateInput, "UnityEngine.UI", "InputField/OnValidateInput");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__InputField__SubmitEvent, "UnityEngine.UI", "InputField/SubmitEvent");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__InputField___CaretBlink_d__172, "UnityEngine.UI", "InputField/<CaretBlink>d__172");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__InputField___MouseDragOutsideRect_d__194, "UnityEngine.UI", "InputField/<MouseDragOutsideRect>d__194");
