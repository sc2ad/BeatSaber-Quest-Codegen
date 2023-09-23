#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class IEnumerable;
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
class IEnumerator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements::UIR {
struct DrawBufferRange;
}
namespace UnityEngine::UIElements::UIR {
struct GfxUpdateBufferRange;
}
namespace UnityEngine::UIElements::UIR {
struct Transform3x4;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine {
struct Vector4;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace Unity::Collections {
template<typename T>
struct Unity__Collections__NativeSlice_1__Enumerator;
}
namespace Unity::Collections {
template<>
struct NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange>;
}
namespace Unity::Collections {
template<>
struct NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>;
}
namespace Unity::Collections {
template<>
struct NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4>;
}
namespace Unity::Collections {
template<>
struct NativeSlice_1<UnityEngine::UIElements::Vertex>;
}
namespace Unity::Collections {
template<>
struct NativeSlice_1<UnityEngine::Vector4>;
}
namespace Unity::Collections {
template<>
struct NativeSlice_1<uint16_t>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::UIElements::UIR::DrawBufferRange>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::UIElements::UIR::Transform3x4>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::UIElements::Vertex>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::Vector4>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeSlice_1__Enumerator<uint16_t>;
}
// Type: ::Enumerator
// Type: Unity.Collections::NativeSlice`1
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9935))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9935), inst: 719 })
// CS Name: Unity.Collections.NativeSlice`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::UIElements::UIR::DrawBufferRange> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::DrawBufferRange>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::DrawBufferRange>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity__Collections__NativeSlice_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity__Collections__NativeSlice_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeSlice_1__Enumerator& operator=(Unity__Collections__NativeSlice_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeSlice_1__Enumerator& operator=(Unity__Collections__NativeSlice_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeSlice_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange> value) ;

constexpr Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::UIElements::UIR::DrawBufferRange __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::UIElements::UIR::DrawBufferRange get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9935)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9935), inst: 720 })
// CS Name: Unity.Collections.NativeSlice`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity__Collections__NativeSlice_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity__Collections__NativeSlice_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeSlice_1__Enumerator& operator=(Unity__Collections__NativeSlice_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeSlice_1__Enumerator& operator=(Unity__Collections__NativeSlice_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeSlice_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> value) ;

constexpr Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::UIElements::UIR::GfxUpdateBufferRange __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::UIElements::UIR::GfxUpdateBufferRange get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9935)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9935), inst: 727 })
// CS Name: Unity.Collections.NativeSlice`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::UIElements::UIR::Transform3x4> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::Transform3x4>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::Transform3x4>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity__Collections__NativeSlice_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity__Collections__NativeSlice_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeSlice_1__Enumerator& operator=(Unity__Collections__NativeSlice_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeSlice_1__Enumerator& operator=(Unity__Collections__NativeSlice_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeSlice_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> value) ;

constexpr Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::UIElements::UIR::Transform3x4 __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::UIElements::UIR::Transform3x4 get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9935))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9935), inst: 728 })
// CS Name: Unity.Collections.NativeSlice`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeSlice_1__Enumerator<uint16_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<uint16_t>
constexpr operator  System::Collections::Generic::IEnumerator_1<uint16_t>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity::Collections::NativeSlice_1<uint16_t> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity__Collections__NativeSlice_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity__Collections__NativeSlice_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeSlice_1__Enumerator& operator=(Unity__Collections__NativeSlice_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeSlice_1__Enumerator& operator=(Unity__Collections__NativeSlice_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeSlice_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeSlice_1<uint16_t> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeSlice_1<uint16_t> value) ;

constexpr Unity::Collections::NativeSlice_1<uint16_t> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 uint16_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeSlice_1<uint16_t>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 uint16_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9935)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9935), inst: 731 })
// CS Name: Unity.Collections.NativeSlice`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::Vector4> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Vector4>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Vector4>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeSlice_1<UnityEngine::Vector4>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity::Collections::NativeSlice_1<UnityEngine::Vector4> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity__Collections__NativeSlice_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity__Collections__NativeSlice_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeSlice_1__Enumerator& operator=(Unity__Collections__NativeSlice_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeSlice_1__Enumerator& operator=(Unity__Collections__NativeSlice_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeSlice_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeSlice_1<UnityEngine::Vector4> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeSlice_1<UnityEngine::Vector4> value) ;

constexpr Unity::Collections::NativeSlice_1<UnityEngine::Vector4> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::Vector4 __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeSlice_1<UnityEngine::Vector4>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Vector4 get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9935)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9935), inst: 732 })
// CS Name: Unity.Collections.NativeSlice`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::UIElements::Vertex> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::Vertex>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::Vertex>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity__Collections__NativeSlice_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeSlice_1__Enumerator(Unity__Collections__NativeSlice_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeSlice_1__Enumerator& operator=(Unity__Collections__NativeSlice_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeSlice_1__Enumerator& operator=(Unity__Collections__NativeSlice_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeSlice_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> value) ;

constexpr Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::UIElements::Vertex __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::UIElements::Vertex get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeSlice`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9936))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9936), inst: 719 })
// CS Name: Unity.Collections.NativeSlice`1
struct CORDL_TYPE NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::UIElements::UIR::DrawBufferRange>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UIR::DrawBufferRange>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UIR::DrawBufferRange>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Stride", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeSlice_1(void* m_Buffer, int32_t m_Stride, int32_t m_Length) noexcept;


                    constexpr NativeSlice_1(NativeSlice_1 const&) = default;
                    constexpr NativeSlice_1(NativeSlice_1&&) = default;
                    constexpr NativeSlice_1& operator=(NativeSlice_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeSlice_1& operator=(NativeSlice_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeSlice_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Stride, put=__set_m_Stride))  m_Stride;

constexpr void __set_m_Stride(int32_t value) ;

constexpr int32_t __get_m_Stride() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 UnityEngine::UIElements::UIR::DrawBufferRange __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Stride))  Stride;

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange> slice, int32_t start, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> array) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange> op_Implicit_Unity__Collections__NativeSlice_1_UnityEngine__UIElements__UIR__DrawBufferRange_(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> array, int32_t start, int32_t length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UIR::DrawBufferRange get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::UIElements::UIR::DrawBufferRange value) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange> slice) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::ArrayW<UnityEngine::UIElements::UIR::DrawBufferRange> array) ;

/// @brief Method get_Stride addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Stride() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::UIElements::UIR::DrawBufferRange> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::DrawBufferRange> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Inequality(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange> left, Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::DrawBufferRange> right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeSlice`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9936))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9936), inst: 720 })
// CS Name: Unity.Collections.NativeSlice`1
struct CORDL_TYPE NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Stride", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeSlice_1(void* m_Buffer, int32_t m_Stride, int32_t m_Length) noexcept;


                    constexpr NativeSlice_1(NativeSlice_1 const&) = default;
                    constexpr NativeSlice_1(NativeSlice_1&&) = default;
                    constexpr NativeSlice_1& operator=(NativeSlice_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeSlice_1& operator=(NativeSlice_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeSlice_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Stride, put=__set_m_Stride))  m_Stride;

constexpr void __set_m_Stride(int32_t value) ;

constexpr int32_t __get_m_Stride() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 UnityEngine::UIElements::UIR::GfxUpdateBufferRange __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Stride))  Stride;

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> slice, int32_t start, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> array) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> op_Implicit_Unity__Collections__NativeSlice_1_UnityEngine__UIElements__UIR__GfxUpdateBufferRange_(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> array, int32_t start, int32_t length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UIR::GfxUpdateBufferRange get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::UIElements::UIR::GfxUpdateBufferRange value) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> slice) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::ArrayW<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> array) ;

/// @brief Method get_Stride addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Stride() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Inequality(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> left, Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeSlice`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9936))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9936), inst: 727 })
// CS Name: Unity.Collections.NativeSlice`1
struct CORDL_TYPE NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::UIElements::UIR::Transform3x4>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UIR::Transform3x4>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UIR::Transform3x4>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Stride", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeSlice_1(void* m_Buffer, int32_t m_Stride, int32_t m_Length) noexcept;


                    constexpr NativeSlice_1(NativeSlice_1 const&) = default;
                    constexpr NativeSlice_1(NativeSlice_1&&) = default;
                    constexpr NativeSlice_1& operator=(NativeSlice_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeSlice_1& operator=(NativeSlice_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeSlice_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Stride, put=__set_m_Stride))  m_Stride;

constexpr void __set_m_Stride(int32_t value) ;

constexpr int32_t __get_m_Stride() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 UnityEngine::UIElements::UIR::Transform3x4 __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Stride))  Stride;

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> slice, int32_t start, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> array) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> op_Implicit_Unity__Collections__NativeSlice_1_UnityEngine__UIElements__UIR__Transform3x4_(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> array, int32_t start, int32_t length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UIR::Transform3x4 get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::UIElements::UIR::Transform3x4 value) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> slice) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::ArrayW<UnityEngine::UIElements::UIR::Transform3x4> array) ;

/// @brief Method get_Stride addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Stride() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::UIElements::UIR::Transform3x4> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::Transform3x4> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Inequality(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> left, Unity::Collections::NativeSlice_1<UnityEngine::UIElements::UIR::Transform3x4> right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeSlice`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9936))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9936), inst: 728 })
// CS Name: Unity.Collections.NativeSlice`1
struct CORDL_TYPE NativeSlice_1<uint16_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeSlice_1__Enumerator<uint16_t>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<uint16_t>
constexpr operator  System::Collections::Generic::IEnumerable_1<uint16_t>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeSlice_1<uint16_t>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeSlice_1<uint16_t>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Stride", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeSlice_1(void* m_Buffer, int32_t m_Stride, int32_t m_Length) noexcept;


                    constexpr NativeSlice_1(NativeSlice_1 const&) = default;
                    constexpr NativeSlice_1(NativeSlice_1&&) = default;
                    constexpr NativeSlice_1& operator=(NativeSlice_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeSlice_1& operator=(NativeSlice_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeSlice_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Stride, put=__set_m_Stride))  m_Stride;

constexpr void __set_m_Stride(int32_t value) ;

constexpr int32_t __get_m_Stride() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 uint16_t __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Stride))  Stride;

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeSlice_1<uint16_t> slice, int32_t start, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeArray_1<uint16_t> array) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static Unity::Collections::NativeSlice_1<uint16_t> op_Implicit_Unity__Collections__NativeSlice_1_uint16_t_(Unity::Collections::NativeArray_1<uint16_t> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeArray_1<uint16_t> array, int32_t start, int32_t length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 uint16_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, uint16_t value) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeSlice_1<uint16_t> slice) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::ArrayW<uint16_t> array) ;

/// @brief Method get_Stride addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Stride() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeSlice_1__Enumerator<uint16_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<uint16_t> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeSlice_1<uint16_t> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Inequality(Unity::Collections::NativeSlice_1<uint16_t> left, Unity::Collections::NativeSlice_1<uint16_t> right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeSlice`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9936)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9936), inst: 731 })
// CS Name: Unity.Collections.NativeSlice`1
struct CORDL_TYPE NativeSlice_1<UnityEngine::Vector4> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::Vector4>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Vector4>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Vector4>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeSlice_1<UnityEngine::Vector4>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeSlice_1<UnityEngine::Vector4>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Stride", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeSlice_1(void* m_Buffer, int32_t m_Stride, int32_t m_Length) noexcept;


                    constexpr NativeSlice_1(NativeSlice_1 const&) = default;
                    constexpr NativeSlice_1(NativeSlice_1&&) = default;
                    constexpr NativeSlice_1& operator=(NativeSlice_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeSlice_1& operator=(NativeSlice_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeSlice_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Stride, put=__set_m_Stride))  m_Stride;

constexpr void __set_m_Stride(int32_t value) ;

constexpr int32_t __get_m_Stride() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 UnityEngine::Vector4 __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Stride))  Stride;

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeSlice_1<UnityEngine::Vector4> slice, int32_t start, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeArray_1<UnityEngine::Vector4> array) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static Unity::Collections::NativeSlice_1<UnityEngine::Vector4> op_Implicit_Unity__Collections__NativeSlice_1_UnityEngine__Vector4_(Unity::Collections::NativeArray_1<UnityEngine::Vector4> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeArray_1<UnityEngine::Vector4> array, int32_t start, int32_t length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector4 get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::Vector4 value) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeSlice_1<UnityEngine::Vector4> slice) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::ArrayW<UnityEngine::Vector4> array) ;

/// @brief Method get_Stride addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Stride() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::Vector4> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Vector4> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeSlice_1<UnityEngine::Vector4> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Inequality(Unity::Collections::NativeSlice_1<UnityEngine::Vector4> left, Unity::Collections::NativeSlice_1<UnityEngine::Vector4> right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeSlice`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9936))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9936), inst: 732 })
// CS Name: Unity.Collections.NativeSlice`1
struct CORDL_TYPE NativeSlice_1<UnityEngine::UIElements::Vertex> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::UIElements::Vertex>;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::Vertex>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::Vertex>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Stride", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NativeSlice_1(void* m_Buffer, int32_t m_Stride, int32_t m_Length) noexcept;


                    constexpr NativeSlice_1(NativeSlice_1 const&) = default;
                    constexpr NativeSlice_1(NativeSlice_1&&) = default;
                    constexpr NativeSlice_1& operator=(NativeSlice_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeSlice_1& operator=(NativeSlice_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeSlice_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Stride, put=__set_m_Stride))  m_Stride;

constexpr void __set_m_Stride(int32_t value) ;

constexpr int32_t __get_m_Stride() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 UnityEngine::UIElements::Vertex __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Stride))  Stride;

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> slice, int32_t start, int32_t length) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> array) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> op_Implicit_Unity__Collections__NativeSlice_1_UnityEngine__UIElements__Vertex_(Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> array, int32_t start, int32_t length) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::Vertex get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::UIElements::Vertex value) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> slice) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(::ArrayW<UnityEngine::UIElements::Vertex> array) ;

/// @brief Method get_Stride addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Stride() ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeSlice_1__Enumerator<UnityEngine::UIElements::Vertex> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::Vertex> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static bool op_Inequality(Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> left, Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(Unity::Collections::NativeSlice_1, "Unity.Collections", "NativeSlice`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(Unity::Collections::Unity__Collections__NativeSlice_1__Enumerator, "Unity.Collections", "NativeSlice`1/Enumerator");
