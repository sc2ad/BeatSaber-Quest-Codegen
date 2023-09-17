#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR {
template<typename T>
struct InputFeatureUsage_1;
}
namespace UnityEngine::XR {
template<::cordl_internals::il2cpp_reference_type T>
struct InputFeatureUsage_1<T>;
}
namespace UnityEngine::XR {
template<>
struct InputFeatureUsage_1<::UnityEngine::Quaternion>;
}
namespace UnityEngine::XR {
template<>
struct InputFeatureUsage_1<::UnityEngine::Vector3>;
}
namespace UnityEngine::XR {
template<>
struct InputFeatureUsage_1<bool>;
}
// Type: UnityEngine.XR::InputFeatureUsage`1
// Type: UnityEngine.XR::InputFeatureUsage`1
namespace UnityEngine::XR {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15569)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15569), inst: 2 })
// CS Name: UnityEngine.XR.InputFeatureUsage`1
struct CORDL_TYPE InputFeatureUsage_1<T> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<T>>
constexpr operator  ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<T>>() const;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr InputFeatureUsage_1(::StringW _name_k__BackingField) noexcept;


                    constexpr InputFeatureUsage_1(InputFeatureUsage_1 const&) = default;
                    constexpr InputFeatureUsage_1(InputFeatureUsage_1&&) = default;
                    constexpr InputFeatureUsage_1& operator=(InputFeatureUsage_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputFeatureUsage_1& operator=(InputFeatureUsage_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputFeatureUsage_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
 void _ctor(::StringW usageName) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(::UnityEngine::XR::InputFeatureUsage_1<T> other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
// Type: UnityEngine.XR::InputFeatureUsage`1
namespace UnityEngine::XR {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(15569))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15569), inst: 99 })
// CS Name: UnityEngine.XR.InputFeatureUsage`1
struct CORDL_TYPE InputFeatureUsage_1<bool> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<bool>>
constexpr operator  ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<bool>>() const;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr InputFeatureUsage_1(::StringW _name_k__BackingField) noexcept;


                    constexpr InputFeatureUsage_1(InputFeatureUsage_1 const&) = default;
                    constexpr InputFeatureUsage_1(InputFeatureUsage_1&&) = default;
                    constexpr InputFeatureUsage_1& operator=(InputFeatureUsage_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputFeatureUsage_1& operator=(InputFeatureUsage_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputFeatureUsage_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
 void _ctor(::StringW usageName) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(::UnityEngine::XR::InputFeatureUsage_1<bool> other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
// Type: UnityEngine.XR::InputFeatureUsage`1
namespace UnityEngine::XR {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(15569))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15569), inst: 394 })
// CS Name: UnityEngine.XR.InputFeatureUsage`1
struct CORDL_TYPE InputFeatureUsage_1<::UnityEngine::Vector3> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3>>
constexpr operator  ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3>>() const;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr InputFeatureUsage_1(::StringW _name_k__BackingField) noexcept;


                    constexpr InputFeatureUsage_1(InputFeatureUsage_1 const&) = default;
                    constexpr InputFeatureUsage_1(InputFeatureUsage_1&&) = default;
                    constexpr InputFeatureUsage_1& operator=(InputFeatureUsage_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputFeatureUsage_1& operator=(InputFeatureUsage_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputFeatureUsage_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
 void _ctor(::StringW usageName) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
// Type: UnityEngine.XR::InputFeatureUsage`1
namespace UnityEngine::XR {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(15569))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15569), inst: 3222 })
// CS Name: UnityEngine.XR.InputFeatureUsage`1
struct CORDL_TYPE InputFeatureUsage_1<::UnityEngine::Quaternion> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion>>
constexpr operator  ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion>>() const;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr InputFeatureUsage_1(::StringW _name_k__BackingField) noexcept;


                    constexpr InputFeatureUsage_1(InputFeatureUsage_1 const&) = default;
                    constexpr InputFeatureUsage_1(InputFeatureUsage_1&&) = default;
                    constexpr InputFeatureUsage_1& operator=(InputFeatureUsage_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputFeatureUsage_1& operator=(InputFeatureUsage_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputFeatureUsage_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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
 void _ctor(::StringW usageName) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> other) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::XR::InputFeatureUsage_1, "UnityEngine.XR", "InputFeatureUsage`1");
