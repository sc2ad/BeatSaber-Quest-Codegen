#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace ENet {
struct Address;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__BodyState;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Posef;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRSceneManager__LogForwarder;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent;
}
namespace Newtonsoft::Json {
struct JsonPosition;
}
namespace System {
struct ByteEnum;
}
namespace System {
struct DateTime;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
struct Int32Enum;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Text::RegularExpressions {
struct RegexPrefix;
}
namespace System {
struct TimeSpan;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace UnityEngine::InputSystem::Layouts {
struct ____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserAccountHandle;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputAction__CallbackContext;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputControlScheme__MatchResult;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputRemoting__Message;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::UIElements {
struct EventDispatcherGate;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<>
struct Nullable_1<::ENet::Address>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::AuthenticationToken>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::GameplayServerConfiguration>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::OVRPose>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__BodyState>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRSceneManager__LogForwarder>;
}
namespace System {
template<>
struct Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent>;
}
namespace System {
template<>
struct Nullable_1<::Newtonsoft::Json::JsonPosition>;
}
namespace System {
template<>
struct Nullable_1<::System::ByteEnum>;
}
namespace System {
template<>
struct Nullable_1<::System::DateTime>;
}
namespace System {
template<>
struct Nullable_1<::System::DateTimeOffset>;
}
namespace System {
template<>
struct Nullable_1<::System::Decimal>;
}
namespace System {
template<>
struct Nullable_1<::System::Guid>;
}
namespace System {
template<>
struct Nullable_1<::System::Int32Enum>;
}
namespace System {
template<>
struct Nullable_1<::System::Net::Http::Headers::Token>;
}
namespace System {
template<>
struct Nullable_1<::System::Runtime::Serialization::StreamingContext>;
}
namespace System {
template<>
struct Nullable_1<::System::Text::RegularExpressions::RegexPrefix>;
}
namespace System {
template<>
struct Nullable_1<::System::TimeSpan>;
}
namespace System {
template<>
struct Nullable_1<::Unity::Jobs::JobHandle>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::Color>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::InputBinding>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::InputControlScheme>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::Users::InputUser>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::Quaternion>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::UIElements::EventDispatcherGate>;
}
namespace System {
template<>
struct Nullable_1<::UnityEngine::Vector3>;
}
namespace System {
template<>
struct Nullable_1<bool>;
}
namespace System {
template<>
struct Nullable_1<char16_t>;
}
namespace System {
template<>
struct Nullable_1<double_t>;
}
namespace System {
template<>
struct Nullable_1<float_t>;
}
namespace System {
template<>
struct Nullable_1<int16_t>;
}
namespace System {
template<>
struct Nullable_1<int32_t>;
}
namespace System {
template<>
struct Nullable_1<int64_t>;
}
namespace System {
template<>
struct Nullable_1<int8_t>;
}
namespace System {
template<>
struct Nullable_1<uint16_t>;
}
namespace System {
template<>
struct Nullable_1<uint32_t>;
}
namespace System {
template<>
struct Nullable_1<uint64_t>;
}
namespace System {
template<>
struct Nullable_1<uint8_t>;
}
// Type: System::Nullable`1
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 92 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, int32_t value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 int32_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(int32_t value) ;

constexpr int32_t __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 int32_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetValueOrDefault(int32_t defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<int32_t> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<int32_t> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<int32_t> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 99 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<bool> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "bool", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, bool value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 bool __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(bool value) ;

constexpr bool __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 bool __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(bool value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 bool GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 bool GetValueOrDefault(bool defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<bool> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<bool> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<bool> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 279 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<char16_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "char16_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, char16_t value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 char16_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(char16_t value) ;

constexpr char16_t __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 char16_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(char16_t value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 char16_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 char16_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 char16_t GetValueOrDefault(char16_t defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<char16_t> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<char16_t> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<char16_t> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 280 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::UnityEngine::Color> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::UnityEngine::Color value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::UnityEngine::Color __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::UnityEngine::Color __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::Color value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Color get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Color GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Color GetValueOrDefault(::UnityEngine::Color defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::UnityEngine::Color> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::Color> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::Color> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 374 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<float_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, float_t value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 float_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(float_t value) ;

constexpr float_t __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 float_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(float_t value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t GetValueOrDefault(float_t defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<float_t> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<float_t> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<float_t> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 389 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<uint64_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, uint64_t value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 uint64_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(uint64_t value) ;

constexpr uint64_t __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 uint64_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(uint64_t value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 uint64_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 uint64_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 uint64_t GetValueOrDefault(uint64_t defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<uint64_t> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<uint64_t> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<uint64_t> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 394 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::UnityEngine::Vector3> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::UnityEngine::Vector3 value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::UnityEngine::Vector3 __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::Vector3 value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Vector3 get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Vector3 GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Vector3 GetValueOrDefault(::UnityEngine::Vector3 defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::UnityEngine::Vector3> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::Vector3> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::Vector3> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 408 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext GetValueOrDefault(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 717 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<uint8_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, uint8_t value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 uint8_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(uint8_t value) ;

constexpr uint8_t __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 uint8_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(uint8_t value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 uint8_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 uint8_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 uint8_t GetValueOrDefault(uint8_t defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<uint8_t> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<uint8_t> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<uint8_t> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 721 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<int16_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int16_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, int16_t value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 int16_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(int16_t value) ;

constexpr int16_t __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 int16_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int16_t value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 int16_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 int16_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 int16_t GetValueOrDefault(int16_t defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<int16_t> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<int16_t> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<int16_t> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 728 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<uint16_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, uint16_t value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 uint16_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(uint16_t value) ;

constexpr uint16_t __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 uint16_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(uint16_t value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 uint16_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 uint16_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 uint16_t GetValueOrDefault(uint16_t defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<uint16_t> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<uint16_t> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<uint16_t> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 729 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<uint32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, uint32_t value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 uint32_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(uint32_t value) ;

constexpr uint32_t __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 uint32_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(uint32_t value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 uint32_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 uint32_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 uint32_t GetValueOrDefault(uint32_t defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<uint32_t> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<uint32_t> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<uint32_t> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 830 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<int64_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int64_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, int64_t value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 int64_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(int64_t value) ;

constexpr int64_t __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 int64_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int64_t value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 int64_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 int64_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 int64_t GetValueOrDefault(int64_t defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<int64_t> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<int64_t> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<int64_t> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 847 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::GlobalNamespace::AuthenticationToken> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::AuthenticationToken", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::GlobalNamespace::AuthenticationToken value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::GlobalNamespace::AuthenticationToken __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::GlobalNamespace::AuthenticationToken value) ;

constexpr ::GlobalNamespace::AuthenticationToken __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::GlobalNamespace::AuthenticationToken __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::AuthenticationToken value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::AuthenticationToken get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::AuthenticationToken GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::AuthenticationToken GetValueOrDefault(::GlobalNamespace::AuthenticationToken defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::GlobalNamespace::AuthenticationToken> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::GlobalNamespace::AuthenticationToken> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::GlobalNamespace::AuthenticationToken> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 2494 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::System::Guid> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Guid", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::System::Guid value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::System::Guid __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::System::Guid value) ;

constexpr ::System::Guid __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::System::Guid __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Guid value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Guid get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Guid GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Guid GetValueOrDefault(::System::Guid defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::System::Guid> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::Guid> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::Guid> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 2595 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::System::DateTime> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::DateTime", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::System::DateTime value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::System::DateTime __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::System::DateTime value) ;

constexpr ::System::DateTime __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::System::DateTime __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::DateTime value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::DateTime get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::DateTime GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::DateTime GetValueOrDefault(::System::DateTime defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::System::DateTime> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::DateTime> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::DateTime> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 2596 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::System::DateTimeOffset> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::DateTimeOffset", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::System::DateTimeOffset value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::System::DateTimeOffset __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::System::DateTimeOffset value) ;

constexpr ::System::DateTimeOffset __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::System::DateTimeOffset __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::DateTimeOffset value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::DateTimeOffset get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::DateTimeOffset GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::DateTimeOffset GetValueOrDefault(::System::DateTimeOffset defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::System::DateTimeOffset> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::DateTimeOffset> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::DateTimeOffset> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 2597 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::System::Decimal> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Decimal", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::System::Decimal value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::System::Decimal __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::System::Decimal value) ;

constexpr ::System::Decimal __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::System::Decimal __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Decimal value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Decimal get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Decimal GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Decimal GetValueOrDefault(::System::Decimal defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::System::Decimal> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::Decimal> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::Decimal> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 2598 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<double_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "double_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, double_t value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 double_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(double_t value) ;

constexpr double_t __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 double_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(double_t value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 double_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 double_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 double_t GetValueOrDefault(double_t defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<double_t> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<double_t> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<double_t> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 2601 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<int8_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int8_t", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, int8_t value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 int8_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(int8_t value) ;

constexpr int8_t __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 int8_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int8_t value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 int8_t get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 int8_t GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 int8_t GetValueOrDefault(int8_t defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<int8_t> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<int8_t> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<int8_t> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 2605 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::System::TimeSpan> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::TimeSpan", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::System::TimeSpan value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::System::TimeSpan __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::System::TimeSpan value) ;

constexpr ::System::TimeSpan __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::System::TimeSpan __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::TimeSpan value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::TimeSpan get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::TimeSpan GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::TimeSpan GetValueOrDefault(::System::TimeSpan defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::System::TimeSpan> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::TimeSpan> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::TimeSpan> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 2996 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::InputBinding> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::InputBinding", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::UnityEngine::InputSystem::InputBinding value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::UnityEngine::InputSystem::InputBinding __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::InputSystem::InputBinding value) ;

constexpr ::UnityEngine::InputSystem::InputBinding __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::UnityEngine::InputSystem::InputBinding __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::InputBinding value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::InputBinding get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::InputBinding GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::InputBinding GetValueOrDefault(::UnityEngine::InputSystem::InputBinding defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 2998 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::InputControlScheme> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::InputControlScheme", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::UnityEngine::InputSystem::InputControlScheme value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::UnityEngine::InputSystem::InputControlScheme __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::InputSystem::InputControlScheme value) ;

constexpr ::UnityEngine::InputSystem::InputControlScheme __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::UnityEngine::InputSystem::InputControlScheme __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::InputControlScheme value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::InputControlScheme get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::InputControlScheme GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::InputControlScheme GetValueOrDefault(::UnityEngine::InputSystem::InputControlScheme defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 3157 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::GlobalNamespace::BeatmapLevelSelectionMask value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr ::GlobalNamespace::BeatmapLevelSelectionMask __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::BeatmapLevelSelectionMask value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::BeatmapLevelSelectionMask get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::BeatmapLevelSelectionMask GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::BeatmapLevelSelectionMask GetValueOrDefault(::GlobalNamespace::BeatmapLevelSelectionMask defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::GlobalNamespace::BeatmapLevelSelectionMask> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 3173 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::UnityEngine::UIElements::EventDispatcherGate> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::UIElements::EventDispatcherGate", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::UnityEngine::UIElements::EventDispatcherGate value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::UnityEngine::UIElements::EventDispatcherGate __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::UIElements::EventDispatcherGate value) ;

constexpr ::UnityEngine::UIElements::EventDispatcherGate __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::UnityEngine::UIElements::EventDispatcherGate __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::UIElements::EventDispatcherGate value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::EventDispatcherGate get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::EventDispatcherGate GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::EventDispatcherGate GetValueOrDefault(::UnityEngine::UIElements::EventDispatcherGate defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::UnityEngine::UIElements::EventDispatcherGate> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::UIElements::EventDispatcherGate> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::UIElements::EventDispatcherGate> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 3177 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::GlobalNamespace::GameplayServerConfiguration> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::GlobalNamespace::GameplayServerConfiguration value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::GlobalNamespace::GameplayServerConfiguration value) ;

constexpr ::GlobalNamespace::GameplayServerConfiguration __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::GlobalNamespace::GameplayServerConfiguration __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::GameplayServerConfiguration value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::GameplayServerConfiguration get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::GameplayServerConfiguration GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::GameplayServerConfiguration GetValueOrDefault(::GlobalNamespace::GameplayServerConfiguration defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::GlobalNamespace::GameplayServerConfiguration> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::GlobalNamespace::GameplayServerConfiguration> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::GlobalNamespace::GameplayServerConfiguration> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 3192 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceMatcher", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher value) ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher GetValueOrDefault(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 3194 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::Users::InputUser> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Users::InputUser", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::UnityEngine::InputSystem::Users::InputUser value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::UnityEngine::InputSystem::Users::InputUser __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::InputSystem::Users::InputUser value) ;

constexpr ::UnityEngine::InputSystem::Users::InputUser __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::UnityEngine::InputSystem::Users::InputUser __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::Users::InputUser value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Users::InputUser get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Users::InputUser GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Users::InputUser GetValueOrDefault(::UnityEngine::InputSystem::Users::InputUser defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUser> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 3195 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Users::InputUserAccountHandle", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::UnityEngine::InputSystem::Users::InputUserAccountHandle value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::UnityEngine::InputSystem::Users::InputUserAccountHandle __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::InputSystem::Users::InputUserAccountHandle value) ;

constexpr ::UnityEngine::InputSystem::Users::InputUserAccountHandle __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::UnityEngine::InputSystem::Users::InputUserAccountHandle __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::Users::InputUserAccountHandle value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Users::InputUserAccountHandle get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Users::InputUserAccountHandle GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Users::InputUserAccountHandle GetValueOrDefault(::UnityEngine::InputSystem::Users::InputUserAccountHandle defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 3220 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::UnityEngine::InputSystem::Utilities::PrimitiveValue __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::UnityEngine::InputSystem::Utilities::PrimitiveValue __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::PrimitiveValue get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::PrimitiveValue GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::PrimitiveValue GetValueOrDefault(::UnityEngine::InputSystem::Utilities::PrimitiveValue defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 3222 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::UnityEngine::Quaternion> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::UnityEngine::Quaternion value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::UnityEngine::Quaternion __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::Quaternion value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Quaternion get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Quaternion GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Quaternion GetValueOrDefault(::UnityEngine::Quaternion defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::UnityEngine::Quaternion> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::Quaternion> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::Quaternion> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 3541 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message GetValueOrDefault(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputRemoting__Message> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 4073 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::Newtonsoft::Json::JsonPosition> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::Newtonsoft::Json::JsonPosition", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::Newtonsoft::Json::JsonPosition value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::Newtonsoft::Json::JsonPosition __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::Newtonsoft::Json::JsonPosition value) ;

constexpr ::Newtonsoft::Json::JsonPosition __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::Newtonsoft::Json::JsonPosition __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Newtonsoft::Json::JsonPosition value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Newtonsoft::Json::JsonPosition get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Newtonsoft::Json::JsonPosition GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Newtonsoft::Json::JsonPosition GetValueOrDefault(::Newtonsoft::Json::JsonPosition defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::Newtonsoft::Json::JsonPosition> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::Newtonsoft::Json::JsonPosition> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::Newtonsoft::Json::JsonPosition> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 4236 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem value) ;

constexpr ::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem GetValueOrDefault(::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::____UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 4588 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::ENet::Address> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::ENet::Address", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::ENet::Address value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::ENet::Address __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::ENet::Address value) ;

constexpr ::ENet::Address __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::ENet::Address __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ENet::Address value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ENet::Address get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ENet::Address GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ENet::Address GetValueOrDefault(::ENet::Address defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::ENet::Address> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::ENet::Address> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::ENet::Address> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 4602 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::Unity::Jobs::JobHandle> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::Unity::Jobs::JobHandle value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::Unity::Jobs::JobHandle __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::Unity::Jobs::JobHandle value) ;

constexpr ::Unity::Jobs::JobHandle __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::Unity::Jobs::JobHandle __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::Unity::Jobs::JobHandle value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Unity::Jobs::JobHandle get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Unity::Jobs::JobHandle GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::Unity::Jobs::JobHandle GetValueOrDefault(::Unity::Jobs::JobHandle defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::Unity::Jobs::JobHandle> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::Unity::Jobs::JobHandle> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::Unity::Jobs::JobHandle> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 4611 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::GlobalNamespace::OVRPose> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::OVRPose", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::GlobalNamespace::OVRPose value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::GlobalNamespace::OVRPose __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::GlobalNamespace::OVRPose value) ;

constexpr ::GlobalNamespace::OVRPose __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::GlobalNamespace::OVRPose __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::OVRPose value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::OVRPose get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::OVRPose GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::OVRPose GetValueOrDefault(::GlobalNamespace::OVRPose defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::GlobalNamespace::OVRPose> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::GlobalNamespace::OVRPose> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::GlobalNamespace::OVRPose> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 4615 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::System::Text::RegularExpressions::RegexPrefix> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Text::RegularExpressions::RegexPrefix", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::System::Text::RegularExpressions::RegexPrefix value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::System::Text::RegularExpressions::RegexPrefix __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::System::Text::RegularExpressions::RegexPrefix value) ;

constexpr ::System::Text::RegularExpressions::RegexPrefix __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::System::Text::RegularExpressions::RegexPrefix __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Text::RegularExpressions::RegexPrefix value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Text::RegularExpressions::RegexPrefix get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Text::RegularExpressions::RegexPrefix GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Text::RegularExpressions::RegexPrefix GetValueOrDefault(::System::Text::RegularExpressions::RegexPrefix defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 4618 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::System::Runtime::Serialization::StreamingContext> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::System::Runtime::Serialization::StreamingContext value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::System::Runtime::Serialization::StreamingContext __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::System::Runtime::Serialization::StreamingContext value) ;

constexpr ::System::Runtime::Serialization::StreamingContext __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::System::Runtime::Serialization::StreamingContext __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Runtime::Serialization::StreamingContext value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::Serialization::StreamingContext get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::Serialization::StreamingContext GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::Serialization::StreamingContext GetValueOrDefault(::System::Runtime::Serialization::StreamingContext defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 4621 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::System::Net::Http::Headers::Token> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Net::Http::Headers::Token", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::System::Net::Http::Headers::Token value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::System::Net::Http::Headers::Token __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::System::Net::Http::Headers::Token value) ;

constexpr ::System::Net::Http::Headers::Token __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::System::Net::Http::Headers::Token __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Net::Http::Headers::Token value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Net::Http::Headers::Token get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Net::Http::Headers::Token GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Net::Http::Headers::Token GetValueOrDefault(::System::Net::Http::Headers::Token defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::System::Net::Http::Headers::Token> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::Net::Http::Headers::Token> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::Net::Http::Headers::Token> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 4628 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride GetValueOrDefault(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputActionRebindingExtensions__ParameterOverride> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 4631 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__BodyState> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::____GlobalNamespace__OVRPlugin__BodyState", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::GlobalNamespace::____GlobalNamespace__OVRPlugin__BodyState value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__BodyState __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::GlobalNamespace::____GlobalNamespace__OVRPlugin__BodyState value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRPlugin__BodyState __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__BodyState __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__OVRPlugin__BodyState value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__BodyState get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__BodyState GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__BodyState GetValueOrDefault(::GlobalNamespace::____GlobalNamespace__OVRPlugin__BodyState defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__BodyState> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__BodyState> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__BodyState> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 4632 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef GetValueOrDefault(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 4634 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRSceneManager__LogForwarder> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::____GlobalNamespace__OVRSceneManager__LogForwarder", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::GlobalNamespace::____GlobalNamespace__OVRSceneManager__LogForwarder value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::GlobalNamespace::____GlobalNamespace__OVRSceneManager__LogForwarder __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::GlobalNamespace::____GlobalNamespace__OVRSceneManager__LogForwarder value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRSceneManager__LogForwarder __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::GlobalNamespace::____GlobalNamespace__OVRSceneManager__LogForwarder __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__OVRSceneManager__LogForwarder value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRSceneManager__LogForwarder get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRSceneManager__LogForwarder GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRSceneManager__LogForwarder GetValueOrDefault(::GlobalNamespace::____GlobalNamespace__OVRSceneManager__LogForwarder defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRSceneManager__LogForwarder> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRSceneManager__LogForwarder> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRSceneManager__LogForwarder> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 4635 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent GetValueOrDefault(::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 4825 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::System::Int32Enum> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::Int32Enum", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::System::Int32Enum value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::System::Int32Enum __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::System::Int32Enum value) ;

constexpr ::System::Int32Enum __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::System::Int32Enum __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Int32Enum value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum GetValueOrDefault(::System::Int32Enum defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::System::Int32Enum> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::Int32Enum> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::Int32Enum> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2447))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 6976 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::System::ByteEnum> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::System::ByteEnum", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::System::ByteEnum value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::System::ByteEnum __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::System::ByteEnum value) ;

constexpr ::System::ByteEnum __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::System::ByteEnum __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::ByteEnum value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ByteEnum get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ByteEnum GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::ByteEnum GetValueOrDefault(::System::ByteEnum defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::System::ByteEnum> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::ByteEnum> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::System::ByteEnum> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 7472 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> GetValueOrDefault(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType> defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::bs_hook::Il2CppWrapperType>> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Nullable`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2447)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2447), inst: 7482 })
// CS Name: System.Nullable`1
struct CORDL_TYPE Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult", modifiers: "", def_value: None }]
constexpr Nullable_1(bool hasValue, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult value) noexcept;


                    constexpr Nullable_1(Nullable_1 const&) = default;
                    constexpr Nullable_1(Nullable_1&&) = default;
                    constexpr Nullable_1& operator=(Nullable_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Nullable_1& operator=(Nullable_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Nullable_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_hasValue, put=__set_hasValue))  hasValue;

constexpr void __set_hasValue(bool value) ;

constexpr bool __get_hasValue() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult __get_value() const;


// Properties

 bool __declspec(property(get=get_HasValue))  HasValue;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult value) ;

/// @brief Method get_HasValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_HasValue() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult get_Value() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult GetValueOrDefault() ;

/// @brief Method GetValueOrDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult GetValueOrDefault(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult defaultValue) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method Box addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType Box(::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult> o) ;

/// @brief Method Unbox addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult> Unbox(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method UnboxExact addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Nullable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputControlScheme__MatchResult> UnboxExact(::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Nullable_1, "System", "Nullable`1");
