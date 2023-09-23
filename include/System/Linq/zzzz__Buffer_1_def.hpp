#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputControlScheme__DeviceRequirement;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct NameAndParameters;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace Zenject {
struct Zenject__DisposableManager__DisposableInfo;
}
namespace Zenject {
struct Zenject__PoolableManager__PoolableInfo;
}
// Forward declare root types
namespace System::Linq {
template<typename TElement>
struct Buffer_1;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TElement>
struct Buffer_1<TElement>;
}
namespace System::Linq {
template<>
struct Buffer_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>;
}
namespace System::Linq {
template<>
struct Buffer_1<UnityEngine::Color>;
}
namespace System::Linq {
template<>
struct Buffer_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>;
}
namespace System::Linq {
template<>
struct Buffer_1<UnityEngine::InputSystem::Utilities::InternedString>;
}
namespace System::Linq {
template<>
struct Buffer_1<UnityEngine::InputSystem::Utilities::NameAndParameters>;
}
namespace System::Linq {
template<>
struct Buffer_1<UnityEngine::ProBuilder::Edge>;
}
namespace System::Linq {
template<>
struct Buffer_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>;
}
namespace System::Linq {
template<>
struct Buffer_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>;
}
namespace System::Linq {
template<>
struct Buffer_1<UnityEngine::Vector2>;
}
namespace System::Linq {
template<>
struct Buffer_1<UnityEngine::Vector3>;
}
namespace System::Linq {
template<>
struct Buffer_1<UnityEngine::Vector4>;
}
namespace System::Linq {
template<>
struct Buffer_1<Zenject::Zenject__DisposableManager__DisposableInfo>;
}
namespace System::Linq {
template<>
struct Buffer_1<Zenject::Zenject__PoolableManager__PoolableInfo>;
}
namespace System::Linq {
template<>
struct Buffer_1<char16_t>;
}
namespace System::Linq {
template<>
struct Buffer_1<float_t>;
}
namespace System::Linq {
template<>
struct Buffer_1<int32_t>;
}
namespace System::Linq {
template<>
struct Buffer_1<uint32_t>;
}
// Type: System.Linq::Buffer`1
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TElement>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14576))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 2 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<TElement> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<TElement>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<TElement> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<TElement> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<TElement> value) ;

constexpr ::ArrayW<TElement> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<TElement> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<TElement> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14576)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 92 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<int32_t> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<int32_t> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<int32_t> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14576))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 279 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<char16_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<char16_t> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<char16_t> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<char16_t> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<char16_t> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14576))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 280 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<UnityEngine::Color> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<UnityEngine::Color>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<UnityEngine::Color> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::Color> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<UnityEngine::Color> value) ;

constexpr ::ArrayW<UnityEngine::Color> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<UnityEngine::Color> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::Color> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14576)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 289 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> value) ;

constexpr ::ArrayW<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14576))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 374 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<float_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<float_t> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<float_t> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<float_t> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14576)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 393 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<UnityEngine::Vector2> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<UnityEngine::Vector2> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<UnityEngine::Vector2> value) ;

constexpr ::ArrayW<UnityEngine::Vector2> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<UnityEngine::Vector2> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::Vector2> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14576)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 394 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<UnityEngine::Vector3> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<UnityEngine::Vector3> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<UnityEngine::Vector3> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::Vector3> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14576)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 729 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<uint32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<uint32_t> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<uint32_t> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<uint32_t> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<uint32_t> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14576)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 731 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<UnityEngine::Vector4> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<UnityEngine::Vector4>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<UnityEngine::Vector4> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<UnityEngine::Vector4> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::Vector4> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14576)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 2491 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<UnityEngine::ProBuilder::Edge> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<UnityEngine::ProBuilder::Edge>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<UnityEngine::ProBuilder::Edge> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::ProBuilder::Edge> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<UnityEngine::ProBuilder::Edge> value) ;

constexpr ::ArrayW<UnityEngine::ProBuilder::Edge> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::ProBuilder::Edge> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14576)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 2498 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<UnityEngine::InputSystem::Utilities::InternedString> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14576))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 3004 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<UnityEngine::InputSystem::Utilities::NameAndParameters> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::NameAndParameters> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14576)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 3035 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__InputControlScheme__DeviceRequirement> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14576)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 3180 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> value) ;

constexpr ::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14576))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 4209 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<Zenject::Zenject__DisposableManager__DisposableInfo> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<Zenject::Zenject__DisposableManager__DisposableInfo>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<Zenject::Zenject__DisposableManager__DisposableInfo> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<Zenject::Zenject__DisposableManager__DisposableInfo> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<Zenject::Zenject__DisposableManager__DisposableInfo> value) ;

constexpr ::ArrayW<Zenject::Zenject__DisposableManager__DisposableInfo> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<Zenject::Zenject__DisposableManager__DisposableInfo> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<Zenject::Zenject__DisposableManager__DisposableInfo> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14576)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 5964 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<Zenject::Zenject__PoolableManager__PoolableInfo> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<Zenject::Zenject__PoolableManager__PoolableInfo>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<Zenject::Zenject__PoolableManager__PoolableInfo> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<Zenject::Zenject__PoolableManager__PoolableInfo> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<Zenject::Zenject__PoolableManager__PoolableInfo> value) ;

constexpr ::ArrayW<Zenject::Zenject__PoolableManager__PoolableInfo> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<Zenject::Zenject__PoolableManager__PoolableInfo> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<Zenject::Zenject__PoolableManager__PoolableInfo> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::Buffer`1
namespace System::Linq {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(14576))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14576), inst: 6236 })
// CS Name: System.Linq.Buffer`1
struct CORDL_TYPE Buffer_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Buffer_1(::ArrayW<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> items, int32_t count) noexcept;


                    constexpr Buffer_1(Buffer_1 const&) = default;
                    constexpr Buffer_1(Buffer_1&&) = default;
                    constexpr Buffer_1& operator=(Buffer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Buffer_1& operator=(Buffer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Buffer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_items, put=__set_items))  items;

constexpr void __set_items(::ArrayW<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> value) ;

constexpr ::ArrayW<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> __get_items() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> source) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> ToArray() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Linq::Buffer_1, "System.Linq", "Buffer`1");
