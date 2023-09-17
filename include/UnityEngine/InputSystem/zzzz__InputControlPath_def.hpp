#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace UnityEngine::InputSystem::Layouts {
struct ____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputControlPath__PathComponentType;
}
namespace GlobalNamespace {
class ______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c;
}
namespace UnityEngine::InputSystem {
class InputControlPath;
}
namespace UnityEngine::InputSystem {
class ____UnityEngine__InputSystem__InputControlPath___Parse_d__33;
}
namespace UnityEngine::InputSystem {
class ____UnityEngine__InputSystem__InputControlPath____c;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputControlPath__PathParser;
}
// Type: ::HumanReadableStringOptions
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6310))
// CS Name: UnityEngine.InputSystem.InputControlPath::HumanReadableStringOptions
struct CORDL_TYPE ____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions(____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions(____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions& operator=(____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions& operator=(____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions_Unwrapped : int32_t {
__None = 0,
__OmitDevice = 2,
__UseShortNames = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions const None;

/// @brief Field OmitDevice offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions const OmitDevice;

/// @brief Field UseShortNames offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions const UseShortNames;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::PathComponentType
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6311))
// CS Name: UnityEngine.InputSystem.InputControlPath::PathComponentType
struct CORDL_TYPE ____UnityEngine__InputSystem__InputControlPath__PathComponentType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputControlPath__PathComponentType(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputControlPath__PathComponentType(____UnityEngine__InputSystem__InputControlPath__PathComponentType const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputControlPath__PathComponentType(____UnityEngine__InputSystem__InputControlPath__PathComponentType&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputControlPath__PathComponentType& operator=(____UnityEngine__InputSystem__InputControlPath__PathComponentType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputControlPath__PathComponentType& operator=(____UnityEngine__InputSystem__InputControlPath__PathComponentType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputControlPath__PathComponentType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__InputControlPath__PathComponentType_Unwrapped : int32_t {
__Name = 0,
__DisplayName = 1,
__Usage = 2,
__Layout = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__InputControlPath__PathComponentType_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__InputControlPath__PathComponentType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Name offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType const Name;

/// @brief Field DisplayName offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType const DisplayName;

/// @brief Field Usage offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType const Usage;

/// @brief Field Layout offset 0
static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType const Layout;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6312))
// CS Name: UnityEngine.InputSystem.InputControlPath::ParsedPathComponent::<>c
class CORDL_TYPE ______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c", modifiers: " const&", def_value: None }]
constexpr ______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c(______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c", modifiers: "&&", def_value: None }]
constexpr ______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c(______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c& operator=(______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c&& o) noexcept = default;
  constexpr ______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c& operator=(______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c value) ;

static ::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c __get___9() ;

static ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW> value) ;

static ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW> __get___9__7_0() ;


// Methods

// Ctor Parameters []
explicit ______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c() ;

/// @brief Method .ctor addr 0x28d6818 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_usages>b__7_0 addr 0x28d6820 size 0x24 virtual false final false
 ::StringW _get_usages_b__7_0(::UnityEngine::InputSystem::Utilities::Substring x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ParsedPathComponent
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6313))
// CS Name: UnityEngine.InputSystem.InputControlPath::ParsedPathComponent
struct CORDL_TYPE ____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __c = ::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c;

// Ctor Parameters [CppParam { name: "m_Layout", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: None }, CppParam { name: "m_Usages", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: None }, CppParam { name: "m_DisplayName", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent(::UnityEngine::InputSystem::Utilities::Substring m_Layout, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> m_Usages, ::UnityEngine::InputSystem::Utilities::Substring m_Name, ::UnityEngine::InputSystem::Utilities::Substring m_DisplayName) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent(____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent(____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent& operator=(____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent& operator=(____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Utilities::Substring __declspec(property(get=__get_m_Layout, put=__set_m_Layout))  m_Layout;

constexpr void __set_m_Layout(::UnityEngine::InputSystem::Utilities::Substring value) ;

constexpr ::UnityEngine::InputSystem::Utilities::Substring __get_m_Layout() const;

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> __declspec(property(get=__get_m_Usages, put=__set_m_Usages))  m_Usages;

constexpr void __set_m_Usages(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> __get_m_Usages() const;

 ::UnityEngine::InputSystem::Utilities::Substring __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::UnityEngine::InputSystem::Utilities::Substring value) ;

constexpr ::UnityEngine::InputSystem::Utilities::Substring __get_m_Name() const;

 ::UnityEngine::InputSystem::Utilities::Substring __declspec(property(get=__get_m_DisplayName, put=__set_m_DisplayName))  m_DisplayName;

constexpr void __set_m_DisplayName(::UnityEngine::InputSystem::Utilities::Substring value) ;

constexpr ::UnityEngine::InputSystem::Utilities::Substring __get_m_DisplayName() const;


// Properties

 ::StringW __declspec(property(get=get_layout))  layout;

 ::System::Collections::Generic::IEnumerable_1<::StringW> __declspec(property(get=get_usages))  usages;

 ::StringW __declspec(property(get=get_name))  name;

 ::StringW __declspec(property(get=get_displayName))  displayName;

 bool __declspec(property(get=get_isWildcard))  isWildcard;

 bool __declspec(property(get=get_isDoubleWildcard))  isDoubleWildcard;


// Methods

/// @brief Method get_layout addr 0x28d6434 size 0x8 virtual false final false
 ::StringW get_layout() ;

/// @brief Method get_usages addr 0x28d643c size 0x138 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::StringW> get_usages() ;

/// @brief Method get_name addr 0x28d6574 size 0xc virtual false final false
 ::StringW get_name() ;

/// @brief Method get_displayName addr 0x28d6580 size 0xc virtual false final false
 ::StringW get_displayName() ;

/// @brief Method get_isWildcard addr 0x28d511c size 0x64 virtual false final false
 bool get_isWildcard() ;

/// @brief Method get_isDoubleWildcard addr 0x28d658c size 0x64 virtual false final false
 bool get_isDoubleWildcard() ;

/// @brief Method ToHumanReadableString addr 0x28d46e4 size 0x744 virtual false final false
 ::StringW ToHumanReadableString(::StringW parentLayoutName, ::StringW parentControlPath, ByRef<::StringW> referencedLayoutName, ByRef<::StringW> controlPath, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions options) ;

/// @brief Method ToHumanReadableString addr 0x28d65f0 size 0x64 virtual false final false
static ::StringW ToHumanReadableString(::UnityEngine::InputSystem::Utilities::Substring substring) ;

/// @brief Method Matches addr 0x28d5dcc size 0x2b0 virtual false final false
 bool Matches(::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ComparePathElementToString addr 0x28d6654 size 0x160 virtual false final false
static bool ComparePathElementToString(::UnityEngine::InputSystem::Utilities::Substring pathElement, ::StringW element) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::PathParser
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6314))
// CS Name: UnityEngine.InputSystem.InputControlPath::PathParser
struct CORDL_TYPE ____UnityEngine__InputSystem__InputControlPath__PathParser : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "leftIndexInPath", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rightIndexInPath", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "current", ty: "::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputControlPath__PathParser(::StringW path, int32_t length, int32_t leftIndexInPath, int32_t rightIndexInPath, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent current) noexcept;


                    constexpr ____UnityEngine__InputSystem__InputControlPath__PathParser(____UnityEngine__InputSystem__InputControlPath__PathParser const&) = default;
                    constexpr ____UnityEngine__InputSystem__InputControlPath__PathParser(____UnityEngine__InputSystem__InputControlPath__PathParser&&) = default;
                    constexpr ____UnityEngine__InputSystem__InputControlPath__PathParser& operator=(____UnityEngine__InputSystem__InputControlPath__PathParser const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__InputControlPath__PathParser& operator=(____UnityEngine__InputSystem__InputControlPath__PathParser&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x68};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputControlPath__PathParser(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_path, put=__set_path))  path;

constexpr void __set_path(::StringW value) ;

constexpr ::StringW __get_path() const;

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

 int32_t __declspec(property(get=__get_leftIndexInPath, put=__set_leftIndexInPath))  leftIndexInPath;

constexpr void __set_leftIndexInPath(int32_t value) ;

constexpr int32_t __get_leftIndexInPath() const;

 int32_t __declspec(property(get=__get_rightIndexInPath, put=__set_rightIndexInPath))  rightIndexInPath;

constexpr void __set_rightIndexInPath(int32_t value) ;

constexpr int32_t __get_rightIndexInPath() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent __declspec(property(get=__get_current, put=__set_current))  current;

constexpr void __set_current(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent __get_current() const;


// Properties

 bool __declspec(property(get=get_isAtEnd))  isAtEnd;


// Methods

/// @brief Method get_isAtEnd addr 0x28d5868 size 0x14 virtual false final false
 bool get_isAtEnd() ;

/// @brief Method .ctor addr 0x28d4430 size 0x3c virtual false final false
 void _ctor(::StringW path) ;

/// @brief Method MoveToNextComponent addr 0x28d446c size 0x278 virtual false final false
 bool MoveToNextComponent() ;

/// @brief Method ParseComponentPart addr 0x28d6844 size 0x104 virtual false final false
 ::UnityEngine::InputSystem::Utilities::Substring ParseComponentPart(char16_t terminator) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::<>c
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6315))
// CS Name: UnityEngine.InputSystem.InputControlPath::<>c
class CORDL_TYPE ____UnityEngine__InputSystem__InputControlPath____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__InputSystem__InputControlPath____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputControlPath____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputControlPath____c(____UnityEngine__InputSystem__InputControlPath____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputControlPath____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputControlPath____c(____UnityEngine__InputSystem__InputControlPath____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputControlPath____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__InputControlPath____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputControlPath____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputControlPath____c& operator=(____UnityEngine__InputSystem__InputControlPath____c&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__InputControlPath____c& operator=(____UnityEngine__InputSystem__InputControlPath____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c value) ;

static ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c __get___9() ;

static ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW> __declspec(property(get=__get___9__9_0, put=__set___9__9_0))  __9__9_0;

static void __set___9__9_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW> value) ;

static ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW> __get___9__9_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__InputControlPath____c() ;

/// @brief Method .ctor addr 0x28d69ac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <TryGetDeviceUsages>b__9_0 addr 0x28d69b4 size 0x24 virtual false final false
 ::StringW _TryGetDeviceUsages_b__9_0(::UnityEngine::InputSystem::Utilities::Substring x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::<Parse>d__33
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6316))
// CS Name: UnityEngine.InputSystem.InputControlPath::<Parse>d__33
class CORDL_TYPE ____UnityEngine__InputSystem__InputControlPath___Parse_d__33 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe8};

virtual ~____UnityEngine__InputSystem__InputControlPath___Parse_d__33() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputControlPath___Parse_d__33", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputControlPath___Parse_d__33(____UnityEngine__InputSystem__InputControlPath___Parse_d__33 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__InputControlPath___Parse_d__33", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__InputControlPath___Parse_d__33(____UnityEngine__InputSystem__InputControlPath___Parse_d__33&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__InputControlPath___Parse_d__33(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__InputControlPath___Parse_d__33& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputControlPath___Parse_d__33& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__InputControlPath___Parse_d__33& operator=(____UnityEngine__InputSystem__InputControlPath___Parse_d__33&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__InputControlPath___Parse_d__33& operator=(____UnityEngine__InputSystem__InputControlPath___Parse_d__33 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::StringW __declspec(property(get=__get_path, put=__set_path))  path;

constexpr void __set_path(::StringW value) ;

constexpr ::StringW __get_path() const;

 ::StringW __declspec(property(get=__get___3__path, put=__set___3__path))  __3__path;

constexpr void __set___3__path(::StringW value) ;

constexpr ::StringW __get___3__path() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser __declspec(property(get=__get__parser_5__2, put=__set__parser_5__2))  _parser_5__2;

constexpr void __set__parser_5__2(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser __get__parser_5__2() const;


// Properties

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__InputSystem__InputControlPath___Parse_d__33(int32_t __1__state) ;

/// @brief Method .ctor addr 0x28d6400 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x28d69d8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x28d69dc size 0x140 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.get_Current addr 0x28d6b1c size 0x10 virtual true final true
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x28d6b2c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x28d6b6c size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.GetEnumerator addr 0x28d6bd0 size 0xa4 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent> System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x28d6c74 size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControlPath
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6317))
// CS Name: UnityEngine.InputSystem.InputControlPath
class CORDL_TYPE InputControlPath : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _Parse_d__33 = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33;

using __c = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c;

using PathParser = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser;

using ParsedPathComponent = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent;

using PathComponentType = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType;

using HumanReadableStringOptions = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputControlPath() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControlPath", modifiers: " const&", def_value: None }]
constexpr InputControlPath(InputControlPath const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControlPath", modifiers: "&&", def_value: None }]
constexpr InputControlPath(InputControlPath&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControlPath(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputControlPath& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControlPath& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControlPath& operator=(InputControlPath&& o) noexcept = default;
  constexpr InputControlPath& operator=(InputControlPath const& o) noexcept = default;
                


// Fields

/// @brief Field Wildcard offset 0
static constexpr ::ConstString  Wildcard{u"*"};

/// @brief Field DoubleWildcard offset 0
static constexpr ::ConstString  DoubleWildcard{u"**"};

/// @brief Field Separator offset 0
static constexpr char16_t  Separator{/};

/// @brief Field SeparatorReplacement offset 0
static constexpr char16_t  SeparatorReplacement{ };


// Methods

/// @brief Method CleanSlashes addr 0x28d3eb8 size 0x1c virtual false final false
static ::StringW CleanSlashes(::StringW pathComponent) ;

/// @brief Method Combine addr 0x28cfb48 size 0xf4 virtual false final false
static ::StringW Combine(::UnityEngine::InputSystem::InputControl parent, ::StringW path) ;

/// @brief Method ToHumanReadableString addr 0x28d3ed4 size 0x2c virtual false final false
static ::StringW ToHumanReadableString(::StringW path, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions options, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method ToHumanReadableString addr 0x28d3f00 size 0x434 virtual false final false
static ::StringW ToHumanReadableString(::StringW path, ByRef<::StringW> deviceLayoutName, ByRef<::StringW> controlPath, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions options, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method TryGetDeviceUsages addr 0x28d4e28 size 0x1a8 virtual false final false
static ::ArrayW<::StringW> TryGetDeviceUsages(::StringW path) ;

/// @brief Method TryGetDeviceLayout addr 0x28d4fd0 size 0x14c virtual false final false
static ::StringW TryGetDeviceLayout(::StringW path) ;

/// @brief Method TryGetControlLayout addr 0x28d5180 size 0x23c virtual false final false
static ::StringW TryGetControlLayout(::StringW path) ;

/// @brief Method FindControlLayoutRecursive addr 0x28d53bc size 0x170 virtual false final false
static ::StringW FindControlLayoutRecursive(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser> parser, ::StringW layoutName) ;

/// @brief Method FindControlLayoutRecursive addr 0x28d552c size 0x198 virtual false final false
static ::StringW FindControlLayoutRecursive(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser> parser, ::UnityEngine::InputSystem::Layouts::InputControlLayout layout) ;

/// @brief Method ControlLayoutMatchesPathComponent addr 0x28d56c4 size 0x1a4 virtual false final false
static bool ControlLayoutMatchesPathComponent(ByRef<::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlItem, ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser> parser) ;

/// @brief Method StringMatches addr 0x28d587c size 0x204 virtual false final false
static bool StringMatches(::UnityEngine::InputSystem::Utilities::Substring str, ::UnityEngine::InputSystem::Utilities::InternedString matchTo) ;

/// @brief Method TryFindControl addr 0x28cd434 size 0x60 virtual false final false
static ::UnityEngine::InputSystem::InputControl TryFindControl(::UnityEngine::InputSystem::InputControl control, ::StringW path, int32_t indexInPath) ;

/// @brief Method TryFindControls addr 0x28d5a80 size 0x15c virtual false final false
static ::ArrayW<::UnityEngine::InputSystem::InputControl> TryFindControls(::UnityEngine::InputSystem::InputControl control, ::StringW path, int32_t indexInPath) ;

/// @brief Method TryFindControls addr 0x28d5bdc size 0x70 virtual false final false
static int32_t TryFindControls(::UnityEngine::InputSystem::InputControl control, ::StringW path, ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl>> matches, int32_t indexInPath) ;

/// @brief Method TryFindControl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
static TControl TryFindControl(::UnityEngine::InputSystem::InputControl control, ::StringW path, int32_t indexInPath) ;

/// @brief Method TryFindControls addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
static int32_t TryFindControls(::UnityEngine::InputSystem::InputControl control, ::StringW path, int32_t indexInPath, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> matches) ;

/// @brief Method TryFindChild addr 0x28cff5c size 0x60 virtual false final false
static ::UnityEngine::InputSystem::InputControl TryFindChild(::UnityEngine::InputSystem::InputControl control, ::StringW path, int32_t indexInPath) ;

/// @brief Method TryFindChild addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
static TControl TryFindChild(::UnityEngine::InputSystem::InputControl control, ::StringW path, int32_t indexInPath) ;

/// @brief Method Matches addr 0x28d4334 size 0xfc virtual false final false
static bool Matches(::StringW expected, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method MatchesPrefix addr 0x28d5cb4 size 0x118 virtual false final false
static bool MatchesPrefix(::StringW expected, ::UnityEngine::InputSystem::InputControl control) ;

/// @brief Method MatchesRecursive addr 0x28d5c4c size 0x68 virtual false final false
static bool MatchesRecursive(ByRef<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser> parser, ::UnityEngine::InputSystem::InputControl currentControl, bool prefixOnly) ;

/// @brief Method MatchControlsRecursive addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
static TControl MatchControlsRecursive(::UnityEngine::InputSystem::InputControl control, ::StringW path, int32_t indexInPath, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> matches, bool matchMultiple) ;

/// @brief Method MatchByUsageAtDeviceRootRecursive addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
static TControl MatchByUsageAtDeviceRootRecursive(::UnityEngine::InputSystem::InputDevice device, ::StringW path, int32_t indexInPath, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> matches, bool matchMultiple) ;

/// @brief Method MatchChildrenRecursive addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TControl>
static TControl MatchChildrenRecursive(::UnityEngine::InputSystem::InputControl control, ::StringW path, int32_t indexInPath, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> matches, bool matchMultiple) ;

/// @brief Method MatchPathComponent addr 0x28d607c size 0x250 virtual false final false
static bool MatchPathComponent(::StringW component, ::StringW path, ByRef<int32_t> indexInPath, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType componentType, int32_t startIndexInComponent) ;

/// @brief Method PathComponentCanYieldMultipleMatches addr 0x28d62cc size 0xbc virtual false final false
static bool PathComponentCanYieldMultipleMatches(::StringW path, int32_t indexInPath) ;

/// @brief Method Parse addr 0x28d6388 size 0x78 virtual false final false
static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent> Parse(::StringW path) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__HumanReadableStringOptions, "UnityEngine.InputSystem", "InputControlPath/HumanReadableStringOptions");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathComponentType, "UnityEngine.InputSystem", "InputControlPath/PathComponentType");
NEED_NO_BOX(::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______UnityEngine__InputSystem__InputControlPath__ParsedPathComponent____c, "UnityEngine.InputSystem", "InputControlPath/ParsedPathComponent/<>c");
NEED_NO_BOX(::UnityEngine::InputSystem::InputControlPath);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlPath, "UnityEngine.InputSystem", "InputControlPath");
NEED_NO_BOX(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath___Parse_d__33, "UnityEngine.InputSystem", "InputControlPath/<Parse>d__33");
NEED_NO_BOX(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath____c, "UnityEngine.InputSystem", "InputControlPath/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__ParsedPathComponent, "UnityEngine.InputSystem", "InputControlPath/ParsedPathComponent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlPath__PathParser, "UnityEngine.InputSystem", "InputControlPath/PathParser");
