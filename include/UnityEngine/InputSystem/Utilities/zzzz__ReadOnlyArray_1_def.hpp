#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch;
}
namespace UnityEngine::InputSystem::HID {
struct UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputControlScheme__DeviceRequirement;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct NameAndParameters;
}
namespace UnityEngine::InputSystem::Utilities {
struct NamedValue;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
struct ReadOnlyArray_1<TValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<UnityEngine::InputSystem::EnhancedTouch::Touch>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<UnityEngine::InputSystem::InputBinding>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<UnityEngine::InputSystem::InputControlScheme>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<UnityEngine::InputSystem::Users::InputUser>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ReadOnlyArray_1<float_t>;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
struct UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<TValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::EnhancedTouch::Touch>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::InputBinding>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::InputControlScheme>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Users::InputUser>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Utilities::NameAndParameters>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Utilities::NamedValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<float_t>;
}
// Type: ::Enumerator
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6783)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6783), inst: 2 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<TValue> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<TValue>
constexpr operator  System::Collections::Generic::IEnumerator_1<TValue>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<TValue>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(::ArrayW<TValue> m_Array, int32_t m_IndexStart, int32_t m_IndexEnd, int32_t m_Index) noexcept;


                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<TValue> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<TValue> value) ;

constexpr ::ArrayW<TValue> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart))  m_IndexStart;

constexpr void __set_m_IndexStart(int32_t value) ;

constexpr int32_t __get_m_IndexStart() const;

 int32_t __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd))  m_IndexEnd;

constexpr void __set_m_IndexEnd(int32_t value) ;

constexpr int32_t __get_m_IndexEnd() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 TValue __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<TValue> array, int32_t index, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6783)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6783), inst: 374 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<float_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<float_t>
constexpr operator  System::Collections::Generic::IEnumerator_1<float_t>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(::ArrayW<float_t> m_Array, int32_t m_IndexStart, int32_t m_IndexEnd, int32_t m_Index) noexcept;


                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart))  m_IndexStart;

constexpr void __set_m_IndexStart(int32_t value) ;

constexpr int32_t __get_m_IndexStart() const;

 int32_t __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd))  m_IndexEnd;

constexpr void __set_m_IndexEnd(int32_t value) ;

constexpr int32_t __get_m_IndexEnd() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 float_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<float_t> array, int32_t index, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 float_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6783)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6783), inst: 2498 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Utilities::InternedString> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::InternedString>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::InternedString>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> m_Array, int32_t m_IndexStart, int32_t m_IndexEnd, int32_t m_Index) noexcept;


                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart))  m_IndexStart;

constexpr void __set_m_IndexStart(int32_t value) ;

constexpr int32_t __get_m_IndexStart() const;

 int32_t __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd))  m_IndexEnd;

constexpr void __set_m_IndexEnd(int32_t value) ;

constexpr int32_t __get_m_IndexEnd() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> array, int32_t index, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::Utilities::InternedString get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6783), inst: 2996 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::InputBinding> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputBinding>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputBinding>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::InputBinding>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(::ArrayW<UnityEngine::InputSystem::InputBinding> m_Array, int32_t m_IndexStart, int32_t m_IndexEnd, int32_t m_Index) noexcept;


                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::InputBinding> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::InputBinding> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::InputBinding> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart))  m_IndexStart;

constexpr void __set_m_IndexStart(int32_t value) ;

constexpr int32_t __get_m_IndexStart() const;

 int32_t __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd))  m_IndexEnd;

constexpr void __set_m_IndexEnd(int32_t value) ;

constexpr int32_t __get_m_IndexEnd() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::InputSystem::InputBinding __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::InputBinding> array, int32_t index, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::InputBinding get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6783)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6783), inst: 2998 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::InputControlScheme> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControlScheme>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControlScheme>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::InputControlScheme>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(::ArrayW<UnityEngine::InputSystem::InputControlScheme> m_Array, int32_t m_IndexStart, int32_t m_IndexEnd, int32_t m_Index) noexcept;


                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::InputControlScheme> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::InputControlScheme> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::InputControlScheme> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart))  m_IndexStart;

constexpr void __set_m_IndexStart(int32_t value) ;

constexpr int32_t __get_m_IndexStart() const;

 int32_t __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd))  m_IndexEnd;

constexpr void __set_m_IndexEnd(int32_t value) ;

constexpr int32_t __get_m_IndexEnd() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::InputSystem::InputControlScheme __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::InputControlScheme> array, int32_t index, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::InputControlScheme get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6783)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6783), inst: 3004 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Utilities::NameAndParameters> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::NameAndParameters>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::NameAndParameters>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> m_Array, int32_t m_IndexStart, int32_t m_IndexEnd, int32_t m_Index) noexcept;


                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart))  m_IndexStart;

constexpr void __set_m_IndexStart(int32_t value) ;

constexpr int32_t __get_m_IndexStart() const;

 int32_t __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd))  m_IndexEnd;

constexpr void __set_m_IndexEnd(int32_t value) ;

constexpr int32_t __get_m_IndexEnd() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::InputSystem::Utilities::NameAndParameters __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> array, int32_t index, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::Utilities::NameAndParameters get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6783), inst: 3005 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Utilities::NamedValue> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::NamedValue>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::NamedValue>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue> m_Array, int32_t m_IndexStart, int32_t m_IndexEnd, int32_t m_Index) noexcept;


                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart))  m_IndexStart;

constexpr void __set_m_IndexStart(int32_t value) ;

constexpr int32_t __get_m_IndexStart() const;

 int32_t __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd))  m_IndexEnd;

constexpr void __set_m_IndexEnd(int32_t value) ;

constexpr int32_t __get_m_IndexEnd() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::InputSystem::Utilities::NamedValue __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue> array, int32_t index, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::Utilities::NamedValue get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6783)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6783), inst: 3019 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::EnhancedTouch::Touch> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::EnhancedTouch::Touch>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::EnhancedTouch::Touch>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::EnhancedTouch::Touch>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(::ArrayW<UnityEngine::InputSystem::EnhancedTouch::Touch> m_Array, int32_t m_IndexStart, int32_t m_IndexEnd, int32_t m_Index) noexcept;


                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::EnhancedTouch::Touch> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::EnhancedTouch::Touch> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::EnhancedTouch::Touch> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart))  m_IndexStart;

constexpr void __set_m_IndexStart(int32_t value) ;

constexpr int32_t __get_m_IndexStart() const;

 int32_t __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd))  m_IndexEnd;

constexpr void __set_m_IndexEnd(int32_t value) ;

constexpr int32_t __get_m_IndexEnd() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::InputSystem::EnhancedTouch::Touch __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::EnhancedTouch::Touch> array, int32_t index, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::EnhancedTouch::Touch get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6783)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6783), inst: 3035 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> m_Array, int32_t m_IndexStart, int32_t m_IndexEnd, int32_t m_Index) noexcept;


                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart))  m_IndexStart;

constexpr void __set_m_IndexStart(int32_t value) ;

constexpr int32_t __get_m_IndexStart() const;

 int32_t __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd))  m_IndexEnd;

constexpr void __set_m_IndexEnd(int32_t value) ;

constexpr int32_t __get_m_IndexEnd() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> array, int32_t index, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6783), inst: 3194 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Users::InputUser> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Users::InputUser>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Users::InputUser>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::Users::InputUser>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(::ArrayW<UnityEngine::InputSystem::Users::InputUser> m_Array, int32_t m_IndexStart, int32_t m_IndexEnd, int32_t m_Index) noexcept;


                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::Users::InputUser> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::Users::InputUser> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Users::InputUser> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart))  m_IndexStart;

constexpr void __set_m_IndexStart(int32_t value) ;

constexpr int32_t __get_m_IndexStart() const;

 int32_t __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd))  m_IndexEnd;

constexpr void __set_m_IndexEnd(int32_t value) ;

constexpr int32_t __get_m_IndexEnd() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::InputSystem::Users::InputUser __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::Users::InputUser> array, int32_t index, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::Users::InputUser get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6783), inst: 4236 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> m_Array, int32_t m_IndexStart, int32_t m_IndexEnd, int32_t m_Index) noexcept;


                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart))  m_IndexStart;

constexpr void __set_m_IndexStart(int32_t value) ;

constexpr int32_t __get_m_IndexStart() const;

 int32_t __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd))  m_IndexEnd;

constexpr void __set_m_IndexEnd(int32_t value) ;

constexpr int32_t __get_m_IndexEnd() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> array, int32_t index, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6783)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6783), inst: 4740 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> m_Array, int32_t m_IndexStart, int32_t m_IndexEnd, int32_t m_Index) noexcept;


                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart))  m_IndexStart;

constexpr void __set_m_IndexStart(int32_t value) ;

constexpr int32_t __get_m_IndexStart() const;

 int32_t __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd))  m_IndexEnd;

constexpr void __set_m_IndexEnd(int32_t value) ;

constexpr int32_t __get_m_IndexEnd() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> array, int32_t index, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6783))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6783), inst: 4741 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo>", modifiers: "", def_value: None }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> m_Array, int32_t m_IndexStart, int32_t m_IndexEnd, int32_t m_Index) noexcept;


                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator& operator=(UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_IndexStart, put=__set_m_IndexStart))  m_IndexStart;

constexpr void __set_m_IndexStart(int32_t value) ;

constexpr int32_t __get_m_IndexStart() const;

 int32_t __declspec(property(get=__get_m_IndexEnd, put=__set_m_IndexEnd))  m_IndexEnd;

constexpr void __set_m_IndexEnd(int32_t value) ;

constexpr int32_t __get_m_IndexEnd() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> array, int32_t index, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6784))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6784), inst: 2 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1
struct CORDL_TYPE ReadOnlyArray_1<TValue> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<TValue>;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<TValue>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<TValue>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TValue>
constexpr operator  System::Collections::Generic::IEnumerable_1<TValue>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<TValue>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<TValue>() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<TValue>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<TValue> m_Array, int32_t m_StartIndex, int32_t m_Length) noexcept;


                    constexpr ReadOnlyArray_1(ReadOnlyArray_1 const&) = default;
                    constexpr ReadOnlyArray_1(ReadOnlyArray_1&&) = default;
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<TValue> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<TValue> value) ;

constexpr ::ArrayW<TValue> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex))  m_StartIndex;

constexpr void __set_m_StartIndex(int32_t value) ;

constexpr int32_t __get_m_StartIndex() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 TValue __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<TValue> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<TValue> array, int32_t index, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TValue> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(System::Predicate_1<TValue> predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<TValue> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<TValue> System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> op_Implicit_UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_TValue_(::ArrayW<TValue> array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue get_Item(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6784))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6784), inst: 374 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1
struct CORDL_TYPE ReadOnlyArray_1<float_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<float_t>;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<float_t>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<float_t>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<float_t>
constexpr operator  System::Collections::Generic::IEnumerable_1<float_t>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<float_t>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<float_t>() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<float_t> m_Array, int32_t m_StartIndex, int32_t m_Length) noexcept;


                    constexpr ReadOnlyArray_1(ReadOnlyArray_1 const&) = default;
                    constexpr ReadOnlyArray_1(ReadOnlyArray_1&&) = default;
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex))  m_StartIndex;

constexpr void __set_m_StartIndex(int32_t value) ;

constexpr int32_t __get_m_StartIndex() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 float_t __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<float_t> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<float_t> array, int32_t index, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<float_t> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(System::Predicate_1<float_t> predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<float_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<float_t> System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> op_Implicit_UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_float_t_(::ArrayW<float_t> array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 float_t get_Item(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6784)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6784), inst: 2498 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1
struct CORDL_TYPE ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Utilities::InternedString>;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::Utilities::InternedString>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::Utilities::InternedString>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::Utilities::InternedString>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::Utilities::InternedString>() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> m_Array, int32_t m_StartIndex, int32_t m_Length) noexcept;


                    constexpr ReadOnlyArray_1(ReadOnlyArray_1 const&) = default;
                    constexpr ReadOnlyArray_1(ReadOnlyArray_1&&) = default;
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex))  m_StartIndex;

constexpr void __set_m_StartIndex(int32_t value) ;

constexpr int32_t __get_m_StartIndex() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> array, int32_t index, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(System::Predicate_1<UnityEngine::InputSystem::Utilities::InternedString> predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Utilities::InternedString> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::InternedString> System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> op_Implicit_UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_UnityEngine__InputSystem__Utilities__InternedString_(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::Utilities::InternedString get_Item(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6784))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6784), inst: 2996 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1
struct CORDL_TYPE ReadOnlyArray_1<UnityEngine::InputSystem::InputBinding> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::InputBinding>;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::InputBinding>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::InputBinding>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputBinding>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputBinding>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::InputBinding>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::InputBinding>() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::InputBinding>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<UnityEngine::InputSystem::InputBinding> m_Array, int32_t m_StartIndex, int32_t m_Length) noexcept;


                    constexpr ReadOnlyArray_1(ReadOnlyArray_1 const&) = default;
                    constexpr ReadOnlyArray_1(ReadOnlyArray_1&&) = default;
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::InputBinding> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::InputBinding> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::InputBinding> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex))  m_StartIndex;

constexpr void __set_m_StartIndex(int32_t value) ;

constexpr int32_t __get_m_StartIndex() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 UnityEngine::InputSystem::InputBinding __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::InputBinding> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::InputBinding> array, int32_t index, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputBinding> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(System::Predicate_1<UnityEngine::InputSystem::InputBinding> predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::InputBinding> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputBinding> System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputBinding> op_Implicit_UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_UnityEngine__InputSystem__InputBinding_(::ArrayW<UnityEngine::InputSystem::InputBinding> array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::InputBinding get_Item(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6784)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6784), inst: 2998 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1
struct CORDL_TYPE ReadOnlyArray_1<UnityEngine::InputSystem::InputControlScheme> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::InputControlScheme>;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::InputControlScheme>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::InputControlScheme>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControlScheme>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControlScheme>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::InputControlScheme>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::InputControlScheme>() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::InputControlScheme>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<UnityEngine::InputSystem::InputControlScheme> m_Array, int32_t m_StartIndex, int32_t m_Length) noexcept;


                    constexpr ReadOnlyArray_1(ReadOnlyArray_1 const&) = default;
                    constexpr ReadOnlyArray_1(ReadOnlyArray_1&&) = default;
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::InputControlScheme> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::InputControlScheme> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::InputControlScheme> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex))  m_StartIndex;

constexpr void __set_m_StartIndex(int32_t value) ;

constexpr int32_t __get_m_StartIndex() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 UnityEngine::InputSystem::InputControlScheme __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::InputControlScheme> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::InputControlScheme> array, int32_t index, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::InputControlScheme> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(System::Predicate_1<UnityEngine::InputSystem::InputControlScheme> predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::InputControlScheme> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::InputControlScheme> System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputControlScheme> op_Implicit_UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_UnityEngine__InputSystem__InputControlScheme_(::ArrayW<UnityEngine::InputSystem::InputControlScheme> array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::InputControlScheme get_Item(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6784)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6784), inst: 3004 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1
struct CORDL_TYPE ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Utilities::NameAndParameters>;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::Utilities::NameAndParameters>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::Utilities::NameAndParameters>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::NameAndParameters>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::NameAndParameters>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::Utilities::NameAndParameters>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::Utilities::NameAndParameters>() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> m_Array, int32_t m_StartIndex, int32_t m_Length) noexcept;


                    constexpr ReadOnlyArray_1(ReadOnlyArray_1 const&) = default;
                    constexpr ReadOnlyArray_1(ReadOnlyArray_1&&) = default;
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex))  m_StartIndex;

constexpr void __set_m_StartIndex(int32_t value) ;

constexpr int32_t __get_m_StartIndex() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 UnityEngine::InputSystem::Utilities::NameAndParameters __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> array, int32_t index, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(System::Predicate_1<UnityEngine::InputSystem::Utilities::NameAndParameters> predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Utilities::NameAndParameters> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::NameAndParameters> System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters> op_Implicit_UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_UnityEngine__InputSystem__Utilities__NameAndParameters_(::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::Utilities::NameAndParameters get_Item(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6784))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6784), inst: 3005 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1
struct CORDL_TYPE ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Utilities::NamedValue>;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::Utilities::NamedValue>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::Utilities::NamedValue>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::NamedValue>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::NamedValue>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::Utilities::NamedValue>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::Utilities::NamedValue>() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue> m_Array, int32_t m_StartIndex, int32_t m_Length) noexcept;


                    constexpr ReadOnlyArray_1(ReadOnlyArray_1 const&) = default;
                    constexpr ReadOnlyArray_1(ReadOnlyArray_1&&) = default;
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex))  m_StartIndex;

constexpr void __set_m_StartIndex(int32_t value) ;

constexpr int32_t __get_m_StartIndex() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 UnityEngine::InputSystem::Utilities::NamedValue __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue> array, int32_t index, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(System::Predicate_1<UnityEngine::InputSystem::Utilities::NamedValue> predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Utilities::NamedValue> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::NamedValue> System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> op_Implicit_UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_UnityEngine__InputSystem__Utilities__NamedValue_(::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue> array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::Utilities::NamedValue get_Item(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6784)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6784), inst: 3019 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1
struct CORDL_TYPE ReadOnlyArray_1<UnityEngine::InputSystem::EnhancedTouch::Touch> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::EnhancedTouch::Touch>;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::EnhancedTouch::Touch>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::EnhancedTouch::Touch>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::EnhancedTouch::Touch>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::EnhancedTouch::Touch>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::EnhancedTouch::Touch>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::EnhancedTouch::Touch>() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::EnhancedTouch::Touch>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<UnityEngine::InputSystem::EnhancedTouch::Touch> m_Array, int32_t m_StartIndex, int32_t m_Length) noexcept;


                    constexpr ReadOnlyArray_1(ReadOnlyArray_1 const&) = default;
                    constexpr ReadOnlyArray_1(ReadOnlyArray_1&&) = default;
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::EnhancedTouch::Touch> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::EnhancedTouch::Touch> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::EnhancedTouch::Touch> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex))  m_StartIndex;

constexpr void __set_m_StartIndex(int32_t value) ;

constexpr int32_t __get_m_StartIndex() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 UnityEngine::InputSystem::EnhancedTouch::Touch __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::EnhancedTouch::Touch> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::EnhancedTouch::Touch> array, int32_t index, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::EnhancedTouch::Touch> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(System::Predicate_1<UnityEngine::InputSystem::EnhancedTouch::Touch> predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::EnhancedTouch::Touch> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::EnhancedTouch::Touch> System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::EnhancedTouch::Touch> op_Implicit_UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_UnityEngine__InputSystem__EnhancedTouch__Touch_(::ArrayW<UnityEngine::InputSystem::EnhancedTouch::Touch> array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::EnhancedTouch::Touch get_Item(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6784))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6784), inst: 3035 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1
struct CORDL_TYPE ReadOnlyArray_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> m_Array, int32_t m_StartIndex, int32_t m_Length) noexcept;


                    constexpr ReadOnlyArray_1(ReadOnlyArray_1 const&) = default;
                    constexpr ReadOnlyArray_1(ReadOnlyArray_1&&) = default;
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex))  m_StartIndex;

constexpr void __set_m_StartIndex(int32_t value) ;

constexpr int32_t __get_m_StartIndex() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> array, int32_t index, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(System::Predicate_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> op_Implicit_UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_UnityEngine__InputSystem__UnityEngine__InputSystem__InputControlScheme__DeviceRequirement_(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement get_Item(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6784))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6784), inst: 3194 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1
struct CORDL_TYPE ReadOnlyArray_1<UnityEngine::InputSystem::Users::InputUser> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Users::InputUser>;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::Users::InputUser>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::Users::InputUser>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Users::InputUser>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Users::InputUser>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::Users::InputUser>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::Users::InputUser>() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::Users::InputUser>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<UnityEngine::InputSystem::Users::InputUser> m_Array, int32_t m_StartIndex, int32_t m_Length) noexcept;


                    constexpr ReadOnlyArray_1(ReadOnlyArray_1 const&) = default;
                    constexpr ReadOnlyArray_1(ReadOnlyArray_1&&) = default;
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::Users::InputUser> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::Users::InputUser> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Users::InputUser> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex))  m_StartIndex;

constexpr void __set_m_StartIndex(int32_t value) ;

constexpr int32_t __get_m_StartIndex() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 UnityEngine::InputSystem::Users::InputUser __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::Users::InputUser> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::Users::InputUser> array, int32_t index, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::Users::InputUser> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(System::Predicate_1<UnityEngine::InputSystem::Users::InputUser> predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Users::InputUser> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Users::InputUser> System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Users::InputUser> op_Implicit_UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_UnityEngine__InputSystem__Users__InputUser_(::ArrayW<UnityEngine::InputSystem::Users::InputUser> array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::Users::InputUser get_Item(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6784)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6784), inst: 4236 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1
struct CORDL_TYPE ReadOnlyArray_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> m_Array, int32_t m_StartIndex, int32_t m_Length) noexcept;


                    constexpr ReadOnlyArray_1(ReadOnlyArray_1 const&) = default;
                    constexpr ReadOnlyArray_1(ReadOnlyArray_1&&) = default;
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex))  m_StartIndex;

constexpr void __set_m_StartIndex(int32_t value) ;

constexpr int32_t __get_m_StartIndex() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> array, int32_t index, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(System::Predicate_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> op_Implicit_UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_UnityEngine__InputSystem__Layouts__UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem_(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem get_Item(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6784))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6784), inst: 4740 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1
struct CORDL_TYPE ReadOnlyArray_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> m_Array, int32_t m_StartIndex, int32_t m_Length) noexcept;


                    constexpr ReadOnlyArray_1(ReadOnlyArray_1 const&) = default;
                    constexpr ReadOnlyArray_1(ReadOnlyArray_1&&) = default;
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex))  m_StartIndex;

constexpr void __set_m_StartIndex(int32_t value) ;

constexpr int32_t __get_m_StartIndex() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> array, int32_t index, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(System::Predicate_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> op_Implicit_UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_UnityEngine__InputSystem__HID__UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage_(::ArrayW<UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage> array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::HID::UnityEngine__InputSystem__HID__HIDSupport__HIDPageUsage get_Item(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::ReadOnlyArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6784))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6784), inst: 4741 })
// CS Name: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1
struct CORDL_TYPE ReadOnlyArray_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo>;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo>() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo>() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo>", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadOnlyArray_1(::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> m_Array, int32_t m_StartIndex, int32_t m_Length) noexcept;


                    constexpr ReadOnlyArray_1(ReadOnlyArray_1 const&) = default;
                    constexpr ReadOnlyArray_1(ReadOnlyArray_1&&) = default;
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReadOnlyArray_1& operator=(ReadOnlyArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReadOnlyArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex))  m_StartIndex;

constexpr void __set_m_StartIndex(int32_t value) ;

constexpr int32_t __get_m_StartIndex() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> array, int32_t index, int32_t length) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> ToArray() ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(System::Predicate_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> predicate) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<TValue>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> System_Collections_Generic_IEnumerable_TValue__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> op_Implicit_UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_UnityEngine__InputSystem__LowLevel__UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo_(::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> array) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo get_Item(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1, "UnityEngine.InputSystem.Utilities", "ReadOnlyArray`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__ReadOnlyArray_1__Enumerator, "UnityEngine.InputSystem.Utilities", "ReadOnlyArray`1/Enumerator");
