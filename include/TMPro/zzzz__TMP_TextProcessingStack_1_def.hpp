#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
struct Int32Enum;
}
namespace TMPro {
struct HighlightState;
}
namespace TMPro {
struct MaterialReference;
}
namespace TMPro {
struct WordWrapState;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace TMPro {
template<typename T>
struct TMP_TextProcessingStack_1;
}
namespace TMPro {
template<::cordl_internals::il2cpp_reference_type T>
struct TMP_TextProcessingStack_1<T>;
}
namespace TMPro {
template<>
struct TMP_TextProcessingStack_1<::System::Int32Enum>;
}
namespace TMPro {
template<>
struct TMP_TextProcessingStack_1<::TMPro::HighlightState>;
}
namespace TMPro {
template<>
struct TMP_TextProcessingStack_1<::TMPro::MaterialReference>;
}
namespace TMPro {
template<>
struct TMP_TextProcessingStack_1<::TMPro::WordWrapState>;
}
namespace TMPro {
template<>
struct TMP_TextProcessingStack_1<::UnityEngine::Color32>;
}
namespace TMPro {
template<>
struct TMP_TextProcessingStack_1<float_t>;
}
namespace TMPro {
template<>
struct TMP_TextProcessingStack_1<int32_t>;
}
// Type: TMPro::TMP_TextProcessingStack`1
// Type: TMPro::TMP_TextProcessingStack`1
namespace TMPro {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(12395))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12395), inst: 2 })
// CS Name: TMPro.TMP_TextProcessingStack`1
struct CORDL_TYPE TMP_TextProcessingStack_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<T>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextProcessingStack_1(::ArrayW<T> itemStack, int32_t index, T m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize, int32_t m_Count) noexcept;


                    constexpr TMP_TextProcessingStack_1(TMP_TextProcessingStack_1 const&) = default;
                    constexpr TMP_TextProcessingStack_1(TMP_TextProcessingStack_1&&) = default;
                    constexpr TMP_TextProcessingStack_1& operator=(TMP_TextProcessingStack_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_TextProcessingStack_1& operator=(TMP_TextProcessingStack_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_TextProcessingStack_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<T> __declspec(property(get=__get_itemStack, put=__set_itemStack))  itemStack;

constexpr void __set_itemStack(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get_itemStack() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 T __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem))  m_DefaultItem;

constexpr void __set_m_DefaultItem(T value) ;

constexpr T __get_m_DefaultItem() const;

 int32_t __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity))  m_Capacity;

constexpr void __set_m_Capacity(int32_t value) ;

constexpr int32_t __get_m_Capacity() const;

 int32_t __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize))  m_RolloverSize;

constexpr void __set_m_RolloverSize(int32_t value) ;

constexpr int32_t __get_m_RolloverSize() const;

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;

/// @brief Field k_DefaultCapacity offset 0
static constexpr int32_t  k_DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 T __declspec(property(get=get_current))  current;

 int32_t __declspec(property(get=get_rolloverSize, put=set_rolloverSize))  rolloverSize;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<T> stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity, int32_t rolloverSize) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method get_current addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_current() ;

/// @brief Method get_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_rolloverSize() ;

/// @brief Method set_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_rolloverSize(int32_t value) ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
static void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<T>> stack, T item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetDefault(T item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(T item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 T Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(T item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 T Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 T Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
 T CurrentItem() ;

/// @brief Method PreviousItem addr 0x0 size 0xffffffffffffffff virtual false final false
 T PreviousItem() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_TextProcessingStack`1
namespace TMPro {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(12395))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12395), inst: 92 })
// CS Name: TMPro.TMP_TextProcessingStack`1
struct CORDL_TYPE TMP_TextProcessingStack_1<int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextProcessingStack_1(::ArrayW<int32_t> itemStack, int32_t index, int32_t m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize, int32_t m_Count) noexcept;


                    constexpr TMP_TextProcessingStack_1(TMP_TextProcessingStack_1 const&) = default;
                    constexpr TMP_TextProcessingStack_1(TMP_TextProcessingStack_1&&) = default;
                    constexpr TMP_TextProcessingStack_1& operator=(TMP_TextProcessingStack_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_TextProcessingStack_1& operator=(TMP_TextProcessingStack_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_TextProcessingStack_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_itemStack, put=__set_itemStack))  itemStack;

constexpr void __set_itemStack(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_itemStack() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 int32_t __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem))  m_DefaultItem;

constexpr void __set_m_DefaultItem(int32_t value) ;

constexpr int32_t __get_m_DefaultItem() const;

 int32_t __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity))  m_Capacity;

constexpr void __set_m_Capacity(int32_t value) ;

constexpr int32_t __get_m_Capacity() const;

 int32_t __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize))  m_RolloverSize;

constexpr void __set_m_RolloverSize(int32_t value) ;

constexpr int32_t __get_m_RolloverSize() const;

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;

/// @brief Field k_DefaultCapacity offset 0
static constexpr int32_t  k_DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 int32_t __declspec(property(get=get_current))  current;

 int32_t __declspec(property(get=get_rolloverSize, put=set_rolloverSize))  rolloverSize;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<int32_t> stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity, int32_t rolloverSize) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method get_current addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_current() ;

/// @brief Method get_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_rolloverSize() ;

/// @brief Method set_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_rolloverSize(int32_t value) ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
static void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<int32_t>> stack, int32_t item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetDefault(int32_t item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(int32_t item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(int32_t item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t CurrentItem() ;

/// @brief Method PreviousItem addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t PreviousItem() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_TextProcessingStack`1
namespace TMPro {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12395)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12395), inst: 374 })
// CS Name: TMPro.TMP_TextProcessingStack`1
struct CORDL_TYPE TMP_TextProcessingStack_1<float_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextProcessingStack_1(::ArrayW<float_t> itemStack, int32_t index, float_t m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize, int32_t m_Count) noexcept;


                    constexpr TMP_TextProcessingStack_1(TMP_TextProcessingStack_1 const&) = default;
                    constexpr TMP_TextProcessingStack_1(TMP_TextProcessingStack_1&&) = default;
                    constexpr TMP_TextProcessingStack_1& operator=(TMP_TextProcessingStack_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_TextProcessingStack_1& operator=(TMP_TextProcessingStack_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_TextProcessingStack_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get_itemStack, put=__set_itemStack))  itemStack;

constexpr void __set_itemStack(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_itemStack() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 float_t __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem))  m_DefaultItem;

constexpr void __set_m_DefaultItem(float_t value) ;

constexpr float_t __get_m_DefaultItem() const;

 int32_t __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity))  m_Capacity;

constexpr void __set_m_Capacity(int32_t value) ;

constexpr int32_t __get_m_Capacity() const;

 int32_t __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize))  m_RolloverSize;

constexpr void __set_m_RolloverSize(int32_t value) ;

constexpr int32_t __get_m_RolloverSize() const;

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;

/// @brief Field k_DefaultCapacity offset 0
static constexpr int32_t  k_DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 float_t __declspec(property(get=get_current))  current;

 int32_t __declspec(property(get=get_rolloverSize, put=set_rolloverSize))  rolloverSize;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<float_t> stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity, int32_t rolloverSize) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method get_current addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_current() ;

/// @brief Method get_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_rolloverSize() ;

/// @brief Method set_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_rolloverSize(int32_t value) ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
static void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<float_t>> stack, float_t item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetDefault(float_t item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(float_t item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(float_t item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t CurrentItem() ;

/// @brief Method PreviousItem addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t PreviousItem() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_TextProcessingStack`1
namespace TMPro {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12395)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12395), inst: 718 })
// CS Name: TMPro.TMP_TextProcessingStack`1
struct CORDL_TYPE TMP_TextProcessingStack_1<::UnityEngine::Color32> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextProcessingStack_1(::ArrayW<::UnityEngine::Color32> itemStack, int32_t index, ::UnityEngine::Color32 m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize, int32_t m_Count) noexcept;


                    constexpr TMP_TextProcessingStack_1(TMP_TextProcessingStack_1 const&) = default;
                    constexpr TMP_TextProcessingStack_1(TMP_TextProcessingStack_1&&) = default;
                    constexpr TMP_TextProcessingStack_1& operator=(TMP_TextProcessingStack_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_TextProcessingStack_1& operator=(TMP_TextProcessingStack_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_TextProcessingStack_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<::UnityEngine::Color32> __declspec(property(get=__get_itemStack, put=__set_itemStack))  itemStack;

constexpr void __set_itemStack(::ArrayW<::UnityEngine::Color32> value) ;

constexpr ::ArrayW<::UnityEngine::Color32> __get_itemStack() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem))  m_DefaultItem;

constexpr void __set_m_DefaultItem(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_m_DefaultItem() const;

 int32_t __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity))  m_Capacity;

constexpr void __set_m_Capacity(int32_t value) ;

constexpr int32_t __get_m_Capacity() const;

 int32_t __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize))  m_RolloverSize;

constexpr void __set_m_RolloverSize(int32_t value) ;

constexpr int32_t __get_m_RolloverSize() const;

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;

/// @brief Field k_DefaultCapacity offset 0
static constexpr int32_t  k_DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 ::UnityEngine::Color32 __declspec(property(get=get_current))  current;

 int32_t __declspec(property(get=get_rolloverSize, put=set_rolloverSize))  rolloverSize;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<::UnityEngine::Color32> stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity, int32_t rolloverSize) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method get_current addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Color32 get_current() ;

/// @brief Method get_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_rolloverSize() ;

/// @brief Method set_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_rolloverSize(int32_t value) ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
static void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>> stack, ::UnityEngine::Color32 item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetDefault(::UnityEngine::Color32 item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(::UnityEngine::Color32 item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Color32 Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(::UnityEngine::Color32 item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Color32 Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Color32 Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Color32 CurrentItem() ;

/// @brief Method PreviousItem addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Color32 PreviousItem() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_TextProcessingStack`1
namespace TMPro {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(12395))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12395), inst: 4825 })
// CS Name: TMPro.TMP_TextProcessingStack`1
struct CORDL_TYPE TMP_TextProcessingStack_1<::System::Int32Enum> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<::System::Int32Enum>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "::System::Int32Enum", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextProcessingStack_1(::ArrayW<::System::Int32Enum> itemStack, int32_t index, ::System::Int32Enum m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize, int32_t m_Count) noexcept;


                    constexpr TMP_TextProcessingStack_1(TMP_TextProcessingStack_1 const&) = default;
                    constexpr TMP_TextProcessingStack_1(TMP_TextProcessingStack_1&&) = default;
                    constexpr TMP_TextProcessingStack_1& operator=(TMP_TextProcessingStack_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_TextProcessingStack_1& operator=(TMP_TextProcessingStack_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_TextProcessingStack_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<::System::Int32Enum> __declspec(property(get=__get_itemStack, put=__set_itemStack))  itemStack;

constexpr void __set_itemStack(::ArrayW<::System::Int32Enum> value) ;

constexpr ::ArrayW<::System::Int32Enum> __get_itemStack() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 ::System::Int32Enum __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem))  m_DefaultItem;

constexpr void __set_m_DefaultItem(::System::Int32Enum value) ;

constexpr ::System::Int32Enum __get_m_DefaultItem() const;

 int32_t __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity))  m_Capacity;

constexpr void __set_m_Capacity(int32_t value) ;

constexpr int32_t __get_m_Capacity() const;

 int32_t __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize))  m_RolloverSize;

constexpr void __set_m_RolloverSize(int32_t value) ;

constexpr int32_t __get_m_RolloverSize() const;

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;

/// @brief Field k_DefaultCapacity offset 0
static constexpr int32_t  k_DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 ::System::Int32Enum __declspec(property(get=get_current))  current;

 int32_t __declspec(property(get=get_rolloverSize, put=set_rolloverSize))  rolloverSize;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<::System::Int32Enum> stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity, int32_t rolloverSize) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method get_current addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum get_current() ;

/// @brief Method get_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_rolloverSize() ;

/// @brief Method set_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_rolloverSize(int32_t value) ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
static void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<::System::Int32Enum>> stack, ::System::Int32Enum item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetDefault(::System::Int32Enum item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(::System::Int32Enum item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(::System::Int32Enum item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum CurrentItem() ;

/// @brief Method PreviousItem addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Int32Enum PreviousItem() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_TextProcessingStack`1
namespace TMPro {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12395)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12395), inst: 4895 })
// CS Name: TMPro.TMP_TextProcessingStack`1
struct CORDL_TYPE TMP_TextProcessingStack_1<::TMPro::HighlightState> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<::TMPro::HighlightState>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "::TMPro::HighlightState", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextProcessingStack_1(::ArrayW<::TMPro::HighlightState> itemStack, int32_t index, ::TMPro::HighlightState m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize, int32_t m_Count) noexcept;


                    constexpr TMP_TextProcessingStack_1(TMP_TextProcessingStack_1 const&) = default;
                    constexpr TMP_TextProcessingStack_1(TMP_TextProcessingStack_1&&) = default;
                    constexpr TMP_TextProcessingStack_1& operator=(TMP_TextProcessingStack_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_TextProcessingStack_1& operator=(TMP_TextProcessingStack_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_TextProcessingStack_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<::TMPro::HighlightState> __declspec(property(get=__get_itemStack, put=__set_itemStack))  itemStack;

constexpr void __set_itemStack(::ArrayW<::TMPro::HighlightState> value) ;

constexpr ::ArrayW<::TMPro::HighlightState> __get_itemStack() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 ::TMPro::HighlightState __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem))  m_DefaultItem;

constexpr void __set_m_DefaultItem(::TMPro::HighlightState value) ;

constexpr ::TMPro::HighlightState __get_m_DefaultItem() const;

 int32_t __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity))  m_Capacity;

constexpr void __set_m_Capacity(int32_t value) ;

constexpr int32_t __get_m_Capacity() const;

 int32_t __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize))  m_RolloverSize;

constexpr void __set_m_RolloverSize(int32_t value) ;

constexpr int32_t __get_m_RolloverSize() const;

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;

/// @brief Field k_DefaultCapacity offset 0
static constexpr int32_t  k_DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 ::TMPro::HighlightState __declspec(property(get=get_current))  current;

 int32_t __declspec(property(get=get_rolloverSize, put=set_rolloverSize))  rolloverSize;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<::TMPro::HighlightState> stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity, int32_t rolloverSize) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method get_current addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::HighlightState get_current() ;

/// @brief Method get_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_rolloverSize() ;

/// @brief Method set_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_rolloverSize(int32_t value) ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
static void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState>> stack, ::TMPro::HighlightState item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetDefault(::TMPro::HighlightState item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(::TMPro::HighlightState item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::HighlightState Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(::TMPro::HighlightState item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::HighlightState Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::HighlightState Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::HighlightState CurrentItem() ;

/// @brief Method PreviousItem addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::HighlightState PreviousItem() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_TextProcessingStack`1
namespace TMPro {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12395)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12395), inst: 4897 })
// CS Name: TMPro.TMP_TextProcessingStack`1
struct CORDL_TYPE TMP_TextProcessingStack_1<::TMPro::MaterialReference> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<::TMPro::MaterialReference>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "::TMPro::MaterialReference", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextProcessingStack_1(::ArrayW<::TMPro::MaterialReference> itemStack, int32_t index, ::TMPro::MaterialReference m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize, int32_t m_Count) noexcept;


                    constexpr TMP_TextProcessingStack_1(TMP_TextProcessingStack_1 const&) = default;
                    constexpr TMP_TextProcessingStack_1(TMP_TextProcessingStack_1&&) = default;
                    constexpr TMP_TextProcessingStack_1& operator=(TMP_TextProcessingStack_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_TextProcessingStack_1& operator=(TMP_TextProcessingStack_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_TextProcessingStack_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<::TMPro::MaterialReference> __declspec(property(get=__get_itemStack, put=__set_itemStack))  itemStack;

constexpr void __set_itemStack(::ArrayW<::TMPro::MaterialReference> value) ;

constexpr ::ArrayW<::TMPro::MaterialReference> __get_itemStack() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 ::TMPro::MaterialReference __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem))  m_DefaultItem;

constexpr void __set_m_DefaultItem(::TMPro::MaterialReference value) ;

constexpr ::TMPro::MaterialReference __get_m_DefaultItem() const;

 int32_t __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity))  m_Capacity;

constexpr void __set_m_Capacity(int32_t value) ;

constexpr int32_t __get_m_Capacity() const;

 int32_t __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize))  m_RolloverSize;

constexpr void __set_m_RolloverSize(int32_t value) ;

constexpr int32_t __get_m_RolloverSize() const;

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;

/// @brief Field k_DefaultCapacity offset 0
static constexpr int32_t  k_DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 ::TMPro::MaterialReference __declspec(property(get=get_current))  current;

 int32_t __declspec(property(get=get_rolloverSize, put=set_rolloverSize))  rolloverSize;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<::TMPro::MaterialReference> stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity, int32_t rolloverSize) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method get_current addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::MaterialReference get_current() ;

/// @brief Method get_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_rolloverSize() ;

/// @brief Method set_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_rolloverSize(int32_t value) ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
static void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference>> stack, ::TMPro::MaterialReference item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetDefault(::TMPro::MaterialReference item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(::TMPro::MaterialReference item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::MaterialReference Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(::TMPro::MaterialReference item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::MaterialReference Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::MaterialReference Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::MaterialReference CurrentItem() ;

/// @brief Method PreviousItem addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::MaterialReference PreviousItem() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_TextProcessingStack`1
namespace TMPro {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12395)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12395), inst: 4899 })
// CS Name: TMPro.TMP_TextProcessingStack`1
struct CORDL_TYPE TMP_TextProcessingStack_1<::TMPro::WordWrapState> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<::TMPro::WordWrapState>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "::TMPro::WordWrapState", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextProcessingStack_1(::ArrayW<::TMPro::WordWrapState> itemStack, int32_t index, ::TMPro::WordWrapState m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize, int32_t m_Count) noexcept;


                    constexpr TMP_TextProcessingStack_1(TMP_TextProcessingStack_1 const&) = default;
                    constexpr TMP_TextProcessingStack_1(TMP_TextProcessingStack_1&&) = default;
                    constexpr TMP_TextProcessingStack_1& operator=(TMP_TextProcessingStack_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_TextProcessingStack_1& operator=(TMP_TextProcessingStack_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_TextProcessingStack_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<::TMPro::WordWrapState> __declspec(property(get=__get_itemStack, put=__set_itemStack))  itemStack;

constexpr void __set_itemStack(::ArrayW<::TMPro::WordWrapState> value) ;

constexpr ::ArrayW<::TMPro::WordWrapState> __get_itemStack() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 ::TMPro::WordWrapState __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem))  m_DefaultItem;

constexpr void __set_m_DefaultItem(::TMPro::WordWrapState value) ;

constexpr ::TMPro::WordWrapState __get_m_DefaultItem() const;

 int32_t __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity))  m_Capacity;

constexpr void __set_m_Capacity(int32_t value) ;

constexpr int32_t __get_m_Capacity() const;

 int32_t __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize))  m_RolloverSize;

constexpr void __set_m_RolloverSize(int32_t value) ;

constexpr int32_t __get_m_RolloverSize() const;

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;

/// @brief Field k_DefaultCapacity offset 0
static constexpr int32_t  k_DefaultCapacity{4};


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 ::TMPro::WordWrapState __declspec(property(get=get_current))  current;

 int32_t __declspec(property(get=get_rolloverSize, put=set_rolloverSize))  rolloverSize;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<::TMPro::WordWrapState> stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity, int32_t rolloverSize) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_Count() ;

/// @brief Method get_current addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::WordWrapState get_current() ;

/// @brief Method get_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_rolloverSize() ;

/// @brief Method set_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_rolloverSize(int32_t value) ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
static void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<::TMPro::WordWrapState>> stack, ::TMPro::WordWrapState item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetDefault(::TMPro::WordWrapState item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(::TMPro::WordWrapState item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::WordWrapState Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(::TMPro::WordWrapState item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::WordWrapState Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::WordWrapState Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::WordWrapState CurrentItem() ;

/// @brief Method PreviousItem addr 0x0 size 0xffffffffffffffff virtual false final false
 ::TMPro::WordWrapState PreviousItem() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::TMPro::TMP_TextProcessingStack_1, "TMPro", "TMP_TextProcessingStack`1");
