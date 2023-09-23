#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct OVRSpace;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace IntervalTree {
template<typename TKey,typename TValue>
struct RangeValuePair_2;
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
namespace System::Text::RegularExpressions {
struct System__Text__RegularExpressions__Regex__CachedCodeEntryKey;
}
namespace System {
struct TimeSpan;
}
namespace System {
template<typename T1>
struct ValueTuple_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
struct Int32Enum;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct NamedValue;
}
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
namespace UnityEngine::InputSystem::Utilities {
struct UnityEngine__InputSystem__Utilities__JsonParser__JsonValue;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace UnityEngine::ProBuilder {
struct IntVec3;
}
namespace UnityEngine::ProBuilder {
struct Triangle;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::TextCore {
struct GlyphRect;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
namespace UnityEngine::UI {
struct ColorBlock;
}
namespace UnityEngine::UI {
struct Navigation;
}
namespace UnityEngine::UI {
struct SpriteState;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct ManipulatorActivationFilter;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector4;
}
namespace Zenject {
struct BindingId;
}
namespace Zenject {
struct SignalSubscriptionId;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class GenericEqualityComparer_1;
}
namespace System::Collections::Generic {
template<::cordl_internals::il2cpp_reference_type T>
class GenericEqualityComparer_1<T>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<::cordl_internals::intptr_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<GlobalNamespace::OVRSpace>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<GlobalNamespace::SongPackMask>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<IntervalTree::RangeValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<System::DateTime>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<System::DateTimeOffset>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<System::Decimal>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<System::Guid>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<System::TimeSpan>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<System::ValueTuple_1<bool>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<Unity::Collections::NativeArray_1<uint16_t>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::BoneWeight>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::Color>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::InputSystem::InputBinding>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::InputSystem::Layouts::InputDeviceDescription>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::InputSystem::Utilities::NamedValue>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::InputSystem::Utilities::Substring>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::Matrix4x4>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::Playables::Playable>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::ProBuilder::Edge>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::ProBuilder::IntVec3>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::ProBuilder::Triangle>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::Quaternion>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::Rect>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::Rendering::VertexAttributeDescriptor>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::TextCore::GlyphRect>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::UI::ColorBlock>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::UI::Navigation>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::UI::SpriteState>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::UIElements::Background>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::UIElements::EasingFunction>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::UIElements::FontDefinition>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::UIElements::ManipulatorActivationFilter>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::UIElements::StylePropertyName>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::UIElements::TimeValue>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::Vector2>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::Vector3>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::Vector3Int>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<UnityEngine::Vector4>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<Zenject::BindingId>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<Zenject::SignalSubscriptionId>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<bool>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<char16_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<double_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<float_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<int16_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<int32_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<int64_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<int8_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<uint16_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<uint32_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<uint64_t>;
}
namespace System::Collections::Generic {
template<>
class GenericEqualityComparer_1<uint8_t>;
}
// Type: System.Collections.Generic::GenericEqualityComparer`1
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 2 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<T> : public System::Collections::Generic::EqualityComparer_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<T>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(T x, T y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(T obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<T> array, T value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<T> array, T value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 92 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<int32_t> : public System::Collections::Generic::EqualityComparer_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<int32_t>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(int32_t x, int32_t y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(int32_t obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<int32_t> array, int32_t value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<int32_t> array, int32_t value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 99 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<bool> : public System::Collections::Generic::EqualityComparer_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<bool>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(bool x, bool y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(bool obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<bool> array, bool value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<bool> array, bool value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 279 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<char16_t> : public System::Collections::Generic::EqualityComparer_1<char16_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<char16_t>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(char16_t x, char16_t y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(char16_t obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<char16_t> array, char16_t value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<char16_t> array, char16_t value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 280 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::Color> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::Color> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::Color>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::Color x, UnityEngine::Color y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::Color obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::Color> array, UnityEngine::Color value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::Color> array, UnityEngine::Color value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 315 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::InputSystem::LowLevel::InputEventPtr x, UnityEngine::InputSystem::LowLevel::InputEventPtr y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::InputSystem::LowLevel::InputEventPtr obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::InputSystem::LowLevel::InputEventPtr> array, UnityEngine::InputSystem::LowLevel::InputEventPtr value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::InputSystem::LowLevel::InputEventPtr> array, UnityEngine::InputSystem::LowLevel::InputEventPtr value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 318 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<::cordl_internals::intptr_t> : public System::Collections::Generic::EqualityComparer_1<::cordl_internals::intptr_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<::cordl_internals::intptr_t>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::cordl_internals::intptr_t x, ::cordl_internals::intptr_t y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(::cordl_internals::intptr_t obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<::cordl_internals::intptr_t> array, ::cordl_internals::intptr_t value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<::cordl_internals::intptr_t> array, ::cordl_internals::intptr_t value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 374 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<float_t> : public System::Collections::Generic::EqualityComparer_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<float_t>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(float_t x, float_t y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(float_t obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<float_t> array, float_t value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<float_t> array, float_t value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 389 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<uint64_t> : public System::Collections::Generic::EqualityComparer_1<uint64_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<uint64_t>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(uint64_t x, uint64_t y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(uint64_t obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<uint64_t> array, uint64_t value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<uint64_t> array, uint64_t value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 393 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::Vector2> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::Vector2> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::Vector2>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::Vector2 x, UnityEngine::Vector2 y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::Vector2 obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::Vector2> array, UnityEngine::Vector2 value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::Vector2> array, UnityEngine::Vector2 value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 394 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::Vector3> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::Vector3> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::Vector3>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::Vector3 x, UnityEngine::Vector3 y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::Vector3 obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::Vector3> array, UnityEngine::Vector3 value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::Vector3> array, UnityEngine::Vector3 value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 715 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::BoneWeight> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::BoneWeight> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::BoneWeight>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::BoneWeight x, UnityEngine::BoneWeight y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::BoneWeight obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::BoneWeight> array, UnityEngine::BoneWeight value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::BoneWeight> array, UnityEngine::BoneWeight value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 717 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<uint8_t> : public System::Collections::Generic::EqualityComparer_1<uint8_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<uint8_t>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(uint8_t x, uint8_t y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(uint8_t obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<uint8_t> array, uint8_t value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<uint8_t> array, uint8_t value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 721 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<int16_t> : public System::Collections::Generic::EqualityComparer_1<int16_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<int16_t>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(int16_t x, int16_t y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(int16_t obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<int16_t> array, int16_t value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<int16_t> array, int16_t value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 728 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<uint16_t> : public System::Collections::Generic::EqualityComparer_1<uint16_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<uint16_t>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(uint16_t x, uint16_t y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(uint16_t obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<uint16_t> array, uint16_t value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<uint16_t> array, uint16_t value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 729 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<uint32_t> : public System::Collections::Generic::EqualityComparer_1<uint32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<uint32_t>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(uint32_t x, uint32_t y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(uint32_t obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<uint32_t> array, uint32_t value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<uint32_t> array, uint32_t value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 730 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::Vector3Int> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::Vector3Int> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::Vector3Int>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::Vector3Int x, UnityEngine::Vector3Int y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::Vector3Int obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::Vector3Int> array, UnityEngine::Vector3Int value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::Vector3Int> array, UnityEngine::Vector3Int value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 731 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::Vector4> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::Vector4> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::Vector4>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::Vector4 x, UnityEngine::Vector4 y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::Vector4 obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::Vector4> array, UnityEngine::Vector4 value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::Vector4> array, UnityEngine::Vector4 value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 733 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::Rendering::VertexAttributeDescriptor> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::Rendering::VertexAttributeDescriptor> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::Rendering::VertexAttributeDescriptor>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::Rendering::VertexAttributeDescriptor x, UnityEngine::Rendering::VertexAttributeDescriptor y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::Rendering::VertexAttributeDescriptor obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> array, UnityEngine::Rendering::VertexAttributeDescriptor value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> array, UnityEngine::Rendering::VertexAttributeDescriptor value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 830 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<int64_t> : public System::Collections::Generic::EqualityComparer_1<int64_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<int64_t>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(int64_t x, int64_t y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(int64_t obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<int64_t> array, int64_t value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<int64_t> array, int64_t value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 1503 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::UIElements::Background> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::UIElements::Background> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::UIElements::Background>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::UIElements::Background x, UnityEngine::UIElements::Background y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::UIElements::Background obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::UIElements::Background> array, UnityEngine::UIElements::Background value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::UIElements::Background> array, UnityEngine::UIElements::Background value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 1504 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::UIElements::FontDefinition> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::UIElements::FontDefinition> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::UIElements::FontDefinition>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::UIElements::FontDefinition x, UnityEngine::UIElements::FontDefinition y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::UIElements::FontDefinition obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::UIElements::FontDefinition> array, UnityEngine::UIElements::FontDefinition value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::UIElements::FontDefinition> array, UnityEngine::UIElements::FontDefinition value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 1610 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::UIElements::StylePropertyName> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::UIElements::StylePropertyName> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::UIElements::StylePropertyName>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::UIElements::StylePropertyName x, UnityEngine::UIElements::StylePropertyName y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::UIElements::StylePropertyName obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::UIElements::StylePropertyName> array, UnityEngine::UIElements::StylePropertyName value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::UIElements::StylePropertyName> array, UnityEngine::UIElements::StylePropertyName value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 2491 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::ProBuilder::Edge> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::ProBuilder::Edge> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::ProBuilder::Edge>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::ProBuilder::Edge x, UnityEngine::ProBuilder::Edge y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::ProBuilder::Edge obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::ProBuilder::Edge> array, UnityEngine::ProBuilder::Edge value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::ProBuilder::Edge> array, UnityEngine::ProBuilder::Edge value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 2492 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::ProBuilder::EdgeLookup>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::ProBuilder::EdgeLookup x, UnityEngine::ProBuilder::EdgeLookup y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::ProBuilder::EdgeLookup obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::ProBuilder::EdgeLookup> array, UnityEngine::ProBuilder::EdgeLookup value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::ProBuilder::EdgeLookup> array, UnityEngine::ProBuilder::EdgeLookup value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 2494 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<System::Guid> : public System::Collections::Generic::EqualityComparer_1<System::Guid> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::Guid>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::Guid x, System::Guid y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::Guid obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<System::Guid> array, System::Guid value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<System::Guid> array, System::Guid value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 2498 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::InputSystem::Utilities::InternedString> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::InputSystem::Utilities::InternedString> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::InputSystem::Utilities::InternedString>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::InputSystem::Utilities::InternedString x, UnityEngine::InputSystem::Utilities::InternedString y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::InputSystem::Utilities::InternedString obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> array, UnityEngine::InputSystem::Utilities::InternedString value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> array, UnityEngine::InputSystem::Utilities::InternedString value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 2595 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<System::DateTime> : public System::Collections::Generic::EqualityComparer_1<System::DateTime> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::DateTime>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::DateTime x, System::DateTime y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::DateTime obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<System::DateTime> array, System::DateTime value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<System::DateTime> array, System::DateTime value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 2596 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<System::DateTimeOffset> : public System::Collections::Generic::EqualityComparer_1<System::DateTimeOffset> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::DateTimeOffset>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::DateTimeOffset x, System::DateTimeOffset y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::DateTimeOffset obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<System::DateTimeOffset> array, System::DateTimeOffset value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<System::DateTimeOffset> array, System::DateTimeOffset value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 2597 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<System::Decimal> : public System::Collections::Generic::EqualityComparer_1<System::Decimal> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::Decimal>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::Decimal x, System::Decimal y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::Decimal obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<System::Decimal> array, System::Decimal value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<System::Decimal> array, System::Decimal value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 2598 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<double_t> : public System::Collections::Generic::EqualityComparer_1<double_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<double_t>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(double_t x, double_t y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(double_t obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<double_t> array, double_t value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<double_t> array, double_t value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 2601 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<int8_t> : public System::Collections::Generic::EqualityComparer_1<int8_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<int8_t>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(int8_t x, int8_t y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(int8_t obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<int8_t> array, int8_t value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<int8_t> array, int8_t value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 2604 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::InputSystem::Utilities::Substring> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::InputSystem::Utilities::Substring> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::InputSystem::Utilities::Substring>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::InputSystem::Utilities::Substring x, UnityEngine::InputSystem::Utilities::Substring y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::InputSystem::Utilities::Substring obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::InputSystem::Utilities::Substring> array, UnityEngine::InputSystem::Utilities::Substring value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::InputSystem::Utilities::Substring> array, UnityEngine::InputSystem::Utilities::Substring value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 2605 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<System::TimeSpan> : public System::Collections::Generic::EqualityComparer_1<System::TimeSpan> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::TimeSpan>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::TimeSpan x, System::TimeSpan y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::TimeSpan obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<System::TimeSpan> array, System::TimeSpan value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<System::TimeSpan> array, System::TimeSpan value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 2973 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<Zenject::BindingId> : public System::Collections::Generic::EqualityComparer_1<Zenject::BindingId> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<Zenject::BindingId>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(Zenject::BindingId x, Zenject::BindingId y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(Zenject::BindingId obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<Zenject::BindingId> array, Zenject::BindingId value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<Zenject::BindingId> array, Zenject::BindingId value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 2996 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::InputSystem::InputBinding> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::InputSystem::InputBinding> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::InputSystem::InputBinding>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::InputSystem::InputBinding x, UnityEngine::InputSystem::InputBinding y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::InputSystem::InputBinding obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::InputSystem::InputBinding> array, UnityEngine::InputSystem::InputBinding value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::InputSystem::InputBinding> array, UnityEngine::InputSystem::InputBinding value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3005 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::InputSystem::Utilities::NamedValue> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::InputSystem::Utilities::NamedValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::InputSystem::Utilities::NamedValue>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::InputSystem::Utilities::NamedValue x, UnityEngine::InputSystem::Utilities::NamedValue y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::InputSystem::Utilities::NamedValue obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue> array, UnityEngine::InputSystem::Utilities::NamedValue value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::InputSystem::Utilities::NamedValue> array, UnityEngine::InputSystem::Utilities::NamedValue value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3165 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::UI::ColorBlock> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::UI::ColorBlock> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::UI::ColorBlock>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::UI::ColorBlock x, UnityEngine::UI::ColorBlock y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::UI::ColorBlock obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::UI::ColorBlock> array, UnityEngine::UI::ColorBlock value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::UI::ColorBlock> array, UnityEngine::UI::ColorBlock value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3172 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::UIElements::EasingFunction> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::UIElements::EasingFunction> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::UIElements::EasingFunction>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::UIElements::EasingFunction x, UnityEngine::UIElements::EasingFunction y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::UIElements::EasingFunction obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::UIElements::EasingFunction> array, UnityEngine::UIElements::EasingFunction value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::UIElements::EasingFunction> array, UnityEngine::UIElements::EasingFunction value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3180 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord x, UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> array, UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> array, UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3181 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::TextCore::GlyphRect> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::TextCore::GlyphRect> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::TextCore::GlyphRect>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::TextCore::GlyphRect x, UnityEngine::TextCore::GlyphRect y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::TextCore::GlyphRect obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::TextCore::GlyphRect> array, UnityEngine::TextCore::GlyphRect value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::TextCore::GlyphRect> array, UnityEngine::TextCore::GlyphRect value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3191 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::InputSystem::Layouts::InputDeviceDescription> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::InputSystem::Layouts::InputDeviceDescription> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::InputSystem::Layouts::InputDeviceDescription>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::InputSystem::Layouts::InputDeviceDescription x, UnityEngine::InputSystem::Layouts::InputDeviceDescription y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::InputSystem::Layouts::InputDeviceDescription obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::InputSystem::Layouts::InputDeviceDescription> array, UnityEngine::InputSystem::Layouts::InputDeviceDescription value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::InputSystem::Layouts::InputDeviceDescription> array, UnityEngine::InputSystem::Layouts::InputDeviceDescription value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3197 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::ProBuilder::IntVec3> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::ProBuilder::IntVec3> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::ProBuilder::IntVec3>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::ProBuilder::IntVec3 x, UnityEngine::ProBuilder::IntVec3 y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::ProBuilder::IntVec3 obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::ProBuilder::IntVec3> array, UnityEngine::ProBuilder::IntVec3 value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::ProBuilder::IntVec3> array, UnityEngine::ProBuilder::IntVec3 value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3203 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::UIElements::ManipulatorActivationFilter> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::UIElements::ManipulatorActivationFilter> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::UIElements::ManipulatorActivationFilter>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::UIElements::ManipulatorActivationFilter x, UnityEngine::UIElements::ManipulatorActivationFilter y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::UIElements::ManipulatorActivationFilter obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::UIElements::ManipulatorActivationFilter> array, UnityEngine::UIElements::ManipulatorActivationFilter value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::UIElements::ManipulatorActivationFilter> array, UnityEngine::UIElements::ManipulatorActivationFilter value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3205 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::Matrix4x4> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::Matrix4x4> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::Matrix4x4>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::Matrix4x4 x, UnityEngine::Matrix4x4 y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::Matrix4x4 obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::Matrix4x4> array, UnityEngine::Matrix4x4 value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::Matrix4x4> array, UnityEngine::Matrix4x4 value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3208 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::UI::Navigation> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::UI::Navigation> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::UI::Navigation>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::UI::Navigation x, UnityEngine::UI::Navigation y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::UI::Navigation obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::UI::Navigation> array, UnityEngine::UI::Navigation value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::UI::Navigation> array, UnityEngine::UI::Navigation value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3210 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<GlobalNamespace::OVRSpace> : public System::Collections::Generic::EqualityComparer_1<GlobalNamespace::OVRSpace> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<GlobalNamespace::OVRSpace>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(GlobalNamespace::OVRSpace x, GlobalNamespace::OVRSpace y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(GlobalNamespace::OVRSpace obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<GlobalNamespace::OVRSpace> array, GlobalNamespace::OVRSpace value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<GlobalNamespace::OVRSpace> array, GlobalNamespace::OVRSpace value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3213 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::Playables::Playable> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::Playables::Playable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::Playables::Playable>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::Playables::Playable x, UnityEngine::Playables::Playable y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::Playables::Playable obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::Playables::Playable> array, UnityEngine::Playables::Playable value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::Playables::Playable> array, UnityEngine::Playables::Playable value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3222 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::Quaternion> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::Quaternion> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::Quaternion>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::Quaternion x, UnityEngine::Quaternion y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::Quaternion obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::Quaternion> array, UnityEngine::Quaternion value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::Quaternion> array, UnityEngine::Quaternion value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3225 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::Rect> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::Rect> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::Rect>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::Rect x, UnityEngine::Rect y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::Rect obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::Rect> array, UnityEngine::Rect value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::Rect> array, UnityEngine::Rect value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3231 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<Zenject::SignalSubscriptionId> : public System::Collections::Generic::EqualityComparer_1<Zenject::SignalSubscriptionId> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<Zenject::SignalSubscriptionId>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(Zenject::SignalSubscriptionId x, Zenject::SignalSubscriptionId y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(Zenject::SignalSubscriptionId obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<Zenject::SignalSubscriptionId> array, Zenject::SignalSubscriptionId value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<Zenject::SignalSubscriptionId> array, Zenject::SignalSubscriptionId value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3232 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<GlobalNamespace::SongPackMask> : public System::Collections::Generic::EqualityComparer_1<GlobalNamespace::SongPackMask> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<GlobalNamespace::SongPackMask>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(GlobalNamespace::SongPackMask x, GlobalNamespace::SongPackMask y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(GlobalNamespace::SongPackMask obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<GlobalNamespace::SongPackMask> array, GlobalNamespace::SongPackMask value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<GlobalNamespace::SongPackMask> array, GlobalNamespace::SongPackMask value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3233 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::UI::SpriteState> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::UI::SpriteState> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::UI::SpriteState>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::UI::SpriteState x, UnityEngine::UI::SpriteState y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::UI::SpriteState obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::UI::SpriteState> array, UnityEngine::UI::SpriteState value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::UI::SpriteState> array, UnityEngine::UI::SpriteState value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3248 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::UIElements::TimeValue> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::UIElements::TimeValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::UIElements::TimeValue>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::UIElements::TimeValue x, UnityEngine::UIElements::TimeValue y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::UIElements::TimeValue obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::UIElements::TimeValue> array, UnityEngine::UIElements::TimeValue value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::UIElements::TimeValue> array, UnityEngine::UIElements::TimeValue value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3252 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::ProBuilder::Triangle> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::ProBuilder::Triangle> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::ProBuilder::Triangle>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::ProBuilder::Triangle x, UnityEngine::ProBuilder::Triangle y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::ProBuilder::Triangle obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::ProBuilder::Triangle> array, UnityEngine::ProBuilder::Triangle value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::ProBuilder::Triangle> array, UnityEngine::ProBuilder::Triangle value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3266 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue x, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> array, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> array, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 3271 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey> : public System::Collections::Generic::EqualityComparer_1<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey x, System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey> array, System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey> array, System::Text::RegularExpressions::System__Text__RegularExpressions__Regex__CachedCodeEntryKey value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 5963 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<IntervalTree::RangeValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> : public System::Collections::Generic::EqualityComparer_1<IntervalTree::RangeValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<IntervalTree::RangeValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(IntervalTree::RangeValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> x, IntervalTree::RangeValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(IntervalTree::RangeValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<IntervalTree::RangeValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> array, IntervalTree::RangeValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<IntervalTree::RangeValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> array, IntervalTree::RangeValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 6241 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>> : public System::Collections::Generic::EqualityComparer_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType> x, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType> y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType> obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>> array, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType> value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType>> array, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::bs_hook::Il2CppWrapperType> value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 6244 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<Unity::Collections::NativeArray_1<uint16_t>> : public System::Collections::Generic::EqualityComparer_1<Unity::Collections::NativeArray_1<uint16_t>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<Unity::Collections::NativeArray_1<uint16_t>>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(Unity::Collections::NativeArray_1<uint16_t> x, Unity::Collections::NativeArray_1<uint16_t> y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(Unity::Collections::NativeArray_1<uint16_t> obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<Unity::Collections::NativeArray_1<uint16_t>> array, Unity::Collections::NativeArray_1<uint16_t> value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<Unity::Collections::NativeArray_1<uint16_t>> array, Unity::Collections::NativeArray_1<uint16_t> value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 6245 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>> : public System::Collections::Generic::EqualityComparer_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> x, Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>> array, Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex>> array, Unity::Collections::NativeArray_1<UnityEngine::UIElements::Vertex> value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 6250 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> : public System::Collections::Generic::EqualityComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> x, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> array, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> array, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 6251 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3>> : public System::Collections::Generic::EqualityComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3>>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3> x, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3> y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3> obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3>> array, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3> value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3>> array, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,UnityEngine::Vector3> value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 6252 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType>> : public System::Collections::Generic::EqualityComparer_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType>>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType> x, System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType> y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType> obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType>> array, System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType> value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType>> array, System::ValueTuple_3<System::Int32Enum,System::Int32Enum,::bs_hook::Il2CppWrapperType> value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 6702 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<System::ValueTuple_1<bool>> : public System::Collections::Generic::EqualityComparer_1<System::ValueTuple_1<bool>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::ValueTuple_1<bool>>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::ValueTuple_1<bool> x, System::ValueTuple_1<bool> y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::ValueTuple_1<bool> obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<System::ValueTuple_1<bool>> array, System::ValueTuple_1<bool> value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<System::ValueTuple_1<bool>> array, System::ValueTuple_1<bool> value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 6969 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>> : public System::Collections::Generic::EqualityComparer_1<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType> x, System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType> y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType> obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>> array, System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType> value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType>> array, System::ValueTuple_2<System::Int32Enum,::bs_hook::Il2CppWrapperType> value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3855)), TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 6970 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>> : public System::Collections::Generic::EqualityComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool> x, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool> y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool> obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>> array, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool> value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool>> array, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,bool> value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 6971 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>> : public System::Collections::Generic::EqualityComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t> x, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t> y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t> obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>> array, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t> value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t>> array, System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int32_t> value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), TypeDefinitionIndex(TypeDefinitionIndex(3855)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 6972 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>> : public System::Collections::Generic::EqualityComparer_1<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t> x, System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t> y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t> obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>> array, System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t> value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t>> array, System::ValueTuple_3<int32_t,::bs_hook::Il2CppWrapperType,int32_t> value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::GenericEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3854), inst: 1618 }), TypeDefinitionIndex(TypeDefinitionIndex(3855))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3855), inst: 6973 })
// CS Name: System.Collections.Generic.GenericEqualityComparer`1
class CORDL_TYPE GenericEqualityComparer_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> : public System::Collections::Generic::EqualityComparer_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GenericEqualityComparer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: " const&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericEqualityComparer_1", modifiers: "&&", def_value: None }]
constexpr GenericEqualityComparer_1(GenericEqualityComparer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericEqualityComparer_1(void* ptr) noexcept : System::Collections::Generic::EqualityComparer_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>(ptr) {
}


  constexpr GenericEqualityComparer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1&& o) noexcept = default;
  constexpr GenericEqualityComparer_1& operator=(GenericEqualityComparer_1 const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> x, System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode(System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> obj) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t IndexOf(::ArrayW<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> array, System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value, int32_t startIndex, int32_t count) ;

/// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t LastIndexOf(::ArrayW<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> array, System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> value, int32_t startIndex, int32_t count) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit GenericEqualityComparer_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::GenericEqualityComparer_1, "System.Collections.Generic", "GenericEqualityComparer`1");
