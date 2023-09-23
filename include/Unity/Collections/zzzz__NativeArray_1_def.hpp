#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Unity::Collections {
struct Allocator;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__SpaceQueryResult;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Vector2f;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Vector3f;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Vector4f;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Vector4s;
}
namespace UnityEngine {
struct BoneWeight1;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightDataGI;
}
namespace UnityEngine {
struct ModifiableContactPair;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine::Rendering {
struct BatchVisibility;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine::Tilemaps {
struct TileData;
}
namespace UnityEngine::UIElements {
struct TextVertex;
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
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct Unity__Collections__NativeArray_1__Enumerator;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::BoneWeight1>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::BoneWeight>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::Color32>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::Color>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::ModifiableContactPair>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::Plane>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::Rendering::BatchVisibility>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::Tilemaps::TileData>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::UIElements::TextVertex>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::UIElements::Vertex>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::Vector2>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::Vector3>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::Vector3Int>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<UnityEngine::Vector4>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<int16_t>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<int32_t>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<uint16_t>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<uint32_t>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<uint64_t>;
}
namespace Unity::Collections {
template<>
struct NativeArray_1<uint8_t>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::BoneWeight1>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::BoneWeight>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Color32>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Color>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Experimental::GlobalIllumination::LightDataGI>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::ModifiableContactPair>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Plane>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Rendering::BatchVisibility>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Rendering::VertexAttributeDescriptor>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Tilemaps::TileData>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::TextVertex>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::UIR::DrawBufferRange>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::UIR::Transform3x4>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::Vertex>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Vector2>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Vector3>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Vector3Int>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Vector4>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<int16_t>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<int32_t>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<uint16_t>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<uint32_t>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<uint64_t>;
}
namespace Unity::Collections {
template<>
struct Unity__Collections__NativeArray_1__Enumerator<uint8_t>;
}
// Type: ::Enumerator
// Type: Unity.Collections::NativeArray`1
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 92 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<int32_t>
constexpr operator  System::Collections::Generic::IEnumerator_1<int32_t>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<int32_t> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<int32_t> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<int32_t> value) ;

constexpr Unity::Collections::NativeArray_1<int32_t> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 int32_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<int32_t>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9940))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 280 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Color> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Color>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Color>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::Color>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::Color> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::Color> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::Color> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Color> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::Color>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Color get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 389 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<uint64_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<uint64_t>
constexpr operator  System::Collections::Generic::IEnumerator_1<uint64_t>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<uint64_t> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<uint64_t> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<uint64_t> value) ;

constexpr Unity::Collections::NativeArray_1<uint64_t> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 uint64_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<uint64_t>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 uint64_t get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9940))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 393 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Vector2> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Vector2>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Vector2>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::Vector2> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::Vector2> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::Vector2> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Vector2> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::Vector2 __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::Vector2>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Vector2 get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 394 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Vector3> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Vector3>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Vector3>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::Vector3> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::Vector3> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::Vector3> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Vector3> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::Vector3>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Vector3 get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 714 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Rendering::BatchVisibility> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Rendering::BatchVisibility>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Rendering::BatchVisibility>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::Rendering::BatchVisibility __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Rendering::BatchVisibility get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 715 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::BoneWeight> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::BoneWeight>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::BoneWeight>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::BoneWeight>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::BoneWeight> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::BoneWeight> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::BoneWeight __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::BoneWeight>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::BoneWeight get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 716 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::BoneWeight1> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::BoneWeight1>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::BoneWeight1>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::BoneWeight1 __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::BoneWeight1 get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9940))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 717 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<uint8_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<uint8_t>
constexpr operator  System::Collections::Generic::IEnumerator_1<uint8_t>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<uint8_t> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<uint8_t> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<uint8_t> value) ;

constexpr Unity::Collections::NativeArray_1<uint8_t> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 uint8_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<uint8_t>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 uint8_t get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 718 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Color32> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Color32>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Color32>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::Color32> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::Color32> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::Color32> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Color32> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::Color32 __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::Color32>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Color32 get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9940))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 719 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::UIR::DrawBufferRange> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::DrawBufferRange>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::DrawBufferRange>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::UIElements::UIR::DrawBufferRange __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange>> array) ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9940))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 720 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::UIElements::UIR::GfxUpdateBufferRange __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>> array) ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 721 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<int16_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<int16_t>
constexpr operator  System::Collections::Generic::IEnumerator_1<int16_t>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<int16_t> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<int16_t> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<int16_t> value) ;

constexpr Unity::Collections::NativeArray_1<int16_t> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 int16_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<int16_t>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 int16_t get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9940))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 722 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Experimental::GlobalIllumination::LightDataGI> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::Experimental::GlobalIllumination::LightDataGI __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Experimental::GlobalIllumination::LightDataGI get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 723 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::ModifiableContactPair> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::ModifiableContactPair>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::ModifiableContactPair>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::ModifiableContactPair __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::ModifiableContactPair get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 724 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Plane> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Plane>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Plane>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::Plane>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::Plane> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::Plane> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::Plane> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Plane> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::Plane __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::Plane>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Plane get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9940))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 725 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::TextVertex> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::TextVertex>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::TextVertex>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::UIElements::TextVertex __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::UIElements::TextVertex get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9940))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 726 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Tilemaps::TileData> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Tilemaps::TileData>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Tilemaps::TileData>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::Tilemaps::TileData __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Tilemaps::TileData get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9940))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 727 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::UIR::Transform3x4> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::Transform3x4>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::Transform3x4>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::UIElements::UIR::Transform3x4 __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4>> array) ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9940))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 728 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<uint16_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<uint16_t>
constexpr operator  System::Collections::Generic::IEnumerator_1<uint16_t>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<uint16_t> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<uint16_t> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<uint16_t> value) ;

constexpr Unity::Collections::NativeArray_1<uint16_t> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 uint16_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<uint16_t>> array) ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 729 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<uint32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<uint32_t>
constexpr operator  System::Collections::Generic::IEnumerator_1<uint32_t>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<uint32_t> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<uint32_t> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<uint32_t> value) ;

constexpr Unity::Collections::NativeArray_1<uint32_t> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 uint32_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<uint32_t>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 uint32_t get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9940))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 730 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Vector3Int> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Vector3Int>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Vector3Int>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::Vector3Int>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::Vector3Int __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::Vector3Int>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Vector3Int get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 731 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Vector4> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Vector4>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Vector4>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::Vector4>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::Vector4> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::Vector4> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::Vector4> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Vector4> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::Vector4 __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::Vector4>> array) ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 732 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::Vertex> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::Vertex>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::Vertex>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::UIElements::Vertex __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>> array) ;

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
// Type: ::Enumerator
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 733 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Rendering::VertexAttributeDescriptor> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Rendering::VertexAttributeDescriptor>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::Rendering::VertexAttributeDescriptor>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::Rendering::VertexAttributeDescriptor __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Rendering::VertexAttributeDescriptor get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 734 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>
constexpr operator  System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> value) ;

constexpr Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 735 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f>
constexpr operator  System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> value) ;

constexpr Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9940))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 736 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f>
constexpr operator  System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> value) ;

constexpr Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 737 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f>
constexpr operator  System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> value) ;

constexpr Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f get_Current() ;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9940)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9940), inst: 738 })
// CS Name: Unity.Collections.NativeArray`1::Enumerator
struct CORDL_TYPE Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s>
constexpr operator  System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Array", ty: "Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Unity__Collections__NativeArray_1__Enumerator(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> m_Array, int32_t m_Index) noexcept;


                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator const&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator(Unity__Collections__NativeArray_1__Enumerator&&) = default;
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Unity__Collections__NativeArray_1__Enumerator& operator=(Unity__Collections__NativeArray_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Unity__Collections__NativeArray_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> value) ;

constexpr Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> __get_m_Array() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s>> array) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 92 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<int32_t>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<int32_t>
constexpr operator  System::Collections::Generic::IEnumerable_1<int32_t>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<int32_t>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<int32_t>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 int32_t __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<int32_t>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, int32_t value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<int32_t> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<int32_t> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<int32_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<int32_t> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<int32_t> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<int32_t> src, Unity::Collections::NativeArray_1<int32_t> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<int32_t> src, Unity::Collections::NativeArray_1<int32_t> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<int32_t> src, ::ArrayW<int32_t> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<int32_t> src, int32_t srcIndex, Unity::Collections::NativeArray_1<int32_t> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<int32_t> src, int32_t srcIndex, ::ArrayW<int32_t> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 280 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::Color> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Color>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Color>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Color>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Color>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Color>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::Color __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::Color>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Color get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::Color value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::Color> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::Color> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Color> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Color> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::Color> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Color> src, Unity::Collections::NativeArray_1<UnityEngine::Color> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Color> src, Unity::Collections::NativeArray_1<UnityEngine::Color> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Color> src, ::ArrayW<UnityEngine::Color> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Color> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::Color> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Color> src, int32_t srcIndex, ::ArrayW<UnityEngine::Color> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 389 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<uint64_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<uint64_t>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<uint64_t>
constexpr operator  System::Collections::Generic::IEnumerable_1<uint64_t>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<uint64_t>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<uint64_t>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 uint64_t __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<uint64_t>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 uint64_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, uint64_t value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<uint64_t> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<uint64_t> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<uint64_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<uint64_t> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<uint64_t> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint64_t> src, Unity::Collections::NativeArray_1<uint64_t> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint64_t> src, Unity::Collections::NativeArray_1<uint64_t> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint64_t> src, ::ArrayW<uint64_t> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint64_t> src, int32_t srcIndex, Unity::Collections::NativeArray_1<uint64_t> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint64_t> src, int32_t srcIndex, ::ArrayW<uint64_t> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 393 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::Vector2> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Vector2>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Vector2>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Vector2>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Vector2>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Vector2>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::Vector2 __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::Vector2>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector2 get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::Vector2 value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::Vector2> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::Vector2> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Vector2> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Vector2> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::Vector2> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector2> src, Unity::Collections::NativeArray_1<UnityEngine::Vector2> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector2> src, Unity::Collections::NativeArray_1<UnityEngine::Vector2> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector2> src, ::ArrayW<UnityEngine::Vector2> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector2> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::Vector2> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector2> src, int32_t srcIndex, ::ArrayW<UnityEngine::Vector2> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9941)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 394 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::Vector3> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Vector3>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Vector3>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Vector3>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Vector3>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Vector3>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::Vector3 __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::Vector3>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector3 get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::Vector3 value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::Vector3> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::Vector3> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Vector3> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Vector3> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::Vector3> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector3> src, Unity::Collections::NativeArray_1<UnityEngine::Vector3> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector3> src, Unity::Collections::NativeArray_1<UnityEngine::Vector3> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector3> src, ::ArrayW<UnityEngine::Vector3> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector3> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::Vector3> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector3> src, int32_t srcIndex, ::ArrayW<UnityEngine::Vector3> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9941)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 714 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::Rendering::BatchVisibility> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Rendering::BatchVisibility>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Rendering::BatchVisibility>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Rendering::BatchVisibility>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::Rendering::BatchVisibility __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Rendering::BatchVisibility get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::Rendering::BatchVisibility value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::Rendering::BatchVisibility> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Rendering::BatchVisibility> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Rendering::BatchVisibility> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> src, Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> src, Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> src, ::ArrayW<UnityEngine::Rendering::BatchVisibility> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> src, int32_t srcIndex, ::ArrayW<UnityEngine::Rendering::BatchVisibility> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9941)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 715 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::BoneWeight> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::BoneWeight>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::BoneWeight>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::BoneWeight>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::BoneWeight>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::BoneWeight>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::BoneWeight __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::BoneWeight>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::BoneWeight get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::BoneWeight value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::BoneWeight> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::BoneWeight> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::BoneWeight> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight> src, Unity::Collections::NativeArray_1<UnityEngine::BoneWeight> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight> src, Unity::Collections::NativeArray_1<UnityEngine::BoneWeight> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight> src, ::ArrayW<UnityEngine::BoneWeight> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::BoneWeight> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight> src, int32_t srcIndex, ::ArrayW<UnityEngine::BoneWeight> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 716 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::BoneWeight1> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::BoneWeight1>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::BoneWeight1>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::BoneWeight1>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::BoneWeight1 __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::BoneWeight1 get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::BoneWeight1 value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::BoneWeight1> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::BoneWeight1> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::BoneWeight1> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> src, Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> src, Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> src, ::ArrayW<UnityEngine::BoneWeight1> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> src, int32_t srcIndex, ::ArrayW<UnityEngine::BoneWeight1> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9941)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 717 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<uint8_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<uint8_t>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<uint8_t>
constexpr operator  System::Collections::Generic::IEnumerable_1<uint8_t>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<uint8_t>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<uint8_t>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 uint8_t __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<uint8_t>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 uint8_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, uint8_t value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<uint8_t> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<uint8_t> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<uint8_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<uint8_t> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<uint8_t> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint8_t> src, Unity::Collections::NativeArray_1<uint8_t> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint8_t> src, Unity::Collections::NativeArray_1<uint8_t> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint8_t> src, ::ArrayW<uint8_t> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint8_t> src, int32_t srcIndex, Unity::Collections::NativeArray_1<uint8_t> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint8_t> src, int32_t srcIndex, ::ArrayW<uint8_t> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 718 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::Color32> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Color32>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Color32>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Color32>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Color32>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Color32>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::Color32 __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::Color32>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Color32 get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::Color32 value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::Color32> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::Color32> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Color32> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Color32> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::Color32> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Color32> src, Unity::Collections::NativeArray_1<UnityEngine::Color32> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Color32> src, Unity::Collections::NativeArray_1<UnityEngine::Color32> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Color32> src, ::ArrayW<UnityEngine::Color32> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Color32> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::Color32> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Color32> src, int32_t srcIndex, ::ArrayW<UnityEngine::Color32> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9941)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 719 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::UIR::DrawBufferRange>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UIR::DrawBufferRange>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UIR::DrawBufferRange>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::UIElements::UIR::DrawBufferRange __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UIR::DrawBufferRange get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::UIElements::UIR::DrawBufferRange value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::UIElements::UIR::DrawBufferRange> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::UIR::DrawBufferRange> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::DrawBufferRange> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> src, Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> src, Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> src, ::ArrayW<UnityEngine::UIElements::UIR::DrawBufferRange> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::DrawBufferRange> src, int32_t srcIndex, ::ArrayW<UnityEngine::UIElements::UIR::DrawBufferRange> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9941)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 720 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::UIElements::UIR::GfxUpdateBufferRange __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UIR::GfxUpdateBufferRange get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::UIElements::UIR::GfxUpdateBufferRange value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> src, Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> src, Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> src, ::ArrayW<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> src, int32_t srcIndex, ::ArrayW<UnityEngine::UIElements::UIR::GfxUpdateBufferRange> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9941)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 721 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<int16_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<int16_t>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<int16_t>
constexpr operator  System::Collections::Generic::IEnumerable_1<int16_t>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<int16_t>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<int16_t>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 int16_t __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<int16_t>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 int16_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, int16_t value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<int16_t> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<int16_t> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<int16_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<int16_t> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<int16_t> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<int16_t> src, Unity::Collections::NativeArray_1<int16_t> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<int16_t> src, Unity::Collections::NativeArray_1<int16_t> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<int16_t> src, ::ArrayW<int16_t> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<int16_t> src, int32_t srcIndex, Unity::Collections::NativeArray_1<int16_t> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<int16_t> src, int32_t srcIndex, ::ArrayW<int16_t> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 722 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Experimental::GlobalIllumination::LightDataGI>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::Experimental::GlobalIllumination::LightDataGI __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Experimental::GlobalIllumination::LightDataGI get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::Experimental::GlobalIllumination::LightDataGI value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::Experimental::GlobalIllumination::LightDataGI> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Experimental::GlobalIllumination::LightDataGI> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> src, Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> src, Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> src, ::ArrayW<UnityEngine::Experimental::GlobalIllumination::LightDataGI> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> src, int32_t srcIndex, ::ArrayW<UnityEngine::Experimental::GlobalIllumination::LightDataGI> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9941)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 723 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::ModifiableContactPair> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::ModifiableContactPair>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::ModifiableContactPair>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::ModifiableContactPair>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::ModifiableContactPair __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ModifiableContactPair get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::ModifiableContactPair value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::ModifiableContactPair> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::ModifiableContactPair> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::ModifiableContactPair> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair> src, Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair> src, Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair> src, ::ArrayW<UnityEngine::ModifiableContactPair> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair> src, int32_t srcIndex, ::ArrayW<UnityEngine::ModifiableContactPair> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 724 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::Plane> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Plane>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Plane>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Plane>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Plane>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Plane>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::Plane __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::Plane>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Plane get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::Plane value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::Plane> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::Plane> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Plane> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Plane> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::Plane> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Plane> src, Unity::Collections::NativeArray_1<UnityEngine::Plane> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Plane> src, Unity::Collections::NativeArray_1<UnityEngine::Plane> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Plane> src, ::ArrayW<UnityEngine::Plane> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Plane> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::Plane> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Plane> src, int32_t srcIndex, ::ArrayW<UnityEngine::Plane> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9941)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 725 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::UIElements::TextVertex> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::TextVertex>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::TextVertex>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::TextVertex>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::UIElements::TextVertex __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::TextVertex get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::UIElements::TextVertex value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::UIElements::TextVertex> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::TextVertex> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::TextVertex> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> src, Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> src, Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> src, ::ArrayW<UnityEngine::UIElements::TextVertex> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> src, int32_t srcIndex, ::ArrayW<UnityEngine::UIElements::TextVertex> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 726 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::Tilemaps::TileData> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Tilemaps::TileData>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Tilemaps::TileData>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Tilemaps::TileData>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::Tilemaps::TileData __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Tilemaps::TileData get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::Tilemaps::TileData value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::Tilemaps::TileData> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Tilemaps::TileData> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Tilemaps::TileData> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData> src, Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData> src, Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData> src, ::ArrayW<UnityEngine::Tilemaps::TileData> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Tilemaps::TileData> src, int32_t srcIndex, ::ArrayW<UnityEngine::Tilemaps::TileData> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 727 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::UIR::Transform3x4>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UIR::Transform3x4>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UIR::Transform3x4>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::UIElements::UIR::Transform3x4 __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UIR::Transform3x4 get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::UIElements::UIR::Transform3x4 value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::UIElements::UIR::Transform3x4> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::UIR::Transform3x4> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UIR::Transform3x4> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> src, Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> src, Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> src, ::ArrayW<UnityEngine::UIElements::UIR::Transform3x4> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::UIR::Transform3x4> src, int32_t srcIndex, ::ArrayW<UnityEngine::UIElements::UIR::Transform3x4> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9941)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 728 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<uint16_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<uint16_t>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<uint16_t>
constexpr operator  System::Collections::Generic::IEnumerable_1<uint16_t>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<uint16_t>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<uint16_t>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 uint16_t __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<uint16_t>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 uint16_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, uint16_t value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<uint16_t> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<uint16_t> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<uint16_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<uint16_t> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<uint16_t> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint16_t> src, Unity::Collections::NativeArray_1<uint16_t> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint16_t> src, Unity::Collections::NativeArray_1<uint16_t> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint16_t> src, ::ArrayW<uint16_t> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint16_t> src, int32_t srcIndex, Unity::Collections::NativeArray_1<uint16_t> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint16_t> src, int32_t srcIndex, ::ArrayW<uint16_t> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 729 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<uint32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<uint32_t>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<uint32_t>
constexpr operator  System::Collections::Generic::IEnumerable_1<uint32_t>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<uint32_t>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<uint32_t>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 uint32_t __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<uint32_t>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 uint32_t get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, uint32_t value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<uint32_t> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<uint32_t> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<uint32_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<uint32_t> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<uint32_t> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint32_t> src, Unity::Collections::NativeArray_1<uint32_t> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint32_t> src, Unity::Collections::NativeArray_1<uint32_t> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint32_t> src, ::ArrayW<uint32_t> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint32_t> src, int32_t srcIndex, Unity::Collections::NativeArray_1<uint32_t> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<uint32_t> src, int32_t srcIndex, ::ArrayW<uint32_t> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9941)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 730 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::Vector3Int> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Vector3Int>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Vector3Int>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Vector3Int>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Vector3Int>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Vector3Int>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::Vector3Int __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::Vector3Int>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector3Int get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::Vector3Int value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::Vector3Int> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Vector3Int> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Vector3Int> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> src, Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> src, Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> src, ::ArrayW<UnityEngine::Vector3Int> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector3Int> src, int32_t srcIndex, ::ArrayW<UnityEngine::Vector3Int> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 731 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::Vector4> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Vector4>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Vector4>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Vector4>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Vector4>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Vector4>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::Vector4 __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::Vector4>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector4 get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::Vector4 value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::Vector4> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::Vector4> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Vector4> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Vector4> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::Vector4> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector4> src, Unity::Collections::NativeArray_1<UnityEngine::Vector4> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector4> src, Unity::Collections::NativeArray_1<UnityEngine::Vector4> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector4> src, ::ArrayW<UnityEngine::Vector4> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector4> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::Vector4> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Vector4> src, int32_t srcIndex, ::ArrayW<UnityEngine::Vector4> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9941)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 732 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::UIElements::Vertex> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::Vertex>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::Vertex>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::Vertex>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::UIElements::Vertex __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::Vertex get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::UIElements::Vertex value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::UIElements::Vertex> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::UIElements::Vertex> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::Vertex> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> src, Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> src, Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> src, ::ArrayW<UnityEngine::UIElements::Vertex> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> src, int32_t srcIndex, ::ArrayW<UnityEngine::UIElements::Vertex> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 733 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Rendering::VertexAttributeDescriptor>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Rendering::VertexAttributeDescriptor>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::Rendering::VertexAttributeDescriptor>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 UnityEngine::Rendering::VertexAttributeDescriptor __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Rendering::VertexAttributeDescriptor get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::Rendering::VertexAttributeDescriptor value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<UnityEngine::Rendering::VertexAttributeDescriptor> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::Rendering::VertexAttributeDescriptor> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> src, Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> src, Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> src, ::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> src, int32_t srcIndex, Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> src, int32_t srcIndex, ::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 734 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>
constexpr operator  System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> src, Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> src, Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> src, ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> src, int32_t srcIndex, Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> src, int32_t srcIndex, ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceQueryResult> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 735 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f>
constexpr operator  System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> src, Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> src, Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> src, ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> src, int32_t srcIndex, Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> src, int32_t srcIndex, ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector2f> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 736 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f>
constexpr operator  System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> src, Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> src, Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> src, ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> src, int32_t srcIndex, Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> src, int32_t srcIndex, ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector3f> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(9941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 737 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f>
constexpr operator  System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> src, Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> src, Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> src, ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> src, int32_t srcIndex, Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> src, int32_t srcIndex, ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4f> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
// Type: Unity.Collections::NativeArray`1
namespace Unity::Collections {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9941)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9941), inst: 738 })
// CS Name: Unity.Collections.NativeArray`1
struct CORDL_TYPE NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Enumerator = Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s>
constexpr operator  System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

/// @brief Convert operator to System::IEquatable_1<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s>>
constexpr operator  System::IEquatable_1<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s>>() const;

// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "Unity::Collections::Allocator", modifiers: "", def_value: None }]
constexpr NativeArray_1(void* m_Buffer, int32_t m_Length, Unity::Collections::Allocator m_AllocatorLabel) noexcept;


                    constexpr NativeArray_1(NativeArray_1 const&) = default;
                    constexpr NativeArray_1(NativeArray_1&&) = default;
                    constexpr NativeArray_1& operator=(NativeArray_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NativeArray_1& operator=(NativeArray_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NativeArray_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(void* value) ;

constexpr void* __get_m_Buffer() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 Unity::Collections::Allocator __declspec(property(get=__get_m_AllocatorLabel, put=__set_m_AllocatorLabel))  m_AllocatorLabel;

constexpr void __set_m_AllocatorLabel(Unity::Collections::Allocator value) ;

constexpr Unity::Collections::Allocator __get_m_AllocatorLabel() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;

 GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s __declspec(property(get=get_Item, put=set_Item))  Item;

 bool __declspec(property(get=get_IsCreated))  IsCreated;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t length, Unity::Collections::Allocator allocator, Unity::Collections::NativeArrayOptions options) ;

/// @brief Method Allocate addr 0x0 size 0xffffffffffffffff virtual false final false
static void Allocate(int32_t length, Unity::Collections::Allocator allocator, ByRef<Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s>> array) ;

/// @brief Method get_Length addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Length() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s value) ;

/// @brief Method get_IsCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsCreated() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Jobs::JobHandle Dispose(Unity::Jobs::JobHandle inputDeps) ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> array) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> ToArray() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
 Unity::Collections::Unity__Collections__NativeArray_1__Enumerator<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> src, Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> dst) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> src, Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> src, ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> dst, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> src, int32_t srcIndex, Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> dst, int32_t dstIndex, int32_t length) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual false final false
static void Copy(Unity::Collections::NativeArray_1<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> src, int32_t srcIndex, ::ArrayW<GlobalNamespace::GlobalNamespace__OVRPlugin__Vector4s> dst, int32_t dstIndex, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(Unity::Collections::NativeArray_1, "Unity.Collections", "NativeArray`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(Unity::Collections::Unity__Collections__NativeArray_1__Enumerator, "Unity.Collections", "NativeArray`1/Enumerator");
