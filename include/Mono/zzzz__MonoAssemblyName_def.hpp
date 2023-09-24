#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace Mono {
struct Mono__MonoAssemblyName___public_key_token_e__FixedBuffer;
}
// Forward declare root types
namespace Mono {
struct MonoAssemblyName;
}
namespace Mono {
struct Mono__MonoAssemblyName___public_key_token_e__FixedBuffer;
}
// Type: ::<public_key_token>e__FixedBuffer
namespace Mono {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2240))
// CS Name: Mono.MonoAssemblyName::<public_key_token>e__FixedBuffer
struct CORDL_TYPE Mono__MonoAssemblyName___public_key_token_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Mono__MonoAssemblyName___public_key_token_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr Mono__MonoAssemblyName___public_key_token_e__FixedBuffer(Mono__MonoAssemblyName___public_key_token_e__FixedBuffer const&) = default;
                    constexpr Mono__MonoAssemblyName___public_key_token_e__FixedBuffer(Mono__MonoAssemblyName___public_key_token_e__FixedBuffer&&) = default;
                    constexpr Mono__MonoAssemblyName___public_key_token_e__FixedBuffer& operator=(Mono__MonoAssemblyName___public_key_token_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__MonoAssemblyName___public_key_token_e__FixedBuffer& operator=(Mono__MonoAssemblyName___public_key_token_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x11};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__MonoAssemblyName___public_key_token_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField))  FixedElementField;

constexpr void __set_FixedElementField(uint8_t value) ;

constexpr uint8_t __get_FixedElementField() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
// Type: Mono::MonoAssemblyName
namespace Mono {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2241))
// CS Name: Mono.MonoAssemblyName
struct CORDL_TYPE MonoAssemblyName : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _public_key_token_e__FixedBuffer = Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer;

// Ctor Parameters [CppParam { name: "name", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "culture", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "hash_value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "public_key", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "public_key_token", ty: "Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "hash_alg", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "hash_len", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "major", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "minor", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "build", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "revision", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "arch", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr MonoAssemblyName(::cordl_internals::intptr_t name, ::cordl_internals::intptr_t culture, ::cordl_internals::intptr_t hash_value, ::cordl_internals::intptr_t public_key, Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer public_key_token, uint32_t hash_alg, uint32_t hash_len, uint32_t flags, uint16_t major, uint16_t minor, uint16_t build, uint16_t revision, uint16_t arch) noexcept;


                    constexpr MonoAssemblyName(MonoAssemblyName const&) = default;
                    constexpr MonoAssemblyName(MonoAssemblyName&&) = default;
                    constexpr MonoAssemblyName& operator=(MonoAssemblyName const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MonoAssemblyName& operator=(MonoAssemblyName&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MonoAssemblyName(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_name() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_culture, put=__set_culture))  culture;

constexpr void __set_culture(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_culture() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_hash_value, put=__set_hash_value))  hash_value;

constexpr void __set_hash_value(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_hash_value() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_public_key, put=__set_public_key))  public_key;

constexpr void __set_public_key(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_public_key() const;

 Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer __declspec(property(get=__get_public_key_token, put=__set_public_key_token))  public_key_token;

constexpr void __set_public_key_token(Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer value) ;

constexpr Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer __get_public_key_token() const;

 uint32_t __declspec(property(get=__get_hash_alg, put=__set_hash_alg))  hash_alg;

constexpr void __set_hash_alg(uint32_t value) ;

constexpr uint32_t __get_hash_alg() const;

 uint32_t __declspec(property(get=__get_hash_len, put=__set_hash_len))  hash_len;

constexpr void __set_hash_len(uint32_t value) ;

constexpr uint32_t __get_hash_len() const;

 uint32_t __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(uint32_t value) ;

constexpr uint32_t __get_flags() const;

 uint16_t __declspec(property(get=__get_major, put=__set_major))  major;

constexpr void __set_major(uint16_t value) ;

constexpr uint16_t __get_major() const;

 uint16_t __declspec(property(get=__get_minor, put=__set_minor))  minor;

constexpr void __set_minor(uint16_t value) ;

constexpr uint16_t __get_minor() const;

 uint16_t __declspec(property(get=__get_build, put=__set_build))  build;

constexpr void __set_build(uint16_t value) ;

constexpr uint16_t __get_build() const;

 uint16_t __declspec(property(get=__get_revision, put=__set_revision))  revision;

constexpr void __set_revision(uint16_t value) ;

constexpr uint16_t __get_revision() const;

 uint16_t __declspec(property(get=__get_arch, put=__set_arch))  arch;

constexpr void __set_arch(uint16_t value) ;

constexpr uint16_t __get_arch() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE(Mono::MonoAssemblyName, "Mono", "MonoAssemblyName");
DEFINE_IL2CPP_ARG_TYPE(Mono::Mono__MonoAssemblyName___public_key_token_e__FixedBuffer, "Mono", "MonoAssemblyName/<public_key_token>e__FixedBuffer");
