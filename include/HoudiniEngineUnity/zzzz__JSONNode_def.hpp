#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
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
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace HoudiniEngineUnity {
struct JSONNodeType;
}
namespace HoudiniEngineUnity {
class JSONObject;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace HoudiniEngineUnity {
struct JSONTextMode;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector3;
}
namespace HoudiniEngineUnity {
struct JSONContainerType;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace HoudiniEngineUnity {
class JSONArray;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine {
class RectOffset;
}
namespace System::Collections::Generic {
template<typename T>
struct System__Collections__Generic__List_1__Enumerator;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct System__Collections__Generic__Dictionary_2__Enumerator;
}
// Forward declare root types
namespace GlobalNamespace {
struct HoudiniEngineUnity__JSONNode__Enumerator__Type;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__JSONNode__LinqEnumerator;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__JSONNode___get_Children_d__40;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42;
}
namespace HoudiniEngineUnity {
class JSONNode;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__JSONNode__Enumerator;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__JSONNode__KeyEnumerator;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__JSONNode__ValueEnumerator;
}
// Type: ::Type
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9803))
// CS Name: HoudiniEngineUnity.JSONNode::Enumerator::Type
struct CORDL_TYPE HoudiniEngineUnity__JSONNode__Enumerator__Type : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__JSONNode__Enumerator__Type(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__JSONNode__Enumerator__Type(HoudiniEngineUnity__JSONNode__Enumerator__Type const&) = default;
                    constexpr HoudiniEngineUnity__JSONNode__Enumerator__Type(HoudiniEngineUnity__JSONNode__Enumerator__Type&&) = default;
                    constexpr HoudiniEngineUnity__JSONNode__Enumerator__Type& operator=(HoudiniEngineUnity__JSONNode__Enumerator__Type const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__JSONNode__Enumerator__Type& operator=(HoudiniEngineUnity__JSONNode__Enumerator__Type&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__JSONNode__Enumerator__Type(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__JSONNode__Enumerator__Type_Unwrapped : int32_t {
__None = 0,
__Array = 1,
__Object = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__JSONNode__Enumerator__Type_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__JSONNode__Enumerator__Type_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type const None;

/// @brief Field Array offset 0
static GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type const Array;

/// @brief Field Object offset 0
static GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type const Object;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Enumerator
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9804))
// CS Name: HoudiniEngineUnity.JSONNode::Enumerator
struct CORDL_TYPE HoudiniEngineUnity__JSONNode__Enumerator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Type = GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type;

// Ctor Parameters [CppParam { name: "type", ty: "GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type", modifiers: "", def_value: None }, CppParam { name: "m_Object", ty: "System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode>", modifiers: "", def_value: None }, CppParam { name: "m_Array", ty: "System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode>", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__JSONNode__Enumerator(GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type type, System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode> m_Object, System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode> m_Array) noexcept;


                    constexpr HoudiniEngineUnity__JSONNode__Enumerator(HoudiniEngineUnity__JSONNode__Enumerator const&) = default;
                    constexpr HoudiniEngineUnity__JSONNode__Enumerator(HoudiniEngineUnity__JSONNode__Enumerator&&) = default;
                    constexpr HoudiniEngineUnity__JSONNode__Enumerator& operator=(HoudiniEngineUnity__JSONNode__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__JSONNode__Enumerator& operator=(HoudiniEngineUnity__JSONNode__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__JSONNode__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type value) ;

constexpr GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type __get_type() const;

 System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode> __declspec(property(get=__get_m_Object, put=__set_m_Object))  m_Object;

constexpr void __set_m_Object(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode> __get_m_Object() const;

 System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode> __declspec(property(get=__get_m_Array, put=__set_m_Array))  m_Array;

constexpr void __set_m_Array(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode> __get_m_Array() const;


// Properties

 bool __declspec(property(get=get_IsValid))  IsValid;

 System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode> __declspec(property(get=get_Current))  Current;


// Methods

/// @brief Method get_IsValid addr 0x2066610 size 0x10 virtual false final false
 bool get_IsValid() ;

/// @brief Method .ctor addr 0x2066620 size 0x2c virtual false final false
 void _ctor(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode> aArrayEnum) ;

/// @brief Method .ctor addr 0x206664c size 0x24 virtual false final false
 void _ctor(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode> aDictEnum) ;

/// @brief Method get_Current addr 0x2066670 size 0xcc virtual false final false
 System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode> get_Current() ;

/// @brief Method MoveNext addr 0x206673c size 0x94 virtual false final false
 bool MoveNext() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::ValueEnumerator
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9805))
// CS Name: HoudiniEngineUnity.JSONNode::ValueEnumerator
struct CORDL_TYPE HoudiniEngineUnity__JSONNode__ValueEnumerator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__JSONNode__ValueEnumerator(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator m_Enumerator) noexcept;


                    constexpr HoudiniEngineUnity__JSONNode__ValueEnumerator(HoudiniEngineUnity__JSONNode__ValueEnumerator const&) = default;
                    constexpr HoudiniEngineUnity__JSONNode__ValueEnumerator(HoudiniEngineUnity__JSONNode__ValueEnumerator&&) = default;
                    constexpr HoudiniEngineUnity__JSONNode__ValueEnumerator& operator=(HoudiniEngineUnity__JSONNode__ValueEnumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__JSONNode__ValueEnumerator& operator=(HoudiniEngineUnity__JSONNode__ValueEnumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__JSONNode__ValueEnumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator __declspec(property(get=__get_m_Enumerator, put=__set_m_Enumerator))  m_Enumerator;

constexpr void __set_m_Enumerator(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator __get_m_Enumerator() const;


// Properties

 HoudiniEngineUnity::JSONNode __declspec(property(get=get_Current))  Current;


// Methods

/// @brief Method .ctor addr 0x20667d0 size 0x40 virtual false final false
 void _ctor(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode> aArrayEnum) ;

/// @brief Method .ctor addr 0x2066810 size 0x70 virtual false final false
 void _ctor(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode> aDictEnum) ;

/// @brief Method .ctor addr 0x2066880 size 0x14 virtual false final false
 void _ctor(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator aEnumerator) ;

/// @brief Method get_Current addr 0x2066894 size 0x44 virtual false final false
 HoudiniEngineUnity::JSONNode get_Current() ;

/// @brief Method MoveNext addr 0x20668d8 size 0x4 virtual false final false
 bool MoveNext() ;

/// @brief Method GetEnumerator addr 0x20668dc size 0x10 virtual false final false
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::KeyEnumerator
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9806))
// CS Name: HoudiniEngineUnity.JSONNode::KeyEnumerator
struct CORDL_TYPE HoudiniEngineUnity__JSONNode__KeyEnumerator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__JSONNode__KeyEnumerator(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator m_Enumerator) noexcept;


                    constexpr HoudiniEngineUnity__JSONNode__KeyEnumerator(HoudiniEngineUnity__JSONNode__KeyEnumerator const&) = default;
                    constexpr HoudiniEngineUnity__JSONNode__KeyEnumerator(HoudiniEngineUnity__JSONNode__KeyEnumerator&&) = default;
                    constexpr HoudiniEngineUnity__JSONNode__KeyEnumerator& operator=(HoudiniEngineUnity__JSONNode__KeyEnumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__JSONNode__KeyEnumerator& operator=(HoudiniEngineUnity__JSONNode__KeyEnumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__JSONNode__KeyEnumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator __declspec(property(get=__get_m_Enumerator, put=__set_m_Enumerator))  m_Enumerator;

constexpr void __set_m_Enumerator(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator __get_m_Enumerator() const;


// Properties

 ::StringW __declspec(property(get=get_Current))  Current;


// Methods

/// @brief Method .ctor addr 0x20668ec size 0x40 virtual false final false
 void _ctor(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<HoudiniEngineUnity::JSONNode> aArrayEnum) ;

/// @brief Method .ctor addr 0x206692c size 0x70 virtual false final false
 void _ctor(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,HoudiniEngineUnity::JSONNode> aDictEnum) ;

/// @brief Method .ctor addr 0x206699c size 0x14 virtual false final false
 void _ctor(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator aEnumerator) ;

/// @brief Method get_Current addr 0x20669b0 size 0x3c virtual false final false
 ::StringW get_Current() ;

/// @brief Method MoveNext addr 0x20669ec size 0x4 virtual false final false
 bool MoveNext() ;

/// @brief Method GetEnumerator addr 0x20669f0 size 0x10 virtual false final false
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::LinqEnumerator
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9807))
// CS Name: HoudiniEngineUnity.JSONNode::LinqEnumerator
class CORDL_TYPE HoudiniEngineUnity__JSONNode__LinqEnumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~HoudiniEngineUnity__JSONNode__LinqEnumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__JSONNode__LinqEnumerator", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__JSONNode__LinqEnumerator(HoudiniEngineUnity__JSONNode__LinqEnumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__JSONNode__LinqEnumerator", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__JSONNode__LinqEnumerator(HoudiniEngineUnity__JSONNode__LinqEnumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__JSONNode__LinqEnumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__JSONNode__LinqEnumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__JSONNode__LinqEnumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__JSONNode__LinqEnumerator& operator=(HoudiniEngineUnity__JSONNode__LinqEnumerator&& o) noexcept = default;
  constexpr HoudiniEngineUnity__JSONNode__LinqEnumerator& operator=(HoudiniEngineUnity__JSONNode__LinqEnumerator const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::JSONNode __declspec(property(get=__get_m_Node, put=__set_m_Node))  m_Node;

constexpr void __set_m_Node(HoudiniEngineUnity::JSONNode value) ;

constexpr HoudiniEngineUnity::JSONNode __get_m_Node() const;

 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator __declspec(property(get=__get_m_Enumerator, put=__set_m_Enumerator))  m_Enumerator;

constexpr void __set_m_Enumerator(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator __get_m_Enumerator() const;


// Properties

 System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode> __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "aNode", ty: "HoudiniEngineUnity::JSONNode", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__JSONNode__LinqEnumerator(HoudiniEngineUnity::JSONNode aNode) ;

/// @brief Method .ctor addr 0x2062b3c size 0x80 virtual false final false
 void _ctor(HoudiniEngineUnity::JSONNode aNode) ;

/// @brief Method get_Current addr 0x2066a00 size 0x8 virtual true final true
 System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode> get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2066a08 size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method MoveNext addr 0x2066a6c size 0x8 virtual true final true
 bool MoveNext() ;

/// @brief Method Dispose addr 0x2066a74 size 0x14 virtual true final true
 void Dispose() ;

/// @brief Method GetEnumerator addr 0x2066a88 size 0x64 virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>> GetEnumerator() ;

/// @brief Method Reset addr 0x2066aec size 0x68 virtual true final true
 void Reset() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2066b54 size 0x64 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::<get_Children>d__40
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9808))
// CS Name: HoudiniEngineUnity.JSONNode::<get_Children>d__40
class CORDL_TYPE HoudiniEngineUnity__JSONNode___get_Children_d__40 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode>
constexpr operator  System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>
constexpr operator  System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HoudiniEngineUnity__JSONNode___get_Children_d__40() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__JSONNode___get_Children_d__40", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__JSONNode___get_Children_d__40(HoudiniEngineUnity__JSONNode___get_Children_d__40 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__JSONNode___get_Children_d__40", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__JSONNode___get_Children_d__40(HoudiniEngineUnity__JSONNode___get_Children_d__40&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__JSONNode___get_Children_d__40(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__JSONNode___get_Children_d__40& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__JSONNode___get_Children_d__40& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__JSONNode___get_Children_d__40& operator=(HoudiniEngineUnity__JSONNode___get_Children_d__40&& o) noexcept = default;
  constexpr HoudiniEngineUnity__JSONNode___get_Children_d__40& operator=(HoudiniEngineUnity__JSONNode___get_Children_d__40 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 HoudiniEngineUnity::JSONNode __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(HoudiniEngineUnity::JSONNode value) ;

constexpr HoudiniEngineUnity::JSONNode __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;


// Properties

 HoudiniEngineUnity::JSONNode __declspec(property(get=System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current))  System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__JSONNode___get_Children_d__40(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20628d8 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2066bb8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2066bbc size 0x18 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current addr 0x2066bd4 size 0x8 virtual true final true
 HoudiniEngineUnity::JSONNode System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2066bdc size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2066c1c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator addr 0x2066c24 size 0x98 virtual true final true
 System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2066cbc size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::<get_DeepChildren>d__42
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9809))
// CS Name: HoudiniEngineUnity.JSONNode::<get_DeepChildren>d__42
class CORDL_TYPE HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode>
constexpr operator  System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>
constexpr operator  System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42(HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42(HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42& operator=(HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42&& o) noexcept = default;
  constexpr HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42& operator=(HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 HoudiniEngineUnity::JSONNode __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(HoudiniEngineUnity::JSONNode value) ;

constexpr HoudiniEngineUnity::JSONNode __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 HoudiniEngineUnity::JSONNode __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(HoudiniEngineUnity::JSONNode value) ;

constexpr HoudiniEngineUnity::JSONNode __get___4__this() const;

 System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> value) ;

constexpr System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> __get___7__wrap1() const;

 System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> value) ;

constexpr System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> __get___7__wrap2() const;


// Properties

 HoudiniEngineUnity::JSONNode __declspec(property(get=System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current))  System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2062984 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2066cc0 size 0xb8 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2066d78 size 0x434 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x206725c size 0xb0 virtual false final false
 void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x20671ac size 0xb0 virtual false final false
 void __m__Finally2() ;

/// @brief Method System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current addr 0x206730c size 0x8 virtual true final true
 HoudiniEngineUnity::JSONNode System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2067314 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2067354 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator addr 0x206735c size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<HoudiniEngineUnity::JSONNode> System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2067400 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::JSONNode
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9810))
// CS Name: HoudiniEngineUnity.JSONNode
class CORDL_TYPE JSONNode : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _get_DeepChildren_d__42 = HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42;

using _get_Children_d__40 = HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40;

using LinqEnumerator = HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator;

using KeyEnumerator = HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator;

using ValueEnumerator = HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator;

using Enumerator = HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JSONNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONNode", modifiers: " const&", def_value: None }]
constexpr JSONNode(JSONNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JSONNode", modifiers: "&&", def_value: None }]
constexpr JSONNode(JSONNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JSONNode(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JSONNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JSONNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JSONNode& operator=(JSONNode&& o) noexcept = default;
  constexpr JSONNode& operator=(JSONNode const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_forceASCII, put=__set_forceASCII))  forceASCII;

static void __set_forceASCII(bool value) ;

static bool __get_forceASCII() ;

static bool __declspec(property(get=__get_longAsString, put=__set_longAsString))  longAsString;

static void __set_longAsString(bool value) ;

static bool __get_longAsString() ;

static System::Text::StringBuilder __declspec(property(get=__get_m_EscapeBuilder, put=__set_m_EscapeBuilder))  m_EscapeBuilder;

static void __set_m_EscapeBuilder(System::Text::StringBuilder value) ;

static System::Text::StringBuilder __get_m_EscapeBuilder() ;

static HoudiniEngineUnity::JSONContainerType __declspec(property(get=__get_VectorContainerType, put=__set_VectorContainerType))  VectorContainerType;

static void __set_VectorContainerType(HoudiniEngineUnity::JSONContainerType value) ;

static HoudiniEngineUnity::JSONContainerType __get_VectorContainerType() ;

static HoudiniEngineUnity::JSONContainerType __declspec(property(get=__get_QuaternionContainerType, put=__set_QuaternionContainerType))  QuaternionContainerType;

static void __set_QuaternionContainerType(HoudiniEngineUnity::JSONContainerType value) ;

static HoudiniEngineUnity::JSONContainerType __get_QuaternionContainerType() ;

static HoudiniEngineUnity::JSONContainerType __declspec(property(get=__get_RectContainerType, put=__set_RectContainerType))  RectContainerType;

static void __set_RectContainerType(HoudiniEngineUnity::JSONContainerType value) ;

static HoudiniEngineUnity::JSONContainerType __get_RectContainerType() ;


// Properties

 HoudiniEngineUnity::JSONNodeType __declspec(property(get=get_Tag))  Tag;

 HoudiniEngineUnity::JSONNode __declspec(property(get=get_Item, put=set_Item))  Item;

 HoudiniEngineUnity::JSONNode __declspec(property(get=get_Item, put=set_Item))  Item;

 ::StringW __declspec(property(get=get_Value, put=set_Value))  Value;

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsNumber))  IsNumber;

 bool __declspec(property(get=get_IsString))  IsString;

 bool __declspec(property(get=get_IsBoolean))  IsBoolean;

 bool __declspec(property(get=get_IsNull))  IsNull;

 bool __declspec(property(get=get_IsArray))  IsArray;

 bool __declspec(property(get=get_IsObject))  IsObject;

 bool __declspec(property(get=get_Inline, put=set_Inline))  Inline;

 System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode> __declspec(property(get=get_Children))  Children;

 System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode> __declspec(property(get=get_DeepChildren))  DeepChildren;

 System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>> __declspec(property(get=get_Linq))  Linq;

 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator __declspec(property(get=get_Keys))  Keys;

 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator __declspec(property(get=get_Values))  Values;

 double_t __declspec(property(get=get_AsDouble, put=set_AsDouble))  AsDouble;

 int32_t __declspec(property(get=get_AsInt, put=set_AsInt))  AsInt;

 float_t __declspec(property(get=get_AsFloat, put=set_AsFloat))  AsFloat;

 bool __declspec(property(get=get_AsBool, put=set_AsBool))  AsBool;

 int64_t __declspec(property(get=get_AsLong, put=set_AsLong))  AsLong;

 HoudiniEngineUnity::JSONArray __declspec(property(get=get_AsArray))  AsArray;

 HoudiniEngineUnity::JSONObject __declspec(property(get=get_AsObject))  AsObject;

static System::Text::StringBuilder __declspec(property(get=get_EscapeBuilder))  EscapeBuilder;


// Methods

/// @brief Method get_Tag addr 0x0 size 0xffffffffffffffff virtual true final false
 HoudiniEngineUnity::JSONNodeType get_Tag() ;

/// @brief Method get_Item addr 0x2062748 size 0x8 virtual true final false
 HoudiniEngineUnity::JSONNode get_Item(int32_t aIndex) ;

/// @brief Method set_Item addr 0x2062750 size 0x4 virtual true final false
 void set_Item(int32_t aIndex, HoudiniEngineUnity::JSONNode value) ;

/// @brief Method get_Item addr 0x2062754 size 0x8 virtual true final false
 HoudiniEngineUnity::JSONNode get_Item(::StringW aKey) ;

/// @brief Method set_Item addr 0x206275c size 0x4 virtual true final false
 void set_Item(::StringW aKey, HoudiniEngineUnity::JSONNode value) ;

/// @brief Method get_Value addr 0x2062760 size 0x40 virtual true final false
 ::StringW get_Value() ;

/// @brief Method set_Value addr 0x20627a0 size 0x4 virtual true final false
 void set_Value(::StringW value) ;

/// @brief Method get_Count addr 0x20627a4 size 0x8 virtual true final false
 int32_t get_Count() ;

/// @brief Method get_IsNumber addr 0x20627ac size 0x8 virtual true final false
 bool get_IsNumber() ;

/// @brief Method get_IsString addr 0x20627b4 size 0x8 virtual true final false
 bool get_IsString() ;

/// @brief Method get_IsBoolean addr 0x20627bc size 0x8 virtual true final false
 bool get_IsBoolean() ;

/// @brief Method get_IsNull addr 0x20627c4 size 0x8 virtual true final false
 bool get_IsNull() ;

/// @brief Method get_IsArray addr 0x20627cc size 0x8 virtual true final false
 bool get_IsArray() ;

/// @brief Method get_IsObject addr 0x20627d4 size 0x8 virtual true final false
 bool get_IsObject() ;

/// @brief Method get_Inline addr 0x20627dc size 0x8 virtual true final false
 bool get_Inline() ;

/// @brief Method set_Inline addr 0x20627e4 size 0x4 virtual true final false
 void set_Inline(bool value) ;

/// @brief Method Add addr 0x20627e8 size 0x4 virtual true final false
 void Add(::StringW aKey, HoudiniEngineUnity::JSONNode aItem) ;

/// @brief Method Add addr 0x20627ec size 0x64 virtual true final false
 void Add(HoudiniEngineUnity::JSONNode aItem) ;

/// @brief Method Remove addr 0x2062850 size 0x8 virtual true final false
 HoudiniEngineUnity::JSONNode Remove(::StringW aKey) ;

/// @brief Method Remove addr 0x2062858 size 0x8 virtual true final false
 HoudiniEngineUnity::JSONNode Remove(int32_t aIndex) ;

/// @brief Method Remove addr 0x2062860 size 0x8 virtual true final false
 HoudiniEngineUnity::JSONNode Remove(HoudiniEngineUnity::JSONNode aNode) ;

/// @brief Method get_Children addr 0x2062868 size 0x70 virtual true final false
 System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode> get_Children() ;

/// @brief Method get_DeepChildren addr 0x206290c size 0x78 virtual false final false
 System::Collections::Generic::IEnumerable_1<HoudiniEngineUnity::JSONNode> get_DeepChildren() ;

/// @brief Method ToString addr 0x20629b8 size 0x8c virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2062a44 size 0x98 virtual true final false
 ::StringW ToString(int32_t aIndent) ;

/// @brief Method WriteToStringBuilder addr 0x0 size 0xffffffffffffffff virtual true final false
 void WriteToStringBuilder(System::Text::StringBuilder aSB, int32_t aIndent, int32_t aIndentInc, HoudiniEngineUnity::JSONTextMode aMode) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final false
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator GetEnumerator() ;

/// @brief Method get_Linq addr 0x2062adc size 0x60 virtual false final false
 System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode>> get_Linq() ;

/// @brief Method get_Keys addr 0x2062bbc size 0x3c virtual false final false
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator get_Keys() ;

/// @brief Method get_Values addr 0x2062bf8 size 0x3c virtual false final false
 HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator get_Values() ;

/// @brief Method get_AsDouble addr 0x2062c34 size 0xa4 virtual true final false
 double_t get_AsDouble() ;

/// @brief Method set_AsDouble addr 0x2062cd8 size 0x88 virtual true final false
 void set_AsDouble(double_t value) ;

/// @brief Method get_AsInt addr 0x2062d60 size 0x34 virtual true final false
 int32_t get_AsInt() ;

/// @brief Method set_AsInt addr 0x2062d94 size 0x18 virtual true final false
 void set_AsInt(int32_t value) ;

/// @brief Method get_AsFloat addr 0x2062dac size 0x20 virtual true final false
 float_t get_AsFloat() ;

/// @brief Method set_AsFloat addr 0x2062dcc size 0x14 virtual true final false
 void set_AsFloat(float_t value) ;

/// @brief Method get_AsBool addr 0x2062de0 size 0xb8 virtual true final false
 bool get_AsBool() ;

/// @brief Method set_AsBool addr 0x2062e98 size 0x78 virtual true final false
 void set_AsBool(bool value) ;

/// @brief Method get_AsLong addr 0x2062f10 size 0x34 virtual true final false
 int64_t get_AsLong() ;

/// @brief Method set_AsLong addr 0x2062f44 size 0x3c virtual true final false
 void set_AsLong(int64_t value) ;

/// @brief Method get_AsArray addr 0x2062f80 size 0x78 virtual true final false
 HoudiniEngineUnity::JSONArray get_AsArray() ;

/// @brief Method get_AsObject addr 0x2062ff8 size 0x78 virtual true final false
 HoudiniEngineUnity::JSONObject get_AsObject() ;

/// @brief Method op_Implicit addr 0x2063070 size 0x64 virtual false final false
static HoudiniEngineUnity::JSONNode op_Implicit_HoudiniEngineUnity__JSONNode(::StringW s) ;

/// @brief Method op_Implicit addr 0x2060e08 size 0x3c virtual false final false
static ::StringW op_Implicit___StringW(HoudiniEngineUnity::JSONNode d) ;

/// @brief Method op_Implicit addr 0x206327c size 0x6c virtual false final false
static HoudiniEngineUnity::JSONNode op_Implicit_HoudiniEngineUnity__JSONNode(double_t n) ;

/// @brief Method op_Implicit addr 0x2063310 size 0x40 virtual false final false
static double_t op_Implicit_double_t(HoudiniEngineUnity::JSONNode d) ;

/// @brief Method op_Implicit addr 0x2063350 size 0x70 virtual false final false
static HoudiniEngineUnity::JSONNode op_Implicit_HoudiniEngineUnity__JSONNode(float_t n) ;

/// @brief Method op_Implicit addr 0x20633c0 size 0x40 virtual false final false
static float_t op_Implicit_float_t(HoudiniEngineUnity::JSONNode d) ;

/// @brief Method op_Implicit addr 0x2063400 size 0x70 virtual false final false
static HoudiniEngineUnity::JSONNode op_Implicit_HoudiniEngineUnity__JSONNode(int32_t n) ;

/// @brief Method op_Implicit addr 0x2063470 size 0x40 virtual false final false
static int32_t op_Implicit_int32_t(HoudiniEngineUnity::JSONNode d) ;

/// @brief Method op_Implicit addr 0x20634b0 size 0xe0 virtual false final false
static HoudiniEngineUnity::JSONNode op_Implicit_HoudiniEngineUnity__JSONNode(int64_t n) ;

/// @brief Method op_Implicit addr 0x2063590 size 0x40 virtual false final false
static int64_t op_Implicit_int64_t(HoudiniEngineUnity::JSONNode d) ;

/// @brief Method op_Implicit addr 0x20635d0 size 0x68 virtual false final false
static HoudiniEngineUnity::JSONNode op_Implicit_HoudiniEngineUnity__JSONNode(bool b) ;

/// @brief Method op_Implicit addr 0x2063660 size 0x40 virtual false final false
static bool op_Implicit_bool(HoudiniEngineUnity::JSONNode d) ;

/// @brief Method op_Implicit addr 0x20636a0 size 0x3c virtual false final false
static HoudiniEngineUnity::JSONNode op_Implicit_HoudiniEngineUnity__JSONNode(System::Collections::Generic::KeyValuePair_2<::StringW,HoudiniEngineUnity::JSONNode> aKeyValue) ;

/// @brief Method op_Equality addr 0x20630fc size 0x180 virtual false final false
static bool op_Equality(HoudiniEngineUnity::JSONNode a, ::bs_hook::Il2CppWrapperType b) ;

/// @brief Method op_Inequality addr 0x2060df0 size 0x18 virtual false final false
static bool op_Inequality(HoudiniEngineUnity::JSONNode a, ::bs_hook::Il2CppWrapperType b) ;

/// @brief Method Equals addr 0x20636dc size 0xc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x20636e8 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method get_EscapeBuilder addr 0x20636f0 size 0x9c virtual false final false
static System::Text::StringBuilder get_EscapeBuilder() ;

/// @brief Method Escape addr 0x206378c size 0x2c4 virtual false final false
static ::StringW Escape(::StringW aText) ;

/// @brief Method ParseElement addr 0x2063a50 size 0x170 virtual false final false
static HoudiniEngineUnity::JSONNode ParseElement(::StringW token, bool quoted) ;

/// @brief Method Parse addr 0x2063c54 size 0x5fc virtual false final false
static HoudiniEngineUnity::JSONNode Parse(::StringW aJSON) ;

/// @brief Method GetContainer addr 0x2064348 size 0x8c virtual false final false
static HoudiniEngineUnity::JSONNode GetContainer(HoudiniEngineUnity::JSONContainerType aType) ;

/// @brief Method op_Implicit addr 0x20643d4 size 0x9c virtual false final false
static HoudiniEngineUnity::JSONNode op_Implicit_HoudiniEngineUnity__JSONNode(UnityEngine::Vector2 aVec) ;

/// @brief Method op_Implicit addr 0x20645a0 size 0xc4 virtual false final false
static HoudiniEngineUnity::JSONNode op_Implicit_HoudiniEngineUnity__JSONNode(UnityEngine::Vector3 aVec) ;

/// @brief Method op_Implicit addr 0x2064804 size 0x84 virtual false final false
static HoudiniEngineUnity::JSONNode op_Implicit_HoudiniEngineUnity__JSONNode(UnityEngine::Vector4 aVec) ;

/// @brief Method op_Implicit addr 0x2064ad8 size 0x84 virtual false final false
static HoudiniEngineUnity::JSONNode op_Implicit_HoudiniEngineUnity__JSONNode(UnityEngine::Quaternion aRot) ;

/// @brief Method op_Implicit addr 0x2064dac size 0x84 virtual false final false
static HoudiniEngineUnity::JSONNode op_Implicit_HoudiniEngineUnity__JSONNode(UnityEngine::Rect aRect) ;

/// @brief Method op_Implicit addr 0x20650dc size 0x5c virtual false final false
static HoudiniEngineUnity::JSONNode op_Implicit_HoudiniEngineUnity__JSONNode(UnityEngine::RectOffset aRect) ;

/// @brief Method op_Implicit addr 0x2065404 size 0x10 virtual false final false
static UnityEngine::Vector2 op_Implicit_UnityEngine__Vector2(HoudiniEngineUnity::JSONNode aNode) ;

/// @brief Method op_Implicit addr 0x2065464 size 0x10 virtual false final false
static UnityEngine::Vector3 op_Implicit_UnityEngine__Vector3(HoudiniEngineUnity::JSONNode aNode) ;

/// @brief Method op_Implicit addr 0x20654c8 size 0x10 virtual false final false
static UnityEngine::Vector4 op_Implicit_UnityEngine__Vector4(HoudiniEngineUnity::JSONNode aNode) ;

/// @brief Method op_Implicit addr 0x206552c size 0x10 virtual false final false
static UnityEngine::Quaternion op_Implicit_UnityEngine__Quaternion(HoudiniEngineUnity::JSONNode aNode) ;

/// @brief Method op_Implicit addr 0x2065590 size 0x20 virtual false final false
static UnityEngine::Rect op_Implicit_UnityEngine__Rect(HoudiniEngineUnity::JSONNode aNode) ;

/// @brief Method op_Implicit addr 0x20655c4 size 0x10 virtual false final false
static UnityEngine::RectOffset op_Implicit_UnityEngine__RectOffset(HoudiniEngineUnity::JSONNode aNode) ;

/// @brief Method ReadVector2 addr 0x2065638 size 0x140 virtual false final false
 UnityEngine::Vector2 ReadVector2(UnityEngine::Vector2 aDefault) ;

/// @brief Method ReadVector2 addr 0x2065778 size 0xd8 virtual false final false
 UnityEngine::Vector2 ReadVector2(::StringW aXName, ::StringW aYName) ;

/// @brief Method ReadVector2 addr 0x2065414 size 0x50 virtual false final false
 UnityEngine::Vector2 ReadVector2() ;

/// @brief Method WriteVector2 addr 0x2064470 size 0x130 virtual false final false
 HoudiniEngineUnity::JSONNode WriteVector2(UnityEngine::Vector2 aVec, ::StringW aXName, ::StringW aYName) ;

/// @brief Method ReadVector3 addr 0x2065850 size 0x1bc virtual false final false
 UnityEngine::Vector3 ReadVector3(UnityEngine::Vector3 aDefault) ;

/// @brief Method ReadVector3 addr 0x2065a0c size 0x118 virtual false final false
 UnityEngine::Vector3 ReadVector3(::StringW aXName, ::StringW aYName, ::StringW aZName) ;

/// @brief Method ReadVector3 addr 0x2065474 size 0x54 virtual false final false
 UnityEngine::Vector3 ReadVector3() ;

/// @brief Method WriteVector3 addr 0x2064664 size 0x1a0 virtual false final false
 HoudiniEngineUnity::JSONNode WriteVector3(UnityEngine::Vector3 aVec, ::StringW aXName, ::StringW aYName, ::StringW aZName) ;

/// @brief Method ReadVector4 addr 0x2065b24 size 0x230 virtual false final false
 UnityEngine::Vector4 ReadVector4(UnityEngine::Vector4 aDefault) ;

/// @brief Method ReadVector4 addr 0x20654d8 size 0x54 virtual false final false
 UnityEngine::Vector4 ReadVector4() ;

/// @brief Method WriteVector4 addr 0x2064888 size 0x250 virtual false final false
 HoudiniEngineUnity::JSONNode WriteVector4(UnityEngine::Vector4 aVec) ;

/// @brief Method ReadQuaternion addr 0x2065d54 size 0x230 virtual false final false
 UnityEngine::Quaternion ReadQuaternion(UnityEngine::Quaternion aDefault) ;

/// @brief Method ReadQuaternion addr 0x206553c size 0x54 virtual false final false
 UnityEngine::Quaternion ReadQuaternion() ;

/// @brief Method WriteQuaternion addr 0x2064b5c size 0x250 virtual false final false
 HoudiniEngineUnity::JSONNode WriteQuaternion(UnityEngine::Quaternion aRot) ;

/// @brief Method ReadRect addr 0x2065f84 size 0x258 virtual false final false
 UnityEngine::Rect ReadRect(UnityEngine::Rect aDefault) ;

/// @brief Method ReadRect addr 0x20655b0 size 0x14 virtual false final false
 UnityEngine::Rect ReadRect() ;

/// @brief Method WriteRect addr 0x2064e30 size 0x2ac virtual false final false
 HoudiniEngineUnity::JSONNode WriteRect(UnityEngine::Rect aRect) ;

/// @brief Method ReadRectOffset addr 0x20661dc size 0x29c virtual false final false
 UnityEngine::RectOffset ReadRectOffset(UnityEngine::RectOffset aDefault) ;

/// @brief Method ReadRectOffset addr 0x20655d4 size 0x64 virtual false final false
 UnityEngine::RectOffset ReadRectOffset() ;

/// @brief Method WriteRectOffset addr 0x2065138 size 0x2cc virtual false final false
 HoudiniEngineUnity::JSONNode WriteRectOffset(UnityEngine::RectOffset aRect) ;

/// @brief Method ReadMatrix addr 0x2066478 size 0xe4 virtual false final false
 UnityEngine::Matrix4x4 ReadMatrix() ;

/// @brief Method WriteMatrix addr 0x206655c size 0xac virtual false final false
 HoudiniEngineUnity::JSONNode WriteMatrix(UnityEngine::Matrix4x4 aMatrix) ;

// Ctor Parameters []
explicit JSONNode() ;

/// @brief Method .ctor addr 0x2066608 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HoudiniEngineUnity__JSONNode__Enumerator__Type, "HoudiniEngineUnity", "JSONNode/Enumerator/Type");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__LinqEnumerator, "HoudiniEngineUnity", "JSONNode/LinqEnumerator");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_Children_d__40, "HoudiniEngineUnity", "JSONNode/<get_Children>d__40");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode___get_DeepChildren_d__42, "HoudiniEngineUnity", "JSONNode/<get_DeepChildren>d__42");
NEED_NO_BOX(HoudiniEngineUnity::JSONNode);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::JSONNode, "HoudiniEngineUnity", "JSONNode");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__Enumerator, "HoudiniEngineUnity", "JSONNode/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__KeyEnumerator, "HoudiniEngineUnity", "JSONNode/KeyEnumerator");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__JSONNode__ValueEnumerator, "HoudiniEngineUnity", "JSONNode/ValueEnumerator");
