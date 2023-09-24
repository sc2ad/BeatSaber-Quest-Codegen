#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
template<typename T>
struct ByReference_1;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<uint32_t> T>
struct ByReference_1<T>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<uint8_t> T>
struct ByReference_1<T>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
struct ByReference_1<T>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T>
struct ByReference_1<T>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<uint16_t> T>
struct ByReference_1<T>;
}
namespace System {
template<>
struct ByReference_1<char16_t>;
}
// Type: System::ByReference`1
// Type: System::ByReference`1
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint32_t> T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2536)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2536), inst: 729 })
// CS Name: System.ByReference`1
struct CORDL_TYPE ByReference_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ByReference_1(::cordl_internals::intptr_t _value) noexcept;


                    constexpr ByReference_1(ByReference_1 const&) = default;
                    constexpr ByReference_1(ByReference_1&&) = default;
                    constexpr ByReference_1& operator=(ByReference_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ByReference_1& operator=(ByReference_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ByReference_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__value() const;


// Properties

 T __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<T> value) ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<T> get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ByReference`1
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint16_t> T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2536)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2536), inst: 728 })
// CS Name: System.ByReference`1
struct CORDL_TYPE ByReference_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ByReference_1(::cordl_internals::intptr_t _value) noexcept;


                    constexpr ByReference_1(ByReference_1 const&) = default;
                    constexpr ByReference_1(ByReference_1&&) = default;
                    constexpr ByReference_1& operator=(ByReference_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ByReference_1& operator=(ByReference_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ByReference_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__value() const;


// Properties

 T __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<T> value) ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<T> get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ByReference`1
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint8_t> T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2536))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2536), inst: 717 })
// CS Name: System.ByReference`1
struct CORDL_TYPE ByReference_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ByReference_1(::cordl_internals::intptr_t _value) noexcept;


                    constexpr ByReference_1(ByReference_1 const&) = default;
                    constexpr ByReference_1(ByReference_1&&) = default;
                    constexpr ByReference_1& operator=(ByReference_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ByReference_1& operator=(ByReference_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ByReference_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__value() const;


// Properties

 T __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<T> value) ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<T> get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ByReference`1
namespace System {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2536)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2536), inst: 279 })
// CS Name: System.ByReference`1
struct CORDL_TYPE ByReference_1<char16_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ByReference_1(::cordl_internals::intptr_t _value) noexcept;


                    constexpr ByReference_1(ByReference_1 const&) = default;
                    constexpr ByReference_1(ByReference_1&&) = default;
                    constexpr ByReference_1& operator=(ByReference_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ByReference_1& operator=(ByReference_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ByReference_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__value() const;


// Properties

 char16_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<char16_t> value) ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<char16_t> get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ByReference`1
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2536)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2536), inst: 92 })
// CS Name: System.ByReference`1
struct CORDL_TYPE ByReference_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ByReference_1(::cordl_internals::intptr_t _value) noexcept;


                    constexpr ByReference_1(ByReference_1 const&) = default;
                    constexpr ByReference_1(ByReference_1&&) = default;
                    constexpr ByReference_1& operator=(ByReference_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ByReference_1& operator=(ByReference_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ByReference_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__value() const;


// Properties

 T __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<T> value) ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<T> get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::ByReference`1
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2536))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2536), inst: 2 })
// CS Name: System.ByReference`1
struct CORDL_TYPE ByReference_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ByReference_1(::cordl_internals::intptr_t _value) noexcept;


                    constexpr ByReference_1(ByReference_1 const&) = default;
                    constexpr ByReference_1(ByReference_1&&) = default;
                    constexpr ByReference_1& operator=(ByReference_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ByReference_1& operator=(ByReference_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ByReference_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__value() const;


// Properties

 T __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(ByRef<T> value) ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 ByRef<T> get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::ByReference_1, "System", "ByReference`1");
