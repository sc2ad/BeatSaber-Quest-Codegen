#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
struct CustomStyleProperty_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
struct CustomStyleProperty_1<T>;
}
namespace UnityEngine::UIElements {
template<>
struct CustomStyleProperty_1<UnityEngine::Color>;
}
namespace UnityEngine::UIElements {
template<>
struct CustomStyleProperty_1<float_t>;
}
namespace UnityEngine::UIElements {
template<>
struct CustomStyleProperty_1<int32_t>;
}
// Type: UnityEngine.UIElements::CustomStyleProperty`1
// Type: UnityEngine.UIElements::CustomStyleProperty`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7405)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7405), inst: 2 })
// CS Name: UnityEngine.UIElements.CustomStyleProperty`1
struct CORDL_TYPE CustomStyleProperty_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::CustomStyleProperty_1<T>>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::CustomStyleProperty_1<T>>() const;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr CustomStyleProperty_1(::StringW _name_k__BackingField) noexcept;


                    constexpr CustomStyleProperty_1(CustomStyleProperty_1 const&) = default;
                    constexpr CustomStyleProperty_1(CustomStyleProperty_1&&) = default;
                    constexpr CustomStyleProperty_1& operator=(CustomStyleProperty_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CustomStyleProperty_1& operator=(CustomStyleProperty_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CustomStyleProperty_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField))  _name_k__BackingField;

constexpr void __set__name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__name_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_name, put=set_name))  name;


// Methods

/// @brief Method get_name addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_name(::StringW value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW propertyName) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(UnityEngine::UIElements::CustomStyleProperty_1<T> other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::CustomStyleProperty`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(7405))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7405), inst: 92 })
// CS Name: UnityEngine.UIElements.CustomStyleProperty`1
struct CORDL_TYPE CustomStyleProperty_1<int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::CustomStyleProperty_1<int32_t>>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::CustomStyleProperty_1<int32_t>>() const;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr CustomStyleProperty_1(::StringW _name_k__BackingField) noexcept;


                    constexpr CustomStyleProperty_1(CustomStyleProperty_1 const&) = default;
                    constexpr CustomStyleProperty_1(CustomStyleProperty_1&&) = default;
                    constexpr CustomStyleProperty_1& operator=(CustomStyleProperty_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CustomStyleProperty_1& operator=(CustomStyleProperty_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CustomStyleProperty_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField))  _name_k__BackingField;

constexpr void __set__name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__name_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_name, put=set_name))  name;


// Methods

/// @brief Method get_name addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_name(::StringW value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW propertyName) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(UnityEngine::UIElements::CustomStyleProperty_1<int32_t> other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::CustomStyleProperty`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(7405))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7405), inst: 280 })
// CS Name: UnityEngine.UIElements.CustomStyleProperty`1
struct CORDL_TYPE CustomStyleProperty_1<UnityEngine::Color> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::Color>>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::Color>>() const;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr CustomStyleProperty_1(::StringW _name_k__BackingField) noexcept;


                    constexpr CustomStyleProperty_1(CustomStyleProperty_1 const&) = default;
                    constexpr CustomStyleProperty_1(CustomStyleProperty_1&&) = default;
                    constexpr CustomStyleProperty_1& operator=(CustomStyleProperty_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CustomStyleProperty_1& operator=(CustomStyleProperty_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CustomStyleProperty_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField))  _name_k__BackingField;

constexpr void __set__name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__name_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_name, put=set_name))  name;


// Methods

/// @brief Method get_name addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_name(::StringW value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW propertyName) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(UnityEngine::UIElements::CustomStyleProperty_1<UnityEngine::Color> other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::CustomStyleProperty`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7405)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7405), inst: 374 })
// CS Name: UnityEngine.UIElements.CustomStyleProperty`1
struct CORDL_TYPE CustomStyleProperty_1<float_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::CustomStyleProperty_1<float_t>>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::CustomStyleProperty_1<float_t>>() const;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr CustomStyleProperty_1(::StringW _name_k__BackingField) noexcept;


                    constexpr CustomStyleProperty_1(CustomStyleProperty_1 const&) = default;
                    constexpr CustomStyleProperty_1(CustomStyleProperty_1&&) = default;
                    constexpr CustomStyleProperty_1& operator=(CustomStyleProperty_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CustomStyleProperty_1& operator=(CustomStyleProperty_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CustomStyleProperty_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField))  _name_k__BackingField;

constexpr void __set__name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__name_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_name, put=set_name))  name;


// Methods

/// @brief Method get_name addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_name(::StringW value) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW propertyName) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(UnityEngine::UIElements::CustomStyleProperty_1<float_t> other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::UIElements::CustomStyleProperty_1, "UnityEngine.UIElements", "CustomStyleProperty`1");
