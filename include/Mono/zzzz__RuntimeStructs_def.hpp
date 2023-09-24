#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace Mono {
struct Mono__RuntimeStructs__GenericParamInfo;
}
namespace Mono {
struct Mono__RuntimeStructs__GPtrArray;
}
namespace Mono {
struct Mono__RuntimeStructs__MonoClass;
}
namespace Mono {
struct Mono__RuntimeStructs__RemoteClass;
}
// Forward declare root types
namespace Mono {
class RuntimeStructs;
}
namespace Mono {
struct Mono__RuntimeStructs__GPtrArray;
}
namespace Mono {
struct Mono__RuntimeStructs__GenericParamInfo;
}
namespace Mono {
struct Mono__RuntimeStructs__MonoClass;
}
namespace Mono {
struct Mono__RuntimeStructs__RemoteClass;
}
// Type: ::RemoteClass
namespace Mono {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2235))
// CS Name: Mono.RuntimeStructs::RemoteClass
struct CORDL_TYPE Mono__RuntimeStructs__RemoteClass : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "default_vtable", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "xdomain_vtable", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "proxy_class", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "proxy_class_name", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "interface_count", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Mono__RuntimeStructs__RemoteClass(::cordl_internals::intptr_t default_vtable, ::cordl_internals::intptr_t xdomain_vtable, void* proxy_class, ::cordl_internals::intptr_t proxy_class_name, uint32_t interface_count) noexcept;


                    constexpr Mono__RuntimeStructs__RemoteClass(Mono__RuntimeStructs__RemoteClass const&) = default;
                    constexpr Mono__RuntimeStructs__RemoteClass(Mono__RuntimeStructs__RemoteClass&&) = default;
                    constexpr Mono__RuntimeStructs__RemoteClass& operator=(Mono__RuntimeStructs__RemoteClass const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__RuntimeStructs__RemoteClass& operator=(Mono__RuntimeStructs__RemoteClass&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__RuntimeStructs__RemoteClass(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_default_vtable, put=__set_default_vtable))  default_vtable;

constexpr void __set_default_vtable(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_default_vtable() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_xdomain_vtable, put=__set_xdomain_vtable))  xdomain_vtable;

constexpr void __set_xdomain_vtable(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_xdomain_vtable() const;

 void* __declspec(property(get=__get_proxy_class, put=__set_proxy_class))  proxy_class;

constexpr void __set_proxy_class(void* value) ;

constexpr void* __get_proxy_class() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_proxy_class_name, put=__set_proxy_class_name))  proxy_class_name;

constexpr void __set_proxy_class_name(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_proxy_class_name() const;

 uint32_t __declspec(property(get=__get_interface_count, put=__set_interface_count))  interface_count;

constexpr void __set_interface_count(uint32_t value) ;

constexpr uint32_t __get_interface_count() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
// Type: ::MonoClass
namespace Mono {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2236))
// CS Name: Mono.RuntimeStructs::MonoClass
struct CORDL_TYPE Mono__RuntimeStructs__MonoClass : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr Mono__RuntimeStructs__MonoClass(Mono__RuntimeStructs__MonoClass const&) = default;
                    constexpr Mono__RuntimeStructs__MonoClass(Mono__RuntimeStructs__MonoClass&&) = default;
                    constexpr Mono__RuntimeStructs__MonoClass& operator=(Mono__RuntimeStructs__MonoClass const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__RuntimeStructs__MonoClass& operator=(Mono__RuntimeStructs__MonoClass&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__RuntimeStructs__MonoClass(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
// Type: ::GenericParamInfo
namespace Mono {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2237))
// CS Name: Mono.RuntimeStructs::GenericParamInfo
struct CORDL_TYPE Mono__RuntimeStructs__GenericParamInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "pklass", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "token", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "constraints", ty: "void*", modifiers: "", def_value: None }]
constexpr Mono__RuntimeStructs__GenericParamInfo(void* pklass, ::cordl_internals::intptr_t name, uint16_t flags, uint32_t token, void* constraints) noexcept;


                    constexpr Mono__RuntimeStructs__GenericParamInfo(Mono__RuntimeStructs__GenericParamInfo const&) = default;
                    constexpr Mono__RuntimeStructs__GenericParamInfo(Mono__RuntimeStructs__GenericParamInfo&&) = default;
                    constexpr Mono__RuntimeStructs__GenericParamInfo& operator=(Mono__RuntimeStructs__GenericParamInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__RuntimeStructs__GenericParamInfo& operator=(Mono__RuntimeStructs__GenericParamInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__RuntimeStructs__GenericParamInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_pklass, put=__set_pklass))  pklass;

constexpr void __set_pklass(void* value) ;

constexpr void* __get_pklass() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_name() const;

 uint16_t __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(uint16_t value) ;

constexpr uint16_t __get_flags() const;

 uint32_t __declspec(property(get=__get_token, put=__set_token))  token;

constexpr void __set_token(uint32_t value) ;

constexpr uint32_t __get_token() const;

 void* __declspec(property(get=__get_constraints, put=__set_constraints))  constraints;

constexpr void __set_constraints(void* value) ;

constexpr void* __get_constraints() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
// Type: ::GPtrArray
namespace Mono {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2238))
// CS Name: Mono.RuntimeStructs::GPtrArray
struct CORDL_TYPE Mono__RuntimeStructs__GPtrArray : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "data", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Mono__RuntimeStructs__GPtrArray(void* data, int32_t len) noexcept;


                    constexpr Mono__RuntimeStructs__GPtrArray(Mono__RuntimeStructs__GPtrArray const&) = default;
                    constexpr Mono__RuntimeStructs__GPtrArray(Mono__RuntimeStructs__GPtrArray&&) = default;
                    constexpr Mono__RuntimeStructs__GPtrArray& operator=(Mono__RuntimeStructs__GPtrArray const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__RuntimeStructs__GPtrArray& operator=(Mono__RuntimeStructs__GPtrArray&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__RuntimeStructs__GPtrArray(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(void* value) ;

constexpr void* __get_data() const;

 int32_t __declspec(property(get=__get_len, put=__set_len))  len;

constexpr void __set_len(int32_t value) ;

constexpr int32_t __get_len() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
// Type: Mono::RuntimeStructs
namespace Mono {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2239))
// CS Name: Mono.RuntimeStructs
class CORDL_TYPE RuntimeStructs : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using GPtrArray = Mono::Mono__RuntimeStructs__GPtrArray;

using GenericParamInfo = Mono::Mono__RuntimeStructs__GenericParamInfo;

using MonoClass = Mono::Mono__RuntimeStructs__MonoClass;

using RemoteClass = Mono::Mono__RuntimeStructs__RemoteClass;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RuntimeStructs() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeStructs", modifiers: " const&", def_value: None }]
constexpr RuntimeStructs(RuntimeStructs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeStructs", modifiers: "&&", def_value: None }]
constexpr RuntimeStructs(RuntimeStructs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeStructs(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RuntimeStructs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeStructs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeStructs& operator=(RuntimeStructs&& o) noexcept = default;
  constexpr RuntimeStructs& operator=(RuntimeStructs const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono
NEED_NO_BOX(Mono::RuntimeStructs);
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeStructs, "Mono", "RuntimeStructs");
DEFINE_IL2CPP_ARG_TYPE(Mono::Mono__RuntimeStructs__GPtrArray, "Mono", "RuntimeStructs/GPtrArray");
DEFINE_IL2CPP_ARG_TYPE(Mono::Mono__RuntimeStructs__GenericParamInfo, "Mono", "RuntimeStructs/GenericParamInfo");
DEFINE_IL2CPP_ARG_TYPE(Mono::Mono__RuntimeStructs__MonoClass, "Mono", "RuntimeStructs/MonoClass");
DEFINE_IL2CPP_ARG_TYPE(Mono::Mono__RuntimeStructs__RemoteClass, "Mono", "RuntimeStructs/RemoteClass");
