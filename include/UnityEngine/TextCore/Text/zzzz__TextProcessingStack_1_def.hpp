#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
struct Int32Enum;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::TextCore::Text {
struct MaterialReference;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
template<typename T>
struct TextProcessingStack_1;
}
namespace UnityEngine::TextCore::Text {
template<>
struct TextProcessingStack_1<System::Int32Enum>;
}
namespace UnityEngine::TextCore::Text {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
struct TextProcessingStack_1<T>;
}
namespace UnityEngine::TextCore::Text {
template<::cordl_internals::il2cpp_reference_type T>
struct TextProcessingStack_1<T>;
}
namespace UnityEngine::TextCore::Text {
template<>
struct TextProcessingStack_1<UnityEngine::Color32>;
}
namespace UnityEngine::TextCore::Text {
template<>
struct TextProcessingStack_1<UnityEngine::TextCore::Text::MaterialReference>;
}
namespace UnityEngine::TextCore::Text {
template<>
struct TextProcessingStack_1<float_t>;
}
// Type: UnityEngine.TextCore.Text::TextProcessingStack`1
// Type: UnityEngine.TextCore.Text::TextProcessingStack`1
namespace UnityEngine::TextCore::Text {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13540)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13540), inst: 4970 })
// CS Name: UnityEngine.TextCore.Text.TextProcessingStack`1
struct CORDL_TYPE TextProcessingStack_1<UnityEngine::TextCore::Text::MaterialReference> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<UnityEngine::TextCore::Text::MaterialReference>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "UnityEngine::TextCore::Text::MaterialReference", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextProcessingStack_1(::ArrayW<UnityEngine::TextCore::Text::MaterialReference> itemStack, int32_t index, UnityEngine::TextCore::Text::MaterialReference m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize, int32_t m_Count) noexcept;


                    constexpr TextProcessingStack_1(TextProcessingStack_1 const&) = default;
                    constexpr TextProcessingStack_1(TextProcessingStack_1&&) = default;
                    constexpr TextProcessingStack_1& operator=(TextProcessingStack_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextProcessingStack_1& operator=(TextProcessingStack_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextProcessingStack_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::TextCore::Text::MaterialReference> __declspec(property(get=__get_itemStack, put=__set_itemStack))  itemStack;

constexpr void __set_itemStack(::ArrayW<UnityEngine::TextCore::Text::MaterialReference> value) ;

constexpr ::ArrayW<UnityEngine::TextCore::Text::MaterialReference> __get_itemStack() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 UnityEngine::TextCore::Text::MaterialReference __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem))  m_DefaultItem;

constexpr void __set_m_DefaultItem(UnityEngine::TextCore::Text::MaterialReference value) ;

constexpr UnityEngine::TextCore::Text::MaterialReference __get_m_DefaultItem() const;

 int32_t __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity))  m_Capacity;

constexpr void __set_m_Capacity(int32_t value) ;

constexpr int32_t __get_m_Capacity() const;

 int32_t __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize))  m_RolloverSize;

constexpr void __set_m_RolloverSize(int32_t value) ;

constexpr int32_t __get_m_RolloverSize() const;

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::TextCore::Text::MaterialReference> stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetDefault(UnityEngine::TextCore::Text::MaterialReference item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::TextCore::Text::MaterialReference item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::TextCore::Text::MaterialReference Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(UnityEngine::TextCore::Text::MaterialReference item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::TextCore::Text::MaterialReference Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::TextCore::Text::MaterialReference Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::TextCore::Text::MaterialReference CurrentItem() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextProcessingStack`1
namespace UnityEngine::TextCore::Text {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13540)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13540), inst: 4825 })
// CS Name: UnityEngine.TextCore.Text.TextProcessingStack`1
struct CORDL_TYPE TextProcessingStack_1<System::Int32Enum> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<System::Int32Enum>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "System::Int32Enum", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextProcessingStack_1(::ArrayW<System::Int32Enum> itemStack, int32_t index, System::Int32Enum m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize, int32_t m_Count) noexcept;


                    constexpr TextProcessingStack_1(TextProcessingStack_1 const&) = default;
                    constexpr TextProcessingStack_1(TextProcessingStack_1&&) = default;
                    constexpr TextProcessingStack_1& operator=(TextProcessingStack_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextProcessingStack_1& operator=(TextProcessingStack_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextProcessingStack_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<System::Int32Enum> __declspec(property(get=__get_itemStack, put=__set_itemStack))  itemStack;

constexpr void __set_itemStack(::ArrayW<System::Int32Enum> value) ;

constexpr ::ArrayW<System::Int32Enum> __get_itemStack() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 System::Int32Enum __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem))  m_DefaultItem;

constexpr void __set_m_DefaultItem(System::Int32Enum value) ;

constexpr System::Int32Enum __get_m_DefaultItem() const;

 int32_t __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity))  m_Capacity;

constexpr void __set_m_Capacity(int32_t value) ;

constexpr int32_t __get_m_Capacity() const;

 int32_t __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize))  m_RolloverSize;

constexpr void __set_m_RolloverSize(int32_t value) ;

constexpr int32_t __get_m_RolloverSize() const;

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<System::Int32Enum> stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetDefault(System::Int32Enum item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(System::Int32Enum item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(System::Int32Enum item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Int32Enum CurrentItem() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextProcessingStack`1
namespace UnityEngine::TextCore::Text {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13540)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13540), inst: 718 })
// CS Name: UnityEngine.TextCore.Text.TextProcessingStack`1
struct CORDL_TYPE TextProcessingStack_1<UnityEngine::Color32> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextProcessingStack_1(::ArrayW<UnityEngine::Color32> itemStack, int32_t index, UnityEngine::Color32 m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize, int32_t m_Count) noexcept;


                    constexpr TextProcessingStack_1(TextProcessingStack_1 const&) = default;
                    constexpr TextProcessingStack_1(TextProcessingStack_1&&) = default;
                    constexpr TextProcessingStack_1& operator=(TextProcessingStack_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextProcessingStack_1& operator=(TextProcessingStack_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextProcessingStack_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::Color32> __declspec(property(get=__get_itemStack, put=__set_itemStack))  itemStack;

constexpr void __set_itemStack(::ArrayW<UnityEngine::Color32> value) ;

constexpr ::ArrayW<UnityEngine::Color32> __get_itemStack() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 UnityEngine::Color32 __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem))  m_DefaultItem;

constexpr void __set_m_DefaultItem(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_m_DefaultItem() const;

 int32_t __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity))  m_Capacity;

constexpr void __set_m_Capacity(int32_t value) ;

constexpr int32_t __get_m_Capacity() const;

 int32_t __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize))  m_RolloverSize;

constexpr void __set_m_RolloverSize(int32_t value) ;

constexpr int32_t __get_m_RolloverSize() const;

 int32_t __declspec(property(get=__get_m_Count, put=__set_m_Count))  m_Count;

constexpr void __set_m_Count(int32_t value) ;

constexpr int32_t __get_m_Count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<UnityEngine::Color32> stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetDefault(UnityEngine::Color32 item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(UnityEngine::Color32 item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Color32 Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
 void Push(UnityEngine::Color32 item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Color32 Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Color32 Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Color32 CurrentItem() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextProcessingStack`1
namespace UnityEngine::TextCore::Text {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(13540))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13540), inst: 374 })
// CS Name: UnityEngine.TextCore.Text.TextProcessingStack`1
struct CORDL_TYPE TextProcessingStack_1<float_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextProcessingStack_1(::ArrayW<float_t> itemStack, int32_t index, float_t m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize, int32_t m_Count) noexcept;


                    constexpr TextProcessingStack_1(TextProcessingStack_1 const&) = default;
                    constexpr TextProcessingStack_1(TextProcessingStack_1&&) = default;
                    constexpr TextProcessingStack_1& operator=(TextProcessingStack_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextProcessingStack_1& operator=(TextProcessingStack_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextProcessingStack_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<float_t> stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

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

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextProcessingStack`1
namespace UnityEngine::TextCore::Text {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(13540))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13540), inst: 92 })
// CS Name: UnityEngine.TextCore.Text.TextProcessingStack`1
struct CORDL_TYPE TextProcessingStack_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<T>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextProcessingStack_1(::ArrayW<T> itemStack, int32_t index, T m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize, int32_t m_Count) noexcept;


                    constexpr TextProcessingStack_1(TextProcessingStack_1 const&) = default;
                    constexpr TextProcessingStack_1(TextProcessingStack_1&&) = default;
                    constexpr TextProcessingStack_1& operator=(TextProcessingStack_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextProcessingStack_1& operator=(TextProcessingStack_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextProcessingStack_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<T> stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

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

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextProcessingStack`1
namespace UnityEngine::TextCore::Text {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13540)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13540), inst: 2 })
// CS Name: UnityEngine.TextCore.Text.TextProcessingStack`1
struct CORDL_TYPE TextProcessingStack_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<T>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextProcessingStack_1(::ArrayW<T> itemStack, int32_t index, T m_DefaultItem, int32_t m_Capacity, int32_t m_RolloverSize, int32_t m_Count) noexcept;


                    constexpr TextProcessingStack_1(TextProcessingStack_1 const&) = default;
                    constexpr TextProcessingStack_1(TextProcessingStack_1&&) = default;
                    constexpr TextProcessingStack_1& operator=(TextProcessingStack_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextProcessingStack_1& operator=(TextProcessingStack_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextProcessingStack_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<T> stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

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

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::TextCore::Text::TextProcessingStack_1, "UnityEngine.TextCore.Text", "TextProcessingStack`1");
