#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace UnityEngine::InputSystem::OnScreen {
struct ____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo;
}
namespace UnityEngine::InputSystem::UI {
struct PointerModel;
}
namespace UnityEngine::InputSystem::Users {
struct ____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
struct InlinedArray_1<TValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<::System::Runtime::InteropServices::GCHandle>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<int32_t>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct InlinedArray_1<uint64_t>;
}
namespace UnityEngine::InputSystem::Utilities {
template<::cordl_internals::il2cpp_reference_type TValue>
struct ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<TValue>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::System::Runtime::InteropServices::GCHandle>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::UI::PointerModel>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::Substring>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<int32_t>;
}
namespace UnityEngine::InputSystem::Utilities {
template<>
struct ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<uint64_t>;
}
// Type: ::Enumerator
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6751)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6751), inst: 2 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1::Enumerator
struct CORDL_TYPE ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<TValue> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<TValue>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<TValue>() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array, int32_t index) noexcept;


                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> __declspec(property(get=__get_array, put=__set_array))  array;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> __get_array() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Properties

 TValue __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6751)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6751), inst: 92 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1::Enumerator
struct CORDL_TYPE ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<int32_t>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> array, int32_t index) noexcept;


                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> __declspec(property(get=__get_array, put=__set_array))  array;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> __get_array() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Properties

 int32_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6751)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6751), inst: 389 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1::Enumerator
struct CORDL_TYPE ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<uint64_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<uint64_t>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<uint64_t>() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> array, int32_t index) noexcept;


                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> __declspec(property(get=__get_array, put=__set_array))  array;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> __get_array() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Properties

 uint64_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 uint64_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6751)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6751), inst: 2498 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1::Enumerator
struct CORDL_TYPE ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString>() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> array, int32_t index) noexcept;


                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get_array, put=__set_array))  array;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> __get_array() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Properties

 ::UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::InputSystem::Utilities::InternedString get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6751)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6751), inst: 2604 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1::Enumerator
struct CORDL_TYPE ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::Substring> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring>() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> array, int32_t index) noexcept;


                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> __declspec(property(get=__get_array, put=__set_array))  array;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> __get_array() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Properties

 ::UnityEngine::InputSystem::Utilities::Substring __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::InputSystem::Utilities::Substring get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6751))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6751), inst: 2951 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1::Enumerator
struct CORDL_TYPE ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> array, int32_t index) noexcept;


                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> __declspec(property(get=__get_array, put=__set_array))  array;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> __get_array() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Properties

 ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6751)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6751), inst: 3727 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1::Enumerator
struct CORDL_TYPE ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::System::Runtime::InteropServices::GCHandle> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::System::Runtime::InteropServices::GCHandle>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Runtime::InteropServices::GCHandle>() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> array, int32_t index) noexcept;


                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> __declspec(property(get=__get_array, put=__set_array))  array;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> __get_array() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Properties

 ::System::Runtime::InteropServices::GCHandle __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Runtime::InteropServices::GCHandle get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6751)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6751), inst: 3729 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1::Enumerator
struct CORDL_TYPE ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::UI::PointerModel> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::UI::PointerModel>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::UI::PointerModel>() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> array, int32_t index) noexcept;


                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> __declspec(property(get=__get_array, put=__set_array))  array;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> __get_array() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Properties

 ::UnityEngine::InputSystem::UI::PointerModel __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::InputSystem::UI::PointerModel get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6751)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6751), inst: 3731 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1::Enumerator
struct CORDL_TYPE ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout>() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> array, int32_t index) noexcept;


                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> __declspec(property(get=__get_array, put=__set_array))  array;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> __get_array() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Properties

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6751)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6751), inst: 3732 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1::Enumerator
struct CORDL_TYPE ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection>() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> array, int32_t index) noexcept;


                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> __declspec(property(get=__get_array, put=__set_array))  array;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> __get_array() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Properties

 ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: ::Enumerator
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6751))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6751), inst: 3733 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1::Enumerator
struct CORDL_TYPE ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>() const;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "array", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> array, int32_t index) noexcept;


                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&&) = default;
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator& operator=(____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> __declspec(property(get=__get_array, put=__set_array))  array;

constexpr void __set_array(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> __get_array() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Properties

 ::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6752)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6752), inst: 2 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1
struct CORDL_TYPE InlinedArray_1<TValue> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<TValue>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<TValue>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TValue>() const;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "TValue", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<TValue>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t length, TValue firstValue, ::ArrayW<TValue> additionalValues) noexcept;


                    constexpr InlinedArray_1(InlinedArray_1 const&) = default;
                    constexpr InlinedArray_1(InlinedArray_1&&) = default;
                    constexpr InlinedArray_1& operator=(InlinedArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InlinedArray_1& operator=(InlinedArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InlinedArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

 TValue __declspec(property(get=__get_firstValue, put=__set_firstValue))  firstValue;

constexpr void __set_firstValue(TValue value) ;

constexpr TValue __get_firstValue() const;

 ::ArrayW<TValue> __declspec(property(get=__get_additionalValues, put=__set_additionalValues))  additionalValues;

constexpr void __set_additionalValues(::ArrayW<TValue> value) ;

constexpr ::ArrayW<TValue> __get_additionalValues() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 TValue __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(TValue value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(TValue firstValue, ::ArrayW<TValue> additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<TValue> values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 TValue get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, TValue value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetLength(int32_t size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TValue> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
 ::ArrayW<TOther> ToArray(::System::Func_2<TValue,TOther> mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(TValue value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Append(TValue value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t AppendWithCapacity(TValue value, int32_t capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 void Append(::System::Collections::Generic::IEnumerable_1<TValue> values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(TValue value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtWithCapacity(int32_t index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAt(int32_t index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtByMovingTailWithCapacity(int32_t index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 bool RemoveByMovingTailWithCapacity(TValue value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(TValue value, ::System::Collections::Generic::IEqualityComparer_1<TValue> comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
 void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<TValue> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6752)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6752), inst: 92 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1
struct CORDL_TYPE InlinedArray_1<int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<int32_t>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<int32_t>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>() const;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t length, int32_t firstValue, ::ArrayW<int32_t> additionalValues) noexcept;


                    constexpr InlinedArray_1(InlinedArray_1 const&) = default;
                    constexpr InlinedArray_1(InlinedArray_1&&) = default;
                    constexpr InlinedArray_1& operator=(InlinedArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InlinedArray_1& operator=(InlinedArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InlinedArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

 int32_t __declspec(property(get=__get_firstValue, put=__set_firstValue))  firstValue;

constexpr void __set_firstValue(int32_t value) ;

constexpr int32_t __get_firstValue() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_additionalValues, put=__set_additionalValues))  additionalValues;

constexpr void __set_additionalValues(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_additionalValues() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 int32_t __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t firstValue, ::ArrayW<int32_t> additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<int32_t> values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, int32_t value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetLength(int32_t size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<int32_t> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
 ::ArrayW<TOther> ToArray(::System::Func_2<int32_t,TOther> mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(int32_t value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Append(int32_t value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t AppendWithCapacity(int32_t value, int32_t capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 void Append(::System::Collections::Generic::IEnumerable_1<int32_t> values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(int32_t value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtWithCapacity(int32_t index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAt(int32_t index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtByMovingTailWithCapacity(int32_t index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 bool RemoveByMovingTailWithCapacity(int32_t value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(int32_t value, ::System::Collections::Generic::IEqualityComparer_1<int32_t> comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
 void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<int32_t> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6752))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6752), inst: 389 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1
struct CORDL_TYPE InlinedArray_1<uint64_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<uint64_t>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<uint64_t>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<uint64_t>() const;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<uint64_t>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t length, uint64_t firstValue, ::ArrayW<uint64_t> additionalValues) noexcept;


                    constexpr InlinedArray_1(InlinedArray_1 const&) = default;
                    constexpr InlinedArray_1(InlinedArray_1&&) = default;
                    constexpr InlinedArray_1& operator=(InlinedArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InlinedArray_1& operator=(InlinedArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InlinedArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

 uint64_t __declspec(property(get=__get_firstValue, put=__set_firstValue))  firstValue;

constexpr void __set_firstValue(uint64_t value) ;

constexpr uint64_t __get_firstValue() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_additionalValues, put=__set_additionalValues))  additionalValues;

constexpr void __set_additionalValues(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_additionalValues() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 uint64_t __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(uint64_t value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(uint64_t firstValue, ::ArrayW<uint64_t> additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<uint64_t> values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 uint64_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, uint64_t value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetLength(int32_t size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<uint64_t> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
 ::ArrayW<TOther> ToArray(::System::Func_2<uint64_t,TOther> mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(uint64_t value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Append(uint64_t value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t AppendWithCapacity(uint64_t value, int32_t capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 void Append(::System::Collections::Generic::IEnumerable_1<uint64_t> values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(uint64_t value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtWithCapacity(int32_t index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAt(int32_t index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtByMovingTailWithCapacity(int32_t index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 bool RemoveByMovingTailWithCapacity(uint64_t value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(uint64_t value, ::System::Collections::Generic::IEqualityComparer_1<uint64_t> comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
 void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<uint64_t> other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<uint64_t> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6752)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6752), inst: 2498 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1
struct CORDL_TYPE InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::InternedString>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString>() const;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "::UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t length, ::UnityEngine::InputSystem::Utilities::InternedString firstValue, ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> additionalValues) noexcept;


                    constexpr InlinedArray_1(InlinedArray_1 const&) = default;
                    constexpr InlinedArray_1(InlinedArray_1&&) = default;
                    constexpr InlinedArray_1& operator=(InlinedArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InlinedArray_1& operator=(InlinedArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InlinedArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

 ::UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_firstValue, put=__set_firstValue))  firstValue;

constexpr void __set_firstValue(::UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InternedString __get_firstValue() const;

 ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get_additionalValues, put=__set_additionalValues))  additionalValues;

constexpr void __set_additionalValues(::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> __get_additionalValues() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 ::UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::Utilities::InternedString value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::Utilities::InternedString firstValue, ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString> values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::InternedString get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, ::UnityEngine::InputSystem::Utilities::InternedString value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetLength(int32_t size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
 ::ArrayW<TOther> ToArray(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,TOther> mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(::UnityEngine::InputSystem::Utilities::InternedString value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Append(::UnityEngine::InputSystem::Utilities::InternedString value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t AppendWithCapacity(::UnityEngine::InputSystem::Utilities::InternedString value, int32_t capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 void Append(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::InternedString> values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(::UnityEngine::InputSystem::Utilities::InternedString value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtWithCapacity(int32_t index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAt(int32_t index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtByMovingTailWithCapacity(int32_t index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 bool RemoveByMovingTailWithCapacity(::UnityEngine::InputSystem::Utilities::InternedString value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(::UnityEngine::InputSystem::Utilities::InternedString value, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::InternedString> comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
 void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InternedString> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6752)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6752), inst: 2604 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1
struct CORDL_TYPE InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Utilities::Substring>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>() const;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<::UnityEngine::InputSystem::Utilities::Substring>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t length, ::UnityEngine::InputSystem::Utilities::Substring firstValue, ::ArrayW<::UnityEngine::InputSystem::Utilities::Substring> additionalValues) noexcept;


                    constexpr InlinedArray_1(InlinedArray_1 const&) = default;
                    constexpr InlinedArray_1(InlinedArray_1&&) = default;
                    constexpr InlinedArray_1& operator=(InlinedArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InlinedArray_1& operator=(InlinedArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InlinedArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

 ::UnityEngine::InputSystem::Utilities::Substring __declspec(property(get=__get_firstValue, put=__set_firstValue))  firstValue;

constexpr void __set_firstValue(::UnityEngine::InputSystem::Utilities::Substring value) ;

constexpr ::UnityEngine::InputSystem::Utilities::Substring __get_firstValue() const;

 ::ArrayW<::UnityEngine::InputSystem::Utilities::Substring> __declspec(property(get=__get_additionalValues, put=__set_additionalValues))  additionalValues;

constexpr void __set_additionalValues(::ArrayW<::UnityEngine::InputSystem::Utilities::Substring> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Utilities::Substring> __get_additionalValues() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 ::UnityEngine::InputSystem::Utilities::Substring __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::Utilities::Substring value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::Utilities::Substring firstValue, ::ArrayW<::UnityEngine::InputSystem::Utilities::Substring> additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring> values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::Substring get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, ::UnityEngine::InputSystem::Utilities::Substring value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetLength(int32_t size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<::UnityEngine::InputSystem::Utilities::Substring> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
 ::ArrayW<TOther> ToArray(::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,TOther> mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(::UnityEngine::InputSystem::Utilities::Substring value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Append(::UnityEngine::InputSystem::Utilities::Substring value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t AppendWithCapacity(::UnityEngine::InputSystem::Utilities::Substring value, int32_t capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 void Append(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring> values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(::UnityEngine::InputSystem::Utilities::Substring value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtWithCapacity(int32_t index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAt(int32_t index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtByMovingTailWithCapacity(int32_t index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 bool RemoveByMovingTailWithCapacity(::UnityEngine::InputSystem::Utilities::Substring value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(::UnityEngine::InputSystem::Utilities::Substring value, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Utilities::Substring> comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
 void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring> other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::Substring> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6752))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6752), inst: 2951 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1
struct CORDL_TYPE InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>() const;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t length, ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> firstValue, ::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> additionalValues) noexcept;


                    constexpr InlinedArray_1(InlinedArray_1 const&) = default;
                    constexpr InlinedArray_1(InlinedArray_1&&) = default;
                    constexpr InlinedArray_1& operator=(InlinedArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InlinedArray_1& operator=(InlinedArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InlinedArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

 ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> __declspec(property(get=__get_firstValue, put=__set_firstValue))  firstValue;

constexpr void __set_firstValue(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> value) ;

constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> __get_firstValue() const;

 ::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> __declspec(property(get=__get_additionalValues, put=__set_additionalValues))  additionalValues;

constexpr void __set_additionalValues(::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> value) ;

constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> __get_additionalValues() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> firstValue, ::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, ::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetLength(int32_t size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
 ::ArrayW<TOther> ToArray(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>,TOther> mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Append(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t AppendWithCapacity(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> value, int32_t capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 void Append(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtWithCapacity(int32_t index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAt(int32_t index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtByMovingTailWithCapacity(int32_t index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 bool RemoveByMovingTailWithCapacity(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t> value, ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
 void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6752)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6752), inst: 3727 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1
struct CORDL_TYPE InlinedArray_1<::System::Runtime::InteropServices::GCHandle> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::System::Runtime::InteropServices::GCHandle>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::Runtime::InteropServices::GCHandle>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Runtime::InteropServices::GCHandle>() const;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<::System::Runtime::InteropServices::GCHandle>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t length, ::System::Runtime::InteropServices::GCHandle firstValue, ::ArrayW<::System::Runtime::InteropServices::GCHandle> additionalValues) noexcept;


                    constexpr InlinedArray_1(InlinedArray_1 const&) = default;
                    constexpr InlinedArray_1(InlinedArray_1&&) = default;
                    constexpr InlinedArray_1& operator=(InlinedArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InlinedArray_1& operator=(InlinedArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InlinedArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

 ::System::Runtime::InteropServices::GCHandle __declspec(property(get=__get_firstValue, put=__set_firstValue))  firstValue;

constexpr void __set_firstValue(::System::Runtime::InteropServices::GCHandle value) ;

constexpr ::System::Runtime::InteropServices::GCHandle __get_firstValue() const;

 ::ArrayW<::System::Runtime::InteropServices::GCHandle> __declspec(property(get=__get_additionalValues, put=__set_additionalValues))  additionalValues;

constexpr void __set_additionalValues(::ArrayW<::System::Runtime::InteropServices::GCHandle> value) ;

constexpr ::ArrayW<::System::Runtime::InteropServices::GCHandle> __get_additionalValues() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 ::System::Runtime::InteropServices::GCHandle __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Runtime::InteropServices::GCHandle value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Runtime::InteropServices::GCHandle firstValue, ::ArrayW<::System::Runtime::InteropServices::GCHandle> additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Runtime::InteropServices::GCHandle> values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Runtime::InteropServices::GCHandle get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, ::System::Runtime::InteropServices::GCHandle value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetLength(int32_t size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<::System::Runtime::InteropServices::GCHandle> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
 ::ArrayW<TOther> ToArray(::System::Func_2<::System::Runtime::InteropServices::GCHandle,TOther> mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(::System::Runtime::InteropServices::GCHandle value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Append(::System::Runtime::InteropServices::GCHandle value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t AppendWithCapacity(::System::Runtime::InteropServices::GCHandle value, int32_t capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 void Append(::System::Collections::Generic::IEnumerable_1<::System::Runtime::InteropServices::GCHandle> values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(::System::Runtime::InteropServices::GCHandle value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtWithCapacity(int32_t index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAt(int32_t index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtByMovingTailWithCapacity(int32_t index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 bool RemoveByMovingTailWithCapacity(::System::Runtime::InteropServices::GCHandle value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(::System::Runtime::InteropServices::GCHandle value, ::System::Collections::Generic::IEqualityComparer_1<::System::Runtime::InteropServices::GCHandle> comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
 void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Runtime::InteropServices::GCHandle> other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::System::Runtime::InteropServices::GCHandle> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6752))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6752), inst: 3729 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1
struct CORDL_TYPE InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::UI::PointerModel>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::UI::PointerModel>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::UI::PointerModel>() const;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "::UnityEngine::InputSystem::UI::PointerModel", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<::UnityEngine::InputSystem::UI::PointerModel>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t length, ::UnityEngine::InputSystem::UI::PointerModel firstValue, ::ArrayW<::UnityEngine::InputSystem::UI::PointerModel> additionalValues) noexcept;


                    constexpr InlinedArray_1(InlinedArray_1 const&) = default;
                    constexpr InlinedArray_1(InlinedArray_1&&) = default;
                    constexpr InlinedArray_1& operator=(InlinedArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InlinedArray_1& operator=(InlinedArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InlinedArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

 ::UnityEngine::InputSystem::UI::PointerModel __declspec(property(get=__get_firstValue, put=__set_firstValue))  firstValue;

constexpr void __set_firstValue(::UnityEngine::InputSystem::UI::PointerModel value) ;

constexpr ::UnityEngine::InputSystem::UI::PointerModel __get_firstValue() const;

 ::ArrayW<::UnityEngine::InputSystem::UI::PointerModel> __declspec(property(get=__get_additionalValues, put=__set_additionalValues))  additionalValues;

constexpr void __set_additionalValues(::ArrayW<::UnityEngine::InputSystem::UI::PointerModel> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::UI::PointerModel> __get_additionalValues() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 ::UnityEngine::InputSystem::UI::PointerModel __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::UI::PointerModel value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::UI::PointerModel firstValue, ::ArrayW<::UnityEngine::InputSystem::UI::PointerModel> additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::UI::PointerModel> values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::UI::PointerModel get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, ::UnityEngine::InputSystem::UI::PointerModel value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetLength(int32_t size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<::UnityEngine::InputSystem::UI::PointerModel> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
 ::ArrayW<TOther> ToArray(::System::Func_2<::UnityEngine::InputSystem::UI::PointerModel,TOther> mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(::UnityEngine::InputSystem::UI::PointerModel value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Append(::UnityEngine::InputSystem::UI::PointerModel value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t AppendWithCapacity(::UnityEngine::InputSystem::UI::PointerModel value, int32_t capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 void Append(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::UI::PointerModel> values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(::UnityEngine::InputSystem::UI::PointerModel value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtWithCapacity(int32_t index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAt(int32_t index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtByMovingTailWithCapacity(int32_t index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 bool RemoveByMovingTailWithCapacity(::UnityEngine::InputSystem::UI::PointerModel value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(::UnityEngine::InputSystem::UI::PointerModel value, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::UI::PointerModel> comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
 void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::UI::PointerModel> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6752)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6752), inst: 3731 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1
struct CORDL_TYPE InlinedArray_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout>() const;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t length, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout firstValue, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> additionalValues) noexcept;


                    constexpr InlinedArray_1(InlinedArray_1 const&) = default;
                    constexpr InlinedArray_1(InlinedArray_1&&) = default;
                    constexpr InlinedArray_1& operator=(InlinedArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InlinedArray_1& operator=(InlinedArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InlinedArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout __declspec(property(get=__get_firstValue, put=__set_firstValue))  firstValue;

constexpr void __set_firstValue(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout __get_firstValue() const;

 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> __declspec(property(get=__get_additionalValues, put=__set_additionalValues))  additionalValues;

constexpr void __set_additionalValues(::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> __get_additionalValues() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout firstValue, ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, ::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetLength(int32_t size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
 ::ArrayW<TOther> ToArray(::System::Func_2<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout,TOther> mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Append(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t AppendWithCapacity(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout value, int32_t capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 void Append(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtWithCapacity(int32_t index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAt(int32_t index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtByMovingTailWithCapacity(int32_t index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 bool RemoveByMovingTailWithCapacity(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout value, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
 void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputManager__StateChangeMonitorTimeout> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6752)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6752), inst: 3732 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1
struct CORDL_TYPE InlinedArray_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection>() const;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t length, ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection firstValue, ::ArrayW<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> additionalValues) noexcept;


                    constexpr InlinedArray_1(InlinedArray_1 const&) = default;
                    constexpr InlinedArray_1(InlinedArray_1&&) = default;
                    constexpr InlinedArray_1& operator=(InlinedArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InlinedArray_1& operator=(InlinedArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InlinedArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

 ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection __declspec(property(get=__get_firstValue, put=__set_firstValue))  firstValue;

constexpr void __set_firstValue(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection value) ;

constexpr ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection __get_firstValue() const;

 ::ArrayW<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> __declspec(property(get=__get_additionalValues, put=__set_additionalValues))  additionalValues;

constexpr void __set_additionalValues(::ArrayW<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> __get_additionalValues() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection firstValue, ::ArrayW<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, ::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetLength(int32_t size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
 ::ArrayW<TOther> ToArray(::System::Func_2<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection,TOther> mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Append(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t AppendWithCapacity(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection value, int32_t capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 void Append(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtWithCapacity(int32_t index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAt(int32_t index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtByMovingTailWithCapacity(int32_t index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 bool RemoveByMovingTailWithCapacity(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection value, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
 void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Users::____UnityEngine__InputSystem__Users__InputUser__OngoingAccountSelection> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::InlinedArray`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6752))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6752), inst: 3733 })
// CS Name: UnityEngine.InputSystem.Utilities.InlinedArray`1
struct CORDL_TYPE InlinedArray_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>() const;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstValue", ty: "::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo", modifiers: "", def_value: None }, CppParam { name: "additionalValues", ty: "::ArrayW<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo>", modifiers: "", def_value: None }]
constexpr InlinedArray_1(int32_t length, ::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo firstValue, ::ArrayW<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> additionalValues) noexcept;


                    constexpr InlinedArray_1(InlinedArray_1 const&) = default;
                    constexpr InlinedArray_1(InlinedArray_1&&) = default;
                    constexpr InlinedArray_1& operator=(InlinedArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InlinedArray_1& operator=(InlinedArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InlinedArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

 ::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo __declspec(property(get=__get_firstValue, put=__set_firstValue))  firstValue;

constexpr void __set_firstValue(::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo value) ;

constexpr ::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo __get_firstValue() const;

 ::ArrayW<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> __declspec(property(get=__get_additionalValues, put=__set_additionalValues))  additionalValues;

constexpr void __set_additionalValues(::ArrayW<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> __get_additionalValues() const;


// Properties

 int32_t __declspec(property(get=get_Capacity))  Capacity;

 ::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

/// @brief Method get_Capacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Capacity() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo firstValue, ::ArrayW<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> additionalValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> values) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, ::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method ClearWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClearWithCapacity() ;

/// @brief Method Clone addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> Clone() ;

/// @brief Method SetLength addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetLength(int32_t size) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> ToArray() ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TOther>
 ::ArrayW<TOther> ToArray(::System::Func_2<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo,TOther> mapFunction) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t IndexOf(::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo value) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Append(::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo value) ;

/// @brief Method AppendWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t AppendWithCapacity(::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo value, int32_t capacityIncrement) ;

/// @brief Method AssignWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void AssignWithCapacity(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> values) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual false final false
 void Append(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> values) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo value) ;

/// @brief Method RemoveAtWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtWithCapacity(int32_t index) ;

/// @brief Method RemoveAt addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAt(int32_t index) ;

/// @brief Method RemoveAtByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveAtByMovingTailWithCapacity(int32_t index) ;

/// @brief Method RemoveByMovingTailWithCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
 bool RemoveByMovingTailWithCapacity(::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo value) ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Contains(::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo value, ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> comparer) ;

/// @brief Method Merge addr 0x0 size 0xffffffffffffffff virtual false final false
 void Merge(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> other) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::OnScreen::____UnityEngine__InputSystem__OnScreen__OnScreenControl__OnScreenDeviceInfo> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::InlinedArray_1, "UnityEngine.InputSystem.Utilities", "InlinedArray`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::Utilities::____UnityEngine__InputSystem__Utilities__InlinedArray_1__Enumerator, "UnityEngine.InputSystem.Utilities", "InlinedArray`1/Enumerator");
